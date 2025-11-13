// 函数: sub_141f08e30
// 地址: 0x141f08e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx = arg1

if ((arg1[0x85].b & 1) != 0)
    sub_141f225c0(&arg1[0x83], 0)
    void* rax = rbx[0x15]
    char arg_10
    
    if (rax != 0)
    label_141f08e91:
        arg_10 = 1
        
        if (*(rax + 0x11a) == 7)
            arg_10 = 0
    else
        rax = sub_141ee69e0(rbx)
        
        if (rax != 0)
            goto label_141f08e91
        
        arg_10 = 0
    
    int64_t* var_60
    (*(*rbx + 0x860))(rbx, &var_60)
    int64_t* r14_1 = var_60
    int32_t r13_1 = 0
    int32_t result_1
    result = sx.q(result_1)
    int64_t* arg_20 = r14_1
    void* rcx_3 = &r14_1[result]
    
    if (r14_1 != rcx_3)
        void* rbx_1 = rcx_3
        
        do
            int64_t* r14_2 = *r14_1
            
            if (r14_2 != 0)
                int64_t rax_2 = *r14_2
                uint64_t i_2 = 0
                int64_t var_88_1
                __builtin_memset(&var_88_1, 0, 0x18)
                uint64_t var_80
                (*(rax_2 + 0x300))(r14_2, &i_2, &var_80)
                uint64_t i = i_2
                
                for (int64_t r15_3 = (sx.q(var_88_1.d) << 4) + i; i != r15_3; i += 0x10)
                    int32_t j_2 = arg1[0x84].d
                    int32_t r9_1 = 0
                    int64_t rcx_5 = *i
                    int32_t j = j_2
                    void* rbx_2 = arg1[0x83]
                    int32_t r11_1 = rcx_5:4.d
                    
                    if (j_2 s> 0)
                        do
                            int32_t r8_3 = j & 0x80000001
                            
                            if (r8_3 s< 0)
                                r8_3 = ((r8_3 - 1) | 0xfffffffe) + 1
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(j)
                            int32_t j_1 = (temp5_1 - temp4_1) s>> 1
                            j = j_1
                            int32_t rax_6 = j_1 + r9_1
                            int64_t rdx_5 = sx.q(rax_6) * 6
                            int32_t rax_8 = *(rbx_2 + (rdx_5 << 3))
                            int32_t rax_9 = rax_8 - rcx_5.d
                            
                            if (rax_8 == rcx_5.d)
                                rax_9 = *(rbx_2 + (rdx_5 << 3) + 4) - r11_1
                            
                            if (rax_9 s< 0)
                                r9_1 = r8_3 + rax_6
                        while (j s> 0)
                    
                    void* rbx_4
                    
                    if (r9_1 s>= j_2)
                        rbx_4 = sub_141f00c60(&arg1[0x83], i)
                    else
                        int64_t rdx_7 = sx.q(r9_1) * 0x30
                        int32_t rcx_6 = rcx_5.d - *(rdx_7 + rbx_2)
                        
                        if (rcx_5.d == *(rdx_7 + rbx_2))
                            rcx_6 = r11_1 - *(rdx_7 + rbx_2 + 4)
                        
                        if (rcx_6 s< 0 || r9_1 == 0xffffffff)
                            rbx_4 = sub_141f00c60(&arg1[0x83], i)
                        else
                            rbx_4 = rbx_2 + 8 + rdx_7
                            
                            if (rbx_2 + 8 == neg.q(rdx_7))
                                rbx_4 = sub_141f00c60(&arg1[0x83], i)
                    
                    int64_t rdi_1 = sx.q(*(rbx_4 + 8))
                    int32_t rcx_8 = (rdi_1 + 1).d
                    *(rbx_4 + 8) = rcx_8
                    
                    if (rcx_8 s> *(rbx_4 + 0xc))
                        sub_1405a4cf0(rbx_4)
                    
                    *(*rbx_4 + (rdi_1 << 2)) = r13_1
                    
                    if (arg_10 != 0)
                        void var_70
                        sub_140b4c620(&var_70, i)
                        int32_t var_68_1 = *(i + 0xc)
                        char var_64_1 = *(i + 8)
                        (*(*r14_2 + 0x328))(r14_2, &var_70, rbx_4 + 0x20, 0, 0)
                
                int32_t rax_17 = var_88_1:4.d
                var_88_1.d = 0
                
                if (rax_17 s< 0 && rax_17 != 0)
                    sub_1405a5410(&i_2, 0)
                
                int64_t var_78_1
                int32_t rax_18 = var_78_1:4.d
                var_78_1.d = 0
                
                if (rax_18 s< 0 && rax_18 != 0)
                    sub_1405a5410(&var_80, 0)
                
                result = (*(*r14_2 + 0x308))(r14_2, &i_2, &var_80)
                uint64_t i_5 = i_2
                int64_t r14_5 = (sx.q(var_88_1.d) << 4) + i_5
                
                if (i_5 != r14_5)
                    do
                        int32_t i_4 = arg1[0x84].d
                        int32_t r9_2 = 0
                        int64_t rcx_15 = *i_5
                        int32_t i_1 = i_4
                        void* rbx_5 = arg1[0x83]
                        int32_t r11_3 = rcx_15:4.d
                        
                        if (i_4 s> 0)
                            do
                                int32_t r8_10 = i_1 & 0x80000001
                                
                                if (r8_10 s< 0)
                                    r8_10 = ((r8_10 - 1) | 0xfffffffe) + 1
                                
                                int32_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(i_1)
                                int32_t i_3 = (temp10_1 - temp9_1) s>> 1
                                i_1 = i_3
                                int32_t rax_23 = i_3 + r9_2
                                int64_t rdx_15 = sx.q(rax_23) * 6
                                int32_t rax_25 = *(rbx_5 + (rdx_15 << 3))
                                int32_t rax_26 = rax_25 - rcx_15.d
                                
                                if (rax_25 == rcx_15.d)
                                    rax_26 = *(rbx_5 + (rdx_15 << 3) + 4) - r11_3
                                
                                if (rax_26 s< 0)
                                    r9_2 = r8_10 + rax_23
                            while (i_1 s> 0)
                        
                        void* rax_30
                        
                        if (r9_2 s>= i_4)
                            rax_30 = sub_141f00c60(&arg1[0x83], i_5)
                        else
                            int32_t* rdx_17 = sx.q(r9_2) * 0x30
                            int32_t rcx_16 = rcx_15.d - *(rdx_17 + rbx_5)
                            
                            if (rcx_15.d == *(rdx_17 + rbx_5))
                                rcx_16 = r11_3 - *(rdx_17 + rbx_5 + 4)
                            
                            if (rcx_16 s< 0 || r9_2 == 0xffffffff)
                                rax_30 = sub_141f00c60(&arg1[0x83], i_5)
                            else
                                rax_30 = rbx_5 + 8 + rdx_17
                                
                                if (rbx_5 + 8 == neg.q(rdx_17))
                                    rax_30 = sub_141f00c60(&arg1[0x83], i_5)
                        
                        int64_t rdi_2 = sx.q(*(rax_30 + 0x18))
                        int32_t rax_31 = (rdi_2 + 1).d
                        *(rax_30 + 0x18) = rax_31
                        
                        if (rax_31 s> *(rax_30 + 0x1c))
                            sub_1405a4cf0(rax_30 + 0x10)
                        
                        result = *(rax_30 + 0x10)
                        i_5 += 0x10
                        *(result + (rdi_2 << 2)) = r13_1
                    while (i_5 != r14_5)
                    
                    i_5 = i_2
                
                uint64_t rcx_19 = var_80
                
                if (rcx_19 != 0)
                    result = sub_140a74f90(rcx_19)
                    i_5 = i_2
                
                if (i_5 != 0)
                    result = sub_140a74f90(i_5)
                
                rbx_1 = rcx_3
            
            r13_1 += 1
            r14_1 = &arg_20[1]
            arg_20 = r14_1
        while (r14_1 != rbx_1)
        
        r14_1 = var_60
        rbx = arg1
    
    rbx[0x85].b &= 0xfd
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
