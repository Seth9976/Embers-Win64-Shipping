// 函数: sub_141f12990
// 地址: 0x141f12990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xb0)
int64_t var_28
float var_20

if (rax == 0)
    var_28 = data_143a2d758
    var_20 = data_143a2d760
else
    float zmm1[0x4] = *(rax + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    temp0_2[0] = temp0_2[0] f- *(rax + 0x114)
    var_28:4.d = temp0_1[0]
    var_20 = temp0_2[0]

int64_t var_1c = var_28
float var_14 = var_20
sub_141e90280(arg2, nullptr, &var_1c)
return arg2
