// 函数: sub_142ac33b0
// 地址: 0x142ac33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= arg1[2].d)
    int64_t* rax_3
    rax_3.b = 0
    return rax_3

int64_t rcx = *arg1
void* r9 = *(arg3 + 8)

if (rcx == 0)
    int64_t rax_2
    rax_2.b = 1
    *(arg3 + 0x10) = *(arg1[1] + (sx.q(arg2) << 2))
    return rax_2

int32_t rdx = *(r9 + 0x34)
uint32_t rcx_1 = zx.d(*(rcx + (sx.q(arg2) << 1)))

if (rcx_1 s>= rdx)
    rcx_1 += *(r9 + 0x30) - rdx

int64_t rax
rax.b = 1
*(arg3 + 0x10) = rcx_1 | 0x60000000
return rax
