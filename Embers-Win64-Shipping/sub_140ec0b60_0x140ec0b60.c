// 函数: sub_140ec0b60
// 地址: 0x140ec0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void* r12 = arg1
int32_t rsi = arg3
int64_t* r14 = arg2
int64_t* result = sub_140d3c6e0(arg1 + 0x38)

if (result != 0)
    int64_t r9_1 = *result
    result = (*(r9_1 + 0x260))(result, arg4, arg5, r9_1)
    
    if (result.b != 0)
        int64_t rbx_1 = *(*r14 + 0x80)
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(rbx_1.d, 0).b == 0
        result.b = (rbx_1 u>> 0x20).d != 0
        rcx_2.b |= result.b
        
        if (rcx_2.b != 0)
            int64_t* rdx = *(r12 + 0x50)
            void* r13_1 = r12 + 0x50
            int64_t* rbx_3 = rdx
            void* rax_3 = &rdx[sx.q(*(r13_1 + 8)) * 2]
            void* var_68 = r13_1
            int32_t rbx_4
            
            if (rdx == rax_3)
            label_140ec0c0e:
                rbx_4 = -1
            else
                while (*rbx_3 != *r14)
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rax_3)
                        goto label_140ec0c0e
                
                rbx_4 = ((rbx_3 - rdx) s>> 4).d
            
            void** r15_1 = nullptr
            int64_t* result_1 = nullptr
            int32_t i_9
            int32_t rax_4
            
            if (rsi s>= 0 && rsi s< *(r12 + 0x58))
                rax_4 = sub_140ebfa30(r12, rsi, &i_9, arg4, arg5)
            
            if (rsi s< 0 || rsi s>= *(r12 + 0x58) || rax_4 s< 0 || rax_4 s>= *(r12 + 0x58))
                result = result_1
            else
                result = *(*(*r13_1 + sx.q(rax_4) * 0x10) + 0x80)
            
            void* rcx_7 = *r14
            void** var_58
            
            if (*(rcx_7 + 0x88) == 3 || *(rcx_7 + 0x95) != 0)
                if (*(rcx_7 + 0x80) == result)
                    return sub_140597060(r14)
                
                if (rbx_4 != 0xffffffff)
                    i_9 = 0xffffffff
                    result = sub_140ebfa30(r12, rbx_4, &i_9, arg4, arg5)
                    int64_t r14_1 = sx.q(result.d)
                    result_1.d = r14_1.d
                    
                    if (r14_1.d != 0xffffffff)
                        int32_t i_10 = i_9
                        
                        if (i_10 != 0xffffffff)
                            var_58 = nullptr
                            int32_t i_5 = i_10 - r14_1.d
                            int32_t i_4 = 0
                            int32_t rcx_21 = 0
                            i_9 = i_5
                            void** rsi_1 = nullptr
                            int32_t var_4c_1 = 0
                            int32_t i_2 = 0
                            
                            if (i_5 + 1 s> 0)
                                sub_1405a5410(&var_58, i_5 + 1)
                                i_5 = i_9
                                rcx_21 = var_4c_1
                                i_2 = i_4
                                rsi_1 = var_58
                            
                            if (r14_1.d s< i_10)
                                int64_t i_3 = sx.q(i_5)
                                int64_t rbx_10 = r14_1 << 4
                                int64_t i
                                
                                do
                                    int64_t* r13_2 = *r13_1
                                    int64_t i_6 = sx.q(i_2)
                                    i_2 = (i_6 + 1).d
                                    
                                    if (i_2 s> rcx_21)
                                        sub_1405a4f90(&var_58)
                                        rsi_1 = var_58
                                    
                                    int64_t rcx_25 = i_6 * 2
                                    rsi_1[rcx_25] = *(r13_2 + rbx_10)
                                    void* rax_21 = *(r13_2 + rbx_10 + 8)
                                    rsi_1[rcx_25 + 1] = rax_21
                                    
                                    if (rax_21 != 0)
                                        *(rax_21 + 8) += 1
                                    
                                    rcx_21 = var_4c_1
                                    rbx_10 += 0x10
                                    i = i_3
                                    i_3 -= 1
                                while (i != 1)
                                r13_1 = var_68
                                r15_1 = nullptr
                                r14_1 = zx.q(result_1.d)
                                r12 = arg1
                            
                            sub_140dbae50(r13_1, r14_1.d, i_9, 0)
                            int32_t r8_5 = arg_18
                            
                            if (r8_5 s> r14_1.d)
                                r8_5 -= i_2
                                arg_18 = r8_5
                            
                            int64_t* rbx_11
                            
                            if (r8_5 != 0)
                                if (i_2 s> 0 && *(*rsi_1 + 0x88) == 3)
                                    void*** rax_32 = j_sub_140a82f30(0x98)
                                    void*** r12_2 = rax_32
                                    
                                    if (rax_32 == 0)
                                        r12_2 = nullptr
                                    else
                                        int64_t r9_6 = *(*rsi_1 + 0x80)
                                        __builtin_memset(&result_1, 0, 0x20)
                                        sub_140e96910(rax_32, &result_1, &var_68, r9_6, 5, 1)
                                        *r12_2 = &data_142edc918
                                    
                                    int64_t* rax_33 = j_sub_140a82f30(0x18)
                                    rbx_11 = rax_33
                                    
                                    if (rax_33 == 0)
                                        rbx_11 = nullptr
                                    else
                                        rax_33[1].d = 1
                                        *(rax_33 + 0xc) = 1
                                        *rbx_11 = &data_142d42ea8
                                        rbx_11[2] = r12_2
                                    
                                    int64_t* r14_3 = &r12_2[1]
                                    
                                    if (r12_2 == 0)
                                        r14_3 = nullptr
                                    
                                    if (r14_3 != 0)
                                        void* rax_34
                                        
                                        if (*r14_3 != 0)
                                            rax_34 = r14_3[1]
                                        
                                        if (*r14_3 == 0 || rax_34 == 0 || *(rax_34 + 8) s<= 0)
                                            if (rbx_11 != 0)
                                                rbx_11[1].d += 1
                                            
                                            *r14_3 = r12_2
                                            int64_t* rcx_35 = r14_3[1]
                                            
                                            if (rbx_11 != rcx_35)
                                                if (rbx_11 != 0)
                                                    *(rbx_11 + 0xc) += 1
                                                    rcx_35 = r14_3[1]
                                                
                                                if (rcx_35 != 0)
                                                    int32_t temp18_1 = *(rcx_35 + 0xc)
                                                    *(rcx_35 + 0xc) -= 1
                                                    
                                                    if (temp18_1 == 1)
                                                        (*(*rcx_35 + 8))(rcx_35, 1)
                                                
                                                r14_3[1] = rbx_11
                                            
                                            if (rbx_11 != 0)
                                                rbx_11[1].d -= 1
                                                
                                                if (rbx_11[1].d == 1)
                                                    (**rbx_11)(rbx_11)
                                                    int32_t temp17_1 = *(rbx_11 + 0xc)
                                                    *(rbx_11 + 0xc) -= 1
                                                    
                                                    if (temp17_1 == 1)
                                                        (*(*rbx_11 + 8))(rbx_11, 1)
                                    
                                    int64_t i_8 = sx.q(i_2)
                                    i_2 = (i_8 + 1).d
                                    
                                    if (i_2 s> var_4c_1)
                                        sub_1405a4f90(&var_58)
                                        rsi_1 = var_58
                                    
                                    memmove(&rsi_1[2], rsi_1, (i_8 << 4).d)
                                    *rsi_1 = r12_2
                                    rsi_1[1] = rbx_11
                                label_140ec11d9:
                                    
                                    if (rbx_11 != 0)
                                        int32_t rax_38 = rbx_11[1].d
                                        rbx_11[1].d = rax_38
                                        
                                        if (rax_38 == 0)
                                            (**rbx_11)(rbx_11)
                                            int32_t temp14_1 = *(rbx_11 + 0xc)
                                            *(rbx_11 + 0xc) -= 1
                                            
                                            if (temp14_1 == 1)
                                                (*(*rbx_11 + 8))(rbx_11, 1)
                            else if (*(r12 + 0x58) s> r8_5 && *(**r13_1 + 0x88) == 3)
                                void*** rax_23 = j_sub_140a82f30(0x98)
                                void*** r12_1 = rax_23
                                
                                if (rax_23 == 0)
                                    r12_1 = nullptr
                                else
                                    void* r9_3 = **r13_1
                                    __builtin_memset(&result_1, 0, 0x20)
                                    sub_140e96910(rax_23, &result_1, &var_68, *(r9_3 + 0x80), 5, 1)
                                    *r12_1 = &data_142edc918
                                
                                int64_t* rax_24 = j_sub_140a82f30(0x18)
                                rbx_11 = rax_24
                                
                                if (rax_24 == 0)
                                    rbx_11 = nullptr
                                else
                                    rax_24[1].d = 1
                                    *(rax_24 + 0xc) = 1
                                    *rbx_11 = &data_142d42ea8
                                    rbx_11[2] = r12_1
                                
                                void**** r14_2 = &r12_1[1]
                                
                                if (r12_1 == 0)
                                    r14_2 = nullptr
                                
                                if (r14_2 != 0)
                                    void* rax_25
                                    
                                    if (*r14_2 != 0)
                                        rax_25 = r14_2[1]
                                    
                                    if (*r14_2 == 0 || rax_25 == 0 || *(rax_25 + 8) s<= 0)
                                        if (rbx_11 != 0)
                                            rbx_11[1].d += 1
                                        
                                        *r14_2 = r12_1
                                        int64_t* rcx_30 = r14_2[1]
                                        
                                        if (rbx_11 != rcx_30)
                                            if (rbx_11 != 0)
                                                *(rbx_11 + 0xc) += 1
                                                rcx_30 = r14_2[1]
                                            
                                            if (rcx_30 != 0)
                                                int32_t temp20_1 = *(rcx_30 + 0xc)
                                                *(rcx_30 + 0xc) -= 1
                                                
                                                if (temp20_1 == 1)
                                                    (*(*rcx_30 + 8))(rcx_30, 1)
                                            
                                            r14_2[1] = rbx_11
                                        
                                        if (rbx_11 != 0)
                                            rbx_11[1].d -= 1
                                            
                                            if (rbx_11[1].d == 1)
                                                (**rbx_11)(rbx_11)
                                                int32_t temp19_1 = *(rbx_11 + 0xc)
                                                *(rbx_11 + 0xc) -= 1
                                                
                                                if (temp19_1 == 1)
                                                    (*(*rbx_11 + 8))(rbx_11, 1)
                                
                                int64_t i_7 = sx.q(i_2)
                                i_2 = (i_7 + 1).d
                                
                                if (i_2 s> var_4c_1)
                                    sub_1405a4f90(&var_58)
                                    rsi_1 = var_58
                                
                                int64_t rax_30 = i_7 * 2
                                rsi_1[rax_30] = r12_1
                                rsi_1[rax_30 + 1] = rbx_11
                                goto label_140ec11d9
                            int64_t rbx_12 = sx.q(arg_18)
                            sub_140e910a0(r13_1, rbx_12.d, i_2)
                            void** rcx_45 = (rbx_12 << 4) + *r13_1
                            
                            if (i_2 != 0)
                                int32_t i_1
                                
                                do
                                    *rcx_45 = *rsi_1
                                    void* rax_42 = rsi_1[1]
                                    rcx_45[1] = rax_42
                                    
                                    if (rax_42 != 0)
                                        *(rax_42 + 8) += 1
                                    
                                    rcx_45 = &rcx_45[2]
                                    rsi_1 = &rsi_1[2]
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                            
                            if (*(arg1 + 0x58) s> 0)
                                char rax_44 = *(**r13_1 + 0x88)
                                
                                if (rax_44 == 5 || rax_44 == 8)
                                    sub_140dbae50(r13_1, 0, 1, 0)
                            
                            int64_t* rax_45 = sub_140d3c6e0(arg1 + 0x38)
                            
                            if (rax_45 != 0)
                                int64_t* rbx_13 = *(arg1 + 0x10)
                                
                                if (rbx_13 != 0)
                                    int32_t rax_46 = rbx_13[1].d
                                    
                                    if (rax_46 != 0)
                                        rbx_13[1].d = rax_46 + 1
                                        rax_46.b = 1
                                    
                                    if (rax_46.b == 0)
                                        rbx_13 = nullptr
                                    
                                    if (rbx_13 != 0)
                                        int32_t rax_47 = rbx_13[1].d
                                        r15_1 = *(arg1 + 8)
                                        rbx_13[1].d = rax_47
                                        
                                        if (rax_47 == 0)
                                            (**rbx_13)(rbx_13)
                                            int32_t temp13_1 = *(rbx_13 + 0xc)
                                            *(rbx_13 + 0xc) -= 1
                                            
                                            if (temp13_1 == 1)
                                                (*(*rbx_13 + 8))(rbx_13, 1)
                                
                                var_68 = r15_1
                                
                                if (rbx_13 != 0)
                                    rbx_13[1].d += 1
                                
                                (*(*rax_45 + 0x298))(rax_45, &var_68)
                                
                                if (rbx_13 != 0)
                                    rbx_13[1].d -= 1
                                    
                                    if (rbx_13[1].d == 1)
                                        (**rbx_13)(rbx_13)
                                        int32_t temp11_1 = *(rbx_13 + 0xc)
                                        *(rbx_13 + 0xc) -= 1
                                        
                                        if (temp11_1 == 1)
                                            (*(*rbx_13 + 8))(rbx_13, 1)
                                
                                if (rbx_13 != 0)
                                    rbx_13[1].d -= 1
                                    
                                    if (rbx_13[1].d == 1)
                                        (**rbx_13)(rbx_13)
                                        int32_t temp12_1 = *(rbx_13 + 0xc)
                                        *(rbx_13 + 0xc) -= 1
                                        
                                        if (temp12_1 == 1)
                                            (*(*rbx_13 + 8))(rbx_13, 1)
                            
                            result = sub_140596d80(&var_58)
                    
                    r14 = arg2
            else
                if (rbx_4 != 0xffffffff)
                    sub_140dbae50(r13_1, rbx_4, 1, 1)
                    
                    if (rbx_4 s< rsi)
                        rsi -= 1
                
                int32_t rdi_1 = *(r13_1 + 8)
                *(r13_1 + 8) = rdi_1 + 1
                
                if (rdi_1 + 1 s> *(r13_1 + 0xc))
                    sub_1405a4f90(r13_1)
                
                int64_t rdx_5 = *r13_1 + (sx.q(rsi) << 4)
                memmove(rdx_5 + 0x10, rdx_5, (rdi_1 - rsi) << 4)
                int64_t* rdx_6 = *r13_1
                rdx_6[sx.q(rsi) * 2] = *r14
                void* rax_9 = r14[1]
                rdx_6[sx.q(rsi) * 2 + 1] = rax_9
                
                if (rax_9 != 0)
                    *(rax_9 + 8) += 1
                
                result = sub_140d3c6e0(r12 + 0x38)
                
                if (result != 0)
                    int64_t* rbx_8 = *(r12 + 0x10)
                    
                    if (rbx_8 != 0)
                        int32_t rax_10 = rbx_8[1].d
                        
                        if (rax_10 != 0)
                            rbx_8[1].d = rax_10 + 1
                            rax_10.b = 1
                        
                        if (rax_10.b == 0)
                            rbx_8 = nullptr
                        
                        if (rbx_8 != 0)
                            int32_t rax_11 = rbx_8[1].d
                            r15_1 = *(r12 + 8)
                            rbx_8[1].d = rax_11
                            
                            if (rax_11 == 0)
                                (**rbx_8)(rbx_8)
                                int32_t temp7_1 = *(rbx_8 + 0xc)
                                *(rbx_8 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rbx_8 + 8))(rbx_8, 1)
                    
                    var_58 = r15_1
                    int32_t var_50
                    var_50.q = rbx_8
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d += 1
                    
                    result = (*(*result + 0x298))(result, &var_58)
                    int64_t* rdi_4 = var_50.q
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            result = (**rdi_4)(rdi_4)
                            int32_t temp5_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                result = (*(*rdi_4 + 8))(rdi_4, 1)
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            result = (**rbx_8)(rbx_8)
                            int32_t temp6_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result = (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* rbx_14 = r14[1]

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        result = (**rbx_14)(rbx_14)
        int32_t temp1_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_14 + 8))(rbx_14, 1)

return result
