// 函数: sub_140f010e0
// 地址: 0x140f010e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (sub_140f053d0(arg1) != 0)
    rax_1 = *(arg1 + 0x600)
else
    rax_1 = *(arg1 + 0x5f8)

uint128_t zmm0

if (*(rax_1 + 0x6e8) u> 1)
    zmm0 = data_14399f5c0
else
    void* rax_3
    
    if (sub_140f053d0(arg1) != 0)
        rax_3 = *(arg1 + 0x600)
    else
        rax_3 = *(arg1 + 0x5f8)
    
    int128_t* rcx_1 = *(rax_3 + 0x6f0)
    uint128_t zmm0_1
    
    if (rcx_1 == 0)
        zmm0_1 = *(rax_3 + 0x6d8)
    else
        zmm0_1 = *rcx_1
    
    char rax_4
    rax_4, zmm0 = sub_140d9f540(arg1 + 0x6c0, zmm0_1.q)
    float zmm2
    
    if (rax_4 == 0)
        zmm2 = (zx.o(0)).d
    else
        float zmm0_2 = sub_140da85e0(arg1 + 0x6c0, zmm0)
        zmm2 = (sinf(zmm0_2 * 12.566371f).d + 1f) * 0.5f * (1f - zmm0_2)
    
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
    zmm0.d = zmm2
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)

*arg2 = zmm0
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
return arg2
