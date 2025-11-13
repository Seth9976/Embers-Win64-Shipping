// 函数: sub_141a36f70
// 地址: 0x141a36f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg3
int32_t rdi = 0
int32_t rsi_2

if (r9.b != 2)
    int32_t i = arg1[3].d
    int32_t r10_1 = 0
    int64_t rbp_1 = arg1[2]
    
    if (i s> 0)
        int64_t arg_18 = r9
        
        do
            int32_t rcx_1 = i & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_1) s>> 1
            i = i_1
            int32_t rax_4 = i_1 + r10_1
            uint64_t rax_7 = *(sx.q(rax_4) * 0x58 + rbp_1)
            uint64_t arg_20 = rax_7
            char rcx_4
            char rdx_1
            void* r8
            
            if (r9.b != 2)
                if (rax_7.b != 2)
                    uint32_t rcx_6 = (r9 u>> 0x20).d
                    uint32_t rdx_3 = (rax_7 u>> 0x20).d
                    
                    if (rcx_6 s< rdx_3)
                        rcx_4 = r9.b
                        r8 = &arg_18:4
                        rdx_1 = rax_7.b
                        goto label_141a37043
                    
                    if (rcx_6 s> rdx_3 || r9.b != 1)
                        rcx_4 = rax_7.b
                        goto label_141a37036
                    
                    rcx_4 = r9.b
                    r8 = &arg_18:4
                    goto label_141a3703b
                
                rcx_4 = rax_7.b
            label_141a37036:
                r8 = &arg_20:4
            label_141a3703b:
                
                if (rcx_4 != r9.b || (rcx_4 != 2 && *r8 != (r9 u>> 0x20).d) ||
                        (r9.b == rax_7.b && (r9.b == 2 || (r9 u>> 0x20).d == (rax_7 u>> 0x20).d)))
                    rax_7.b = 0
                else
                    rax_7.b = 1
            else
                rcx_4 = r9.b
                r8 = &arg_18:4
                rdx_1 = rax_7.b
            label_141a37043:
                
                if ((rcx_4 == 2 || *r8 == (r9 u>> 0x20).d)
                        && (r9.b != rdx_1 || (r9.b != 2 && (r9 u>> 0x20).d != (rax_7 u>> 0x20).d)))
                    rax_7.b = 1
                else
                    rax_7.b = 0
            
            if (rax_7.b == 0)
                r10_1 = rax_4 + rcx_1
        while (i s> 0)
    
    if (r10_1 s< 0)
        goto label_141a37098
    
    rsi_2 = arg1[3].d
    rdi = rsi_2
    
    if (r10_1 s< rsi_2)
        rdi = r10_1
    
    if (rdi s< 0)
        goto label_141a370bf
    
    goto label_141a37098

label_141a37098:
rsi_2 = arg1[3].d

if (rdi s>= rsi_2)
label_141a370bf:
    char rax_12
    
    if (rdi + 1 s>= 0 && rdi + 1 s< rsi_2)
        rax_12 = sub_141a5adc0(sx.q(rdi + 1) * 0x58 + arg1[2], arg3)
    
    if (rdi + 1 s< 0 || rdi + 1 s>= rsi_2 || rax_12 == 0)
        char rax_14
        
        if (rdi - 1 s>= 0 && rdi - 1 s< rsi_2)
            rax_14 = sub_141a3d240(sx.q(rdi - 1) * 0x58 + arg1[2], arg3)
        
        if (rdi - 1 s< 0 || rdi - 1 s>= rsi_2 || rax_14 == 0)
            char rax_18
            
            if (rdi s>= 0 && rdi s< arg1[3].d)
                rax_18 = sub_141a3d240(sx.q(rdi) * 0x58 + arg1[2], arg3)
            
            if (rdi s< 0 || rdi s>= arg1[3].d || rax_18 == 0)
                int32_t* rcx_21 = *arg1
                uint64_t rbp_3 = sx.q(arg1[1].d)
                void* rdx_10 = &rcx_21[rbp_3]
                
                if (rcx_21 != rdx_10)
                    do
                        int32_t rax_21 = *rcx_21
                        
                        if (rax_21 s>= rdi)
                            *rcx_21 = rax_21 + 1
                        
                        rcx_21 = &rcx_21[1]
                    while (rcx_21 != rdx_10)
                    
                    rbp_3 = zx.q(arg1[1].d)
                
                arg3[2].d = rbp_3.d
                int64_t rsi_4 = sx.q(arg1[1].d)
                int32_t rax_23 = (rsi_4 + 1).d
                arg1[1].d = rax_23
                
                if (rax_23 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                *(*arg1 + (rsi_4 << 2)) = rdi
                int32_t r14_1 = arg1[3].d
                arg1[3].d = r14_1 + 1
                
                if (r14_1 + 1 s> *(arg1 + 0x1c))
                    sub_1407755b0(&arg1[2])
                
                int64_t rbx_1 = sx.q(rdi) * 0x58
                int64_t rdx_14 = arg1[2] + rbx_1
                memmove(rdx_14 + 0x58, rdx_14, (r14_1 - rdi) * 0x58)
                sub_141a30ad0(arg1[2] + rbx_1, arg3)
                *arg2 = rbp_3.d
            else
                int64_t rsi_3 = sx.q(arg1[1].d)
                int32_t rax_19 = (rsi_3 + 1).d
                arg1[1].d = rax_19
                
                if (rax_19 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                int64_t rax_20 = *arg1
                *arg2 = rsi_3.d
                *(rax_20 + (rsi_3 << 2)) = rdi
        else
            int64_t rdi_1 = sx.q(arg1[1].d)
            int32_t rax_15 = (rdi_1 + 1).d
            arg1[1].d = rax_15
            
            if (rax_15 s> *(arg1 + 0xc))
                sub_1405a4cf0(arg1)
            
            int64_t rax_16 = *arg1
            *arg2 = rdi_1.d
            *(rax_16 + (rdi_1 << 2)) = rdi - 1
    else
        *arg2 = 0xffffffff
else
    if (sub_141a5adc0(sx.q(rdi) * 0x58 + arg1[2], arg3) == 0)
        goto label_141a370bf
    
    *arg2 = 0xffffffff

return arg2
