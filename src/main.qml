import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5
import QtWebSockets 1.15
import Coordiantes 1.0

ApplicationWindow {

    id: window
    width: 640
    height: 480
    visible: true
    title: server.url

    Coordiantes {
        id: cursorCoordinates
    }

    WebSocketServer {
        property var clients: []
        id: server
        listen: true

        onClientConnected: {
            clients.push(webSocket)
            webSocket.onTextMessageReceived.connect(function(message){
                for (var i = 0; i < clients.length; i++) {
                    clients[i].sendTextMessage(message);
                }
            });
        }

        onErrorStringChanged: {
            console.log("Server error: ", errorString)
        }
    }

    WebSocket {
        id: socket
        url: server.url
        onTextMessageReceived: function(message)  {
            cursorCoordinates.deserialize(message)
            console.log("dx: ", cursorCoordinates.dx)
            console.log("dy: ", cursorCoordinates.dy)
            cursor.x = cursorCoordinates.dx * image.width
            cursor.y = cursorCoordinates.dy * image.height
        }

        onStatusChanged: {
            if (socket.status == WebSocket.Error) {
                console.log("Failed to connect with: ", socket.url)
            } else if (socket.status == WebSocket.Closed) {
                console.log("Connection with: ", socket.url, " has been closed")
            }
        }
        active: true
    }

    ColumnLayout {
        anchors.fill: parent

        RowLayout {
            Layout.fillWidth: true

            TextField {
                id: urlField
                placeholderText: qsTr("Enter url")
            }

            Button {
                text: qsTr("Connect")
                onClicked: {
                    socket.url = urlField.text
                }
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            Image {
                id: image
                source: "image://imageProvider/assets/image.jpg"
                onWidthChanged: {
                    cursor.x = image.width * cursorCoordinates.dx
                }
                onHeightChanged: {
                    cursor.y = image.height * cursorCoordinates.dy
                }
                anchors.fill: parent
            }

            Image {
                id: cursor
                z: 2
                height: 50
                width: 50
                source: "image://imageProvider/assets/cursor.png"

                MouseArea {
                    anchors.fill: parent
                    drag {
                        target: parent
                        minimumX: -cursor.width + 1
                        minimumY: -cursor.height + 1
                        maximumX: image.width - 1
                        maximumY: image.height - 1
                    }

                    onPositionChanged: {
                        cursorCoordinates.dx = cursor.x / image.width
                        cursorCoordinates.dy = cursor.y / image.height
                        var serialized = cursorCoordinates.serialize()
                        socket.sendTextMessage(cursorCoordinates.serialize())
                    }
                }
            }
        }
    }
}
