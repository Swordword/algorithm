/**
 * 字典：也叫做映射
 * 以键值的形式存储
 */
function Dictionary() {
    var items = {};
    this.has = function (key) {
        return key in items;
    };
    this.set = function (key, value) {
        items[key] = value;
    };
    this.remove = function (key) {
        if (this.has(key)) {
            delete items[key];
            return true;
        }
        return false;
    };
    this.get = function (key) {
        return this.has(key) ? items[key] : undefined;
    };
    this.values = function () {
        var values = [];
        for (let k in items) {
            if (this.has(k)) {
                values.push(items[k])
            }
        }
        return values;
    };
    this.getItems = function () {
        return items;
    };
    this.size = function () {
            return Object.keys(items).length;
        },
        this.keys = function () {
            return Object.keys(items);
        }
}
var dictionary = new Dictionary();
dictionary.set("Gandalf", "gandalf@gmail.com");
dictionary.set("John", "john@gmail.com");
dictionary.set("Tyrion", "tyrion@gmail.com");
console.log(dictionary.has("Gandalf"));
console.log(dictionary.size())
console.log(dictionary.keys());
console.log(dictionary.values());
console.log(dictionary.get('Tyrion'));
dictionary.remove("John")
console.log(dictionary.getItems());


/**
 * 散列表 
 * 快速寻找数据结构中某个值得地址
 */
function HashTable() {
    /**
     *
     * 散列函数，私有方法
     * @param {*} key
     */
    var loseloseHashCode = function (key) {
        var hash = 0;

    }
    this.put = function (key, value) {};
    this.remove = function (key) {

    };
    this.get = function (key) {

    };


}