class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();

        vector<int> freq(n + 1, 0);
        int minPrice = INT_MAX;

        for (const auto& x : items) {
            ++freq[x[0]];
            minPrice = min(minPrice, x[1]);
        }

        vector<int> gain(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            int g = -1;
            for (int j = i; j <= n; j += i)
                g += freq[j];
            gain[i] = g;
        }

        vector<pair<int, long long>> v;
        v.reserve(n);

        for (const auto& x : items) {
            int price = x[1];
            int g = gain[x[0]];

            if (g > 0 && price <= 2LL * minPrice)
                v.emplace_back(price, g);
        }

        sort(v.begin(), v.end());

        long long rem = budget;
        long long ans = 0;

        for (int i = 0, m = v.size(); i < m;) {
            int price = v[i].first;
            long long cnt = 0;

            do {
                cnt += v[i].second;
                ++i;
            } while (i < m && v[i].first == price);

            long long take = min(cnt, rem / price);
            ans += 2LL * take;
            rem -= take * price;

            if (take < cnt)
                break;
        }

        ans += rem / minPrice;
        return (int)ans;
    }

};