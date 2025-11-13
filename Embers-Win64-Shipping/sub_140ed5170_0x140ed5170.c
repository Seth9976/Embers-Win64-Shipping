// 函数: sub_140ed5170
// 地址: 0x140ed5170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x2b8)
int64_t* rbx = r9
int64_t result = &r9[sx.q(*(arg1 + 0x2c0)) * 2]

if (r9 != result)
    while (*rbx != *arg2)
        rbx = &rbx[2]
        
        if (rbx == result)
            return result
    
    int32_t rbx_2 = ((rbx - r9) s>> 4).d
    
    if (rbx_2 != 0xffffffff)
        int64_t* rdi_1 = *(arg1 + 0x2d8)
        void* r13_1 = nullptr
        int64_t* r15_1 = nullptr
        
        if (rdi_1 != 0)
            int32_t rax_2 = rdi_1[1].d
            
            if (rax_2 == 0)
                rdi_1 = nullptr
            else
                rdi_1[1].d = rax_2 + 1
                r15_1 = *(arg1 + 0x2d0)
        
        int32_t rbp_1 = *(arg1 + 0x2fc)
        sub_140ea45d0(arg1, rbx_2)
        int64_t* var_68
        (*(*(arg1 + 0x2a8) + 0x10))(arg1 + 0x2a8, &var_68, zx.q(rbx_2))
        int64_t* rcx_1 = var_68
        
        if (rcx_1 != data_143e244b0)
            sub_140de9860(rcx_1, *(arg1 + 0x2b0))
        
        sub_140dbae50(arg1 + 0x2b8, rbx_2, 1, 1)
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        *(arg1 + 0x2fc) = 0xffffffff
        
        if (rbp_1 == 0xffffffff || rbx_2 s<= rbp_1)
            int32_t rax_7 = rbp_1 - 1
            rbp_1 = 0
            
            if (rax_7 s>= 0)
                rbp_1 = rax_7
        
        result = sub_140ea45d0(arg1, rbp_1)
        
        if (r15_1 != 0)
            (*(*r15_1 + 0x258))(r15_1, &var_68)
            int64_t* rax_9 = TPI1::cbGpRec(*arg2)
            
            if (rax_9[1].d != 0xffffffff)
                sub_140ed5490(r15_1, rax_9)
            else
                int64_t* r9_2 = r15_1[0x75]
                int64_t* rcx_8 = r9_2
                int32_t rdx_6 = rax_9[1].d
                void* r8_4 = &r9_2[sx.q(r15_1[0x76].d) * 2]
                
                if (r9_2 != r8_4)
                    do
                        if ((*(rcx_8 + 0xc) & 1) != 0 && *rcx_8 == *rax_9
                                && (rdx_6 == 0xffffffff || rdx_6 == rcx_8[1].d))
                            int32_t rcx_10 = ((rcx_8 - r9_2) s>> 4).d
                            
                            if (rcx_10 != 0xffffffff)
                                *(&r9_2[sx.q(rcx_10) * 2] + 0xc) = 2
                            
                            break
                        
                        rcx_8 = &rcx_8[2]
                    while (rcx_8 != r8_4)
            
            if (arg3 == 1)
                int64_t* rcx_14 = var_68
                
                if (rcx_14 != 0)
                    int64_t* rbx_3 = rcx_14[0x7e]
                    
                    if (rbx_3 != 0)
                        int32_t rax_11 = rbx_3[1].d
                        
                        if (rax_11 != 0)
                            rbx_3[1].d = rax_11 + 1
                            rax_11.b = 1
                        
                        if (rax_11.b == 0)
                            rbx_3 = nullptr
                        
                        if (rbx_3 != 0)
                            r13_1 = rcx_14[0x7d]
                    
                    int64_t* rcx_15 = **(r13_1 + 0xd8)
                    (*(*rcx_15 + 0x38))(rcx_15, arg2)
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp6_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
            
            if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) != 0)
                result = sub_140ed4670(arg1)
            else
                result = sub_140ecbbf0(r15_1)
            
            int64_t* rcx_21 = var_68
            
            if (rcx_21 != 0)
                result = sub_140eae5c0(rcx_21, arg3)
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    result = (**var_60)(var_60)
                    int32_t temp7_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*var_60 + 8))(var_60, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    return (*(*rdi_1 + 8))(rdi_1, 1)

return result
