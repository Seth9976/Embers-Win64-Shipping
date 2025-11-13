// 函数: sub_1419aa420
// 地址: 0x1419aa420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0 = *(arg2 + 0x1c)
*(arg2 + 0x1c) -= 1

if (temp0 != 1)
    return 

*(arg2 + 0x80) = 0
*(arg2 + 0x10) = 0
int32_t arg_10
sub_140865c40(arg1 + 0x20, &arg_10, arg2)
int64_t rax = sx.q(arg_10)
int64_t r8_2

if (rax.d == 0xffffffff)
    r8_2 = 0
else
    r8_2 = *(arg1 + 0x20) + rax * 0x18

int64_t* rcx_1 = *(r8_2 + 8)
*(r8_2 + 8) = 0

if (rcx_1 != 0)
    jump(*(*rcx_1 + 0x38))
