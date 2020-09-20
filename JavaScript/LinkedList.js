function LinkedKist() {
    var Node = function (element) {
        this.element = element;
        this.next = null;
    }
    var length = 0;
    var head = null;
    this.append = function (element) {
            var node = new Node(element),
                current;
            if (head == null) {
                head = node;
            } else {
                current = head;
                while (current.next) {
                    current = current.next;
                }
                current.next = node;
            }
            length++
        },
        this.insert = function (position, element) {
            if (position >= 0 && position < length) {
                var node = new Node(element),
                    current = head,
                    previous, index = 0;
                if (position == 0) {
                    head = current;
                    node.next = head;
                } else {
                    while (index < position) {
                        previous = current;
                        current = current.next;
                        index++;
                    }
                    previous.next = node;
                    node.next = current;
                }
                length++
            } else {
                console.log("choose reasonable position");
                return false;
            }
        },
        this.removeAt = function (position) {
            if (position > -1 && position < length) {
                var current = head,
                    previous,
                    index = 0;
                if (position == 0) {
                    head = current.next;
                } else {
                    while (index < position) {
                        previous = current;
                        current = current.next;
                        index++;
                    }
                    previous.next = current.next;
                }
                length--;
                return current.element;
            } else {
                console.log("number out");
                return null;
            }
        },
        this.remove = function (element) {
            var index = this.indexOf(element);
            return this.removeAt(index);
        },
        this.indexOf = function (element) {
            var current = head,
                index = 0;
            while (current) {
                if (element == current.element) {
                    return index;
                }
                index++;
                current = current.next;
            }
            console.log(`no ${element}`);
            return -1;
        },
        this.isEmpty = function () {
            return length === 0;
        },
        this.size = function () {
            return length;
        },
        this.toString = function () {
            var current = head,
                string = '';
            while (current) {
                string += current.element;
                current = current.next;
            }
            console.log(string);
            return string
        },
        this.getHead = function () {
            return head;
        },
        this.print = function () {

        }

}

var list = new LinkedKist();

list.append(1);
list.append(3);
list.append(2);
// list.toString();
console.log(list.getHead());

console.log(list.size());



/**
 *双向链表
 *
 */
function DoublyLinkedList() {
    var Node = function (element) {
        this.element = element;
        this.next = null;
        this.prev = null;
    };
    var length = 0;
    var head = null;
    var tail = null;
    this.insert = function (position, elelment) {
            if (position >= 0 && position <= length) {
                var node = new Node(element),
                    current = head,
                    previous, index = 0;
                if (position === 0) {
                    if (!head) {
                        head = node;
                        tail = node;
                    } else {
                        head = node;
                        node.next = current;
                        current.prev = node;
                    }
                } else if (position == length) {
                    current = tail;
                    node.prev = current;
                    current.next = node;
                } else {
                    while (index < position) {
                        previous = current;
                        current = current.next;
                    }
                    node.next = current;
                    previous.next = node;
                    current.prev = node;
                    node.prev = previous;
                }

            }
        },
        this.remoteAt = function (position) {
            if (position > -1 && position < length) {
                var current = head,
                    previous,
                    index = 0;
                if (position == 0) {
                    head = current.next;
                    if (length == 1) {
                        tail = null;
                    } else {
                        head.prev = null;
                    }
                } else if (position === length - 1) {
                    current = tail;
                    tail = current.prev;
                    tail.next = null;
                } else {
                    while (index++ < position) {
                        previous = current;
                        current = current.next;
                    }
                    previous.next = current.next;
                    current.next.prev = previous;
                }
                length--;
                return current.element;
            } else {
                return null
            }
        }
}

/**
 * 循环列表
 *
 */
function circleLinkedlist() {

}