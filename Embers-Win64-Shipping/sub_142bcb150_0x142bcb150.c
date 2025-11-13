// 函数: sub_142bcb150
// 地址: 0x142bcb150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *(arg1 + 0x18)
uint32_t rax = *arg2
uint32_t r9_2 = (zx.d(r10[3]) << 8) + zx.d(r10[1])

if (rax u>= r9_2)
    *arg2 = rax
    return 0

uint32_t r8 = zx.d(*r10)
uint32_t rbx = zx.d(r10[1])
uint32_t rsi = zx.d(r10[2])
uint32_t r10_3 = (rsi << 8) + r8
uint32_t rdx_5

do
    uint32_t rax_1 = rax + 1
    
    if (rax_1 u< r10_3)
        rax_1 = r10_3
    
    uint32_t rcx_1 = rax_1
    rax_1.w &= 0xff
    uint16_t rcx_2 = (rcx_1 u>> 8).w
    
    if (rax_1.w u< r8.w)
        rax_1 = zx.d(r8.w)
    else if (rax_1.w u> rbx.w)
        rcx_2 += 1
        rax_1 = zx.d(r8.w)
    
    uint32_t rdx = zx.d(rcx_2)
    uint32_t rcx_3 = zx.d(rax_1.w)
    rax = (rdx << 8) + rcx_3
    rdx_5 = zx.d(*(*(r10 + 0x10) + (sx.q((rdx - rsi) * (rbx - r8 + 1) - r8 + rcx_3) << 1)))
    
    if (rdx_5 != 0xffff)
        break
while (rax u< r9_2)

*arg2 = rax
return zx.q(rdx_5)
