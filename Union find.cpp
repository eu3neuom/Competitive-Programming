struct UF {
	vector < int > group;

	UF() {};
	UF(int elNum) : group(elNum) {
		Reset();
	};

	void Reset() {
		for(int i = 0; i < (int)group.size(); ++i) {
			group[i] = i;
		}
	}
	int Find(int x) {
		if(group[x] == x) return x;
		group[x] = Find(group[x]);
		return group[x];
	}
	bool SameGroup(int a, int b) {
		return (Find(a) == Find(b));
	}
	void Join(int a, int b) {
		group[Find(a)] = Find(b);
	}
};