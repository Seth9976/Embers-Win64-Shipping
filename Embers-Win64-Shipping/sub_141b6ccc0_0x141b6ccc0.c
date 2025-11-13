// 函数: sub_141b6ccc0
// 地址: 0x141b6ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0
int32_t arg_8 = 0
int64_t* r15 = arg3
char rax

if (sub_140d3e110(&arg1[4]) != 0)
    rax = 1
else
    rax = sub_140d3e110(&arg1[5])
    
    if (rax != 0)
        rax = 1

if (rax != 0 && arg2 != 0)
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= arg2[7].d && *(arg2[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* result = nullptr
            int64_t* rdi = arg1[2]
            void* r13 = &rdi[sx.q(arg1[3].d)]
            
            if (rdi != r13)
                while (true)
                    void* i = *rdi
                    int64_t r15_1 = *(i + 0x10)
                    void* rax_5 = sub_141c122a0()
                    int64_t rax_6
                    
                    if (rax_5 != 0)
                        rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    int64_t* rax_8
                    
                    if (rax_5 == 0 || rax_6.d s> arg2[7].d
                            || *(arg2[6] + (rax_6 << 3)) != rax_5 + 0x30)
                        rax_8 = nullptr
                    else
                        rax_8 = arg2
                    
                    if (r15_1 == rax_8)
                        int64_t* r9_1 = arg1[2]
                        result = i
                        int64_t r10_1 = sx.q(arg1[3].d)
                        int64_t* rcx_7 = r9_1
                        void* rdx_4 = &r9_1[r10_1]
                        
                        if (r9_1 != rdx_4)
                            while (*rcx_7 != i)
                                rcx_7 = &rcx_7[1]
                                
                                if (rcx_7 == rdx_4)
                                    goto label_141b6ce5e
                            
                            int32_t rcx_9 = ((rcx_7 - r9_1) s>> 3).d
                            
                            if (rcx_9 != 0xffffffff)
                                int32_t r8_3 = r10_1.d - rcx_9 - 1
                                
                                if (r8_3 s>= 1)
                                    r8_3 = 1
                                
                                if (r8_3 != 0)
                                    memcpy(&r9_1[sx.q(rcx_9)], &r9_1[sx.q(r10_1.d - r8_3)], 
                                        r8_3 << 3)
                                
                                arg1[3].d -= 1
                                sub_1405c53d0(&arg1[2])
                            
                            rbp = arg_8.b
                            r15 = arg3
                            break
                        
                    label_141b6ce5e:
                        rbp = arg_8.b
                    else
                        rdi = &rdi[1]
                        
                        if (rdi != r13)
                            continue
                        else
                            rbp = 0
                    
                    r15 = arg3
                    break
            
            int64_t* rax_9 = sub_140d3c6e0(&arg1[4])
            
            if (result != 0)
            label_141b6ceff:
                int64_t rbx_1 = sx.q(arg1[1].d)
                int32_t rax_17 = (rbx_1 + 1).d
                arg1[1].d = rax_17
                
                if (rax_17 s> *(arg1 + 0xc))
                    sub_140638870(arg1)
                
                *(*arg1 + (rbx_1 << 3)) = result
                int32_t var_58
                int64_t* rax_18
                
                if (rax_9 != 0)
                    rbp = 1
                    rax_18 = sub_141bab3c0(rax_9, &var_58)
                
                int64_t* rdi_1
                
                if (rax_9 == 0 || *rax_18 != 0)
                    rdi_1.b = 1
                else
                    rdi_1.b = 0
                
                int64_t* var_50
                
                if ((rbp & 1) != 0 && var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t temp1_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*var_50 + 8))(var_50, 1)
                
                if (rdi_1.b != 0)
                    uint32_t rcx_20 = (result u>> 4).d
                    int32_t rdx_10 = (0x9e3779b9 - rcx_20) ^ rcx_20 << 8
                    int32_t rbx_5 = neg.d(rcx_20 + rdx_10) ^ rdx_10 u>> 0xd
                    int32_t rcx_23 = (rcx_20 - rdx_10 - rbx_5) ^ rbx_5 u>> 0xc
                    int32_t rdx_13 = (rdx_10 - rcx_23 - rbx_5) ^ rcx_23 << 0x10
                    int32_t rbx_8 = (rbx_5 - rdx_13 - rcx_23) ^ rdx_13 u>> 5
                    int32_t rcx_26 = (rcx_23 - rdx_13 - rbx_8) ^ rbx_8 u>> 3
                    int32_t rdx_16 = (rdx_13 - rcx_26 - rbx_8) ^ rcx_26 << 0xa
                    int32_t rbx_11 = (rbx_8 - rdx_16 - rcx_26) ^ rdx_16 u>> 0xf
                    int64_t* rdx_23
                    
                    if (arg1[7].d == *(arg1 + 0x64))
                    label_141b6d03d:
                        sub_140a696e0(&arg1[6], &var_58)
                        *var_50 = result
                        var_50[1] = 0
                        var_50[2] = 0
                        var_50[3].d = 0xffffffff
                        sub_140eb8320(&arg1[6], &arg_8, rbx_11, var_50, var_58, nullptr)
                        rdx_23 = (sx.q(arg_8) << 5) + arg1[6]
                    else
                        void* rcx_27 = arg1[0xe]
                        void* r8_7 = &arg1[0xd]
                        
                        if (rcx_27 != 0)
                            r8_7 = rcx_27
                        
                        int32_t rax_37 = *(r8_7 + (((sx.q(arg1[0xf].d) - 1) & sx.q(rbx_11)) << 2))
                        
                        if (rax_37 == 0xffffffff)
                            goto label_141b6d03d
                        
                        while (true)
                            rdx_23 = (sx.q(rax_37) << 5) + arg1[6]
                            
                            if (*rdx_23 == result)
                                break
                            
                            rax_37 = rdx_23[3].d
                            
                            if (rax_37 == 0xffffffff)
                                goto label_141b6d03d
                        
                        if (rax_37 == 0xffffffff || rdx_23 == 0)
                            goto label_141b6d03d
                    
                    if (rdx_23[1] == 0)
                        int64_t rcx_30 = *r15
                        int64_t* var_40
                        int64_t* rdx_28
                        
                        if (rcx_30 == 0)
                            rdx_28 = var_40
                        else
                            rdx_28 = r15[1]
                        
                        int64_t* rax_39 = var_50
                        var_58.q = rcx_30
                        
                        if (rcx_30 != 0)
                            rax_39 = rdx_28
                        
                        int64_t* var_50_1 = rax_39
                        void var_48
                        int64_t* rax_40 = sub_141befea0(result, &var_48, &var_58)
                        int64_t* rbx_12 = rax_40[1]
                        int64_t rbp_1 = *rax_40
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d += 1
                        
                        if (var_40 != 0)
                            var_40[1].d -= 1
                            
                            if (var_40[1].d == 1)
                                (**var_40)(var_40)
                                int32_t temp3_1 = *(var_40 + 0xc)
                                *(var_40 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*var_40 + 8))(var_40, 1)
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d += 1
                        
                        int64_t rax_44
                        int64_t* rcx_35
                        
                        if (&rdx_23[1] != &var_48)
                            rdx_23[1] = rbp_1
                            int64_t* rdi_3 = rdx_23[2]
                            
                            if (rbx_12 == rdi_3)
                                goto label_141b6d153
                            
                            rdx_23[2] = rbx_12
                            
                            if (rdi_3 == 0)
                                goto label_141b6d178
                            
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d != 1)
                                goto label_141b6d178
                            
                            (**rdi_3)(rdi_3)
                            int32_t temp8_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp8_1 != 1)
                                goto label_141b6d178
                            
                            rax_44 = *rdi_3
                            rcx_35 = rdi_3
                            goto label_141b6d175
                        
                    label_141b6d153:
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d -= 1
                            
                            if (rbx_12[1].d != 1)
                                goto label_141b6d178
                            
                            (**rbx_12)(rbx_12)
                            int32_t temp5_1 = *(rbx_12 + 0xc)
                            *(rbx_12 + 0xc) -= 1
                            
                            if (temp5_1 != 1)
                                goto label_141b6d178
                            
                            rax_44 = *rbx_12
                            rcx_35 = rbx_12
                        label_141b6d175:
                            (*(rax_44 + 8))(rcx_35, 1)
                        label_141b6d178:
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    (**rbx_12)(rbx_12)
                                    int32_t temp9_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp9_1 == 1)
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                
                if (result != 0)
                    void* rax_48 = sub_141c122a0()
                    void* rdx_30 = *(result + 0x10)
                    int64_t rax_49 = sx.q(*(rax_48 + 0x38))
                    
                    if (rax_49.d s<= *(rdx_30 + 0x38)
                            && *(*(rdx_30 + 0x30) + (rax_49 << 3)) == rax_48 + 0x30)
                        return result
            else
                if (rax_9 == 0)
                    arg_8.q = rax_9
                    result = sub_141b70820(sub_140d3c6e0(&arg1[5]), arg2, arg_8.q)
                else
                    arg_8.q = 0
                    void* result_1 = sub_141ba2820(rax_9, arg2, 0)
                    result = result_1
                    void* rax_10
                    int64_t rax_11
                    void* rdx_3
                    
                    if (result_1 != 0)
                        rax_10 = sub_141c122a0()
                        rdx_3 = *(result + 0x10)
                        rax_11 = sx.q(*(rax_10 + 0x38))
                    
                    if (result_1 == 0 || rax_11.d s> *(rdx_3 + 0x38)
                            || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                        result = nullptr
                
                if (result != 0)
                    goto label_141b6ceff
            
            return nullptr

return 0
