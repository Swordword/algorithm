/**
 * 集合：保存在对象中，不重复元素的聚集;
 * 以值值得形式存储
 */
function Set() {
    var items = {};
    this.has = function (value) {
        // return value in items;
        return items.hasOwnProperty(value);
    };
    this.add = function (value) {
        if (!this.has(value)) {
            items[value] = value;
            return true;
        }
        return false;
    };
    this.remove = function (value) {
        if (this.has(value)) {
            delete items[value];
            return true;
        }
        return false;
    };
    this.clear = function () {
        items = {};
    };
    this.size = function () {
        return Object.keys(items).length;
    };
    this.values = function () {
        return Object.values(items);
    };
    // 并集
    this.union = function (otherSet) {
        var unionSet = new Set();
        var values = this.values();
        for (var i = 0; i < values.length; i++) {
            unionSet.add(values[i])
        }
        values = otherSet.values();
        for (var i = 0; i < values.length; i++) {
            unionSet.add(values[i])
        }
        return unionSet;
    };
    // 交集
    this.intersection = function (otherSet) {
        var intersectionSet = new Set();
        var values = this.values();
        for (var i = 0; i < values.length; i++) {
            if (otherSet.has(values[i])) {
                intersectionSet.add(values[i]);
            }
        }
        return intersectionSet;
    };
    // 差集
    this.difference = function (otherSet) {
        var differenceSet = new Set();
        var values = this.values();
        for (let i = 0; i < values.length; i++) {
            if (!otherSet.has(values[i])) {
                differenceSet.add(values[i]);
            }
        }
        return differenceSet;
    };
    // 子集
    this.subset=function(otherSet){
        var values=this.values();
        for (let i = 0; i < values.length; i++) {
            if(!otherSet.has(values[i])){
                return false;
            }
        }
        return true;
    }
};

var setA = new Set(),
    setB = new Set();
setA.add(1);
setA.add(2);
setA.add(3);
setB.add(3);
setB.add(4);
setB.add(5);
console.log(setA.values());
console.log(setB.values());
console.log(setA.union(setB).values());
console.log(setA.intersection(setB).values());
console.log(setA.difference(setB).values());
setB.add(1);
setB.add(2);
console.log(setA.subset(setB));



