function Stack(){
    var items=[];
    this.push=function(element){
        items.push(element);
    };
    this.pop=function(){
        return items.pop();
    };
    this.peek=function(){
        return items[items.length-1];
    };
    this.isEmpty=function(){
        return items.length==0?true:false;
    };
    this.size=function(){
        return items.length;
    };
    this.clear=function(){
        items.length=0;
    };
    this.print=function(){
        console.log(items.toString());
    };
}
// var stack=new Stack();
// console.log(stack.isEmpty());
// stack.push(5);
// stack.push(8);
// console.log(stack.peek());
// stack.push(11);
// console.log(stack.size());
// stack.push(15);
// stack.pop();
// stack.pop();
// console.log(stack.size())
// stack.print();
// stack.print();

//二进制与十进制转换
function divideBy2(decNumber){
    var remStack=new Stack(),rem,binaryString='';
    while(decNumber>0){
        rem=Math.floor(decNumber%2);
        remStack.push(rem);
        decNumber=Math.floor(decNumber/2);
    }
    while(!remStack.isEmpty()){
        binaryString+=remStack.pop().toString();
    }
    return binaryString;
}

console.log(divideBy2(12))

// 进制转换升级
function baseConventer(decNumber,base){
    var remStack=new Stack(),rem,baseString="",digits="0123456789ABCDEF";
    while(decNumber>0){
        rem=Math.floor(decNumber%base);
        remStack.push(rem);
        decNumber=Math.floor(decNumber/base);
    }
    while(!remStack.isEmpty()){
        baseString+=digits[remStack.pop()];
    };
    return baseString;
}

console.log(baseConventer(123456, 16));












