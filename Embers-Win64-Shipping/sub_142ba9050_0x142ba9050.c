// 函数: sub_142ba9050
// 地址: 0x142ba9050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(*(*arg1 + 0x90) + 0x78)

if (rax != 0x28)
    if (rax == 0x23)
        goto label_142ba9071
else if (*(arg1 + 0x373) == 0 || rax == 0x23)
label_142ba9071:
    int64_t rax_1 = *(arg2 + 0x18)
    uint64_t rcx = zx.q(arg3)
    *(rax_1 + (rcx << 3)) += arg4

int64_t result = *(arg2 + 0x28)
uint64_t rcx_1 = zx.q(arg3)
*(result + rcx_1) |= 8
return result
