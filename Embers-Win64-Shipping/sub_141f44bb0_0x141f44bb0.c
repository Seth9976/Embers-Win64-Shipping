// 函数: sub_141f44bb0
// 地址: 0x141f44bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f21940(arg1)
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x102)
    int32_t zmm1_1 = (zx.o(0)).d
    float zmm0_1 = 1f f- *(arg1 + 0x114)
    
    if (not(zmm0_1 < 0f))
        zmm1_1 = _mm_min_ss(zmm0_1, 0x3f800000)
    
    arg1[0x1f].b &= 0xf7
    arg1[0x23].d = zmm1_1

return result
