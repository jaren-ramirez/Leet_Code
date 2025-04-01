/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    const min_size = Math.min(word1.length,word2.length);
    const new_word =[];
    for(let i=0; i<min_size; i++){
        new_word.push(word1[i]);
        new_word.push(word2[i]);
    }

    if (word1.length < word2.length){
        new_word.push(word2.slice(min_size))
    }

    if (word1.length > word2.length){
        new_word.push(word1.slice(min_size))
    }

    return new_word.join("")
};