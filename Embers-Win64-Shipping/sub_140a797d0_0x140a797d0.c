// 函数: sub_140a797d0
// 地址: 0x140a797d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t result = *(arg1 + 0x1a8)

if (result == 0)
    int32_t var_108 = result.d
    int64_t* rax_2 = sub_142a586f0(arg1 + 8, &var_108)
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rsi_1 = rax_3
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rsi_1 = &data_142d42ea8
        rsi_1[2] = rax_2
    
    void var_d8
    sub_140a72c30(&var_d8, rax_2)
    EnterCriticalSection(arg1 + 0x1b8)
    
    if (*(arg1 + 0x1a8) == 0)
        int64_t* rax_4 = j_sub_140a82f30(0xa8)
        int64_t* rbp_1
        
        if (rax_4 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_140a601a0(rax_4, &var_d8)
        
        int64_t* rax_6 = j_sub_140a82f30(0x18)
        int64_t* rdi_2 = rax_6
        
        if (rax_6 == 0)
            rdi_2 = nullptr
        else
            rax_6[1].d = 1
            *(rax_6 + 0xc) = 1
            *rdi_2 = &data_142e63350
            rdi_2[2] = rbp_1
        
        int64_t* var_100 = rbp_1
        int64_t* var_f8 = rdi_2
        
        if (arg1 + 0x1a8 != &var_100)
            *(arg1 + 0x1a8) = rbp_1
            var_100 = nullptr
            sub_1405aeff0(arg1 + 0x1b0, &var_f8)
            rdi_2 = var_f8
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rbp_2 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rbp_2 == 1)
                    (*(*rdi_2 + 8))(rdi_2, zx.q(rbp_2))
    
    if (arg1 != -0x1b8)
        LeaveCriticalSection(arg1 + 0x1b8)
    
    int64_t result_1 = *(arg1 + 0x1a8)
    sub_140a62e30(&var_d8)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp2_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                void** r8_3 = *rsi_1
                r8_3[1](rsi_1, 1, r8_3)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_128)
return result
