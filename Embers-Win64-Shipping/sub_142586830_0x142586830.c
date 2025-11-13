// 函数: sub_142586830
// 地址: 0x142586830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
char r10 = 0
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int32_t rdx = *(arg1 + 0x34)

if (rdx s>= 0)
    r10 = 0xc
    
    if (rdx s< 0xc)
        r10 = rdx.b

int32_t rax_3 = *(arg1 + 0x38) + 6

if (rax_3 s< 6)
    int32_t rax_4 = 0x40 << r10
    *arg3 = rax_4
    return rax_4

char rcx_1 = 0xa

if (rax_3 s< 0xa)
    rcx_1 = rax_3.b

int32_t rax_6 = 1 << rcx_1 << r10
*arg3 = rax_6
return rax_6
