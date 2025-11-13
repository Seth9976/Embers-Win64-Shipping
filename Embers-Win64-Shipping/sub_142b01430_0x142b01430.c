// 函数: sub_142b01430
// 地址: 0x142b01430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *(arg1 + 0x10)

if (rsi u>= *(arg1 + 0x18))
    *arg2 = 8
    return 0xffff

int32_t rbp_1 = *(arg1 + 0x18) - rsi.d

if (rbp_1 s>= 4)
    uint32_t rdx_7 =
        ((zx.d(*(rsi + 3)) << 8 | zx.d(*(rsi + 2))) << 8 | zx.d(*(rsi + 1))) << 8 | zx.d(*rsi)
    *(arg1 + 0x10) = &rsi[1]
    
    if (rdx_7 u<= 0x10ffff && (rdx_7 & 0xfffff800) != 0xd800)
        return zx.q(rdx_7)
    
    *(*(arg1 + 8) + 0x41) = *rsi
    *(*(arg1 + 8) + 0x40) = 4
    *arg2 = 0xc
else
    int64_t rbx_1 = sx.q(rbp_1)
    memcpy(*(arg1 + 8) + 0x41, rsi, rbx_1.d)
    *(*(arg1 + 8) + 0x40) = rbp_1.b
    *(arg1 + 0x10) = rbx_1 + rsi
    *arg2 = 0xb

return 0xffff
