// 函数: sub_142a37dc0
// 地址: 0x142a37dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa0)

if (rbx == 0 || *(arg1 + 0xa8) s<= 0)
    return arg1 + 0x20

int64_t* result = *rbx
void arg_8
void arg_18
int32_t rax = sub_142a38c20(result, &arg_18, &arg_8, arg3)
int64_t rax_1 = sx.q(rax)

if (rax s>= 0)
    rax_1 = result[5]

if (rax_1 s>= 0)
    rax_1 = *(*(*result + 0x78) + 0x28) * result[5]

if (arg2 s<= rax_1)
    return result

int32_t rbp = *(arg1 + 0xa8)
int32_t rdi = 0

if (rbp s> 0)
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbp - rdi)
        int32_t rsi_1 = rdi + ((temp1_1 - temp0_1) s>> 1)
        int64_t* rbx_1 = *(*(arg1 + 0xa0) + (sx.q(rsi_1) << 3))
        int32_t rax_9 = sub_142a38c20(rbx_1, &arg_18, &arg_8, arg3)
        int64_t rcx_4 = sx.q(rax_9)
        
        if (rax_9 s>= 0)
            rcx_4 = rbx_1[5]
        
        if (rcx_4 s>= 0)
            rcx_4 = *(*(*rbx_1 + 0x78) + 0x28) * rbx_1[5]
        
        if (rcx_4 s> arg2)
            rbp = rsi_1
        else
            rdi = rsi_1 + 1
    while (rdi s< rbp)

return *(*(arg1 + 0xa0) + (sx.q(rdi - 1) << 3))
