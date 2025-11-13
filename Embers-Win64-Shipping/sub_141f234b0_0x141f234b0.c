// 函数: sub_141f234b0
// 地址: 0x141f234b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x2b0)

if (rcx != 0)
    sub_141f2b280(rcx, *(arg1 + 0x328))

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* rcx_2 = *(rax + 0x1b0)
(*(*rcx_2 + 0x158))(rcx_2, arg1)
return sub_141ef3920(arg1) __tailcall
