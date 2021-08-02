/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
class PQueue {
  collection = [];
  print = () => {
    console.log(this.collection);
  };
  isEmpty = () => {
    return this.collection.length === 0 ? 1 : 0;
  };
  enqueue = (element) => {
    if (this.isEmpty()) {
      this.collection.push(element);
    } else {
      let isAdded = false;
      for (let i = 0; i < this.collection.length; i++) {
        if (element[1] < this.collection[i][1]) {
          this.collection.splice(i, 0, element);
          isAdded = true;
          break;
        }
      }
      if (!isAdded) {
        this.collection.push(element);
      }
    }
  };

  dequeue = (element) => {
    if (this.isEmpty()) {
      return -1;
    } else {
      let value = this.collection.shift();
      return value;
    }
  };
  front = () => {
    return this.collection[0];
  };
  size = () => {
    return this.collection.length;
  };
  returnQueue = () => {
      return this.collection;
  }
}

let pqueue = new PQueue();

var groupThePeople = function(groupSizes) {
    let pb = new PQueue();
    for(let i=0;i<groupSizes.length;i++){
           pb.enqueue([i,groupSizes[i]]);
 
    }
    let temp = pb.returnQueue();
    let temp1 = temp;
    let vector = [];
    let flag = 0;
    
     for(let i=0;i<temp.length;i++){
         let newArray = [];
        let z = temp[i][1] ;
         
        for(let j=0;j<z;j++){
            
            newArray.push(temp1[flag][0]);
            flag++;
        }
         i += z -1 ;
         vector.push(newArray);
         
     }  
    return vector;
};