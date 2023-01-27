class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // Using to store new candy type
        unordered_map<int, int> candy;
        int count = 0;
        for (int i = 0; i < candyType.size(); i++) {
            // Checking if the candy was already present or not
            // If not then we can increase the count 
            if (!candy[candyType[i]]) {
                count++;
                // If the count reaches n/2, we can stop as 
                // Alice can't eat more than n/2 candies
                if (count == candyType.size() / 2) {
                    return candyType.size() / 2;
                }
            }
            // Adding the candy if it's not in our Candy storage
            candy[candyType[i]]++;
        }
        return count;
    }
};