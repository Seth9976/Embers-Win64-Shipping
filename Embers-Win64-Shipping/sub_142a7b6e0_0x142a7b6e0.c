// 函数: sub_142a7b6e0
// 地址: 0x142a7b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0

if (arg2 s< *(arg1 + 0x68))
    void* rcx = *(arg1 + 0x20)
    int64_t rdx = arg2 - *(rcx + 0x20)
    
    if (arg2 - *(rcx + 0x20) s< 0 || rdx s>= sx.q(*(rcx + 0x1c))
            || *(*(rcx + 0x30) + (rdx << 1)) u>= 0xdc00)
        sub_142aeacd0(rcx, arg2)
    else
        *(rcx + 0x28) = rdx.d
    
    void* rdx_2 = *(arg1 + 0x20)
    int64_t rax_3 = sx.q(*(rdx_2 + 0x28))
    int16_t r8_1
    
    if (rax_3.d s< *(rdx_2 + 0x2c))
        r8_1 = *(*(rdx_2 + 0x30) + (rax_3 << 1))
    
    uint32_t rdi_1
    
    if (rax_3.d s>= *(rdx_2 + 0x2c) || r8_1 u>= 0xd800)
        rdi_1 = sub_142aea4f0(rdx_2, arg3)
    else
        rdi_1 = zx.d(r8_1)
    
    if (sub_142af4740(zx.q(rdi_1), 0xb) != 0)
        return 0
    
    if (sub_142a53dd0(rdi_1) == 0x10)
        return 0
    
    rbp = zx.q(sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + 8), zx.q(rdi_1)))
else
    *(arg1 + 0xa8) = 1

uint64_t rsi
rsi.b = 0

while (true)
    void* rcx_7 = *(arg1 + 0x20)
    int64_t rdx_4 = sx.q(*(rcx_7 + 0x28))
    int64_t rax_10
    
    if (rdx_4.d s> *(rcx_7 + 0x1c))
        rax_10 = (*(*(rcx_7 + 0x38) + 0x40))()
    else
        rax_10 = rdx_4 + *(rcx_7 + 0x20)
    
    if (rax_10 s<= *(arg1 + 0x60))
        break
    
    void* rdx_5 = *(arg1 + 0x20)
    int32_t rax_12 = *(rdx_5 + 0x28)
    uint32_t rdi_2
    
    if (rax_12 s<= 0 || *(*(rdx_5 + 0x30) + (sx.q(rax_12 - 1) << 1)) u>= 0xd800)
        rdi_2 = sub_142aeabf0(rdx_5)
    else
        *(rdx_5 + 0x28) = rax_12 - 1
        rdi_2 = zx.d(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(rax_12 - 1) << 1)))
    
    if (sub_142af4740(zx.q(rdi_2), 0xb) == 0 && sub_142a53dd0(rdi_2) != 0x10)
        rsi = zx.q(sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + 8), zx.q(rdi_2)))
        break

rsi.b ^= rbp.b
return rsi.b
