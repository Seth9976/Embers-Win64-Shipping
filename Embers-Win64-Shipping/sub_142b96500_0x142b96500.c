// 函数: sub_142b96500
// 地址: 0x142b96500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)

if (arg1[4] == 0)
    int32_t r9_2 = *(arg1 + 0xc)
    int32_t rcx_4 = arg1[1].d
    
    if (r9_2 u>= rcx_4 || rcx_4 - r9_2 u< rsi.d)
        return 0x55
    
    int64_t r8_3 = zx.q(r9_2) + *arg1
    arg1[7] = r8_3
    arg1[8] = r8_3 + rsi
    *(arg1 + 0xc) = r9_2 + rsi.d
    return 0

int64_t rbp = arg1[6]

if (rsi.d u> arg1[1].d)
    return 0x55

int32_t rdi_1 = 0
int64_t rax_1 = 0

if (rsi.d s> 0)
    rax_1 = (*(rbp + 8))(rbp, zx.q(rsi.d))
    
    if (rax_1 == 0)
        rdi_1 = (rax_1 + 0x40).d
else if (rsi.d s< 0)
    rdi_1 = 6

*arg1 = rax_1

if (rdi_1 != 0)
    return zx.q(rdi_1)

int32_t rax_2 = arg1[4](arg1, zx.q(*(arg1 + 0xc)), rax_1, zx.q(rsi.d))

if (rax_2 u< rsi.d)
    int64_t rdx_2 = *arg1
    
    if (rdx_2 != 0)
        (*(rbp + 0x10))(rbp, rdx_2)
    
    *arg1 = 0
    rdi_1 = 0x55

int64_t rcx_3 = *arg1
*(arg1 + 0xc) += rax_2
arg1[7] = rcx_3
arg1[8] = rcx_3 + rsi
return zx.q(rdi_1)
