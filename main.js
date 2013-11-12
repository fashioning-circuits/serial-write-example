var SerialPort = require('serialport').SerialPort;
var port = new SerialPort('portname');

port.on('open', function(err) {
  setInterval(function(){
    port.write('1');
  }, 2000);
});
