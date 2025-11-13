// 函数: sub_14218fc50
// 地址: 0x14218fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xf0) == 0)
    *arg2 = 0x310
    *arg3 = 0x310
    return 0x310

int32_t rax = *(arg1 + 0x114)
int32_t rcx_1 = *(arg1 + 0x120) * rax
*arg2 = *(arg1 + 0x118) * rax + 0x310
*arg3 = rcx_1 + 0x310
return rcx_1 + 0x310
