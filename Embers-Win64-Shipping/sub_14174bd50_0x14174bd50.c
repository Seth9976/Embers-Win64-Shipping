// 函数: sub_14174bd50
// 地址: 0x14174bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1.d
uint128_t zmm6
uint128_t var_28 = zmm6
*arg12 = 0xffffffff
uint128_t zmm2 = *arg3
uint128_t zmm7
zmm7.d = (*arg6).d f- *arg4
uint128_t zmm4
zmm4.d = (*(arg6 + 4)).d f- arg4[1]
uint128_t zmm8
zmm8.d = (*(arg6 + 8)).d f- arg4[2]
uint128_t zmm3 = *(arg3 + 4)
int32_t arg_48
uint128_t zmm11 = arg_48
uint128_t zmm15
uint128_t var_b8 = zmm15
uint128_t zmm10
zmm10.d = arg1.d f+ zmm11.d
uint128_t zmm5
zmm5.d = zmm7.d f* zmm2.d
uint128_t zmm14 = *(arg3 + 8)
uint128_t zmm12 = arg2
arg1.d = zmm4.d f* zmm3.d
arg2.d = zmm8.d f* zmm14.d
zmm5.d = zmm5.d f+ arg1.d
uint128_t zmm13
zmm13.d = zmm10.d f* zmm10.d
arg_48 = zmm2.d
int32_t arg_18 = zmm13.d
zmm5.d = zmm5.d f+ arg2.d

if (zmm5.d f< (zmm10 ^ data_142d3f780).d)
    goto label_14174bee7

arg1.d = zmm10.d f+ zmm12.d

if (zmm5.d f> arg1.d)
    goto label_14174bee7

if (zmm5.d f>= 0f)
    zmm6 = _mm_min_ss(zmm5.d, zmm12.d)
else
    zmm6 = zx.o(0)

arg2.d = zmm3.d f* zmm6.d
arg1.d = zmm2.d f* zmm6.d
zmm3.d = zmm4.d f- arg2.d
zmm2.d = zmm7.d f- arg1.d
arg1.d = zmm14.d f* zmm6.d
zmm3.d = zmm3.d f* zmm3.d
arg2.d = zmm8.d f- arg1.d
zmm2.d = zmm2.d f* zmm2.d
zmm3.d = zmm3.d f+ zmm2.d
arg2.d = arg2.d f* arg2.d
zmm3.d = zmm3.d f+ arg2.d
void* const* result

if (zmm3.d f> zmm13.d)
    zmm2 = arg_48
