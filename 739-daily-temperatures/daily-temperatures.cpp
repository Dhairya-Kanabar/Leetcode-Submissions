class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answers(n,0);
        // answers[n-1] = 0;
        for(int i = n-2; i >=0; i--){
            // cout << i << endl;
            int j = i+1;
            while(temperatures[j]<=temperatures[i]){
                if(answers[j] == 0){j =i; break;}
                j = j+ answers[j];
            }
            answers[i] = j-i;
            // cout << answers[i] << endl;
        }
        return answers;
    }
};