/*
        @享元模式
        @动机 采用纯粹对象方案的系统问题在于系统中会很快充斥着大量的细粒度的对象，造成内存的负担
        @定义  运用共享技术有效的支持大粒度的对象
        @总结 主要解决代价的问题

        应用： 内存池， 对象池等等

*/
#include <map>
using namespace std;
class object{};
class frontFactory
{
private:
    map<char, object*> m_map;
public:
    object* getFront(char key)
    {
        if(m_map.find(key) != m_map.end())
        {
            return m_map[key];
        }
        else
        {
            m_map.insert(pair<char, object*>(key, new object()));
        }
        
    }
}