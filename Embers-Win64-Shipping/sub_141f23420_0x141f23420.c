// 函数: sub_141f23420
// 地址: 0x141f23420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* rcx = *(rax + 0x1b0)
(*(*rcx + 0x158))(rcx, arg1)
return sub_141ef3920(arg1) __tailcall
