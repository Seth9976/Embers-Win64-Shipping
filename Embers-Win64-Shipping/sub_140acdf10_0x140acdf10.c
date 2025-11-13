// 函数: sub_140acdf10
// 地址: 0x140acdf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8

if (arg4 != 0.0)
    int128_t zmm6
    zmm6.q = arg3.q f/ arg4
    arg2[3].b = 0
    sub_140ad89e0()
    int64_t var_50_1 = zmm6.q
    int128_t var_68 = data_143dbb218.o
    void** const var_58_1 = &data_142e6d638
    sub_140b0a670(&arg2[4], &var_68)
    arg2[0xc].b = 1
    sub_140b0bbf0(&var_68)
else
    void var_80
    int64_t* var_88 = _vfprintf_p_l(&var_80, u"Division by zero", u"BasicMathExpressionEvaluator")
    sub_140aca4f0(arg2, &var_88)
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            int64_t rdx_1 = *var_78
            (*rdx_1)(var_78, rdx_1)
            int32_t rdi_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_1 = *var_78
                (*(r8_1 + 8))(var_78, zx.q(rdi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
