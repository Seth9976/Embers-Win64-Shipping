// 函数: sub_142c20d00
// 地址: 0x142c20d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_6

while (true)
    if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) != 1)
        rdx_6 = 0
        break
    
    rdx_6 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
    
    if (rdx_6 != 7)
        break
    
    uint32_t rdx_10 = (zx.d(arg1[5]) << 0x10) + (zx.d(arg1[6]) << 8) + (zx.d(arg1[4]) << 0x18)
    uint32_t rax_5 = zx.d(arg1[7])
    
    if (rdx_10 != neg.d(rax_5))
        arg1 = &arg1[zx.q(rdx_10 + rax_5)]
    else
        arg1 = &data_14369a5d0

uint32_t result
result.b = rdx_6 == 8
return result
