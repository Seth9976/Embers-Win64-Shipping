// 函数: sub_140a38b30
// 地址: 0x140a38b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0xd0)
int64_t rax_2 = (sx.q(arg2) + 2) * 5
int64_t rdx = *(rdi + (rax_2 << 3))
int64_t* r10 = rdi + (rax_2 << 3)

if (rdx == 0 && r10[4].w == rdx.w)
    *(rdi + sx.q(r10[3].d) * 0x28 + 0x14) = *(r10 + 0x14)
    *(*(arg1 + 0xd0) + sx.q(*(r10 + 0x14)) * 0x28 + 0x18) = r10[3].d
    r10[3].d = arg2 + 2
    *(r10 + 0x14) = arg2 + 2
    rdx = *r10

uint32_t r8_2 = arg3 u>> 8
uint32_t rcx_5 = ((arg4 + 0xff + arg3) u>> 8) - r8_2

if (rcx_5 u>= 0x40)
    *r10 = -1
    return -1

int64_t result = ((1 << rcx_5.b) - 1) << r8_2.b
*r10 = rdx | result
return result
