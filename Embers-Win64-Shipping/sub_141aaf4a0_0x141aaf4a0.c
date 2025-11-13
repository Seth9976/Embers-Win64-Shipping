// 函数: sub_141aaf4a0
// 地址: 0x141aaf4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)

if (rcx != 0)
    int64_t r8_1 = *(*arg2 + 0xb0)
    
    if (r8_1 != 0 && rcx[7] == r8_1)
        return sub_141e3eb50(rcx, arg1 + 0xc8, &arg2[1], &arg2[4], arg3) __tailcall

if (arg2[8].b != 0)
    return sub_141e47c50(&arg2[1], arg3) __tailcall

return sub_141acb4e0(&arg2[1], arg2[3]) __tailcall
