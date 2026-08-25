class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,int> vehicle_info;
        for(int i=0;i<position.size();i++){
            vehicle_info[position[i]]= speed[i];
        }
        
        
        
        sort(position.begin(),position.end());
        int fleet = 0;
        double last_time=-1.0;
        for(int i=position.size()-1;i>=0;i--){
                double time = (double) (target - position[i])/vehicle_info[position[i]];
                if(time> last_time){fleet++;
                last_time = time;}
        }
        return fleet;

    }
};
 