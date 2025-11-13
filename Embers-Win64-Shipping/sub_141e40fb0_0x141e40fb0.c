// 函数: sub_141e40fb0
// 地址: 0x141e40fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x50)
int128_t zmm7
zmm7.d = sub_141e24dc0(arg1, 0).d f+ *(arg1 + 0x34)

if (rbx == 0)
    return zmm7

int128_t zmm6

if (*(arg1 + 0x50) == 0)
    zmm6 = zx.o(0)
else
    zmm6.d = sub_141e24dc0(arg1 + 0x60, 0).d f- sub_141e24dc0(arg1, 0).d

zmm6.d = zmm6.d f+ zmm7.d
zmm6.d = zmm6.d f+ *(arg1 + 0x38)
return zmm6
