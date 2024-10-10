#include <bits/stdc++.h> 
using namespace std;

struct MinHeap 
{ 
	int frequency;	
	char val;
	MinHeap *left, *right;

	MinHeap(int frequency,char val) 
	{ 
	    this->val = val; 
		this->frequency = frequency;
	    right = NULL;
		left = NULL;
	} 
};
map<char, int> frequency;
map<char, string> charMap;
struct utility 
{ 
	bool operator()(MinHeap* left, MinHeap* right) 
	{ 	return (left->frequency > right->frequency); } 
}; 
priority_queue<MinHeap*, vector<MinHeap*>, utility> minHeap;
void calcFreq(string str, int n) 
{ 
	for (int i=0; i<str.size(); i++) 
		frequency[str[i]]++; 
}
void saveMap(struct MinHeap* node, string str) 
{ 
	if (node==NULL) 
	{ 
	    return; 
	}
	if (node->val != '$') 
	{	
	    charMap[node->val]=str; 
	    
	}
	saveMap(node->left, str + "0"); 
	saveMap(node->right, str + "1"); 
}
void BuildHuffmanTree(int size) 
{ 
	struct MinHeap *top, *left, *right; 
	for (map<char, int>::iterator it=frequency.begin(); it!=frequency.end(); it++) 
		{
		    minHeap.push(new MinHeap(it->second,it->first)); 
		}
	while (minHeap.size() != 1) 
	{ 
		left = minHeap.top(); 
		minHeap.pop(); 
		right = minHeap.top(); 
		minHeap.pop(); 
		top = new MinHeap('$', left->frequency + right->frequency); 
		top->left = left; 
		top->right = right; 
		minHeap.push(top); 
	} 
	saveMap(minHeap.top(), ""); 
}
string HuffmanDecoder(struct MinHeap* top, string str) 
{ 
	string res = ""; 
	struct MinHeap* node = top; 
	for (int i=0;i<str.size();i++) 
	{ 
		if (str[i] == '0') 
		node = node->left; 
		else
		node = node->right; 
		if (node->left==NULL and node->right==NULL) 
		{ 
			res += node->val; 
			node = top; 
		} 
	} 
	return res+'\0'; 
}
void PrintFrequencies(){
cout << "Frequency Character Map-\n"; 
for (auto it=charMap.begin(); it!=charMap.end(); it++) 
		{
		    cout << it->first <<' ' << it->second << endl;
		}
}
void EncodenDecode(string sampleString){
string  HuffmanEncode;
for (auto it: sampleString) 
{
		HuffmanEncode+=charMap[it];
}
cout << "Huffman encoding:\n" << HuffmanEncode << endl;
string HuffmanDecode = HuffmanDecoder(minHeap.top(), HuffmanEncode);
cout << "Huffman decoding:\n" << HuffmanDecode << endl;
}
int main()
{
string sampleString1 = "helloworld!";
calcFreq(sampleString1, sampleString1.length()); 
BuildHuffmanTree(sampleString1.length());
PrintFrequencies();
EncodenDecode(sampleString1);
return 0;
}