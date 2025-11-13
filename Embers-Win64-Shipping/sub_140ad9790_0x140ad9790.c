// 函数: sub_140ad9790
// 地址: 0x140ad9790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = arg1[1].q
int32_t* r10 = arg2
int128_t zmm2 = *(arg4 + 4)
uint128_t zmm0 = *arg1
*(arg1 + 0x18)
int128_t zmm3 = *arg4
uint64_t result
result.b = 1
int64_t zmm5 = *(arg3 + 4)
int128_t zmm9
zmm9.d = zmm2.d f+ zmm1.d
int96_t var_c8 = zmm0.12
int128_t zmm10
zmm10.d = var_c8:4.d.d f- zmm2.d
int128_t zmm15 = 0x3f800000
int128_t zmm12 = arg2[1].d
int128_t zmm14
zmm14.d = var_c8.d.d f- zmm3.d
uint128_t zmm8
zmm8.d = var_c8:8.d.d f- *(arg4 + 8)
int64_t var_b8 = zmm1
float zmm4 = *(arg3 + 8) f- zmm12.d
zmm1 = *arg2
uint128_t zmm6
zmm6.d = (*arg3).d f- zmm1.d
uint128_t zmm7
zmm7.d = var_b8:4.d.d f+ *(arg4 + 8)
int128_t zmm11
zmm11.d = zmm3.d f+ _mm_shuffle_ps(zmm0, zmm0, 0xff).d
zmm0 = *(arg2 + 4)
int32_t arg_10 = 0x3f800000
zmm5.d = zmm5.d f- zmm0.d
int32_t arg_8 = 0x3f800000

if (not(zmm1.d f>= zmm14.d))
    if (not(zmm6.d f<= 0f))
        arg_10 = 0xbf800000
        zmm3.d = zmm14.d f- zmm1.d
        result.b = 0
        zmm3.d = zmm3.d f/ zmm6.d
        goto label_140ad98d4
    
    result.b = 0
else if (zmm1.d f<= zmm11.d)
    zmm3 = zx.o(0)
label_140ad98d4:
    
    if (not(zmm0.d f>= zmm10.d))
        if (not(zmm5.d f<= 0f))
            arg_8 = 0xbf800000
            zmm1.d = zmm10.q.d f- zmm0.d
            result.b = 0
            zmm1.d = zmm1.d f/ zmm5.d
            goto label_140ad991f
        
        result.b = 0
    else if (zmm0.d f<= zmm9.d)
        zmm1 = (zx.o(0)).q
    label_140ad991f:
        
        if (zmm12.d f>= zmm8.d)
            if (zmm12.d f<= zmm7.d)
                zmm0 = zx.o(0)
                
                if (result.b == 0)
                    goto label_140ad9952
                
                int32_t var_d0_2 = 0x3f800000
                *arg5 = *arg2
                arg5[1].d = arg2[1].d
                *arg6 = (_mm_unpacklo_ps(zx.o(0), 0)).q
                arg6[1].d = 0x3f800000
                *arg7 = 0
                result.b = 1
            else
                if (not(zmm4 >= 0f))
                    zmm0 = zmm7
                    goto label_140ad9936
                
                result.b = 0
        else if (zmm4 <= 0f)
            result.b = 0
        else
            zmm15 = 0xbf800000
            zmm0 = zmm8
        label_140ad9936:
            zmm0.d = zmm0.d f- zmm12.d
            zmm0.d = zmm0.d f/ zmm4
        label_140ad9952:
            int32_t var_d0_1
            
            if (zmm1.d f<= zmm0.d)
                *arg7 = zmm0.d
                zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
                var_d0_1 = zmm15.d
            else
                *arg7 = zmm1.d
                zmm0 = _mm_unpacklo_ps(zx.o(0), arg_8)
                var_d0_1 = 0
            
            *arg6 = zmm0.q
            arg6[1].d = var_d0_1
            zmm0 = *arg7
            
            if (not(zmm3.d f<= zmm0.d))
                *arg7 = zmm3.d
                *arg6 = (_mm_unpacklo_ps(arg_10, 0)).q
                int32_t var_d0_3 = 0
                arg6[1].d = 0
                zmm0 = *arg7
            
            if (zmm0.d f< 0f || zmm0.d f> 1f)
                result.b = 0
            else
                zmm6.d = zmm6.d f* zmm0.d
                zmm5.d = zmm5.d f* zmm0.d
                zmm6.d = zmm6.d f+ *r10
                zmm5.d = zmm5.d f+ r10[1]
                zmm4 = zmm4 f* zmm0.d f+ r10[2]
                *arg5 = (_mm_unpacklo_ps(zmm6, zmm5)).q
                zmm14.d = zmm14.d f- 0.100000001f
                arg5[1].d = zmm4
                zmm1 = *arg5
                
                if (zmm1.d f<= zmm14.d)
                    result.b = 0
                else
                    zmm11.d = zmm11.d f+ 0.100000001f
                    
                    if (zmm1.d f>= zmm11.d)
                        result.b = 0
                    else
                        zmm1 = *(arg5 + 4)
                        zmm10.d = zmm10.d f- 0.100000001f
                        
                        if (zmm1.d f<= zmm10.d)
                            result.b = 0
                        else
                            zmm9.d = zmm9.d f+ 0.100000001f
                            
                            if (zmm1.d f>= zmm9.d)
                                result.b = 0
                            else
                                zmm1 = arg5[1].d
                                zmm8.d = zmm8.d f- 0.100000001f
                                
                                if (zmm1.d f<= zmm8.d)
                                    result.b = 0
                                else
                                    zmm7.d = zmm7.d f+ 0.100000001f
                                    
                                    if (zmm1.d f< zmm7.d)
                                        result.b = 1
                                    else
                                        result.b = 0
    else
        if (not(zmm5.d f>= 0f))
            result.b = 0
            zmm1.d = zmm9.q.d f- zmm0.d
            zmm1.d = zmm1.d f/ zmm5.d
            goto label_140ad991f
        
        result.b = 0
else
    if (not(zmm6.d f>= 0f))
        result.b = 0
        zmm3.d = zmm11.d f- zmm1.d
        zmm3.d = zmm3.d f/ zmm6.d
        goto label_140ad98d4
    
    result.b = 0

return result
