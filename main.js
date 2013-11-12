var SerialPort = require('serialport').SerialPort;
var port = new SerialPort('portname');

port.on('open', function(err) {
  if(!err) {
    setInterval(function(){
      port.write('1');
    }, 2000);
  }
  else{
    console.log(err);
  }
});
