// 函数: sub_1405f4d20
// 地址: 0x1405f4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) != 0)
    *(arg1 + 0xa0) = 0

if (*(arg1 + 0xb8) != 0)
    *(arg1 + 0xb8) = 0

int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
    *(arg1 + 0xa8) = 0

*(arg1 + 0x78) = 0
