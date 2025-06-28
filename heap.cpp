#include<bits/stdc++.h>
using namespace std;

class Heap {
public:
	vector<int> v;
	Heap(vector<int> v) {
		this->v = v;
		BuildHeap();
	}
	Heap() {}

	void Heapify(int cur) {
		int min_index = cur;
		int left = cur * 2 + 1;
		int right = cur * 2 + 2;

		if (left < v.size() && v[left] < v[min_index]) {
			min_index = left;
		}

		if (right < v.size() && v[right] < v[min_index]) {
			min_index = right;
		}

		// swap and further heapify
		if (min_index != cur) {
			swap(v[cur], v[min_index]);
			Heapify(min_index);
		}
	}

	void BuildHeap() {
		int last_par = (v.size() - 2) / 2;
		for (int i = last_par; i >= 0; i--) {
			Heapify(i);
		}
	}

	int top() {
		return v[0];
	}

	bool isEmpty() {
		return v.empty();
	}

	int size() {
		return v.size();
	}

	void pop() {
		swap(v[0], v.back());
		v.pop_back();
		Heapify(0);
	}

	void push(int val) {

	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(1);
	v.push_back(8);
	v.push_back(9);
	Heap heap(v);

	cout << heap.top() << '\n';

	heap.pop();
	heap.pop();

	cout << heap.top() << '\n';













}