// 函数: sub_14218e9d0
// 地址: 0x14218e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]

if (rcx != 0)
    char rdi_1 = *(arg1 + 0x432)
    *(arg1 + 0x432) = rdi_1 | 8
    int64_t rax_2 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_2 = *(rcx + 8)
    
    if (((rax_2 u>> 0x1a).b & 1) == 0)
        float zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)
    
    *(arg1 + 0x432) &= 0xf7
    *(arg1 + 0x432) |= rdi_1 & 8

int32_t i = 0

if (arg1[0xc1].d s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        int64_t* rcx_4 = *(rdi_2 + arg1[0xc0])
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
            *(rdi_2 + arg1[0xc0]) = 0
        
        i += 1
        rdi_2 = &rdi_2[1]
    while (i s< arg1[0xc1].d)

return j_sub_140cdba30(arg1) __tailcall
