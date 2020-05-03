var destCity = function (paths) {
    let mapArr = paths.map(path => {
        let a = path[0]
        return Object.assign({
            [a]: path[1]
        })
    })
    let resObj = {};
    mapArr.forEach(item => {
        Object.assign(resObj, item)
    })
    for (const key in resObj) {
        if (resObj.hasOwnProperty(key)) {
            const element = resObj[key];
            if (!resObj[element]) {
                return element
            }
        }
    }
};
const paths = [["B","C"],["D","B"],["C","A"]]

console.log(destCity(paths))