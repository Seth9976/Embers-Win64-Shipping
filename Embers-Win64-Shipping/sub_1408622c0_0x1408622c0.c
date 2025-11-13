// 函数: sub_1408622c0
// 地址: 0x1408622c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x6bc)

if (result != 0)
    if (data_143de5480 != 0)
        GetCurrentThreadId()
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t rax = 0
    double zmm1 = 5.0 / sub_140a48b40()
    double zmm0_1 = 9.2233720368547758e+18
    
    if (not(zmm1 < zmm0_1))
        zmm1 = zmm1 - zmm0_1
        
        if (not(zmm1 >= zmm0_1))
            rax = -0x8000000000000000
    
    uint64_t rbx
    rbx.b = 1
    int64_t rsi_3 = int.q(zmm1) + rax + performanceCount
    
    while (*(arg1 + 0x6bc) != 0)
        sub_140b732d0(0x3a83126f.d)
        
        if (rbx.b != 0)
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            rbx = zx.q(rbx.b)
            
            if (performanceCount_1 u> rsi_3)
                rbx = 0
    
    void performanceCount_2
    result = QueryPerformanceCounter(&performanceCount_2)
    sub_140a48b40()

return result
