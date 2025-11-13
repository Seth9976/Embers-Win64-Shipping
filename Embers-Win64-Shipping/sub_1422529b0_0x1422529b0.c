// 函数: sub_1422529b0
// 地址: 0x1422529b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg3.d f* *(arg2 + 0x20)
int128_t zmm6 = arg3
arg3.d = arg3.d f* *(arg2 + 0x10)
sub_1422348a0(arg1, zmm6.d f* *(arg2 + 0xc), arg3.d, zmm3)
float zmm1

if ((*(arg2 + 8) & 1) == 0)
    zmm1 = zmm6.d f* *(arg2 + 0x14)
    arg3.d = zmm6.d f* *(arg2 + 0x18)
    zmm6.d = zmm6.d f* *(arg2 + 0x1c)
else
    zmm1 = (zx.o(0)).d
    arg3 = zx.o(0)
    zmm6 = zx.o(0)

return sub_142234c30(arg1, zmm1, arg3.d, zmm6.d) __tailcall
