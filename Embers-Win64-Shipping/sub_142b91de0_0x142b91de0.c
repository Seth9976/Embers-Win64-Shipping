// 函数: sub_142b91de0
// 地址: 0x142b91de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

int32_t* r14 = arg6

if (r14 == 0)
    return (r14 + 6).d

int32_t rcx = *(arg1 + 0x10)
int32_t rax_2 = arg2 + arg3

if (arg2 u>= rcx || rax_2 u< arg2 || rax_2 u> rcx)
    return 0x10

if (arg3 == 0)
    return 0

int64_t r10_1 = *(*(*(arg1 + 0x90) + 0x18) + 0x90)

if (r10_1 != 0 && ((arg4.b & 3) != 0 || (arg4 & 0xf0000) == 0x10000))
    int32_t* var_28_1 = r14
    int32_t rax_1 = r10_1(arg1)
    
    if (rax_1 == 0)
        return sub_142b98330(arg1, r14, arg3, arg4.b)
    
    if (rax_1.b != 7)
        return rax_1

int32_t r8_2 = 0

if (test_bit(arg4, 0x1d))
    return 7

int32_t rdi_1 = arg4 | 0x100
int32_t r12_1 = 0x400

if ((rdi_1.b & 1) != 0)
    r12_1 = 1

int32_t rsi_1 = 0

if (arg3 != 0)
    do
        int32_t rax_6
        rax_6, arg5 = sub_142b92f00(arg1, rsi_1 + arg2, rdi_1, arg5)
        r8_2 = rax_6
        
        if (rax_6 != 0)
            break
        
        int32_t rdx_2
        
        if ((rdi_1.b & 0x10) == 0)
            rdx_2 = *(*(arg1 + 0x78) + 0x58)
        else
            rdx_2 = *(*(arg1 + 0x78) + 0x5c)
        
        rsi_1 += 1
        *r14 = r12_1 * rdx_2
        r14 = &r14[1]
    while (rsi_1 u< arg3)

return r8_2
