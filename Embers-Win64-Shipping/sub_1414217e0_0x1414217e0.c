// 函数: sub_1414217e0
// 地址: 0x1414217e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 0xffffffff)
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    int64_t* rcx_1 = data_143f0f180
    void* r8_1 = *(arg1 + 0x20)
    int64_t r9_1 = *(arg1 + 0x38)
    int32_t arg_18 = 0
    int32_t arg_8 = 0
    (*(*rcx_1 + 0x640))(rcx_1, arg2, *(r8_1 + 0x10), r9_1, arg1 + 0x28, &arg_18, &arg_8)
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    data_143f138cc += performanceCount_1 - performanceCount[0].d
    data_143f138d8:4.d += 1

if (*(arg1 + 0x28) == 0)
    *(arg1 + 0x30) = 0xffffffff
    *(arg1 + 0x28) = &data_1439b6d28
