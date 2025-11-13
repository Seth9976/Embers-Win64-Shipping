// 函数: sub_1423b1860
// 地址: 0x1423b1860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
*(arg1 + 0x10) = arg2

if (arg2 != 0)
    *(arg2 + 8) += 1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

*(arg1 + 0x18) = arg3
*(arg1 + 0x1c) = arg4
