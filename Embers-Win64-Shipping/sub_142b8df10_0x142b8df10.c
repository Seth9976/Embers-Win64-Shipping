// 函数: sub_142b8df10
// 地址: 0x142b8df10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    int64_t rax
    rax.b = 0
    return rax

int16_t rax_1 = *(arg1 + 0x1c90)
int32_t rsi_1

if (rax_1 s< 0)
    rsi_1 = *(arg1 + 0x1c94)
else
    rsi_1 = sx.d(rax_1) s>> 5

int64_t i_3 = 0x1c0
int64_t i_2 = 0x1c0
uint16_t arg_10
int64_t i

do
    arg_10 = 0
    sub_142a48d70(arg1 + 0x1c88, &arg_10, 0, 1)
    i = i_2
    i_2 -= 1
while (i != 1)
int16_t rax_2 = *(arg1 + 0x1c90)
int32_t r15_1

if (rax_2 s< 0)
    r15_1 = *(arg1 + 0x1c94)
else
    r15_1 = sx.d(rax_2) s>> 5

void* r14 = arg1 + 0x20
int64_t i_1

do
    int64_t rdx_1 = *(r14 - 8)
    
    if ((rdx_1 s>> 0x20).d != 1 || rdx_1 == 0x101000100)
        int32_t rax_5 = sub_142b8e410(arg1, rdx_1, *r14)
        int32_t rcx_2 = rax_5
        
        if (rax_5 u> 0xffff)
            int16_t rax_6 = *(arg1 + 0x1c90)
            int32_t rbx_1
            
            if (rax_6 s< 0)
                rbx_1 = *(arg1 + 0x1c94)
            else
                rbx_1 = sx.d(rax_6) s>> 5
            
            int32_t rbx_2 = rbx_1 - r15_1
            
            if (rbx_2 s<= 0x3ff)
                int16_t arg_18 = rcx_2.w
                arg_10 = (rcx_2 u>> 0x10).w
                sub_142a48d70(sub_142a48d70(arg1 + 0x1c88, &arg_10, 0, 1), &arg_18, 0, 1)
                rcx_2 = rbx_2 | 0x800
            else
                rcx_2 = 1
        
        sub_142a4a800(arg1 + 0x1c88, rsi_1, rcx_2.w)
    
    rsi_1 += 1
    r14 += 0x10
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int32_t rax_4
rax_4.b = *arg2 s<= i_3.d
return rax_4
