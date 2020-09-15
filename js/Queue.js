/**
 * 队列Queue
 * 进队列用push
 * 出队列用shift
 */
function Queue() {
    var items = [];
    this.enqueue = function (element) {
        items.push(element);
    };
    this.dequeue = function () {
        return items.shift();
    };
    this.front = function (element) {
        return items[0];
    };
    this.isEmpty = function () {
        return items.length == 0;
    };
    this.size = function () {
        return items.length;
    };
    this.print = function () {
        console.log(items.toString());
    }
}

var queue = new Queue();
console.log(queue.isEmpty());
queue.enqueue("John");
queue.enqueue("Jack");
queue.enqueue("Camila");
queue.print();
console.log(queue.size());
queue.dequeue();
queue.dequeue();
queue.print();




/**
 * 优先队列
 * 根据元素的优先级进行排序
 */
function PriorityQueue() {
    var items = [];

    function QueueElement(element, priority) {
        this.element = element;
        this.priority = priority;
    };
     this.isEmpty = function () {
         return items.length == 0;
     };
         this.print = function () {
             console.log(items);
         }
    this.enqueue = function (element, priority) {
        var queueElement = new QueueElement(element, priority);
        if (this.isEmpty()) {
            items.push(queueElement);
        } else {
            var added = false;
            for (let i = 0; i < items.length; i++) {
                if (queueElement.priority < items[i].priority) {
                    items.splice(i,0,queueElement);
                    added=true;
                    break;
                }
            }
            if(!added){
                items.push(queueElement);
            }
        }
    }
}

var priorityQueue=new PriorityQueue();
priorityQueue.enqueue("John",3);
priorityQueue.enqueue("maek", 4);
priorityQueue.enqueue("bob", 1);

priorityQueue.print();


/**
 * 击鼓传花
 * @param  nameList {array}
 * @param  num {number}
 * @returns
 */
function hotPotato(nameList,num){
    var queue=new Queue();
    for (let i = 0; i <nameList.length; i++) {
        queue.enqueue(nameList[i]);
    }
    var eliminated='';
    while(queue.size()>1){
        for (let i = 0; i < num; i++) {
            queue.enqueue(queue.dequeue());
        }
        eliminated=queue.dequeue();
        console.log(eliminated+'在击鼓传花游戏中被淘汰');
    }
    return queue.dequeue();
}

var names = ["John", "Jack", "Bob", "Mary", "Carl","zjy"];
var winner=hotPotato(names,7);
console.log("winner is",winner);

