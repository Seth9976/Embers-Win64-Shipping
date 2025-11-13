// 函数: sub_1421934a0
// 地址: 0x1421934a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* rcx = arg1[0xca]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

uint64_t result = sub_141f17fa0(arg1, arg2)

if (arg1[0xc1].d s> 0)
    int64_t rsi_1 = 0
    
    do
        result = arg1[0xc0]
        int64_t* rcx_5 = *(rsi_1 + result)
        
        if (rcx_5 != 0)
            result = (*(*rcx_5 + 0x138))(rcx_5, arg2)
        
        i += 1
        rsi_1 += 8
    while (i s< arg1[0xc1].d)

return result
