#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

/*I. Create a vector */
    vector <int> Vec;

    /*init value for vector */
    cout << "Init value for vector using push_back functions:\n";
    for(auto i = 0; i< 10; i++)
    {
        Vec.push_back(i);
        cout << Vec.at(i) << " ";

    }
/*II. Commonly member function*/

/*  1.Interator:
     * begin() – Returns an iterator pointing to the first element in the vector
     * end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
     * rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
     * rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
     * cbegin() – Returns a constant iterator pointing to the first element in the vector.
     * cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
     * crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
     * crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/
    cout << "\n=================== 1.INTERATOR ================== \n" ;
    /*1.1 Functions begin() and end() */
    cout << "\nUsing begin() and end(): \n";
    for (auto i = Vec.begin(); i != Vec.end(); ++i )  /* we can change auto = vector<int>::iterator */
    {
        cout << *i << " ";
    }
    /*1.2 Functions rbegin() and rend() */
    cout << "\nOutput of rbegin and rend: \n";
    for (auto ir = Vec.rbegin(); ir != Vec.rend();++ir)  /*We can't change 'rend()' by begin() because it diff datatype */
        cout << *ir << " ";


/*  2.Capacity:
    * size() – Returns the number of elements in the vector.
    * max_size() – Returns the maximum number of elements that the vector can hold.
    * capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    * resize(n) – Resizes the container so that it contains ‘n’ elements.
    * empty() – Returns whether the container is empty.
    * shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    * reserve() – Requests that the vector capacity be at least enough to contain n elements.
*/
    cout << "\n=================== 2.CAPACITY ================== \n" ;
    cout << "Size : " << Vec.size();
    cout << "\nCapacity : " << Vec.capacity();
    cout << "\nMax_Size : " << Vec.max_size();

    /*resizes the vector size to 4*/
    Vec.resize(8);
    cout << "\nResize of vector from 10 to  8 element" << endl;
    for(auto i = Vec.begin();i!= Vec.end(); i++)
    {
        cout << *i << " ";
    }
    /*Check vector empty? */
    if(Vec.empty() == true)
    {
    cout << "\nVector empty \n";
    }
    else{
        cout << "\nVector not empty \n";
    }

/* 3. Element access
    * reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    * at(g) – Returns a reference to the element at position ‘g’ in the vector
    * front() – Returns a reference to the first element in the vector
    * back() – Returns a reference to the last element in the vector
    * data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/
    cout << "\n=================== 3.ELEMENT ACCESS ================== \n" ;
    cout << "Vec with Vec[1] = "<<Vec[1] << endl;
    cout << "Vec with Vec.at(4) = " << Vec.at(4) << endl;
    cout << "Vec with Vec.front() = " << Vec.front() << endl;
    cout << "Vec with Vec.back() = " << Vec.back() << endl;

    // pointer to the first element
    int* pos = Vec.data(); /* because Vec have data type is int, so we can init pos with data type int*/
 
    cout << "\nThe first element is " << *pos;

/* 4. Modifier
    * assign() – It assigns new value to the vector elements by replacing old ones
    * push_back() – It push the elements into a vector from the back
    * pop_back() – It is used to pop or remove elements from a vector from the back.
    * insert() – It inserts new elements before the element at the specified position
    * erase() – It is used to remove elements from a container from the specified position or range.
    * swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    * clear() – It is used to remove all the elements of the vector container
    * emplace() – It extends the container by inserting new element at position
    * emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/
    cout << "\n=================== 4.MODIFIER ================== \n" ;

/* Create new vector*/
    vector<int> Area1;

    Area1.assign (10,5);

    for(auto i = Area1.begin(); i!= Area1.end();i++){
        cout << *i << " ";
    }
    Area1.insert(Area1.begin(),2);

/*III. Create vector*/
    /*3.1 a vector like an array.*/
    vector<int> vec_type1 = {1,2,3,4,5};

    /*3.2 Specifying size and initializing all values from array*/
    int arr [] = {1,2,3,4,5};
    int n = sizeof(arr);
    vector<int> vector_type2 = {arr, arr + n};

    /*3.3 Init vector from another vector*/
    vector<int> vec_type3(vec_type1.begin(),vec_type1.end());

    /*3.4 init using fill() function*/
    int value_4 = 10;
    vector<int> vec_type4(4);
    fill(vec_type4.begin(),vec_type4.end(),value_4);  /* output: 10 10 10 10*/

    /*3.5  init using iota() */
    vector<int> vec_type5(5);
    iota (vec_type5.begin(), vec_type5.end(), 2);

    return 0;
}