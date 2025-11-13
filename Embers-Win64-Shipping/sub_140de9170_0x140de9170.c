// 函数: sub_140de9170
// 地址: 0x140de9170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg2 + 0x64)
int32_t rcx

if (r15 s> 0)
    rcx = *(arg2 + 0x68)

int32_t rax

if (r15 s<= 0 || rcx s<= 0)
    rax = *(arg3 + 0x64)
    
    if (rax s<= 0 || *(arg3 + 0x68) s<= 0)
        *(arg3 + 0x7d) |= 2
        return rax
    
    rcx = *(arg2 + 0x68)
else
    rax = *(arg3 + 0x64)

*(arg2 + 0x64) = rax + r15
*(arg2 + 0x68) = rcx + *(arg3 + 0x68)
int64_t rax_2 = sx.q(*(arg3 + 0x5c))
int64_t rbp = sx.q(*(arg3 + 0x64))
int64_t rsi = sx.q(arg4[1].d)
int64_t rcx_2 = **(arg3 + 0x40)
int32_t rax_4 = (rsi + rbp).d
arg4[1].d = rax_4

if (rax_4 s> *(arg4 + 0xc))
    sub_1405c4ec0(arg4)

uint64_t rax_6 = memcpy(*arg4 + rsi * 0x28, rcx_2 + rax_2 * 0x28, (rbp * 0x28).d)
int32_t rcx_6 = *(arg3 + 0x68)
int32_t rdx_4 = arg5[1].d + rcx_6

if (rdx_4 s> *(arg5 + 0xc))
    rax_6 = sub_1405dadb0(arg5, rdx_4)
    rcx_6 = *(arg3 + 0x68)

int32_t i = 0

if (rcx_6 s> 0)
    do
        int64_t rbp_1 = sx.q(arg5[1].d)
        int32_t rax_8 = (rbp_1 + 1).d
        int32_t r14_2 = *(**(arg3 + 0x48) + (sx.q(*(arg3 + 0x60) + i) << 2)) + r15
        arg5[1].d = rax_8
        
        if (rax_8 s> *(arg5 + 0xc))
            sub_1405a4cf0(arg5)
        
        rax_6 = *arg5
        i += 1
        *(rax_6 + (rbp_1 << 2)) = r14_2
    while (i s< *(arg3 + 0x68))

*(arg3 + 0x7d) |= 2
return rax_6
