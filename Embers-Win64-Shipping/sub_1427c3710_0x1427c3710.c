// 函数: sub_1427c3710
// 地址: 0x1427c3710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 8)

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 8)
    *(arg1 + 0x68) = *(result + 0x1c0)
    *(arg1 + 0x78) = *(result + 0x1d0)
    *(arg1 + 0x88) = *(result + 0x1e0)
    
    if (*(arg1 + 0x28) != 0 && *(arg1 + 0x30) != 0)
        void*** rax = j_sub_140a82f30(0xb0)
        int64_t* r14_1 = nullptr
        void*** rax_1
        
        if (rax == 0)
            rax_1 = nullptr
        else
            rax_1 = sub_14279c0a0(rax, arg1 + 0x38, arg1 + 0x68)
        
        int64_t* rbx_1
        
        if (*(arg1 + 0x28) == 0)
            rbx_1 = nullptr
        else
            rbx_1 = *(arg1 + 0x30)
        
        void*** arg_18 = rax_1
        (*(*rbx_1 + 0x20))(rbx_1, sub_140d3c6e0(arg1 + 8), &arg_18, arg1 + 0x10)
        int64_t* i = *(arg1 + 0x98)
        
        for (void* r12_1 = &i[sx.q(*(arg1 + 0xa0))]; i != r12_1; i = &i[1])
            int64_t* rcx_5 = *i
            int64_t* arg_8
            (*(*rcx_5 + 0x10))(rcx_5, &arg_8)
            
            if (arg_8 != 0)
                int64_t* rcx_6 = *i
                int64_t rax_6 = (*(*rcx_6 + 0x18))(rcx_6)
                int64_t* rcx_7 = *i
                int64_t* r15_1
                
                if (*(arg1 + 0x28) == 0)
                    r15_1 = nullptr
                else
                    r15_1 = *(arg1 + 0x30)
                
                int64_t* arg_20 = arg_8
                arg_8 = nullptr
                void var_78
                (*(*r15_1 + 0x20))(r15_1, rax_6, &arg_20, (*(*rcx_7 + 0x20))(rcx_7, &var_78))
                int64_t* var_70
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t rax_12 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            (*(*var_70 + 8))(var_70, 1)
                
                int64_t* rcx_11 = arg_8
                
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0x38))(rcx_11, 1)
        
        int64_t rbp_2 = 0
        int64_t* r15_2 = *(arg1 + 0xa8)
        uint64_t r13_2 = sx.q(*(arg1 + 0xb0)) << 3 u>> 3
        
        if (r15_2 u> &r15_2[sx.q(*(arg1 + 0xb0))])
            r13_2 = 0
        
        if (r13_2 != 0)
            do
                int64_t* rdi_1 = *r15_2
                int64_t* arg_10
                (*(*rdi_1 + 0x10))(rdi_1, &arg_10)
                
                if (arg_10 != 0)
                    int64_t rax_19 = (*(*rdi_1 + 0x18))(rdi_1)
                    int64_t* r12_2
                    
                    if (*(arg1 + 0x28) == 0)
                        r12_2 = nullptr
                    else
                        r12_2 = *(arg1 + 0x30)
                    
                    int64_t* var_88 = arg_10
                    int64_t rax_21 = *rdi_1
                    arg_10 = nullptr
                    void var_60
                    (*(*r12_2 + 0x20))(r12_2, rax_19, &var_88, (*(rax_21 + 0x20))(rdi_1, &var_60), 
                        var_88, rax_19)
                    int64_t* var_58
                    
                    if (var_58 != 0)
                        var_58[1].d -= 1
                        
                        if (var_58[1].d == 1)
                            (**var_58)(var_58)
                            int32_t rax_25 = *(var_58 + 0xc)
                            *(var_58 + 0xc) -= 1
                            
                            if (rax_25 == 1)
                                (*(*var_58 + 8))(var_58, 1)
                    
                    int64_t* rcx_18 = arg_10
                    
                    if (rcx_18 != 0)
                        (*(*rcx_18 + 0x38))(rcx_18, 1)
                
                r15_2 = &r15_2[1]
                rbp_2 += 1
            while (rbp_2 != r13_2)
        
        if (*(arg1 + 0x28) != 0)
            r14_1 = *(arg1 + 0x30)
        
        return (*(*r14_1 + 0x18))(r14_1)

return result
