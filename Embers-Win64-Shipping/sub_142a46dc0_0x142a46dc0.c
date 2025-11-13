// 函数: sub_142a46dc0
// 地址: 0x142a46dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xd0)

if (rcx != *(arg1 + 0x28))
    sub_142a7dcd0(rcx)

int64_t rcx_1 = *(arg1 + 0x28)
*(arg1 + 0xd0) = 0

if (rcx_1 != arg1 + 0x30)
    sub_142a7dcd0(rcx_1)
    *(arg1 + 0x28) = arg1 + 0x30

*(arg1 + 8) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x1a) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0xd8) = 1
*(arg1 + 0x20) = 0
