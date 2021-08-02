/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */

class PQueue{


    collection = [];
    print = () =>{
        console.log(this.collection);
    }
    isEmpty = () =>{
        return this.collection.length === 0 ? 1 : 0 ;
    }
    enqueue = (element) => {

        if(this.isEmpty()){
         this.collection.push(element);
        }else{
            let isAdded = false;
            for(let i=0;i<this.collection.length;i++)
            {
                if(element[1]<this.collection[i][1]){
                    this.collection.splice(i,0,element);
                    isAdded = true;
                    break;
                }
            }
            if(!isAdded){
                this.collection.push(element);
            }
        }
    }

    dequeue = (element) => {
        if(this.isEmpty()){
            return -1;
        }else{
          let value = this.collection.shift();
          return value[0];
        }
    }
    front = () => {
        return this.collection[0];
    }
    size = () =>{
        return this.collection.length;
    }


}



var restoreString = function(s, indices) {
    var pq = new PQueue();;
    
    for(let i=0;i<s.length;i++){
        pq.enqueue([s[i],indices[i]]);
    }
    let temp = "";
    for(let j=0;j<s.length;j++){
        temp += pq.dequeue();
    }
    return temp;
};