//#include<iostream>
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cin.get();
//}

//11.30
//1.���ã�& -->�����ں����������ݣ�ʹ���������Ķ�
// 
//  -->�ص�:
//1>����������ͨ����Ϊһ�����б����ṩ��һ�����֣�ֱ�Ӳ������þ͵�ͬ�ڲ���ԭ����
//2>ָ���ڴ��ַ������ָ��������ڴ��еĵ�ַ������ֵ����
//3>�����޸ģ�ͨ�������޸�����ʱ��ԭʼ������ͬ���仯
//4>����ʱ��Ҫ��ʼ������֮���޷�����ָ��
//5>���ò��Ǳ����������ڴ��д����ռ�

//#include<iostream>
//#define LOG(x) std::cout<<x<<std::endl
//
//void increment(int& ref)
//{
//	ref = 2;
//}
//
//int main()
//{
//	int a = 5;
//	//int& ref = a;
//	//ref = 2;
//	increment(a);
//	LOG(a);
//}

//2.�ࣺclass  -->ʹ�������׶�
//  ��C++����������̣�OOP���ĺ��ĸ���,�����û��Զ��������
//  ����������ɵı�����Ϊ����
// 
//  -->��Ļ������:
//
//   1>���ݳ�Ա����Ա��������
//      ���ڴ洢��������Ի�״̬
//      �����ǻ����������͡������ͻ�ָ��
// 
//   2>��Ա��������Ҳ����������
//      �������ݳ�Ա�ĺ���������������Ϊ
//      ������ͨ�����͹��캯�������������������Ա����
// 
//   3>����Ȩ�ޣ�
//      �������Ա�ķ��ʷ�Χ
//       �����ַ������η���
		//public: ���г�Ա��������Է��ʡ�
		//private: ˽�г�Ա�������ڲ����Է��ʣ�Ĭ�ϣ���
		//protected: �ܱ�����Ա�����༰����������Է��ʡ�

//#include<iostream>
//class player
//{
//public:  //Ĭ��Ϊprivate
//	int x, y;
//	int speed;
//
//	void move(int xa, int ya)  //����
//	{
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//int main()
//{
//	player player;
//	player.x = 4;
//	player.y = 2;
//	player.speed = 1;
//	player.move(1, -1);
//}

//3.struct vs class:
// ��c++�У�struct��classֻ�пɼ��Ե�����struct�Ŀɼ���Ĭ��Ϊpublic,��class�Ŀɼ���Ĭ��Ϊprivate
//          ��ͨ������ֻ�����ɸ���Ա����ʱ��struct���漰������������ʱ��class
// 
//��c�У�stuctֻ�ܱ�ʾ����
//��c++�У�struct�ܰ����������������ܣ���class��ͬ )


//12.1
//1.���дһ��c++�ࣺ( log�� )
//#include<iostream>
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = 2;
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if(m_LogLevel>=LogLevelError)
//		    std::cout << "[Error]:" << message << std::endl;
//	}
//	void Warn(const char* message)
//	{
//		if(m_LogLevel >= LogLevelWarning)
//		   std::cout <<"[Warning]:"<< message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//		    std::cout << "[Info]:" << message << std::endl;
//	}
//};
//
//int main()
//{
//	Log log;
//	log.SetLevel(log.LogLevelWarning);
//
//	log.Error("hello!");
//	log.Warn("hello!");
//	log.Info("hello!");
//	std::cin.get();
//}


//2.�ؼ���static:(���α�������)

//1>����ͽṹ��֮��:
      //��ʾ�����������ڲ����ӵ�,��������һ��c++�ļ���ʹ��
      //��ͷ�ļ��а��� static �������ᵼ��ÿ������ͷ�ļ��ı��뵥Ԫ������һ�������ı���ʵ��
      
//����:ʵ��:<1>��:����ģ��,��ʵ���Ǿ���ʵ��,һ��������ж��ʵ��
         // <2>����:һ�������ڳ�������ʱ�����˴洢�ռ䲢�洢��ʵ��ֵ���ⱻ��Ϊ����ʵ��



//2>*****����ͽṹ��֮��:
     //static ���α���:��ʾ�������������࣬��������ĳ������
         //<1>�������ʵ������ͬһ�� x �� y �Ĵ洢�ռ�
         //<2>�����������󣬱��������ⶨ��ͳ�ʼ��

    //static ���κ���:��̬�������������κ����ʵ��������ֱ��ͨ����������
         // **ֻ�ܷ�����ľ�̬��Ա������ֱ�ӷ��ʷǾ�̬��Ա


//1.��static����:
//#include<iostream>
//struct Entity
//{
//    int x, y;
//    
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//
//    Entity e1;
//    e1.x = 5;
//    e1.y = 8;
//
//    e.print();
//    e1.print();
//
//}

