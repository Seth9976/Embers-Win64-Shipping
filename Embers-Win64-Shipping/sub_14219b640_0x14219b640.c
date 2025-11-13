// 函数: sub_14219b640
// 地址: 0x14219b640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = sub_140b33630("Effects")
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
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            zmm0 = sub_14218eae0(&data_143a2edd8)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0)
    
    *(arg1 + 0x432) &= 0xf7
    *(arg1 + 0x432) |= rdi_1 & 8

sub_141ef3910(arg1)
int64_t rcx_5 = arg1[0x7d]
*(arg1 + 0x433) |= 8

if (rcx_5 != 0)
    if ((*(arg1 + 0x8a) & 1) != 0)
        (*(*arg1 + 0x990))(arg1)
    else if ((arg1[0x86].b & 0x11) != 0)
        sub_142208350(rcx_5)

*(arg1 + 0x433) &= 0xf7
return sub_140b37f60("Effects") __tailcall
