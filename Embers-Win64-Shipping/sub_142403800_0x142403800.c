// 函数: sub_142403800
// 地址: 0x142403800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 0
int64_t* rax = sub_142575670()
void* rcx = rax[0x23]

if (rcx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rcx = rax[0x23]

*(arg1 + 0x114) = *(rcx + 0x114)
int32_t result = *(rcx + 0x110)
*(arg1 + 0x110) = result
return result
