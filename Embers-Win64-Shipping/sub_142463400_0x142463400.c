// 函数: sub_142463400
// 地址: 0x142463400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char rcx_1

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
*(arg1 + 0x31) &= 0xef
*(arg1 + 0x31) |= sbb.b(rcx_1, rcx_1, rax_3 != 0) & 0x10
return zx.q(neg.d(rax_3))