//2. static ���α���
//#include<iostream>
//struct Entity
//{
//    static int x, y;  //ֻ������,û�ж���ͳ�ʼ��
//
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
////****�����ⲿ���徲̬����ʱ����Ҫ��������������޶��� Entity::
////�����Ƕ���,û�г�ʼ��
//int Entity::x;
//int Entity::y;
//
//int main()
//{
//    /*Entity e;
//    e.x = 2;
//    e.y = 3;*/
//    Entity::x = 2;   //�����ǳ�ʼ��
//    Entity::y = 3;
//
//    /*Entity e1;
//    e1.x = 5;
//    e1.y = 8;*/
//    Entity::x = 5;
//    Entity::y = 8;
//
//    //���һ�����д��ھ�̬�����ͷǾ�̬������
//    //Ҫ���������÷Ǿ�̬�����������ȴ��������ʵ����Ȼ��ͨ����ʵ�����÷Ǿ�̬����
//    Entity e;
//    e.print();
//
//}

//3.static ���η���:
// 
//��̬�����޷�ֱ�ӷ��ʷǾ�̬��������Ϊ��̬����û��ʵ��������
//�����Ҫ�ھ�̬�����з��ʷǾ�̬����������ͨ����ʵ��������Ϊ�������ݸ���̬������ʵ��
//#include<iostream>
//struct Entity
//{
//    int x, y;
//    
//    static void print(Entity& e)
//    {
//        std::cout << e.x << "," << e.y << std::endl;
//    }
//};
//
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//
//    Entity e1;
//    e1.x = 5;
//    e1.y = 8;
//
//    Entity::print(e);
//    Entity::print(e1);
//}


//12.2
//1.enum(ö�����ͣ�����������һ����ֵ���������ļ��ϣ�ʹ�������ڹ�����Ķ�
// 
//#include<iostream>
//enum example: unsigned char  //����ָ���ײ����ͣ����������ͼ��壬Ĭ����int�� -->��Լ�ռ䣬�����ض�����
//{
//    A,  //�������ʼ����Ĭ��ֵΪ0�������ε���
//    B,
//    C
//};
//
//int main()
//{
//    int value1 = A;
//    example value2 = A; //ʹ��enum���Ͷ������ʱ��ֻ�ܸ�enum�е�ֵ
//}

//��дlog�ࣺ
//#include<iostream>
//class Log
//{
//public:
//	enum level
//	{
//		levelError=0,
//		levelWarning,
//		levelInfo
//	};
//private:
//	level m_LogLevel = levelInfo;
//public:
//	void SetLevel(level level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= levelError)
//			std::cout << "[Error]:" << message << std::endl;
//	}
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= levelWarning)
//			std::cout << "[Warning]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= levelInfo)
//			std::cout << "[Info]:" << message << std::endl;
//	}
//};
//
//int main()
//{
//	Log log;
//	log.SetLevel(Log::levelWarning); 
//	//�� C++ �У�enum ���ͣ�ö�٣���Ա����Ϊ��ľ�̬��Ա��
//	// ���������������ĳ������Ķ���,����ζ���������������ʵ���ж��ǹ����
//	// ��ˣ�����ö�ٳ�Աʱ��Ҫͨ��������Log::levelError��������ʵ������log.levelError��������
//
//	//���ǣ�ĳЩ����£�log.levelErrorҲ���ԣ�
//	//enum level ��һ����ͨ��ö�����ͣ�û��ʹ�� enum class��
//	// �� C++ �У���ͨ��ö�ٻ�����ĳ�Ա�����������������
//	// ��ˣ����������� Log �ڲ������� enum level��
//	// ��������� levelError��levelWarning �� levelInfo ������ĳ�Ա������
//	// 
//	//�������ǿ����ö�٣�enum class�������Ա�ᱻ�ϸ��޶���ö�ٵ��������ڣ�
//	// ����ͨ�����������ֱ�ӷ��ʣ�����ʹ�� Log::levelWarning��
//
//
//	log.Error("hello!");
//	log.Warn("hello!");
//	log.Info("hello!");
//	std::cin.get();
//}


//12.4
//1.���캯����
// һ�����е�����ķ�����ֻ���ڴ��������ʵ��ʱ�����У���Ҫ��;�ǳ�ʼ����
//������û����ʽ���幹�캯��ʱ�����������Զ�����һ��Ĭ�Ϲ��캯����ʹ�����ܹ���ʵ����
//�����ʽ��ɾ����= delete�����캯�������޷�ͨ��Ĭ�Ϲ���ʵ��������
//���캯�������ж��

