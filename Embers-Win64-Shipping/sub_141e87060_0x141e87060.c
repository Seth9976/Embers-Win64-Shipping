// 函数: sub_141e87060
// 地址: 0x141e87060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* (* var_58)(int64_t* arg1)
float zmm0[0x4]

if (sub_140a80ea0() == 0)
    void** const var_38 = &data_142d42ed8
    zmm0 = arg1.o
    int64_t var_48 = 0
    *(arg1 + 0xa0) = arg2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    temp0_1[0] = arg2[0]
    var_58 = sub_141e76400
    float var_30[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    return sub_141e85cb0(&var_58, arg3)

zmm0 = zx.o(0)

if (not(arg2[0] < 0f))
    zmm0 = __minss_xmmss_memss(arg2[0], 0x3f800000)

*(arg1 + 0x9c) = zmm0[0]
void** const var_38_1 = &data_142d42ed8
zmm0 = arg1.o
int64_t var_48_1 = 0
var_58 = sub_141e76810
float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
temp0_4[0] = arg2[0]
float var_30_1[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
return sub_141e85f30(&var_58)
