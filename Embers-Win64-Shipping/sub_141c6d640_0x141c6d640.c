// 函数: sub_141c6d640
// 地址: 0x141c6d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
    char rax = *(arg1 + 0xe0)
    
    if ((rax & 1) != 0)
        *(arg1 + 0xba) = 1
        *(arg1 + 0xe0) = rax & 0xfe

return sub_140ce8e80(arg1, arg2) __tailcall
