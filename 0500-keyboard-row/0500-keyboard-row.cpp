class Solution {
public:
    vector<string> findWords(vector<string>& words) {
         string rowIndices = "12210111011122000010020202";
        vector<string> filteredWords; // Resultant vector of words
      
        // Iterate over each word in the input list
        for (auto& word : words) {
            bool canBeTyped = true; // flag to check if the word belongs to a single row
            // Get the row for the first character of the word
            char initialRow = rowIndices[tolower(word[0]) - 'a'];
          
            // Iterate over each character in the word
            for (char& character : word) {
                // If the character does not belong to the same row as the first character, set flag to false
                if (rowIndices[tolower(character) - 'a'] != initialRow) {
                    canBeTyped = false;
                    break; // Break out of the character loop since one mismatch is enough
                }
            }
          
            // If the word can be typed using letters of one row, add it to the result
            if (canBeTyped) {
                filteredWords.emplace_back(word);
            }
        }
      
        // Return the filtered list of words
        return filteredWords;
    }
};