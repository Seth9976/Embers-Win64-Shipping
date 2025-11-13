// 函数: sub_141fe25b0
// 地址: 0x141fe25b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg1 + 0x10)
int64_t r8_1 = sx.q(arg3) * 0xa
int64_t rax_2 = *(arg1 - 0x28)
uint128_t zmm0 = zx.o((*(rax_1 + (r8_1 << 3) + 0x10)).12:4.q)
uint128_t var_78 = *(rax_1 + (r8_1 << 3))
uint64_t var_68 = zmm0.q
(*(rax_2 + 0x2b0))(arg1 - 0x28, &var_78)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int64_t rcx_1 = sx.q((temp1 - temp0) s>> 1)

if ((arg2.b & 1) != 0)
    return *(&var_78:0xc + (rcx_1 << 2))

return *(&var_78 + (rcx_1 << 2))
