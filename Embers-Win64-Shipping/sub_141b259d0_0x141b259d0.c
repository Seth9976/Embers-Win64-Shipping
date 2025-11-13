// 函数: sub_141b259d0
// 地址: 0x141b259d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0
int512_t zmm6
zmm0, zmm6 = sub_141a47dc0(arg1, arg2)
zmm6.o = zmm0
uint8_t result = (*(arg1 + 0xe0) u>> 9).b

if ((result & 1) != 0)
    int32_t arg_8 = 0x3f800000
    int512_t zmm0_1
    int128_t zmm6_1
    result, zmm0_1, zmm6_1 = sub_141a467f0(arg1 + 0x688, arg2, &arg_8)
    zmm6_1.d = zmm6_1.d f* arg_8
    zmm0_1.o = zmm6_1

return result
