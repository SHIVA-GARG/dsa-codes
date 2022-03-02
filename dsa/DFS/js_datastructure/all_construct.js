const all_construct = ( target,wordBank,memo={})=>{
    if(target in memo) return memo[target];
    if(target === '') return [[]];

    const result = [];

    for(let word of wordBank){
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            const suffixWays = all_construct(suffix,wordBank,memo);
            const numberOfways = suffixWays.map(way=>[word, ...way]);
            result.push(...numberOfways);
        }
    }


    memo[target] = result;
    return result;
};

console.log(all_construct("purple",['pu','rple','pur','e','pl','purple']));
console.log(all_construct("purpleeeeeeeeeeeeee",['pu','rple','pur','e','pl','purple']));