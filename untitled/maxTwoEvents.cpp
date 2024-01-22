#include <vector>
#include <map>
#include <unordered_map>
#include "iostream"
using namespace std;


class MaxTwoEvents {
    unordered_map<string,int> memo;
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int result = EventsValue(events,0,1000000000,2,events.size()-1);
        return result;
    }
    int EventsValue(vector<vector<int>>& events,int StartTime,int EndTime,int RestEvents,int i){
        if(RestEvents==0 || i<0){
            return 0;
        }
        std::string key = std::to_string(i) + "|" + std::to_string(StartTime)+ to_string(EndTime)+ to_string(RestEvents);
        if(memo.find(key)!=memo.end()){
            return memo[key];
        }
        int result;
        if(RestEvents==1 && !(events[i][0]>=EndTime+1 || events[i][1]<=StartTime-1)){
            result =  EventsValue(events,StartTime,EndTime,RestEvents,i-1);
        }
        else{
            result =  max(EventsValue(events,StartTime,EndTime,RestEvents,i-1), EventsValue(events,events[i][0]
            ,events[i][1],RestEvents-1,i-1) + (int)events[i][2]);
        }
        memo[key] = result;
        return result;
    }
};