// 函数: sub_141e66730
// 地址: 0x141e66730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e4ddb0(*arg1, arg1[1].d, arg3)
int64_t* rcx_1 = **arg1
int64_t* rax_2 = (*(*rcx_1 + 0x270))(rcx_1)
int64_t rax_11

if (rax_2 == 0)
    arg1[5].b = 0
    int32_t rax_13 = *(arg1 + 0x24)
    arg1[4].d = 0
    
    if (rax_13 s< 0 && rax_13 != 0)
        sub_140638c50(&arg1[3], 0)
    
    void* rdx_10 = *arg1
    rax_11 = sx.q(arg1[1].d)
    void* r8_7 = rdx_10 + rax_11 * 0x48
    
    while (rdx_10 != r8_7)
        rax_11 = *(rdx_10 + 0x38)
        rdx_10 += 0x48
        *rax_11 = 0xfffffffe
        *(rax_11 + 8) = 0xfffffffe
else
    sub_140780c40(&arg1[3], rax_2)
    int32_t i_1 = 0
    int32_t i = 0
    arg3.d = 0
    *(*arg1 + 0x40) = 1
    arg1[5].b = 1
    void* rax_3
    
    if (arg1[1].d s> 0)
        int64_t rcx_3 = 0
        int64_t rdi_1 = 0
        int64_t arg_20 = 0
        int64_t arg_18 = 0
        
        do
            void** rbx_2 = *arg1 + rcx_3
            
            if (arg2 != 0)
                void* rdx_2 = *arg2
                void* rax_5 = rdx_2 + sx.q(arg2[1].d) * 0x48
                
                if (rdx_2 == rax_5)
                label_141e66803:
                    rax_3 = rbx_2[7]
                    i = arg3.d
                    *rax_3 = 0xfffffffe
                    *(rax_3 + 8) = 0xfffffffe
                else
                    int32_t* j = rbx_2[7]
                    
                    while (*(rdx_2 + 0x38) != j)
                        rdx_2 += 0x48
                        
                        if (rdx_2 == rax_5)
                            goto label_141e66803
                    
                    i = arg3.d
                    
                    if (*rdx_2 != *rbx_2)
                        *j = 0xfffffffe
                        j[2] = 0xfffffffe
                
                rcx_3 = arg_18
            
            if (rdi_1 != 0 && arg1[4].d s> 0)
                void* rcx_5 = *rbx_2
                rax_3 = (*(*rcx_5 + 0x270))(rcx_5)
                void* r15_1 = rax_3
                
                if (rax_3 != 0)
                    rbx_2[8].b = 1
                    int32_t rbx_3 = arg1[4].d
                    int32_t rbx_4 = rbx_3 - 1
                    
                    if (rbx_3 - 1 s>= 0)
                        int64_t rdi_2 = sx.q(rbx_4) << 3
                        int64_t rbp_1 = rdi_2
                        int32_t temp2_1
                        
                        do
                            rax_3 = *r15_1
                            void* rdx_3 = rax_3 + (sx.q(*(r15_1 + 8)) << 3)
                            
                            if (rax_3 == rdx_3)
                            label_141e66896:
                                int32_t rdx_4 = arg1[4].d
                                int32_t rax_9 = rdx_4 - rbx_4 - 1
                                
                                if (rax_9 s>= 1)
                                    rax_9 = 1
                                
                                if (rax_9 != 0)
                                    int64_t rcx_9 = arg1[3]
                                    memcpy(rcx_9 + rbp_1, rcx_9 + (sx.q(rdx_4 - rax_9) << 3), 
                                        rax_9 << 3)
                                    rdx_4 = arg1[4].d
                                
                                arg1[4].d = rdx_4 - 1
                            else
                                while (*rax_3 != *(rdi_2 + arg1[3]))
                                    rax_3 += 8
                                    
                                    if (rax_3 == rdx_3)
                                        goto label_141e66896
                            
                            rbp_1 -= 8
                            rdi_2 -= 8
                            temp2_1 = rbx_4
                            rbx_4 -= 1
                        while (temp2_1 - 1 s>= 0)
                        rdi_1 = arg_20
                
                rcx_3 = arg_18
                i = arg3.d
            
            i += 1
            rdi_1 += 1
            rcx_3 += 0x48
            arg3.d = i
            arg_20 = rdi_1
            arg_18 = rcx_3
        while (i s< arg1[1].d)
        
        i_1 = 0
    
    rax_3.b = arg1[4].d s> 0
    arg1[5].b = rax_3.b
    rax_11 = sub_14098daa0(arg1[3], arg1[4].d, arg3)
    
    if (arg2 == 0)
    label_141e669b0:
        
        if (arg1[1].d s> 0)
            int64_t rdx_9 = 0
            int64_t rax_12
            
            do
                rax_12 = *arg1
                rdx_9 += 0x48
                i_1 += 1
                int32_t* rcx_13 = *(rax_12 + rdx_9 - 0x10)
                *rcx_13 = 0xfffffffe
                rcx_13[2] = 0xfffffffe
            while (i_1 s< arg1[1].d)
            
            return rax_12
    else
        int32_t rdx_8 = arg1[4].d
        
        if (rdx_8 != arg2[4].d)
            goto label_141e669b0
        
        int64_t* rcx_12 = arg2[3]
        
        if (rdx_8 != 0)
            void* r8_6 = arg1[3] - rcx_12
            
            while (true)
                rax_11 = *rcx_12
                
                if (*(rcx_12 + r8_6) != rax_11)
                    break
                
                rcx_12 = &rcx_12[1]
                int32_t temp0_1 = rdx_8
                rdx_8 -= 1
                
                if (temp0_1 == 1)
                    return rax_11
            
            goto label_141e669b0

return rax_11
