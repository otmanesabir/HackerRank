'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the plusMinus function below.
function plusMinus(arr) {

    var nul = 0;
    var pos = 0;
    var neg = 0;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] < 0) {
            neg++;
        } else if (arr[i] > 0) {
            pos++;
        } else if (arr[i] == 0) {
            nul++;
        }
    }
    var ratPos = pos / arr.length;
    var ratNeg = neg / arr.length;
    var ratNul = nul / arr.length;

    console.log(ratPos.toFixed(6));
    console.log(ratNeg.toFixed(6));
    console.log(ratNul.toFixed(6));
}

function main() {
    const n = parseInt(readLine(), 10);

    const arr = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
