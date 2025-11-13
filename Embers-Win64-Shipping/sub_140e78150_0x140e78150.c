// 函数: sub_140e78150
// 地址: 0x140e78150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* var_f8
int64_t* result = sub_140da2300(&var_f8, arg1 + 0x68, arg2)

if (var_f8 != 0)
    int64_t* result_1 = *(arg1 + 0x228)
    result = result_1
    int64_t rbp
    rbp.b = 1
    
    if (result_1 != 0)
        int32_t rax_2 = result_1[1].d
        
        if (rax_2 == 0)
            result_1 = nullptr
            result = nullptr
        else
            result_1[1].d = rax_2 + 1
            result = result_1
    
    if (result == 0)
        result = sub_140e21770(var_f8)
    else
        void* rcx_1 = *(arg1 + 0x220)
        
        if (rcx_1 == 0)
            result = sub_140e21770(var_f8)
        else
            int64_t* rsi_1 = *(rcx_1 + 0x390)
            int64_t* rcx_2 = *(rcx_1 + 0x398)
            int64_t* rdi_1 = rcx_2
            
            if (rcx_2 != 0)
                *(rcx_2 + 0xc) += 1
            
            int64_t* r8_1 = rcx_2
            
            if (rcx_2 != 0)
                result = zx.q(rcx_2[1].d)
                
                if (result.d == 0)
                    rdi_1 = nullptr
                else
                    result = zx.q(result.d + 1)
                    rcx_2[1].d = result.d
                
                int32_t temp5_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rcx_2 + 8))(rcx_2, 1)
                
                r8_1 = nullptr
            
            if (rdi_1 == 0)
                rsi_1 = nullptr
            
            if (r8_1 != 0)
                int32_t temp4_1 = *(r8_1 + 0xc)
                *(r8_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*r8_1 + 8))(r8_1, 1)
            
            if (rsi_1 != 0)
                void var_e8
                rbp.b = *(*(*rsi_1 + 0x128))(rsi_1, &var_e8) == 0
                result = sub_140597700(&var_e8)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp7_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rbp.b != 0)
                result = sub_140e21770(var_f8)
    
    if (result_1 != 0)
        result_1[1].d -= 1
        
        if (result_1[1].d == 1)
            result = (**result_1)(result_1)
            int32_t temp3_1 = *(result_1 + 0xc)
            *(result_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*result_1 + 8))(result_1, 1)

int64_t* var_f0

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        result = (**var_f0)(var_f0)
        int32_t temp1_1 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_f0 + 8))(var_f0, 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
