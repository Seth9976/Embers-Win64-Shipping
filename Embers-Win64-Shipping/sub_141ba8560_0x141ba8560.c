// 函数: sub_141ba8560
// 地址: 0x141ba8560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x139) = arg2
int64_t* rcx = *(arg1 + 0x150)

if (rcx == 0)
    return 

if (rcx[0x67].b == arg2)
    return 

rcx[0x67].b = arg2
return sub_140e19ef0(rcx, 1) __tailcall
