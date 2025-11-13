// 函数: sub_142bede50
// 地址: 0x142bede50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
int32_t r8 = *(arg1 + 0x70)
int64_t rax = *(arg1 + 0x68)
int64_t rcx = *(arg1 + 0x88)
int32_t arg_18 = 0
int64_t rax_1 = sub_142b99a90(rcx, 1, r8, (rbp + 1).d + r8, rax, &arg_18)
*(arg1 + 0x68) = rax_1
int32_t rax_2 = arg_18

if (rax_2 != 0)
    return rax_2

int64_t rdi_2 = zx.q(*(arg1 + 0x70)) + rax_1
memcpy(rdi_2, arg2, rbp.d)
*(rbp + rdi_2) = 0xa
*(arg1 + 0x70) += (rbp + 1).d
return arg_18
