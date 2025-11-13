// 函数: sub_141eda210
// 地址: 0x141eda210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[3].d)
int64_t* rsi = *arg2

if ((result.b & 8) != 0 || (rsi[3].b & 8) != 0 || (result.b & 0x10) != 0)
    result.b = 0
else if (j_sub_140d3e110(&arg1[0x41]).b != 0)
    result.b = 0
else if (j_sub_140d3e110(&rsi[0x41]).b != 0)
    result.b = 0
else if (0f f!= rsi[0x3d].d || 0f f!= *(rsi + 0x1ec) || 0f f!= rsi[0x3e].d)
    uint32_t zmm0[0x4] = rsi[4].d
    zmm0[0] = zmm0[0] f+ arg1[4].d
    
    if (zmm0[0] f>= arg4[0])
        result.b = 0
    else
        float zmm2[0x4] = *(arg1 + 0x1fc)
        zmm2[0] = zmm2[0] f* *(rsi + 0x1fc)
        zmm0 = arg1[0x3f].d
        zmm0[0] = zmm0[0] f* rsi[0x3f].d
        float zmm1[0x4] = arg1[0x40].d
        zmm1[0] = zmm1[0] f* rsi[0x40].d
        zmm2[0] = zmm2[0] f+ zmm0[0]
        zmm2[0] = zmm2[0] + zmm1[0]
        
        if (zmm2[0] f< arg1[0x54].d)
            result.b = 0
        else
        label_141eda318:
            char rcx_2
            
            if (0f f!= *(arg1 + 0x54) || 0f f!= arg1[0xb].d || 0f f!= *(arg1 + 0x5c))
                rcx_2 = 0
            else
                rcx_2 = 1
            
            if (0f f!= *(rsi + 0x54) || 0f f!= rsi[0xb].d || 0f f!= *(rsi + 0x5c))
                result.b = 0
            else
                result.b = 1
            
            if (rcx_2 != result.b)
                result.b = 0
            else
                zmm1 = *(arg1 + 0x1f4)
                zmm2 = *(rsi + 0x1f4)
                zmm0 = zmm1
                zmm0[0] = zmm0[0] f- zmm2[0]
                
                if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> *(arg1 + 0x2a4))
                    result.b = 0
                else
                    int32_t rcx_3 = 1
                    int32_t rdx_2
                    
                    if (zmm1[0] != 0f)
                        rdx_2 = 0
                    else
                        rdx_2 = 1
                    
                    if (zmm2[0] != 0f)
                        result = 0
                    else
                        result = 1
                    
                    if (rdx_2 != result.d)
                        result.b = 0
                    else
                        int32_t rdx_3
                        
                        if (0f f!= arg1[5].d)
                            rdx_3 = 0
                        else
                            rdx_3 = 1
                        
                        if (0f f!= rsi[5].d)
                            result = 0
                        else
                            result = 1
                        
                        if (rdx_3 != result.d || ((arg1[3].d ^ rsi[3].d).b & 0x20) != 0
                                || *(arg1 + 0x34) != *(rsi + 0x34) || arg1[6].d != rsi[6].d)
                            result.b = 0
                        else
                            if (0f f!= *(arg1 + 0x2c))
                                result = 0
                            else
                                result = 1
                            
                            if (not(0f f== *(rsi + 0x2c)))
                                rcx_3 = 0
                            
                            if (result.d != rcx_3)
                                result.b = 0
                            else
                                char rax_2 = (*(*rsi + 0x50))(rsi)
                                int64_t rdx_4 = *arg1
                                
                                if ((*(rdx_4 + 0x50))(arg1, rdx_4).b != rax_2)
                                    result.b = 0
                                else
                                    void* rax_3 = sub_140d3c6e0(&arg1[0x25])
                                    void* rax_4 = sub_140d3c6e0(&rsi[0x25])
                                    char rax_5 = sub_141ea5e60(rax_3)
                                    result = sub_141ea5e60(rax_4)
                                    
                                    if (rax_5 != result.b || ((data_143a2d670 == 0 || rax_5 != 0
                                            || result.b != 0)
                                            && (rax_3 != rax_4 || arg1[0x26] != rsi[0x26])))
                                        result.b = 0
                                    else
                                        result = zx.q(*(rsi + 0x39))
                                        
                                        if (*(arg1 + 0x39) != result.b || arg1[0x2d].b != result.b
                                                || rsi[0x24].d[0] f!= arg1[0x24].d
                                                || (*(rsi + 0x124))[0] f!= *(arg1 + 0x124))
                                            result.b = 0
                                        else
                                            int64_t rax_6 = sub_140d3c6e0(&arg1[0x28])
                                            int64_t rax_7 = sub_140d3c6e0(&arg1[0x38])
                                            result = sub_140d3c6e0(&rsi[0x28])
                                            
                                            if (rax_6 != result || rax_7 != result)
                                                result.b = 0
                                            else
                                                int64_t rcx_13 = rsi[0x29]
                                                
                                                if (arg1[0x29] != rcx_13 || arg1[0x39] != rcx_13)
                                                    result.b = 0
                                                else
                                                    float zmm4_1[0x4]
                                                    
                                                    if (result == 0)
                                                        zmm4_1 = *(arg1 + 0x110)
                                                        arg4 = *(rsi + 0x110)
                                                        float zmm5_1[0x4] = data_143f3a9d0
                                                        float temp0_29[0x4] =
                                                            _mm_sub_ps(zmm4_1, arg4)
                                                        float temp0_30[0x4] = _mm_shuffle_ps(
                                                            0x38d1b717, 0x38d1b717, 0)
                                                        
                                                        if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(
                                                                temp0_30, _mm_and_ps(temp0_29, zmm5_1), 
                                                                1))) != 0)
                                                            if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(
                                                                    temp0_30, 
                                                                    _mm_and_ps(_mm_add_ps(arg4, zmm4_1), 
                                                                        zmm5_1), 
                                                                    1))) != 0 || (*(rsi + 0x24))[0] f!=
                                                                    *(arg1 + 0x24)
                                                                    || arg1[0x37].d != rsi[0x27].d)
                                                                result.b = 0
                                                            else
                                                                result.b = 1
                                                        else if (
                                                                (*(rsi + 0x24))[0] f!= *(arg1 + 0x24)
                                                                || arg1[0x37].d != rsi[0x27].d)
                                                            result.b = 0
                                                        else
                                                            result.b = 1
                                                    else
                                                        zmm0 = arg1[0x2a].d
                                                        zmm0[0] = zmm0[0] f- rsi[0x2a].d
                                                        arg4 = data_143a2d674
                                                        zmm2 = *(arg1 + 0x154)
                                                        zmm1 = arg1[0x2b].d
                                                        zmm2[0] = zmm2[0] f- *(rsi + 0x154)
                                                        zmm1[0] = zmm1[0] f- rsi[0x2b].d
                                                        
                                                        if (_mm_and_ps(zmm0, 0x7fffffff)[0]
                                                                f> arg4[0])
                                                            result.b = 0
                                                        else if (_mm_and_ps(zmm2, 0x7fffffff)[0]
                                                                > arg4[0])
                                                            result.b = 0
                                                        else if (_mm_and_ps(zmm1, 0x7fffffff)[0]
                                                                > arg4[0])
                                                            result.b = 0
                                                        else
                                                            zmm2 = *(arg1 + 0x15c)
                                                            zmm2[0] = zmm2[0] f- *(rsi + 0x15c)
                                                            zmm1 = *(arg1 + 0x164)
                                                            zmm1[0] = zmm1[0] f- *(rsi + 0x164)
                                                            uint32_t arg_8 = data_143a2d678[0]
                                                            float zmm7[0x4] = data_143f3abe0
                                                            float temp0_5[0x4] =
                                                                _mm_unpacklo_ps(zmm2, zmm1[0].q)
                                                            zmm4_1 = __andps_xmmxud_memxud(zmm7, 
                                                                data_143f3a9d0)
                                                            zmm1 = data_143f3abf0
                                                            float temp0_7[0x4] =
                                                                _mm_unpacklo_ps(temp0_5, 0)
                                                            float temp0_8[0x4] =
                                                                _mm_div_ps(temp0_7, zmm7)
                                                            float temp0_10[0x4] = _mm_cvtepi32_ps(
                                                                _mm_cvttps_epi32(temp0_8))
                                                            float temp0_15[0x4] = _mm_sub_ps(
                                                                temp0_7, 
                                                                _mm_mul_ps(
                                                                    _mm_and_ps(
                                                                        _mm_cmpeq_ps(zmm1, 
                                                                            __andps_xmmxud_memxud(temp0_8, 
                                                                                data_143f3a9d0), 
                                                                            2), 
                                                                        temp0_8 ^ temp0_10) ^ temp0_10, 
                                                                    zmm7))
                                                            float temp0_18[0x4] = _mm_max_ps(
                                                                _mm_sub_ps(zx.o(0), zmm4_1), 
                                                                _mm_min_ps(temp0_15, zmm4_1))
                                                            zmm0 = _mm_add_ps(temp0_18, zmm7)
                                                            zmm2 = _mm_and_ps(zmm0 ^ temp0_18, 
                                                                _mm_cmpeq_ps(zx.o(0), temp0_18, 2))
                                                                ^ zmm0
                                                            zmm0 =
                                                                _mm_cmpeq_ps(data_143f3abd0, zmm2, 1)
                                                            zmm1 = _mm_and_ps(
                                                                _mm_sub_ps(zmm2, zmm7) ^ zmm2, zmm0)
                                                            zmm0 = arg_8
                                                            
                                                            if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(
                                                                    _mm_shuffle_ps(zmm0, zmm0, 0), 
                                                                    __andps_xmmxud_memxud(zmm1 ^ zmm2, 
                                                                        data_143f3a9d0), 
                                                                    1))) == 0 && not((*(rsi + 0x24))[0] f!=
                                                                    *(arg1 + 0x24))
                                                                    && arg1[0x37].d == rsi[0x27].d)
                                                                result.b = 1
                                                            else
                                                                result.b = 0
else
    if (not(0f f!= arg1[0x3d].d) && not(0f f!= *(arg1 + 0x1ec)) && 0f f== arg1[0x3e].d)
        goto label_141eda318
    
    result.b = 0

return result
