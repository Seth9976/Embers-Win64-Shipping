// 函数: sub_140fb33e0
// 地址: 0x140fb33e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e19840(arg1, arg3) == 0 || *(arg1 + 0x60d) == 0)
    __builtin_memcpy(arg2, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
        0x11)
else
    __builtin_memcpy(arg2, "\x9a\x99\x99\x3e\x9a\x99\x99\x3e\x9a\x99\x99\x3e\x00\x00\x80\x3f\x00", 
        0x11)

*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0
return arg2
