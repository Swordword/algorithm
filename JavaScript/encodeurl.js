function Params() {
    var result = {};
    var hash = "#/?user_id=4&aa=6";
    var resulturl = hash.replace("#/", "");
    var theRequest = new Object();
    if (resulturl.indexOf("?") != -1) {
        var str = resulturl.substr(1);
        strs = str.split("&");
        for (let i = 0; i < strs.length; i++) {
            const element = strs[i];
            result[element.split('=')[0]] = element.split('=')[1]
        }
    }
    console.log(result);

    return result;
    // if (hash.indexOf("?") != -1) {
    //     var str = hash.substr(1);
    //     strs = str.split("&");
    //     for (var i = 0; i < strs.length; i++) {
    //         theRequest[strs[i].split("=")[0]] = unescape(strs[i].split("=")[1]);
    //     }
    // }
    return theRequest;
}

console.log(Params());