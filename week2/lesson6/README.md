# 第六讲    
## 数据宽度和存储容量的单位     
### 数据的基本宽度  
1. 比特   
> 计算机中存储，传输，处理的最小单位     

2. 字节    
- 二进制信息计量的最基本单位    
- 现代计算机存储器按“字节”编址   
- 字节是最小可寻址单元         
- 如果以一个字节为排列单元，LSB表示最低有效位，MSB表示最高有效位     

3. 字      
> **字**和**字长**的概念不同    
> 一个字始终是16位，但是字长在不同的体系结构中是不同的，IA-32的字长是32位，IA-64的字长是64位     

4. 双字和四字  
> 双字是32位，四字是64位     

5. 字长   
> 字长指数据通路的宽度    
> 字长等于cpu的总线宽度，运算器的位数，通用寄存器的宽度(这些部件的宽度是一致的)   
> 字和字长的宽度可以一样也可以不一样     

### 数据量的度量     
1. 容量经常使用的单位  
- 千字节  KB  **大写的K** 
- 兆字节  MB    
- 千兆字节 GB     
- 兆兆字节 TB     

2. 通信中带宽的单位   
- 千比特/每秒     kb/s   10^3bps  **小写的k**    
- 兆比特/每秒     Mb/s      

### 程序中数据的宽度    
> 与特定类型，体系结构，编译器实现有关   


