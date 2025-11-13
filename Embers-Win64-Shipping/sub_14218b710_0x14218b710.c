// 函数: sub_14218b710
// 地址: 0x14218b710
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
        uint32_t rax_3
        
        if (data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            arg2 = sub_14218eae0(&data_143a2edd8)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            arg2 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        uint8_t rax
        rax, arg2 = sub_14218e220(arg1, arg2)
    
    *(arg1 + 0x432) &= 0xf7
    *(arg1 + 0x432) |= rdi_1 & 8

if ((*(arg1 + 0x431) & 1) != 0)
    sub_142199780(arg1, 0, arg2)

if ((arg1[0x11].b & 2) == 0)
    return 

return sub_141f0f750(arg1) __tailcall
