// 函数: sub_1406adf70
// 地址: 0x1406adf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = *arg3
int64_t rax = sub_1406ae110(arg1, &var_28, arg4)
int64_t rdx_1 = *arg1
void* rdx_2

if (rax s>= 0 || neg.q(rax) == 0)
    rdx_2 = rdx_1 + (rax u>> 5 << 2)
else
    rdx_2 = rdx_1 - (((-1 - rax) u>> 5 << 2) + 4)

*arg2 = rdx_2
arg2[1] = zx.q(rax.d) & 0x1f
int128_t zmm0_1 = *arg2
var_28 = zmm0_1
int64_t rcx_2 = var_28:8.q
int64_t rbx_1
void* r14_1

if (arg4 s>= 0 || rcx_2 u>= neg.q(arg4))
    rbx_1 = rcx_2 + arg4
    r14_1 = var_28.q + (rbx_1 u>> 5 << 2)
else
    rbx_1 = rcx_2 + arg4
    r14_1 = var_28.q - ((not.q(rbx_1) u>> 5 << 2) + 4)

uint64_t rbx_2 = zx.q(rbx_1.d) & 0x1f
var_28 = zmm0_1
int64_t rcx_5 = var_28:8.q
int32_t* rdx_3 = zmm0_1.q

if (rdx_3 != r14_1 || rcx_5 != rbx_2)
    int32_t r10_1 = *rdx_3
    int32_t r8_3 = 0xffffffff << rcx_5.b
    uint32_t rbp_1 = 0
    char r15_1 = *arg5
    int32_t r9_1 = not.d(r8_3)
    
    if (rdx_3 != r14_1)
        int32_t rax_17 = 0
        
        if (r15_1 != 0)
            rax_17 = r8_3
        
        *rdx_3 = rax_17 | (r10_1 & r9_1)
        memset(&rdx_3[1], zx.d((sbb.d(rdx_3.d, rdx_3.d, *arg5 != 0)).b), r14_1 - &rdx_3[1])
        
        if (rbx_2 != 0)
            uint32_t rsi_2 = 0xffffffff u>> (0x20 - rbx_2.b)
            
            if (r15_1 != 0)
                rbp_1 = rsi_2
            
            *r14_1 = rbp_1 | (not.d(rsi_2) & *r14_1)
    else
        uint32_t rsi_1 = 0xffffffff u>> (0x20 - rbx_2.b)
        
        if (r15_1 != 0)
            rbp_1 = rsi_1
        
        *rdx_3 = ((not.d(rsi_1) | r9_1) & r10_1) | (rbp_1 & r8_3)

return arg2
