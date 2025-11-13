// 函数: sub_1423c1960
// 地址: 0x1423c1960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x78)

if (rax == 0)
    return 0xff7fffff

return _mm_cvtpd_ps(__maxsd_xmmsd_memsd(zx.o(*(rax + 0x28))[0], *(arg1 + 0x98)))
