// 函数: sub_142198050
// 地址: 0x142198050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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

void* result = sub_141f219e0(arg1)
int64_t* rcx_5 = arg1[0x81]

if (rcx_5 != 0)
    result = sub_140cd85e0(rcx_5)

*(arg1 + 0x432) |= 0x40

if (data_143a2ef90 != 0)
    result = arg1[0x81]
    
    if (result != 0 && (*(result + 0xb1) & 2) != 0 && arg1[9].d s<= 1 && arg1[0x1b].d == 0)
        *(arg1 + 0x3a) &= 0xfb

return result
