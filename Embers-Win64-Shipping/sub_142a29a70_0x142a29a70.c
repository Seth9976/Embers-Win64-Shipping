// 函数: sub_142a29a70
// 地址: 0x142a29a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r13 = zx.d(arg6)
int64_t rcx = sx.q(arg5)
int64_t r12 = sx.q(arg2)
int64_t* r8_2 = (r12 << 7) + arg1 + 0x3400
char rsi = 0
char rdi = 0
uint64_t* r14_1 = sx.q(arg4) + r8_2[8]
uint64_t* r15_1 = rcx + r8_2[9]
int16_t* arg_8 = r8_2 + ((sx.q(arg7) + 0x14) << 2)
int32_t result
int64_t rbx

if (r13.b == 0)
    int32_t rcx_17
    rcx_17.b = *r15_1 != 0
    int32_t rax_22
    rax_22.b = *r14_1 != 0
    int32_t rdx_18
    rdx_18.b = r12.d s> 0
    result = sub_142a28cf0(arg1 + 0x3400, rdx_18, *r8_2, r13.b, arg_8, rcx_17 + rax_22, *arg3, 
        arg3[2], arg1 + 0x10)
    rbx.b = result s> 0
    *r15_1 = rbx.b
    *r14_1 = rbx.b
else if (r13 == 1)
    int32_t rdx_13 = *(arg1 + 0x35c0)
    
    if (rdx_13 != 0 && arg4 + 2 u> rdx_13)
        rsi = ((zx.q(arg4 - rdx_13) << 3) + 0x10).b
    
    int32_t rdx_14 = *(arg1 + 0x35c4)
    
    if (rdx_14 != 0 && (rcx + 2).d u> rdx_14)
        rdi = ((zx.q(rcx.d - rdx_14) << 3) + 0x10).b
    
    int32_t rcx_12
    rcx_12.b = *r15_1 != 0
    int32_t rax_18
    rax_18.b = *r14_1 != 0
    int32_t rdx_15
    rdx_15.b = r12.d s> 0
    result = sub_142a28cf0(arg1 + 0x3400, rdx_15, *r8_2, r13.b, arg_8, rcx_12 + rax_18, *arg3, 
        arg3[2], arg1 + 0x10)
    rbx.b = result s> 0
    int32_t r8_8 = rbx.d * 0x101
    *r14_1 = (r8_8 s>> rsi).w
    *r15_1 = (r8_8 s>> rdi).w
else if (r13 == 2)
    int32_t rdx_8 = *(arg1 + 0x35c0)
    
    if (rdx_8 != 0 && arg4 + 4 u> rdx_8)
        rsi = ((zx.q(arg4 - rdx_8) << 3) + 0x20).b
    
    int32_t rdx_9 = *(arg1 + 0x35c4)
    
    if (rdx_9 != 0 && (rcx + 4).d u> rdx_9)
        rdi = ((zx.q(rcx.d - rdx_9) << 3) + 0x20).b
    
    int32_t rcx_6
    rcx_6.b = *r15_1 != 0
    int32_t rax_12
    rax_12.b = *r14_1 != 0
    int32_t rdx_10
    rdx_10.b = r12.d s> 0
    result = sub_142a28cf0(arg1 + 0x3400, rdx_10, *r8_2, r13.b, arg_8, rcx_6 + rax_12, *arg3, 
        arg3[2], arg1 + 0x10)
    rbx.b = result s> 0
    int32_t r8_5 = rbx.d * 0x1010101
    *r14_1 = r8_5 s>> rsi
    *r15_1 = r8_5 s>> rdi
else
    if (r13 != 3)
        return 0
    
    int32_t rdx_3 = *(arg1 + 0x35c0)
    
    if (rdx_3 != 0 && arg4 + 8 u> rdx_3)
        rsi = ((zx.q(arg4 - rdx_3) << 3) + 0x40).b
    
    int32_t rdx_4 = *(arg1 + 0x35c4)
    
    if (rdx_4 != 0 && (rcx + 8).d u> rdx_4)
        rdi = ((zx.q(rcx.d - rdx_4) << 3) + 0x40).b
    
    int32_t r10_1
    r10_1.b = *r15_1 != 0
    int32_t rax_5
    rax_5.b = *r14_1 != 0
    int32_t rdx_5
    rdx_5.b = r12.d s> 0
    result = sub_142a28cf0(arg1 + 0x3400, rdx_5, *r8_2, r13.b, arg_8, r10_1 + rax_5, *arg3, 
        arg3[2], arg1 + 0x10)
    rbx.b = result s> 0
    int64_t rbx_1 = rbx * 0x101010101010101
    *r14_1 = rbx_1 u>> rsi
    *r15_1 = rbx_1 u>> rdi
return result
