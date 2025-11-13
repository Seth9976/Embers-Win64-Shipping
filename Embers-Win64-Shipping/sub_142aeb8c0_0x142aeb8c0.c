// 函数: sub_142aeb8c0
// 地址: 0x142aeb8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142af0340(arg1, 1)
void* r10 = *(*(arg1 + 0x10) + 0x20)
int32_t rdx = *(r10 + 8)

if (rdx == *(arg1 + 0x19c))
    return zx.q(*(arg1 + 0x198))

int32_t r8

if (rdx - 1 s< 0 || rdx - 1 s>= *(r10 + 8))
    r8 = 0
else
    r8 = *(*(r10 + 0x18) + (sx.q(rdx - 1) << 3))

int32_t rdi = rdx - 2

if ((r8 & 0xff000000) != 0x5000000)
    rdi = rdx - 1

if (arg2 != 0)
    int32_t* r9_1 = *(arg1 + 8)
    int64_t rdx_2 = 0x7000000
    
    if (*r9_1 s> 0)
        rdx_2 = 0
    
    sub_142aeb330(r10, rdx_2, rdi, r9_1)

return zx.q(rdi)
