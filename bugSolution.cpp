std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

vec.erase(std::remove(vec.begin(), vec.end(), 5), vec.end());
//or
for (auto it = vec.begin(); it != vec.end(); ++it) {
  if (*it == 5) {
    it = vec.erase(it);
    it--; //Adjust the iterator after erasing
  }
} 