//#include<iostream>
//#include<iomanip>  //std::fixed  -->���������������ʽ����Ϊ�̶���С�����ʽ
//                  //std::setprecision(2)����������ĸ���������Ϊ 2�������� 2 λС��         
//class Entity
//{
//public:
//    float X, Y;
//
//    //��ʽ���幹�캯������������������û�з���ֵ����
//    Entity()
//    {
//        X = 0.0f;
//        Y = 0.0f;
//    }
//
//    //�������أ��������������ͬ�����������ͣ�˳��������ͬ������ֵ���Ͳ������ֺ������أ�
//    Entity(float x, float y)
//    {
//        X = x;
//        Y = y;
//    }
//
//    void print()
//    {
//     /*   std::cout << X << " " << Y << std::endl;*/  //std::coutĬ����int��ʽ���
//        std::cout << std::fixed << std::setprecision(2) << X << " " << Y << std::endl;
//    }
//};
//int main()
//{
//    //Entity e;
//    //std::cout << e.X << std::endl;  //e.Xû�г�ʼ�����ᱨ��
//
//    //ʹ��Entity()���캯��
//    Entity e;
//    e.print();
//    //ʹ��Entity(float x, float y)���캯��
//    Entity e1(10.0f, 5.0f);
//    e1.print();
//}


//�����Ҫֻ��ͨ��Log::print()���ú����������ַ���
//#include<iostream>
//class Log
//{
////1>�����캯����Ϊprivate,�಻��ʵ����
////private:
////    Log();
//
////2>ɾ��Ĭ�Ϲ��캯�����޷�ʵ����
////    Log() = delete;
//
//public:
//    static void print()
//    {
//        std::cout << "hello" << std::endl;
//    }
//};
//
//int main()
//{
//    Log l;
//    l.print();
//}
//


//12.7
//1.����������һ������ķ�������������������ڽ���ʱ�����糬�����������ʽɾ��ʱ����
//            �����������Զ������ã��������������ռ�õ���Դ

//#include<iostream>
//class Entity
//{
//public:
//    int x, y;
//    //���캯����
//    Entity()
//    {
//        x = 0;
//        y = 0;
//        std::cout << "Created Entity!" << std::endl;
//    }
//    //����������
//    ~Entity()
//    {
//        std::cout << "Destroyed Entity!" << std::endl;
//    }
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
//void function()
//{
//    Entity e;
//    e.print();
//}
//
//int main()
//{
//    function();
//    return 0;
//}

//�ܽ᣺���캯����������������ʡ�ԣ�������������Ĭ�ϵİ汾
//      Ĭ�Ϲ��캯�������������ʺϼ򵥵��࣬
//      ���������Ҫ��̬�ڴ������ض��ĳ�ʼ�� / �������������Ҫ��ʽ��������


//2.�̳У�ͨ���̳У�һ���ࣨ������/���ࣩ���Դ���һ���ࣨ����/���ࣩ��
//        �̳����ԣ���Ա����������Ϊ����Ա��������ʵ�ִ��븴�ú͹�����չ 
//            --�����ٴ����ظ�

//#include<iostream>
//class Entity
//{
//public:
//    float x, y;
//    void move(float xa, float ya)
//    {
//        x += xa;
//        y += ya;
//    }
//};
//
////�̳У�
//class Player :public Entity    //******
//{
//public:
//    const char* name;
//    void printname()
//    {
//        std::cout << name << std::endl;
//    }
//};
//
//int main()
//{
//    Player player;
//    player.x = 0.0f;
//    player.name = "lyl";
//    player.printname();
//    return 0;
//}


//3.�麯������virtual��
// ������������д�����е��麯��

//#include<iostream>
//#include<string>  //������std::string
//
//using namespace std;    //��һ�������ռ�������䣬
//                        //���������ǽ�����׼�⡿�е����г�Ա���纯�����ࡢ�����ȣ����뵽��ǰ��������
//                        //������ʹ�ñ�׼��ĳ�Աʱ�Ϳ���ʡ��ǰ׺ std::
//class Entity
//{
//public:
//    virtual std::string GetName()       //std::string�Ǳ�׼�⣨std �����ռ䣩�ṩ��һ�����ࡿ��
//                                //���ڱ�ʾ�Ͳ������ַ�����
//    {
//        return "Entity";
//    }
//};
//
//class Player :public Entity
//{
//private:
//    std::string m_name;
//public:
////��Ա��ʼ���б��� C++ ���캯����һ�������﷨�������ڹ��캯����ִ��֮ǰ��ʼ����ĳ�Ա����
////��ͨ���ڹ��캯���Ĳ����б��ʹ��ð�ţ� : �������ţ�()����ʵ�֣���Ա1��ֵ1������Ա2��ֵ2��...
////���ڳ�����Ա��const���������ͳ�Ա��&������ʹ�ó�Ա��ʼ���б�
//    Player(const std::string& name) :m_name(name) 
//    {
//        ;
//    }
//    virtual std::string GetName() override  //�����ඨ��ͻ���ͬ���ĺ���ʱ������ĺ��������أ����ʹ���麯��������д
//    {                                       //override�ؼ��֣���ʾ��������д�����һ�淶����
//        return m_name;
//    }
//};
//
//void print(Entity* e)
//{
//    std::cout << e->GetName() << std::endl;
//}
//int main()
//{
//    Entity* e = new Entity();  //��������ȷ��ʾ����Ĭ�Ϲ��캯��
//    //std::cout << e->GetName() << std::endl;   //��ӡEntity
//    print(e);   //��ӡEntity
//
//    Player* p = new Player("lyl");
//    //std::cout << p->GetName() << std::endl;   //��ӡlyl
//    print(p);    //��ӡEntity  -->���������ʹ�á��麯�� ��
//
//    delete e;
//    delete p;
//    return 0;
//}


