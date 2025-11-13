// 函数: sub_1410aed10
// 地址: 0x1410aed10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x1c28)

if (rcx != 0 && (rcx[0xe] == arg2 || rcx[0xf] == arg2 || rcx[0x10] == arg2))
    (**rcx)(rcx, 1)
    *(arg1 + 0x1c28) = 0
