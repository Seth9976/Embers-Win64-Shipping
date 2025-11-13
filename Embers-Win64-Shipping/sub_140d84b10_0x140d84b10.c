// 函数: sub_140d84b10
// 地址: 0x140d84b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0x40a9ab8f620ce2a5 || arg2[1] != 0x589b59753cdecb86)
    return sub_140d84a60(arg1, arg2, arg3) __tailcall

void* rdx = &arg1[2]

if (arg1 == 0x28)
    rdx = nullptr

*arg3 = rdx
(*(*arg1 + 8))(arg1, arg4, arg5, 0)
return 0
