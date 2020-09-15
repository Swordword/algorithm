var averageTemp=[];

averageTemp[0]=[11,22,33,44,55];
averageTemp[1]=[123,456,432];

function printMatrix(myMatrix){
    for(var i=0;i<myMatrix.length;i++){
        for(var j=0;j<myMatrix[i].length;j++){
            console.log(myMatrix[i][j]);
        }
    }
};

printMatrix(averageTemp)