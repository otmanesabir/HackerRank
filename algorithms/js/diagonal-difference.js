'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the diagonalDifference function below.
function diagonalDifference(arr) {
    var norDiag = 0;
    var invDiag = 0;
    var diff = 0;
    /*for (var i = 0; i < arr.length; i++) {
      norDiag = arr[i][i] + norDiag;
      invDiag = arr[arr.length - i][i] + invDiag;
    }
     for (var j = arr.length; j  == 0 ; j--) {
       print(arr.length - j)
       //invDiag = arr[arr.length - j][j] + invDiag;

     }

  diff = Math.abs(norDiag - invDiag);
  return diff;
  */
    for (var i = 0; i < arr.length; i++) {
        norDiag += arr[i][i];
        invDiag += arr[i][arr.length - 1 - i];
    }
    diff = Math.abs(norDiag - invDiag);
    return diff;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine(), 10);

    let arr = Array(n);

    for (let i = 0; i < n; i++) {
        arr[i] = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));
    }

    const result = diagonalDifference(arr);

    ws.write(result + '\n');

    ws.end();
}
