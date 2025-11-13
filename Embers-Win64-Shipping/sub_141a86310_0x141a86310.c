// 函数: sub_141a86310
// 地址: 0x141a86310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a84fb0(arg2, arg1 + 8)
sub_141a84f20(arg2, arg1 + 0x10, arg3)
sub_141a84f20(arg2, arg1 + 0x20, arg3)
int64_t* r8 = arg2[1]
int32_t* rcx_3 = *r8

if (&rcx_3[1] u<= r8[1])
    void* rax
    rax.b = *rcx_3 != 0
    *(arg1 + 0x30) = rax.b
    int64_t* rax_1 = arg2[1]
    *rax_1 += 4
    return rax_1

int32_t rax_2
rax_2.b = *(arg1 + 0x30) != 0
int32_t arg_8 = rax_2
(*(*arg2 + 0x150))(arg2, &arg_8, 4)
bool cond:1 = arg_8 != 0
*(arg1 + 0x30) = cond:1
return cond:1
