// 函数: sub_142416ab0
// 地址: 0x142416ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t result = __security_cookie ^ &var_228
int64_t result_1 = result
bool cond:0 = arg3[1].d s<= 1
int64_t var_1f8 = arg4

if (not(cond:0) && *(arg1 + 0x260) != 0)
    void var_1f0
    void** var_1d8
    sub_1420767c0(&var_1d8, &var_1f8, sub_140aae420(&var_1f0, arg3), arg2, arg6)
    int64_t* var_1e8
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rdi_1 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1e8 + 8))(var_1e8, zx.q(rdi_1))
    
    void* rbx_2 = *(arg1 + 0x260)
    int32_t var_1a0_1 = arg7.d
    char var_150_1 = arg10
    uint64_t var_160_1 = arg9
    char var_14f_1 = arg11
    uint64_t var_138_1 = arg5
    char var_14e_1 = arg12
    uint128_t var_14c_1 = *arg13
    int128_t var_170_1 = *arg8
    var_1d8[3](&var_1d8, rbx_2)
    
    if (*(rbx_2 + 0xa0) == 1)
        sub_14240e030(rbx_2, 0)
    
    result = sub_141fa61e0(&var_1d8)

__security_check_cookie(result_1 ^ &var_228)
return result
