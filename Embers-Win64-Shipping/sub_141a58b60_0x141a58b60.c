// 函数: sub_141a58b60
// 地址: 0x141a58b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t r8 = 0
int64_t rsi = sx.q(arg2)
int32_t i_2 = rdi[1].d
int32_t i = i_2
int64_t r10 = *rdi

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + r8
        
        if (*(r10 + (sx.q(rax_4) << 2)) s< arg3)
            r8 = rax_4 + rcx_1
    while (i s> 0)

int32_t rax_5 = (rsi + 1).d

if (r8 s>= rsi.d && r8 s<= rax_5)
    *(r10 + (rsi << 2)) = arg3
    return zx.q(rsi.d)

int32_t rbp = r8 - 1

if (r8 s<= rsi.d)
    rbp = r8

int32_t rcx_6 = i_2 - rsi.d

if (rcx_6 != 1)
    memmove(r10 + (rsi << 2), r10 + (sx.q(rax_5) << 2), (rcx_6 - 1) << 2)
    i_2 = rdi[1].d

rdi[1].d = i_2 - 1
int64_t* r14 = *arg1
int32_t r15 = r14[1].d
r14[1].d = r15 + 1

if (r15 + 1 s> *(r14 + 0xc))
    sub_1405a4cf0(r14)

int64_t rdi_1 = sx.q(rbp) << 2
int64_t rdx_5 = *r14 + rdi_1
memmove(rdx_5 + 4, rdx_5, (r15 - rbp) << 2)
*(rdi_1 + *r14) = arg3
int64_t* rcx_12 = arg1[1]

if (rcx_12 != 0)
    sub_141f8e9a0(rcx_12, rsi.d, rbp)

return zx.q(rbp)
