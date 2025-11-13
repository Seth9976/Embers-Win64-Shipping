// 函数: sub_142086b20
// 地址: 0x142086b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int128_t zmm8 = arg4
char result
int128_t zmm6
result, zmm6 = sub_142099320(arg1)

if (result != 0)
    int128_t var_28_1 = zmm6
    zmm6 = arg7
    int128_t zmm7 = arg5
    
    if (arg8 != 0)
        zmm8.d = zmm8.d f* zmm6.d
        zmm7.d = zmm7.d f* zmm6.d
    
    int64_t rbx_1 = arg6
    
    if (rbx_1 == 0)
        rbx_1 = sub_1423dde10()
    
    int32_t var_218 = zmm8.d
    int32_t var_214_1 = zmm7.d
    void var_210
    void var_1f8
    sub_1420767c0(&var_1f8, &var_218, sub_140aae420(&var_210, arg2), rbx_1, arg3)
    int64_t* var_208
    
    if (var_208 != 0)
        var_208[1].d -= 1
        
        if (var_208[1].d == 1)
            (**var_208)(var_208)
            int32_t rdi_1 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_208 + 8))(var_208, zx.q(rdi_1))
    
    int32_t var_158_1 = zmm6.d
    int32_t var_154_1 = zmm6.d
    sub_142409850(*(arg1 + 0x270), &var_1f8)
    result = sub_141fa61e0(&var_1f8)
    int512_t zmm6_1
    zmm6_1.o = var_28_1

__security_check_cookie(rax_1 ^ &var_248)
return result
