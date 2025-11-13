// 函数: sub_14230cbc0
// 地址: 0x14230cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
float* result = __security_cookie ^ &var_d8
float* result_1 = result
uint32_t zmm2[0x4] = *(arg1 + 0x80)
uint32_t zmm0[0x4] = *(arg1 + 0x90)
int128_t zmm1 = *(arg1 + 0xa0)
uint32_t var_a8[0x4] = zmm2
bool cond:0 = _mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999994e-09f
int96_t var_98 = zmm0[0].12
int96_t var_88 = zmm1.12
uint32_t var_78[0x4] = *(arg1 + 0xb0)

if (cond:0)
label_14230ccae:
    zmm1 = *(arg1 + 0x90)
    uint32_t var_68[0x4] = *(arg1 + 0x80)
    int128_t var_58_1 = zmm1
    uint32_t var_48_1[0x4] = *(arg1 + 0xa0)
    int128_t var_38_1 = *(arg1 + 0xb0)
    float var_b8
    uint32_t zmm6_1[0x4]
    result, zmm6_1 = sub_1419ed880(&var_68, &var_b8, 0x322bcc77)
    
    if (_mm_and_ps(var_b8, zmm6_1)[0] f> 9.99999975e-05f)
    label_14230cd29:
        sub_1407c8dd0(&var_68, &var_a8)
        int64_t* rcx_2 = *(arg1 + 0x158)
        result = (*(*rcx_2 + 0x48))(rcx_2)
    else
        int32_t var_b4
        
        if (_mm_and_ps(var_b4, zmm6_1)[0] f> 9.99999975e-05f)
            goto label_14230cd29
        
        int32_t var_b0
        
        if (not(_mm_and_ps(var_b0, zmm6_1)[0] f<= 9.99999975e-05f))
            goto label_14230cd29
else
    if (_mm_and_ps(var_a8[1], 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_a8[2], 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_98.d, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_98:4.d, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_98:8.d, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_88.d, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (_mm_and_ps(var_88:4.d, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14230ccae
    
    if (not(_mm_and_ps(var_88:8.d, 0x7fffffff)[0] f<= 9.99999994e-09f))
        goto label_14230ccae

__security_check_cookie(result_1 ^ &var_d8)
return result
