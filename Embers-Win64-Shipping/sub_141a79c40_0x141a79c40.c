// 函数: sub_141a79c40
// 地址: 0x141a79c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t rcx_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    rcx_1 = sub_140d30490(arg2, &arg_8, r8_1)
else
    rcx_1 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
int32_t rax_3 = arg_8
*(arg2 + 0x20) = rdi + rax_2
*(arg1 + 0xb0) &= 0xfffffffd
*(arg1 + 0xb0) |= sbb.d(rcx_1, rcx_1, rax_3 != 0) & 2
return zx.q(neg.d(rax_3))
