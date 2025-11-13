// 函数: sub_14066d9f0
// 地址: 0x14066d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg3[1].d s> 1
int64_t* result = arg2
int64_t var_80 = 0
int32_t var_74 = 0
int32_t r15 = 0

if (cond:0)
    int64_t* rdi_1 = *(arg1 + 0x28)
    int32_t i_3
    sub_14062d6e0(rdi_1, &i_3, arg3)
    int64_t i_5 = sx.q(i_3)
    
    if (i_5.d == 0xffffffff)
        *result = 0
        result[1] = 0
    else
        void* rcx_1 = *rdi_1 + i_5 * 0x28
        int64_t* rax_2 = rcx_1 + 0x10
        
        if (rcx_1 == 0)
            rax_2 = nullptr
        
        if (rax_2 == 0)
            *result = 0
            result[1] = 0
        else
            void* rcx_2 = *rax_2
            
            if (rcx_2 == 0 || *(rcx_2 + 8) != 5)
                *result = 0
                result[1] = 0
            else
                int64_t* rax_3 = sub_140b750d0(*(arg1 + 0x28), arg3)
                uint64_t rsi_1 = 0
                uint64_t var_58 = 0
                int32_t i_2 = rax_3[1].d
                int64_t rbx_1 = *rax_3
                i_3 = i_2
                int32_t i_4 = i_2
                
                if (i_2 != 0)
                    sub_14061cb30(&var_58, i_2, 0)
                    rsi_1 = var_58
                    uint64_t rcx_5 = rsi_1
                    int64_t rbx_2 = rbx_1 - rsi_1
                    int32_t i
                    
                    do
                        *rcx_5 = *(rbx_2 + rcx_5)
                        void* rax_5 = *(rbx_2 + rcx_5 + 8)
                        *(rcx_5 + 8) = rax_5
                        
                        if (rax_5 != 0)
                            *(rax_5 + 8) += 1
                        
                        rcx_5 += 0x10
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    i_2 = i_4
                    i_3 = i_2
                
                uint64_t r14_1 = rsi_1
                int64_t rax_8 = (sx.q(i_2) << 4) + rsi_1
                
                if (rsi_1 != rax_8)
                    int64_t r12 = var_80
                    int32_t rbp_1 = var_74
                    int64_t var_70_1 = 0
                    
                    do
                        int64_t* rsi_2 = *(r14_1 + 8)
                        int64_t r13_1 = *r14_1
                        
                        if (rsi_2 != 0)
                            rsi_2[1].d += 1
                        
                        void* rax_9 = sub_140cde0b0()
                        sub_140d19010(rax_9, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                        void* rax_11 = sub_140d2dfc0(sub_140681360(), rax_9, 0, 0, 0, 0, 0, 0, 0)
                        int64_t* rdi_3 = rsi_2
                        int64_t var_68 = r13_1
                        
                        if (rsi_2 != 0)
                            rsi_2[1].d += 1
                        
                        if (&var_68 != rax_11 + 0x28)
                            var_68.o = *(rax_11 + 0x28)
                            rdi_3 = rsi_2
                            *(rax_11 + 0x28) = var_68.o
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                (**rdi_3)(rdi_3)
                                int32_t temp5_1 = *(rdi_3 + 0xc)
                                *(rdi_3 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rdi_3 + 8))(rdi_3, 1)
                        
                        int64_t rdi_4 = sx.q(r15)
                        r15 = (rdi_4 + 1).d
                        
                        if (r15 s> rbp_1)
                            sub_140638870(&var_80)
                            r12 = var_80
                            rbp_1 = var_74
                        
                        *(r12 + (rdi_4 << 3)) = rax_11
                        
                        if (rsi_2 != 0)
                            rsi_2[1].d -= 1
                            
                            if (rsi_2[1].d == 1)
                                (**rsi_2)(rsi_2)
                                int32_t temp7_1 = *(rsi_2 + 0xc)
                                *(rsi_2 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rsi_2 + 8))(rsi_2, 1)
                        
                        r14_1 += 0x10
                    while (r14_1 != rax_8)
                    
                    i_2 = i_3
                    result = arg2
                    rsi_1 = var_58
                
                *result = var_80
                *(result + 0xc) = var_74
                result[1].d = r15
                
                if (i_2 != 0)
                    int64_t* rdi_5 = rsi_1 + 8
                    int32_t i_1
                    
                    do
                        int64_t* rbx_3 = *rdi_5
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp3_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        rdi_5 = &rdi_5[2]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
else
    *arg2 = 0
    arg2[1] = 0

return result
