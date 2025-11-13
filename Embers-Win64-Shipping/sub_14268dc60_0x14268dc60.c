// 函数: sub_14268dc60
// 地址: 0x14268dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426623c0(arg1)
float zmm0 = *(arg1 + 0x414)
int32_t zmm1 = arg1[0x82].d

if (not(zmm1 f< zmm0))
    zmm0 = _mm_min_ss(zmm0 * 1024f, zmm1)

arg1[0x82].d = zmm0
(*(*arg1 + 0x798))(arg1, zmm1)
sub_142676a20(arg1, arg1 + 0x444, &arg1[0x89])
int32_t result = 0x40 - arg1[0x89].d - *(arg1 + 0x444)
*(arg1 + 0x44c) = result
return result
