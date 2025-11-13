// 函数: sub_140e241c0
// 地址: 0x140e241c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
uint64_t result = __security_cookie ^ &var_1c8
uint64_t result_1 = result

if (*(arg1 + 0x18) != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        
        if (result.d s> 0)
            int64_t rsi_1 = 0
            
            if (rbx_1 != 0)
                if (result.d != 0)
                    rbx_1[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
            
            int64_t* rcx = nullptr
            
            if (rbx_1 != 0)
                rcx = *(arg1 + 0x18)
            
            result = (*(*rcx + 0x198))(rcx)
            char rdi_1 = result.b
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    result = (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rdi_1 != 0)
                int64_t* var_1a8
                result = sub_140e175c0(arg1, &var_1a8)
                int64_t* r14_1 = var_1a8
                int64_t* var_1a0
                int64_t* rbx_2 = var_1a0
                
                if (r14_1 != 0)
                    var_1a8 = nullptr
                    int32_t rcx_4 = 0
                    var_1a0:4.d = 0
                    int32_t rdi_2 = 0
                    var_1a0.d = 0
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                        rcx_4 = var_1a0:4.d
                        rdi_2 = var_1a0.d
                    
                    var_1a0.d = rdi_2 + 1
                    
                    if (rdi_2 + 1 s> rcx_4)
                        arg2 = sub_1405a4f90(&var_1a8)
                    
                    int64_t** rax_6 = &var_1a8[sx.q(rdi_2) * 2]
                    *rax_6 = r14_1
                    rax_6[1] = rbx_2
                    
                    if (rbx_2 != 0)
                        int32_t rax_7 = rbx_2[1].d
                        rbx_2[1].d = rax_7
                        
                        if (rax_7 == 0)
                            (**rbx_2)(rbx_2)
                            int32_t temp4_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    void var_188
                    sub_140d947e0(&var_188)
                    int64_t* rdi_3 = *(arg1 + 0x20)
                    
                    if (rdi_3 != 0)
                        int32_t rax_10 = rdi_3[1].d
                        
                        if (rax_10 != 0)
                            rdi_3[1].d = rax_10 + 1
                            rax_10.b = 1
                        
                        if (rax_10.b == 0)
                            rdi_3 = nullptr
                        
                        if (rdi_3 != 0)
                            rsi_1 = *(arg1 + 0x18)
                    
                    int64_t var_198 = rsi_1
                    int64_t* var_190_1 = rdi_3
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    char rax_11
                    int64_t r8_2
                    rax_11, r8_2 = sub_140da1990(&var_1a8, &var_198, &var_188, data_1439ae51c, arg2)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            int64_t rdx_5 = *rdi_3
                            (*rdx_5)(rdi_3, rdx_5)
                            int32_t temp6_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                    
                    if (rax_11 != 0)
                        int64_t* rcx_12 = data_143e20d08
                        r8_2.b = 2
                        (*(*rcx_12 + 0x138))(rcx_12, &var_188, r8_2)
                    
                    sub_140de0810(&var_188)
                    result = sub_140596d80(&var_1a8)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        result = (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            result = (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(result_1 ^ &var_1c8)
return result
