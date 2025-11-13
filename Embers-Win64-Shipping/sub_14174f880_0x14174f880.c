// 函数: sub_14174f880
// 地址: 0x14174f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x10))

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    *(arg1 + 0x10) = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        sub_1405c4f50(arg1 + 8)
    
    float (* rcx_3)[0x4] = rbx * 0x30 + *(arg1 + 8)
    
    if (i_1 != 0)
        uint32_t zmm3[0x4] = data_143ef7300
        int32_t i
        
        do
            float zmm1[0x4] = data_143ef72f0
            zmm1[0].q = zx.o(0) u>> 0x40
            *rcx_3 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            rcx_3[1] = zx.o(0)
            rcx_3 = &rcx_3[3]
            rcx_3[-1] = _mm_and_ps(data_143ef72f0, zmm3)
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d && arg2 != rbx.d)
    *(arg1 + 0x10) = arg2
    return sub_1407c4120(arg1 + 8) __tailcall