//12.8
//1.���麯�����ӿڣ���
    //1>���麯��:��һ��û�к�������麯����
    //   --��������ʽΪ��virtual void functionName() = 0;
    //�������麯�������Ϊ�������ࡿ�������಻��ֱ��ʵ����,���뱻������д
    // 
    //2>�ӿ�:��һ������ĳ����࣬���У����г�Ա�������Ǵ��麯����

//#include<iostream>
//#include<string>
//class printable
//{
//public:
//    virtual std::string GetName() = 0;  //���麯��
//};
//
//class Entity:public printable
//{
//public:
//    virtual std::string GetName() override
//    {
//        return "Entity";
//    }
//};
//
//class Player :public Entity
//{
//private:
//    std::string m_name;
//public:
//    Player(const char* name) :m_name(name) {}
//    virtual std::string GetName()  override
//    {
//        return m_name;
//    }
//};
//void print(printable* p)
//{
//    std::cout << p->GetName() << std::endl;
//}
//
//int main()
//{
//    Entity* e = new Entity();
//    print(e);
//    Player* p = new Player("lyl");
//    print(p);
//}


//2.�ɼ���:public,protected,private
//1>public:�౾��,����,��������(������)�ж����Ե���
//2>protected:�౾���������Ե���,��������(������)�в����Ե���
//3>private:ֻ���౾����Ե���(����:��Ԫ),�������������(������)�в����Ե���
//
//#include<iostream>
//class Entity
//{
//protected:
//    int x;
//    void print(){}
//public:
//    Entity()
//    {
//        x = 0;
//        print();
//    }
//};
//class Player:public Entity
//{
//public:
//    Player()
//    {
//        x = 2;
//        print();
//    }
//};
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.print();
//    return 0;
//}


//3.�ַ���:std::string  ��
//#include<iostream>
//#include<string>
//int main()
//{
//    std::string ch = "liaoyilin";
//    //׷���ַ���(strcat)
//    //std::string ch = "liaoyilin" + "hahah";  //�﷨����
//    ch += "hahah";
//    //std::string ch = std::string("liaoyilin") + "hahah";
//    std::cout << ch << std::endl;
//
//    //���ַ�������.size()(strlen)
//    std::cout << ch.size() << std::endl;
//
//    //�����ַ���
//    bool contains = ch.find("lin") != std::string::npos;  
//    int i = ch.find("lin");
//    std::cout << i << std::endl;
//    //������ַ������ڣ��򷵻�����ʼλ�õ���������������ڣ��򷵻� std::string::npos
//    //std::string::npos ��һ����������ʾ��δ�ҵ���,����ֵͨ����һ����������ʵ��������
//}


//4.�ַ���������(�ַ�������):
//char* p = "hello";  p��һ��ָ�룬ֱ��ָ���������޸�p[0]�����޸ĳ����������ݣ����ǲ�����ġ�
//char p[] = "hello"; // ��������ջ�ϴ���һ���ַ���p����"hello"�ӳ��������Ƶ�p���޸�p[0]���൱���޸�����Ԫ��һ�����ǿ��Եġ�

//#include<iostream>
//int main()
//{
//    using namespace std::string_literals;
//    //���Խ� "s" ��׺���ӵ��ַ���������ֱ�Ӵ��� std::string ����,"example"Ĭ��Ϊconst char* ����
//    std::string ch = "hello"s + " world" + "!!";
//    //R:ԭʼ�ַ������ֵ�ʹ�ã�()����������ʾ�ַ�����������ת�廻�з� ( \n ) �����ŵ������ַ�
//    const char* example = R"(line1
//line2
//line3)";
//    std::cout << example << std::endl;
//    std::cout << ch << std::endl;
//}
