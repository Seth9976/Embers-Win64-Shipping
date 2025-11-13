// 函数: sub_1411e9c30
// 地址: 0x1411e9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t result = __security_cookie ^ &var_2e8
int64_t result_1 = result

if (*(arg2 + 8) != 0 && arg4 != 0 && arg5 != 0)
    void var_2b0
    sub_1419928d0(&var_2b0, arg1)
    int64_t* var_2b8 = arg5
    (*(*arg5 + 0x30))(arg5)
    void*** rax_2 = sub_1410fccd0(&var_2b0, &var_2b8, u"ScreenShadowMaskTexture", 0)
    int64_t* rcx_3 = var_2b8
    
    if (rcx_3 != 0)
        int64_t rdx_2 = *rcx_3
        (*(rdx_2 + 0x38))(rcx_3, rdx_2)
    
    int32_t rcx_4 = *(arg2 + 8)
    
    if (rcx_4 != 0 && rax_2 != 0)
        int32_t i = 0
        
        if (rcx_4 s> 0)
            do
                if (i s< *(arg4 + 8) && i s< *(arg4 + 0x18))
                    int64_t i_1 = sx.q(i)
                    void*** var_2c0_1 = rax_2
                    sub_1411e9350(&var_2b0, i_1 * 0x5240 + *arg2, arg3, i_1 * 0xe8 + *arg4, 
                        i_1 * 0x130 + *(arg4 + 0x10))
                
                i += 1
            while (i s< *(arg2 + 8))
    
    sub_14199ef00(&var_2b0)
    result = sub_1410eb9e0(&var_2b0)

__security_check_cookie(result_1 ^ &var_2e8)
return result
