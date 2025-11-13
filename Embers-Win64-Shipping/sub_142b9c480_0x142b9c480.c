// 函数: sub_142b9c480
// 地址: 0x142b9c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint128_t* rsi = arg2

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (rsi == 0 || arg3 == 0)
    return 6

if (rsi == arg3)
    return 0

int32_t rax_2 = arg3[2]
int32_t rdi = arg2[2]
int32_t r15_3 = (rax_2 s>> 0x1f & 0xfffffffe) + 1
int32_t r14_3 = (rdi s>> 0x1f & 0xfffffffe) + 1

if (*(arg2 + 0x10) == 0)
    *arg3 = *arg2
    *(arg3 + 0x10) = *(arg2 + 0x10)
    *(arg3 + 0x20) = *(arg2 + 0x20)
    
    if (r14_3 != r15_3)
        arg3[2] = neg.d(arg3[2])
    
    return 0

int64_t rcx = *arg1

if (rdi s< 0)
    rdi = neg.d(rdi)

int64_t rdx = *(arg3 + 0x10)
uint32_t count = *arg2 * rdi
int64_t rax_6

if (rdx != 0)
    if (rax_2 s< 0)
        rax_2 = neg.d(rax_2)
    
    int32_t r8_1 = *arg3 * rax_2
    
    if (r8_1 == count)
        goto label_142b9c5a2
    
    rax_6 = sub_142b999e0(rcx, 1, r8_1, count, rdx, &arg_8)
    goto label_142b9c597

rax_6 = sub_142b99990(rcx, count, &arg_8)
label_142b9c597:
bool cond:0_1 = arg_8 != 0
*(arg3 + 0x10) = rax_6

if (not(cond:0_1))
label_142b9c5a2:
    int64_t rcx_1 = *(arg3 + 0x10)
    *arg3 = *rsi
    *(arg3 + 0x10) = rsi[1]
    *(arg3 + 0x20) = rsi[2].q
    *(arg3 + 0x10) = rcx_1
    
    if (r14_3 == r15_3)
        memcpy(rcx_1, rsi[1].q, count)
        return zx.q(arg_8)
    
    int32_t i_1 = *arg3
    int64_t rsi_1 = rsi[1].q
    int64_t rbx_3 = zx.q((i_1 - 1) * rdi) + rcx_1
    
    if (i_1 != 0)
        int64_t rdi_1 = sx.q(rdi)
        int32_t i
        
        do
            memcpy(rbx_3, rsi_1, rdi_1.d)
            rsi_1 += rdi_1
            rbx_3 -= rdi_1
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q(arg_8)
