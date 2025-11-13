// 函数: sub_142b7ff10
// 地址: 0x142b7ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x338)

if (rdx == 0)
    return 0xffffffff

int32_t result = sub_142a486d0(*(arg1 + 0x330), rdx - 1)
int32_t rcx_1
rcx_1.b = result u> 0xffff
*(arg1 + 0x338) -= rcx_1 + 1
return result
