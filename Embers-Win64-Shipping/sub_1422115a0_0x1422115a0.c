// 函数: sub_1422115a0
// 地址: 0x1422115a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* result = sub_140d3c6e0(arg1 + 0xf8)

if (result != 0)
    int64_t r10_1 = *result
    int32_t i = 0
    int64_t r9
    r9.b = 1
    int64_t* result_1
    __builtin_memset(&result_1, 0, 0x20)
    int64_t var_60
    int64_t var_58
    int64_t var_50
    result = (*(r10_1 + 0x6f8))(result, &result_1, &var_58, r9, result_1, var_60, var_58, var_50)
    
    if (var_60.d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            result = result_1
            uint64_t rdi_1 = *(rsi_1 + result)
            
            if (rdi_1 != arg1)
                result = zx.q(sub_142216be0(rdi_1) - 2)
                
                if (result.d u<= 1)
                    result = sub_140d3c6e0(rdi_1 + 0xf8)
                    void var_48
                    
                    if (result != 0)
                        result = sub_142227c50(arg1, rdi_1, 
                            (*(*result + 0x408))(result, &var_48, *(var_58 + (sx.q(i) << 3)), 0))
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< var_60.d)
    
    int64_t rcx_7 = var_58
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result = sub_140a74f90(result_2)

__security_check_cookie(rax_1 ^ &var_88)
return result
