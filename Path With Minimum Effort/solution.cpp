int newMax = max(currDiff , frontNodeDiff); 
                    if(newMax < dist[newX][newY]) {
                        dist[newX][newY] = newMax;
                        pq.push({newMax , {newX , newY}});
                    }
                }
            }
        }
    }
        return 0;
};
                    int currDiff = abs(heights[x][y] - heights[newX][newY]);
                if(newX>=0 && newY>=0 && newX<heights.size() && newY<heights[0].size()) {

                int newY = y + dy[i];