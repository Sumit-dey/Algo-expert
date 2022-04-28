class Solution {
public:
    int maxArea(vector<int>& height) {
        vector< pair<int, int> > vec;
        for( int i = 0; i < height.size(); i++ )
        {
            vec.push_back( make_pair(height[i], i) );
        }
        //vector<int> val(n,0);

        sort( vec.begin(), vec.end() );
        reverse( vec.begin(), vec.end() );
        int n = height.size();
        int l = n, r = -1, ans = 0;
        for( int i = 0; i < n; i++ )
        {
            int v = vec[i].first, ind = vec[i].second;
            if( l < ind )
                ans = max( ans, (ind-l)*v );
            if( r > ind )
                ans = max( ans, (r-ind)*v );
            l = min( l, ind );
            r = max( r, ind );
        }
        return ans;
    }
};
