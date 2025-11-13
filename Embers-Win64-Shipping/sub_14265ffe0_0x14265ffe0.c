// 函数: sub_14265ffe0
// 地址: 0x14265ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x3a0))
int32_t rbx = 0

if (rax.d s<= 0)
    return rax

int64_t r8_1 = 0
int64_t* rax_2 = *(arg1 + 0x398) + 0x18

while (*rax_2 != arg2)
    rbx += 1
    r8_1 += 1
    rax_2 = &rax_2[4]
    
    if (r8_1 s>= rax)
        return rax_2

sub_140868c90(arg1 + 0x3a8, arg2)
int64_t rsi_2 = sx.q(rbx) << 5
int64_t rcx_1 = *(rsi_2 + *(arg1 + 0x398))

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t rcx_3 = *(arg1 + 0x3a0)
int32_t rax_5 = rcx_3 - rbx

if (rax_5 != 1)
    int64_t r9_2 = *(arg1 + 0x398)
    memmove(r9_2 + rsi_2, (sx.q(rbx + 1) << 5) + r9_2, (rax_5 - 1) << 5)
    rcx_3 = *(arg1 + 0x3a0)

*(arg1 + 0x3a0) = rcx_3 - 1
return sub_1405dad20(arg1 + 0x398)
