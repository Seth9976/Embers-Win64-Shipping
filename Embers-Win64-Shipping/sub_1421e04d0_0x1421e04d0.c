// 函数: sub_1421e04d0
// 地址: 0x1421e04d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x78)).b
int32_t zmm1 = (zx.o(0)).d
float zmm4

if ((rax & 4) == 0)
    zmm4 = (zx.o(0)).d
else
    zmm4 = 1f

float zmm3

if ((rax & 2) == 0)
    zmm3 = (zx.o(0)).d
else
    zmm3 = 1f

if ((rax & 1) != 0)
    zmm1 = 0x3f800000

float var_28 = zmm1
float var_24 = zmm3
float var_20 = zmm4
int64_t* rdx = *(arg1 + 0x70)
float var_18 = 1f f- zmm1
int32_t var_14 = 1f - zmm3
float var_10 = 1f - zmm4
sub_141fe76e0(arg2 + 0x1b8, rdx)
sub_141febdc0(arg2 + 0x1b8, &var_28)
return sub_141fd9e80(arg2 + 0x1b8, &var_18)
