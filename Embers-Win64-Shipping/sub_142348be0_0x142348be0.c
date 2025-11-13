// 函数: sub_142348be0
// 地址: 0x142348be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0

if (*(arg3 + 0xc) == 0)
    float zmm5 = *(arg2 + 0x28)
    float zmm2 = *(arg2 + 0x24)
    int128_t zmm8 = *(arg3 + 0x1c)
    int128_t zmm9 = *(arg2 + 0x20)
    int128_t zmm10 = *(arg3 + 0x18)
    int128_t zmm11 = *(arg2 + 0x1c)
    float zmm0 = zmm10.d f- *(arg2 + 0x2c)
    zmm10.d = zmm10.d f- *(arg2 + 0x2c)
    int128_t zmm6
    zmm6.d = 1f / (zmm11.d * zmm5 - zmm9.d * zmm2)
    zmm11.d = zmm11.d f* zmm6.d
    zmm9.d = zmm9.d f* zmm6.d
    zmm5 = zmm5 f* zmm6.d * zmm0
    zmm0 = zmm8.d
    zmm8.d = zmm8.d f- *(arg2 + 0x30)
    zmm9.d = zmm9.d f* zmm10.d
    zmm11.d = zmm11.d f* zmm8.d
    zmm11.d = zmm11.d f- zmm9.d
    zmm11.d = zmm11.d f* *(arg1 + 0x1f8)
    zmm11.d = zmm11.d f+ zmm11.d
    zmm5 = (zmm5 - zmm2 f* zmm6.d * (zmm0 f- *(arg2 + 0x30))) f* *(arg1 + 0x1f8)
    zmm11.d = zmm11.d f+ 0.5f
    result = int.d(zmm11.d) s>> 1
    *(arg1 + 0x1ec) = result
    *(arg1 + 0x1e8) = int.d(zmm5 + zmm5 + 0.5f) s>> 1

return result
