// 函数: sub_142193010
// 地址: 0x142193010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
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

int64_t i_1 = sx.q(arg1[0xc1].d)

if (i_1 s> 0)
    int64_t* rcx_4 = arg1[0xc0]
    int64_t i
    
    do
        int64_t rdx_1 = *rcx_4
        
        if (rdx_1 != 0)
            rbx += *(rdx_1 + 0x118)
        
        rcx_4 = &rcx_4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rbx)
