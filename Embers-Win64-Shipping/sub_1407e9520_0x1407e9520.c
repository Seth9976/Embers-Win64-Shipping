// 函数: sub_1407e9520
// 地址: 0x1407e9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0xb0))
uint64_t r14_1 = zx.q(arg3)
uint64_t r12_1 = zx.q(arg4)

if (r14_1.d u>= rax.d)
    return 

int32_t rsi_1 = arg5

if (rsi_1 == 0xffffffff)
    rsi_1 = rax.d - r14_1.d
    arg5 = rsi_1

if (rsi_1 == 0)
    return 

int32_t rbx_1 = rsi_1 + r12_1.d

if (r12_1.d s< 0 || rbx_1 u>= *(arg2 + 0xb4))
    arg3.b = 1
    sub_1407e6590(arg2, rbx_1, arg3.b)

*(arg2 + 0xb0) = rbx_1
int32_t rbx_2 = 0
rax = *(arg1 + 0x10)
int32_t r15_1 = 0
int32_t rcx_1 = *(rax + 0x20)

if (rcx_1 != 0)
    do
        int64_t rax_2 = *(arg1 + 0x18)
        uint64_t rcx_3 = zx.q(r15_1 * *(arg1 + 0xb8))
        int64_t rdx_2 = rax_2 + (r14_1 << 2) + rcx_3
        memcpy(zx.q(r15_1 * *(arg2 + 0xb8)) + (r12_1 << 2) + *(arg2 + 0x18), rdx_2, 
            (((zx.q(rsi_1 + r14_1.d) << 2) - rdx_2 + rax_2 + rcx_3) s>> 2 << 2).d)
        r15_1 += 1
    while (r15_1 u< rcx_1)
    
    rax = *(arg1 + 0x10)
    rbx_2 = 0
    rsi_1 = arg5
    r12_1 = zx.q(arg4)

int32_t r13_3 = *(rax + 0x24)

if (r13_3 == 0)
    return 

do
    int64_t r8_6 = *(arg1 + 0x28)
    uint64_t rax_4 = zx.q(rbx_2 * *(arg1 + 0xbc))
    int64_t rdx_4 = r8_6 + rax_4 + (r14_1 << 2)
    memcpy(zx.q(*(arg2 + 0xbc) * rbx_2) + (zx.q(r12_1.d) << 2) + *(arg2 + 0x28), rdx_4, 
        ((r8_6 - rdx_4 + zx.q(rax_4.d) + (zx.q(rsi_1 + r14_1.d) << 2)) s>> 2 << 2).d)
    rbx_2 += 1
while (rbx_2 u< r13_3)
