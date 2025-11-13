// 函数: sub_1421962d0
// 地址: 0x1421962d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        float zmm0 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        rcx, arg2 = sub_14218e220(arg1, zmm0)

char rax_5 = arg1[0x86].b

if ((*(arg1 + 0x8a) & 1) == 0 || (rax_5 & 0x10) != 0)
    rcx.b = 0
else
    rcx.b = 0x20

arg1[0x86].b = (rax_5 & 0xdf) | rcx.b
(*(*arg1 + 0x340))(arg1, 0)
sub_142199780(arg1, not.b(*(arg1 + 0x431) u>> 4) & 1, arg2)
arg1[0xb1] = 0
return sub_141f20b40(arg1) __tailcall
