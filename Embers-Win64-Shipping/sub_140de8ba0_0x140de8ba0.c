// 函数: sub_140de8ba0
// 地址: 0x140de8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0
*arg7 = 1
*arg6 = 0

if ((*(arg1 + 0x28) & 8) != 0)
label_140de8c4e:
    
    if (*arg5 != 0)
        goto label_140de8c66
    
    *arg2 = *arg4
else
    uint32_t rdx = zx.d(*(arg1 + 0x2c))
    int128_t zmm0
    
    if (rdx != 1)
        if (rdx == 2)
            *arg5 = 1
            *arg7 = 0
        else if (rdx == 3)
            *arg5 = 1
            *arg6 = 1
        else if (rdx == 4)
            int64_t* rcx_1 = &data_143dbb1f0
            
            if (*(arg1 + 0x160) != 0)
                rcx_1 = arg1 + 0x158
            
            zmm0.d = (*rcx_1).d f- 1f
            void* rax_1
            
            if (zmm0.d f> *arg3 || *(rcx_1 + 4) - 1f f> arg3[1])
                rax_1.b = 1
            else
                rax_1.b = 0
            
            *arg5 = rax_1.b
        
        goto label_140de8c4e
    
    *arg5 = 1
label_140de8c66:
    zmm0.d = (*(arg1 + 0x18c)).d f+ arg3[1]
    int128_t zmm3
    zmm3.d = (*(arg1 + 0x188)).d f+ *arg3
    float zmm1 = arg3[0xa]
    float zmm2 = arg3[9]
    float zmm4 = arg3[8]
    int128_t zmm6 = arg3[7]
    int128_t zmm8
    zmm8.d = data_143dbb1f0.d.d f- *(arg1 + 0x180)
    int128_t zmm9
    zmm9.d = data_143dbb1f0:4.d.d f- *(arg1 + 0x184)
    zmm3.d = zmm3.d f- zmm8.d
    zmm0.d = zmm0.d f- zmm9.d
    float zmm5 = zmm1 f* zmm0.d
    int128_t zmm7
    zmm7.d = zmm0.d f* zmm2
    zmm0.d = zmm3.d f* zmm6.d
    zmm3.d = zmm3.d f* zmm4
    zmm6.d = zmm6.d f* zmm8.d
    int32_t var_60_1 = zmm0.d
    int32_t var_5c_1 = zmm3.d
    zmm6.d = zmm6.d f+ zmm2 f* zmm9.d
    int32_t var_58_1 = zmm7.d
    float var_54_1 = zmm5
    zmm6.d = zmm6.d f+ arg3[0xb]
    float var_64_1 = zmm4 f* zmm8.d + zmm1 f* zmm9.d f+ arg3[0xc]
    int32_t var_68 = zmm6.d
    int128_t var_78
    sub_140dbe170(&var_68, &var_78)
    
    if (*arg7 == 0)
        *arg2 = var_78
    else
        zmm1 = __minss_xmmss_memss(arg4[3], var_78:0xc.d)
        zmm0 = __maxss_xmmss_memss(arg4[1].d, var_78:4.d)
        int32_t zmm3_1 = *arg4
        int32_t temp0_4 = __minss_xmmss_memss(arg4[2], var_78:8.d)
        int32_t temp0_5 = __maxss_xmmss_memss(zmm3_1, var_78.d)
        var_78.d = temp0_5
        var_78:4.d = zmm0.d
        var_78:8.d = temp0_4
        var_78:0xc.d = zmm1
        
        if (zmm1 f< zmm0.d || not(temp0_4 f>= temp0_5))
            *arg2 = 0
            arg2[1] = 0
        else
            *arg2 = var_78

return arg2
