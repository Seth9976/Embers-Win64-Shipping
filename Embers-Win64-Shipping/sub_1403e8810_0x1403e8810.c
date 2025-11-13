// 函数: sub_1403e8810
// 地址: 0x1403e8810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s>= 0)
    if (arg1 s>= 0xc0)
        return 0x7fff
    
    int64_t rcx_2 = sx.q(arg1 s>> 5) << 2
    return zx.q(sx.d(*(rcx_2 + 0x1436fdac8)) * (arg1 & 0x1f) + *(rcx_2 + 0x1436fdae0))

int32_t rdx = neg.d(arg1)

if (rdx s>= 0xc0)
    return 0

int64_t rax_3 = sx.q(rdx s>> 5)
return zx.q(*((rax_3 << 2) + 0x1436fdaf8) - sx.d(*((rax_3 << 2) + 0x1436fdac8)) * (rdx & 0x1f))
