// 函数: sub_141c49ee0
// 地址: 0x141c49ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a12c08 == 0 || ((arg1[0x41].d).b & 3) != 3 || arg1[0x16].d == 0)
    return 

int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x44)))
uint128_t zmm6
zmm6.q = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x7c))).q f/ temp0_1
arg1[0x3f] = arg1[0x40] f+ arg1[0x3f]
*(arg1 + 0x144) = 0
arg1[0x28].d
arg1[0x28].d = 0

if (not(arg1[0x3f] f<= arg1[0x3e]))
    double i
    
    do
        int32_t rax_3 = 0
        
        if (0 == *(arg1 + 0x144))
            *(arg1 + 0x144) = 0
        else
            rax_3 = *(arg1 + 0x144)
        
        if (rax_3 s>= 0 && rax_3 s< arg1[0x16].d)
            int32_t rax_4 = 0
            
            if (0 == *(arg1 + 0x144))
                *(arg1 + 0x144) = 0
            else
                rax_4 = *(arg1 + 0x144)
            
            sub_141c488a0(sx.q(rax_4) * 0x38 + arg1[0x15])
        
        sub_141c48a50(arg1)
        i = zmm6.q f+ arg1[0x3e]
        arg1[0x3e] = i
    while (i f< arg1[0x3f])

arg1[0x28].d
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144)
*(arg1 + 0x144) = 0xffffffff
