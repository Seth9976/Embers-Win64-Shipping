// 函数: sub_141fca790
// 地址: 0x141fca790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3e110(arg1 + 0x18) != 0)
    int64_t* rcx_2 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
    
    if ((*(*rcx_2 + 0x128))(rcx_2) != 0)
        int64_t* rcx_4 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
        int32_t rax_5 = (*(*rcx_4 + 0x60))(rcx_4)
        int32_t rbx_1 = *(arg1 + 0x20)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        if (rax_5 == rbx_1 && not(
                float.d(performanceCount) f* data_143d796f8 + 16777216.0 f- *(arg1 + 0x28) >= 15.0))
            int64_t result
            result.b = 0
            return result
        
        sub_141fba820(sub_140d3c6e0(arg1 + 0x18))

return 1
