// 函数: sub_140a3fca0
// 地址: 0x140a3fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*arg1)(*(arg1 + 8))

if (result == 0)
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    char i
    
    do
        sub_140b732d0(arg2.d)
        i = (*arg1)(*(arg1 + 8))
    while (i == 0)
    char arg_8 = 0
    char* var_20_1 = &arg_8
    void*** (* var_28)() = sub_140a3f720
    void* rax = sub_140a756e0(&var_28, &data_14399e8cc)
    int64_t performanceCount
    result = QueryPerformanceCounter(&performanceCount)
    *(rax + 0x10) += performanceCount.d - performanceCount_1

return result
