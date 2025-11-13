// 函数: sub_1421e03f0
// 地址: 0x1421e03f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t var_30 = 0
float arg_8 = 0f
int32_t var_28
sub_141fe56b0(arg1 + 0x30, &var_28, zx.o(0), arg3, 0, nullptr)
sub_141fe3590(arg1 + 0x30, &arg_10, &arg_8)
float zmm1 = arg_8
float zmm0 = zmm1 f* *(arg2 + 0x1d8)
*(arg2 + 0x1dc) = zmm1 f* *(arg2 + 0x1dc)
*(arg2 + 0x1d8) = zmm0
int64_t rdi = sx.q(*(arg2 + 0x20))
int32_t rax = (rdi + 1).d
*(arg2 + 0x20) = rax

if (rax s> *(arg2 + 0x24))
    sub_1405a4d70(arg2 + 0x18)

int64_t rax_1 = *(arg2 + 0x18)
var_28 = 0x3f800000
int32_t var_24 = 0x3f800000
int32_t var_20 = 0x3f800000
*(rax_1 + (rdi << 3)) = arg1
return sub_141fe97b0(arg2 + 0x1b8, &var_28)
