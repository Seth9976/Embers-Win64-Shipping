// 函数: sub_141a4ade0
// 地址: 0x141a4ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x30)
int32_t r9 = 0
void* rsi = *(arg1 + 0x28)
int64_t rcx = *arg3
int32_t i = i_2
bool cond:1_1

if (i_2 s<= 0)
label_141a4aef5:
    int64_t rax_9
    int64_t* rdx_8
    
    if (r9 s< i_2)
        rdx_8 = sx.q(r9) * 0x58
        rax_9 = *(rdx_8 + rsi)
    
    if (r9 s>= i_2 || rax_9.b != rcx.b || (rax_9.b != 2 && (rax_9 u>> 0x20).d != (rcx u>> 0x20).d))
        cond:1_1 = r9 s<= 0
    label_141a4af29:
        char rax_14
        int64_t rbx_2
        
        if (not(cond:1_1) && r9 - 1 s< i_2)
            rbx_2 = sx.q(r9) * 0x58
            rax_14 = sub_141a5adc0(rsi - 0x58 + rbx_2, arg3)
        
        if (cond:1_1 || r9 - 1 s>= i_2 || rax_14 == 0)
            *arg2 = 0xffffffff
        else
            *arg2 = *(rbx_2 + rsi - 0x48)
    else
        *arg2 = *(rdx_8 + rsi + 0x10)
    
    return arg2

int64_t arg_18 = rcx

do
    int32_t r8_1 = i & 0x80000001
    
    if (r8_1 s< 0)
        r8_1 = ((r8_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r9
    uint64_t rax_7 = *(sx.q(rax_4) * 0x58 + rsi)
    uint64_t arg_8 = rax_7
    char r8_4
    
    if (rax_7.b == 2)
        r8_4 = rax_7.b
    label_141a4aebe:
        
        if (r8_4 != rcx.b || (r8_4 != 2 && (rax_7 u>> 0x20).d != (rcx u>> 0x20).d))
            rax_7.b = 1
        else
            rax_7.b = 0
    else
        char rdx_1
        int32_t* r10_1
        
        if (rcx.b != 2)
            uint32_t rdx_3 = (rcx u>> 0x20).d
            uint32_t r8_6 = (rax_7 u>> 0x20).d
            
            if (r8_6 s< rdx_3)
                r10_1 = &arg_8:4
                rdx_1 = rax_7.b
            label_141a4aea5:
                r8_4 = rax_7.b
                
                if (rdx_1 == 2)
                    goto label_141a4aebe
                
                goto label_141a4aeb1
            
            if (r8_6 s> rdx_3 || rax_7.b != 1)
                rdx_1 = rcx.b
                goto label_141a4ae98
            
            r10_1 = &arg_8:4
        label_141a4aeb1:
            r8_4 = rax_7.b
            
            if (*r10_1 != (rax_7 u>> 0x20).d
                    || (r8_4 == rcx.b && (r8_4 == 2 || (rax_7 u>> 0x20).d == (rcx u>> 0x20).d)))
                rax_7.b = 0
            else
                rax_7.b = 1
        else
            rdx_1 = rcx.b
        label_141a4ae98:
            r10_1 = &arg_18:4
            
            if (rdx_1 == rax_7.b)
                goto label_141a4aea5
            
            rax_7.b = 0
    
    if (rax_7.b != 0)
        r9 = rax_4 + r8_1
while (i s> 0)

cond:1_1 = r9 s<= 0

if (r9 s< 0)
    goto label_141a4af29

goto label_141a4aef5
