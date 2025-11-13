// 函数: sub_1420bce50
// 地址: 0x1420bce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint128_t zmm0 = *(arg1 + 0x10)
void var_18
int64_t* rax_1 = sub_140596d10(&var_18, arg2)
int64_t result = zmm0.q(sx.q(_mm_bsrli_si128(zmm0, 8).d) + rax, rax_1, zx.q(arg3))
int64_t rcx_5 = *arg2

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
