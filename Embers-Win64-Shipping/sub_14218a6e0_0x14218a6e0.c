// 函数: sub_14218a6e0
// 地址: 0x14218a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
void* rcx = arg1[0xca]

if (rcx != 0)
    char rsi_1 = *(arg1 + 0x432)
    *(arg1 + 0x432) = rsi_1 | 8
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
            arg3 = sub_14218eae0(&data_143a2edd8)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            arg3 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, arg3)
    
    *(arg1 + 0x432) &= 0xf7
    *(arg1 + 0x432) |= rsi_1 & 8

if (data_143a2ed00 != 0)
    rdi = arg1[0x81]
else
    arg1[0x81] = 0

if (rdi != 0 && (*(rdi + 0xb0) & 8) != 0)
    void* rdi_1 = arg1[0x14]
    arg1[7].b = 0
    
    if (rdi_1 != 0)
        void* rax_7 = sub_1424a23e0()
        void* r8_1 = *(rdi_1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            *(rdi_1 + 0x30) = 0

uint64_t result = sub_141f0e650(arg1, arg2)
*(arg1 + 0x431) |= 4
return result
