// 函数: sub_140e12810
// 地址: 0x140e12810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x779)

if ((rax & 2) != 0)
    int32_t zmm1 = *(arg1 + 0x7a4)
    arg3 = *(arg1 + 0x7a0)
    *arg2 = 0
    arg2[1].d = arg3.d
    *(arg2 + 0xc) = zmm1
    return arg2

if ((rax & 1) != 0)
    sub_140e15ab0(arg1, arg2)
    return arg2

int128_t zmm8
zmm8.d = (*(arg1 + 0x794)).d f+ *(arg1 + 0x7a4)
int128_t zmm9 = *(arg1 + 0x7c0)
int128_t zmm10
zmm10.d = (*(arg1 + 0x790)).d f+ *(arg1 + 0x7a0)
uint128_t var_68
uint128_t* rax_3
float zmm6_1
float zmm7_1
rax_3, zmm6_1, zmm7_1 = sub_140e18fa0(arg1, &var_68, 0, arg3)
zmm10.d = zmm10.d f- *(rax_3 + 8)
zmm8.d = zmm8.d f- *(rax_3 + 0xc)
zmm7_1 = zmm7_1 + *(rax_3 + 4) f+ zmm9.d
arg2[1].d = zmm10.d
*arg2 = zmm6_1 f+ *rax_3
*(arg2 + 4) = zmm7_1
*(arg2 + 0xc) = zmm8.d
return arg2
