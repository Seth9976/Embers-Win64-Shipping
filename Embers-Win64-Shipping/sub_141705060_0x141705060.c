// 函数: sub_141705060
// 地址: 0x141705060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg3
*arg1 = arg2
arg3 = *(arg2 + 8)
int32_t zmm3

if (arg3 != 0f)
    zmm3 = 1f / arg3
else
    zmm3 = (zx.o(0)).d

arg3 = *(arg2 + 4)
float zmm4

if (arg3 != 0f)
    zmm4 = 1f / arg3
else
    zmm4 = (zx.o(0)).d

int128_t zmm6 = *arg2

if (zmm6.d f!= 0f)
    arg3 = 1f f/ zmm6.d
else
    arg3 = (zx.o(0)).d

arg1[1].d = arg3
*(arg1 + 0xc) = zmm4
arg1[2].d = zmm3
char rax

if (0f f!= *arg2)
    rax = 0
else
    rax = 1

*(arg1 + 0x1c) = rax

if (0f f!= *(arg2 + 4))
    rax = 0
else
    rax = 1

*(arg1 + 0x1d) = rax

if (0f f!= *(arg2 + 8))
    rax = 0
else
    rax = 1

*(arg1 + 0x1e) = rax
*(arg1 + 0x14) = zmm5

if (not(zmm5 == 0f))
    arg1[3].d = 1f / zmm5

return arg1
