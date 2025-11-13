// 函数: sub_142af90a0
// 地址: 0x142af90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    sub_142a7dcd0(rcx)

if (*(arg1 + 0x32) != 0)
    sub_142a7dcd0(*(arg1 + 0x38))

void* rcx_2 = *(arg1 + 0x118)

if (rcx_2 != 0)
    sub_142a924e0(rcx_2)

int64_t rcx_3 = *(arg1 + 0x108)

if (rcx_3 == 0)
    return 

return sub_142a7dcd0(rcx_3) __tailcall
