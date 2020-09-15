var staticLinkList = [{
    data: null,
    cur: 0
}];


function add(data) {
    staticLinkList[staticLinkList.length - 1].cur = staticLinkList.length
    staticLinkList.push({
        data: data,
        cur: 0
    })
}

function deleteIndex(index) {
    staticLinkList[index - 1].cur = staticLinkList[index].cur || 0;
    staticLinkList.splice(index, 1)
}

function insert(data, index) {

}
add(1)
add(2)
add(3)
deleteIndex(2)

console.log("staticLinkList", staticLinkList);