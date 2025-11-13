// 函数: sub_14119bfa0
// 地址: 0x14119bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
*(arg1 + 0x18) = arg2

if (arg2 != 0)
    *(arg2 + 8) += 1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0 && arg2 != 0)
    (**rcx_1)(rcx_1, arg2)
