// 函数: sub_141acd8a0
// 地址: 0x141acd8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_140638970(arg1)
    
    float (* rcx_2)[0x4] = rbx * 0x30 + *arg1
    
    if (i_1 != 0)
        uint32_t zmm3[0x4] = data_143f2b820
        int32_t i
        
        do
            float zmm1[0x4] = data_143f2b810
            zmm1[0].q = zx.o(0) u>> 0x40
            *rcx_2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            rcx_2[1] = zx.o(0)
            rcx_2 = &rcx_2[3]
            rcx_2[-1] = _mm_and_ps(data_143f2b810, zmm3)
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_141acb1f0(arg1, arg2, rbx.d - arg2, arg3) __tailcall
