const int lenght = 2;
template <class Type>
class ShablonWorker
{
private:
    Type arr[lenght];       // массив данных 

public:
    ShablonWorker(Type salary, int workExp) {
        arr[0] = salary * 12 * 1;
        arr[1] = salary * 12 * workExp;
    }

    Type GetElement(int i) {
        return arr[i];
    }


};
