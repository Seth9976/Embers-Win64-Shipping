// 函数: sub_141219870
// 地址: 0x141219870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
*arg1 = arg2

if (arg2 != 0)
    *(arg2 + 8) += 1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

return arg1
