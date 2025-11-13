// 函数: sub_14219e020
// 地址: 0x14219e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int32_t i = 0
int64_t rsi = sx.q(arg2)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        int32_t zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

void* rax_5 = arg1[0x81]

if (rax_5 != 0 && rsi.d s>= 0 && rsi.d s< *(rax_5 + 0x48))
    int32_t rax_6 = arg1[0x83].d
    
    if (rsi.d s>= rax_6)
        int64_t r15_1 = sx.q(rax_6)
        int32_t rax_7 = r15_1.d + rsi.d - rax_6 + 1
        arg1[0x83].d = rax_7
        
        if (rax_7 s> *(arg1 + 0x41c))
            sub_1405a4d70(&arg1[0x82])
        
        memset(arg1[0x82] + (r15_1 << 3), 0, sx.q(rsi.d - rax_6 + 1) << 3)
    
    *(arg1[0x82] + (rsi << 3)) = arg3
    *(arg1 + 0x432) |= 0x40

if (arg1[0xc1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_6 = *(rsi_1 + arg1[0xc0])
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x210))(rcx_6, zx.q(i))
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0xc1].d)

sub_141ee8470(arg1)
return sub_141ee8490(arg1) __tailcall
