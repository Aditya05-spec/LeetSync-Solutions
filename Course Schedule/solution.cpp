bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int , list<int> > adjList;
        for(auto i : prerequisites) {
            int ai = i[0];
            int bi = i[1];
            adjList[bi].push_back(ai);
        }

        return topoSortUsingBFS(numCourses , adjList);
    }
};