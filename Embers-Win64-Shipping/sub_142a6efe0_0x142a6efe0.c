// 函数: sub_142a6efe0
// 地址: 0x142a6efe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x18)
void* rbx = arg1

if (rax s> 0)
    *arg2 = rax
    return 0

void* rax_2 = arg1 + 0x10

if (*(arg1 + 0x10) != 0)
    do
        rbx = *rax_2
        rax_2 = rbx + 0x10
    while (*(rbx + 0x10) != 0)

struct icu_64::AndConstraint::VTable** rax_3 = j_sub_142a7dd00(0x38)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1] = 0
    rax_3[2] = 0
    rax_3[4] = 0
    rax_3[6] = 0
    *rax_3 = &icu_64::AndConstraint::`vftable'
    rax_3[1].d = 0
    rax_3[3] = 0
    rax_3[4].w = 0
    *(rax_3 + 0x24) = 0
    rax_3[5] = 0
    rax_3[6].d = 0
    *(rax_3 + 0xc) = -1

*(rbx + 8) = rax_3

if (rax_3 == 0)
    *arg2 = 7

return *(rbx + 8)
