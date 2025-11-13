// 函数: sub_141ac0aa0
// 地址: 0x141ac0aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t result = __security_cookie ^ &var_68
int64_t result_1 = result

if (*arg1 != 0)
    *(arg1 + 0x58) = -1
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(arg1 + 0x50), 0).b == 0
    result.b = *(arg1 + 0x54) != 0
    result.b |= rcx.b
    
    if (result.b != 0)
        int64_t* rdi_1 = *(arg2 + 0xb8)
        
        if (rdi_1 != 0)
            result = (*(*rdi_1 + 0x428))(rdi_1, *(arg1 + 0x50))
            
            if (result.b != 0)
                result = sub_141f66260(rdi_1, *(arg1 + 0x50))
                
                if (result != 0)
                    float var_48[0x3][0x4]
                    float (* rax_2)[0x4] = sub_142316340(result, &var_48)
                    *(arg1 + 0x20) = *rax_2
                    *(arg1 + 0x30) = rax_2[1]
                    *(arg1 + 0x40) = rax_2[2]
                    result = sub_141f5e0e0(rdi_1, *(result + 0x30))
                    *(arg1 + 0x58) = result.d

__security_check_cookie(result_1 ^ &var_68)
return result
