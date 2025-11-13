// 函数: sub_141ac6f30
// 地址: 0x141ac6f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8

if (arg2 == 0)
    *arg1 = 0
    arg1[2] = 0
else
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg3.d, 0) == 0
    rcx.b |= arg3:4.d != 0
    
    if (rcx.b == 0)
        *arg1 = 0
        arg1[2] = 0
    else if ((sub_140b5b8a0(arg4.d, 0) == 0 | arg4:4.d != 0) == 0)
        *arg1 = 0
        arg1[2] = 0
    else
        void var_98
        (*(*arg2 + 0x408))(arg2, &var_98, arg3, 0)
        void var_68
        (*(*arg2 + 0x408))(arg2, &var_68, arg4, 0)
        float var_88[0x4]
        float var_58[0x4]
        var_58[0] = var_58[0] - var_88[0]
        float temp0_1[0x4] = _mm_shuffle_ps(var_58, var_58, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(var_58, var_58, 0xaa)
        *arg1 = var_58[0]
        float temp0_3[0x4] = _mm_shuffle_ps(var_88, var_88, 0x55)
        float temp0_4[0x4] = _mm_shuffle_ps(var_88, var_88, 0xaa)
        temp0_1[0] = temp0_1[0] - temp0_3[0]
        temp0_2[0] = temp0_2[0] - temp0_4[0]
        arg1[1] = temp0_1[0]
        arg1[2] = temp0_2[0]

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
