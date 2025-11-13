// 函数: sub_140ee7280
// 地址: 0x140ee7280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        
        if (result.d s> 0)
            void* r8_1 = nullptr
            
            if (rbx_1 == 0)
                goto label_140ee72df
            
            if (result.d == 0)
                rbx_1 = nullptr
            else
                result = zx.q(result.d + 1)
                rbx_1[1].d = result.d
            label_140ee72df:
                
                if (rbx_1 != 0)
                    r8_1 = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = result.d + 1
            
            void var_d8
            sub_140efc890(r8_1, &var_d8, arg2)
            result = sub_140597700(&var_d8)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_1 ^ &var_108)
return result
