// 函数: sub_1421fc830
// 地址: 0x1421fc830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x48)

if (rdx s<= 0)
    *(arg1 + 0x68) = ((*(arg1 + 0x54) & 5) != 4) + 1
    int32_t rax_4 = *(arg1 + 0x64)
    
    if (rdx s>= rax_4)
        rax_4 = rdx
    
    return zx.q(rax_4 * 0x1c + 0x48)

int32_t rax = *(arg1 + 0x64)
*(arg1 + 0x68) = 0

if (rdx s>= rax)
    rax = rdx

return zx.q(rax * 0x1c + 0x48)
