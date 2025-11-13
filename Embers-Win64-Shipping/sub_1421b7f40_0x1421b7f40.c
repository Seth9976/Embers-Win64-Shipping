// 函数: sub_1421b7f40
// 地址: 0x1421b7f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1421b7d40(arg1)

if (rax == 0xffffffff)
    int32_t rax_1 = *(arg3 + 0x18)
    *arg2 = *(arg3 + 0x10)
    arg2[1].d = rax_1
    return arg2

int64_t rax_3 = sx.q(rax)
int64_t zmm0
zmm0.d = (*(rax_3 + arg3 + 0xc)).d f+ *(arg3 + 0x10)
float zmm1 = *(rax_3 + arg3 + 0x10) f+ *(arg3 + 0x14)
*arg2 = zmm0.d
zmm0.d = (*(rax_3 + arg3 + 0x14)).d f+ *(arg3 + 0x18)
*(arg2 + 4) = zmm1
arg2[1].d = zmm0.d
return arg2