label_14174bee7:
    zmm14 = *(arg7 + 4)
    zmm13 = *arg7
    arg1.d = zmm14.d f* *(arg3 + 4)
    zmm15 = *(arg7 + 8)
    zmm3.d = zmm13.d f* zmm2.d
    arg2.d = zmm15.d f* *(arg3 + 8)
    zmm3.d = zmm3.d f+ arg1.d
    zmm2.d = zmm4.d f* zmm4.d
    zmm3.d = zmm3.d f+ arg2.d
    arg1.d = zmm3.d f* zmm3.d
    arg2.d = 1f f- arg1.d
    arg1.d = zmm7.d f* zmm7.d
    zmm2.d = zmm2.d f+ arg1.d
    arg_48 = arg2.d
    arg2.d = zmm8.d f* zmm8.d
    arg1.d = zmm5.d f* zmm5.d
    zmm2.d = zmm2.d f+ arg2.d
    zmm2.d = zmm2.d f- arg1.d
    zmm2.d = zmm2.d f- arg_18
    
    if (zmm2.d f<= 0f)
    label_14174c126:
        arg2 = arg_8
        int32_t var_e0_1 = arg4[2]
        uint64_t var_e8_1 = *arg4
        void** const var_f8 = &data_142fc46f0
        arg1 = zx.o(*arg5)
        int32_t var_c0_1 = arg5[1].d
        void** const var_d8 = &data_142fc46f0
        int32_t var_dc_1 = arg2.d
        int32_t var_bc_1 = arg2.d
        int32_t var_f0_1 = 0x1010000
        char var_ec_1 = 1
        int32_t var_d0_1 = 0x1010000
        char var_cc_1 = 1
        uint64_t var_c8_1 = arg1.q
        int64_t var_138
        int64_t var_128
        char rax_5
        int128_t zmm6_1
        int32_t zmm11_1
        rax_5, zmm6_1, zmm11_1 =
            sub_14174b730(&var_f8, arg6, arg7, arg8, zmm11.d, &arg_8, &var_138, &var_128, arg12)
        int64_t var_118
        int64_t var_108
        result =
            sub_14174b730(&var_d8, arg6, arg7, zmm6_1, zmm11_1, &arg_48, &var_118, &var_108, arg12)
        int64_t* rcx_5
        int64_t zmm1
        
        if (rax_5 != 0)
            int64_t zmm0 = arg_8
            rcx_5 = arg10
            
            if (result.b == 0)
                zmm1 = var_138
                *arg9 = zmm0.d
                *rcx_5 = zmm1
            else
                zmm1 = arg_48
                
                if (zmm0.d f> zmm1.d)
                    zmm0 = var_118
                    *arg9 = zmm1.d
                    *rcx_5 = zmm0
                    goto label_14174c2af
                
                *arg9 = zmm0.d
                *rcx_5 = var_138
            
            int32_t var_130
            rcx_5[1].d = var_130
            *arg11 = var_128
            int32_t var_120
            arg11[2] = var_120
            result.b = 1
        else if (result.b == 0)
            result.b = 0
        else
            rcx_5 = arg10
            zmm1 = var_118
            *arg9 = arg_48.d
            *rcx_5 = zmm1
        label_14174c2af:
            int32_t var_110
            rcx_5[1].d = var_110
            *arg11 = var_108
            int32_t var_100
            arg11[2] = var_100
            result.b = 1
    else
        arg2 = arg_48
        zmm4.d = zmm4.d f* zmm14.d
        zmm7.d = zmm7.d f* zmm13.d
        zmm8.d = zmm8.d f* zmm15.d
        zmm4.d = zmm4.d f+ zmm7.d
        zmm3.d = zmm3.d f* zmm5.d
        zmm2.d = zmm2.d f* arg2.d
        zmm4.d = zmm4.d f+ zmm8.d
        zmm4.d = zmm4.d f- zmm3.d
        arg1.d = zmm4.d f* zmm4.d
        arg1.d = arg1.d f- zmm2.d
        
        if (arg1.d f< 0f)
            goto label_14174c126
        
        arg1.d f- 9.99999975e-05f
        zmm2.d = 1f f/ arg2.d
        result.b = arg1.d f< 9.99999975e-05f
        
        if (result.b == 0)
            zmm4.d = (zmm4 ^ data_142d3f780).d f- _mm_sqrt_ss(arg1.d, arg1.d).d
            zmm4.d = zmm4.d f* zmm2.d
            zmm2 = zmm4
            
            if (not(zmm4.d f< 0f))
                goto label_14174bff1
            
            result.b = 0
        else
            zmm2.d = zmm2.d f* zmm4.d
            zmm2 ^= data_142d3f780
        label_14174bff1:
            zmm13.d = zmm13.d f* zmm2.d
            zmm14.d = zmm14.d f* zmm2.d
            zmm13.d = zmm13.d f+ *arg6
            zmm15.d = zmm15.d f* zmm2.d
            zmm14.d = zmm14.d f+ *(arg6 + 4)
            zmm15.d = zmm15.d f+ *(arg6 + 8)
            zmm4.d = zmm13.d f- *arg4
            zmm5.d = zmm14.d f- arg4[1]
            zmm7.d = zmm15.d f- arg4[2]
            zmm3.d = zmm4.d f* *arg3
            arg1.d = zmm5.d f* *(arg3 + 4)
            arg2.d = zmm7.d f* *(arg3 + 8)
            zmm3.d = zmm3.d f+ arg1.d
            zmm3.d = zmm3.d f+ arg2.d
            
            if (zmm3.d f< 0f || zmm3.d f>= zmm12.d)
                if (result.b == 0)
                    goto label_14174c126
                
                result.b = 0
            else
                zmm6.d = 1f f/ zmm10.d
                *arg9 = zmm2.d
                arg1.d = zmm3.d f* *arg3
                zmm4.d = zmm4.d f- arg1.d
                arg1.d = zmm3.d f* *(arg3 + 4)
                zmm3.d = zmm3.d f* *(arg3 + 8)
                zmm5.d = zmm5.d f- arg1.d
                zmm4.d = zmm4.d f* zmm6.d
                zmm7.d = zmm7.d f- zmm3.d
                zmm5.d = zmm5.d f* zmm6.d
                zmm7.d = zmm7.d f* zmm6.d
                *arg11 = (_mm_unpacklo_ps(zmm4, zmm5.q)).q
                arg11[2] = zmm7.d
                arg1.d = zmm11.d f* *arg11
                arg2.d = zmm11.d f* arg11[1]
                zmm11.d = zmm11.d f* arg11[2]
                zmm13.d = zmm13.d f- arg1.d
                zmm14.d = zmm14.d f- arg2.d
                zmm15.d = zmm15.d f- zmm11.d
                *arg10 = (_mm_unpacklo_ps(zmm13, zmm14.q)).q
                arg10[1].d = zmm15.d
                result.b = 1
else
    *arg9 = nullptr
    result.b = 1

return result
