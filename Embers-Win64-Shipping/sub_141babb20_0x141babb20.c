// 函数: sub_141babb20
// 地址: 0x141babb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x431) == 0)
    return data_143dbb3b8

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

return _mm_cvtps_pd(*(rax + 0x520))
