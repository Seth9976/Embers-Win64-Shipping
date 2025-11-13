// 函数: sub_141e932a0
// 地址: 0x141e932a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
uint128_t zmm0 = *arg4
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax
uint128_t var_28 = zmm0
var_28:0xc.d = 0x3f800000

if (rax s> *(arg1 + 0x1c))
    sub_1405a4df0(arg1 + 0x10)

uint64_t* rbx_1 = *(arg1 + 0x10) + rdi * 0x18

if (rbx_1 != 0)
    *(rbx_1 + 0x14) = 0xffffffff

*rbx_1 = *arg2
int32_t rax_2 = arg2[1].d
*(rbx_1 + 0xc) = arg3.d
rbx_1[1].d = rax_2
void arg_18
int32_t rcx_3 = *sub_140ae16d0(&var_28, &arg_18, 1)
*(rbx_1 + 0x14) = arg5
rbx_1[2].d = rcx_3
return arg5
