const count_construct = (target,wordBank,memo={})=>{
    if(target in memo) return memo[target];
    if(target === '') return 1;

    let total =0;

    for(let word of wordBank){
        if(target.indexOf(word) === 0){
            const numOfWays = count_construct(target.slice(word.length),wordBank,memo);
            total += numOfWays;
        }
    }

    memo[target] = total;
    return total;
};


console.log(count_construct("purple",['pu','rple','pur','e','pl','purple']));
console.log(count_construct("purpleasdmlasd",['pu','rple','pur','e','pl','purple']));