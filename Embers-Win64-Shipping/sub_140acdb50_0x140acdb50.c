// 函数: sub_140acdb50
// 地址: 0x140acdb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8

if (arg4 f!= 0.0)
    float zmm1[0x4] = zx.o(0)
    float zmm0[0x4] = zx.o(0)
    zmm1[0] = fconvert.s(arg4)
    zmm0[0] = fconvert.s(arg3)
    float zmm0_1 = sub_140a454f0(zmm0, zmm1)
    arg2[3].b = 0
    sub_140ad89e0()
    int64_t var_60_1 = fconvert.d(zmm0_1)
    int128_t var_78 = data_143dbb218.o
    void** const var_68_1 = &data_142e6d638
    sub_140b0a670(&arg2[4], &var_78)
    arg2[0xc].b = 1
    sub_140b0bbf0(&var_78)
else
    void var_90
    int64_t* var_98 = _vfprintf_p_l(&var_90, u"Modulo zero", u"BasicMathExpressionEvaluator")
    sub_140aca4f0(arg2, &var_98)
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            int64_t rdx_1 = *var_88
            (*rdx_1)(var_88, rdx_1)
            int32_t rdi_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_1 = *var_88
                (*(r8_1 + 8))(var_88, zx.q(rdi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
