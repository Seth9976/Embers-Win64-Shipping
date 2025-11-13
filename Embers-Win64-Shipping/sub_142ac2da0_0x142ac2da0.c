// 函数: sub_142ac2da0
// 地址: 0x142ac2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= arg1[4].d)
    int64_t rax
    rax.b = 0
    return rax

int64_t rax_1 = *arg1
int64_t rdx = sx.q(arg2)

if (rax_1 == 0)
    int64_t rcx_5 = sx.q(*(arg1[1] + (rdx << 2)))
    int64_t rax_4 = *(arg4 + 8)
    int64_t rcx_6
    
    if (rcx_5.d s< 0)
        rcx_6 = (zx.q(rcx_5.d) & 0x7fffffff) + *(rax_4 + 0x18)
    else
        rcx_6 = rcx_5 + *(rax_4 + 8)
    
    *arg3 = rcx_6
else
    uint64_t r11_1 = zx.q(*(rax_1 + (rdx << 1)))
    void* r8 = *(arg4 + 8)
    int64_t rax_2 = sx.q(*(r8 + 0x24))
    
    if (r11_1.d s>= rax_2.d)
        *arg3 = *(r8 + 0x18) - rax_2 + r11_1
    else
        *arg3 = zx.q(r11_1.d) + *(r8 + 8)

int64_t rax_5 = arg1[2]

if (rax_5 == 0)
    int64_t rax_8
    rax_8.b = 1
    *(arg4 + 0x10) = *(arg1[3] + (rdx << 2))
    return rax_8

uint32_t rcx_8 = zx.d(*(rax_5 + (rdx << 1)))
uint64_t rax_6 = *(arg4 + 8)
int32_t rdx_1 = *(rax_6 + 0x34)

if (rcx_8 s>= rdx_1)
    rcx_8 += *(rax_6 + 0x30) - rdx_1

rax_6.b = 1
*(arg4 + 0x10) = rcx_8 | 0x60000000
return rax_6
