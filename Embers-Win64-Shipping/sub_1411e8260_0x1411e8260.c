// 函数: sub_1411e8260
// 地址: 0x1411e8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4)
uint64_t r8_1 = zx.q(rax) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
sub_1410b3fe0(arg2, u"PERMUTATION_OPAQUEMASK_TYPE", r8_1)
return sub_1410b3fe0(arg2, PERMUTATION_KERNEL_TYPE", zx.q(((temp1 - temp0) s>> 1) s% 5)) __tailcall
