// 函数: sub_142a6ef40
// 地址: 0x142a6ef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)

if (rax s> 0)
    *arg2 = rax
    return 0

struct icu_64::AndConstraint::VTable** rax_2 = j_sub_142a7dd00(0x38)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1] = 0
    rax_2[2] = 0
    rax_2[4] = 0
    rax_2[6] = 0
    *rax_2 = &icu_64::AndConstraint::`vftable'
    rax_2[1].d = 0
    rax_2[3] = 0
    rax_2[4].w = 0
    *(rax_2 + 0x24) = 0
    rax_2[5] = 0
    rax_2[6].d = 0
    *(rax_2 + 0xc) = -1

*(arg1 + 0x28) = rax_2

if (rax_2 == 0)
    *arg2 = 7

return *(arg1 + 0x28)
