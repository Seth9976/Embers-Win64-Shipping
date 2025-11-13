// 函数: sub_141edd140
// 地址: 0x141edd140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
*arg5 &= 0xfffffff8
float zmm12[0x4] = arg3
*(arg5 + 4) = 0
memset(&arg5[3], 0, 0x88)
float zmm6[0x4] = 0x38d1b717
int64_t r12
r12.b = 0
arg5[5] = 0x3f800000
uint64_t result = arg1[0x29]
void* rcx_1 = *(result + 0x290)
float zmm10[0x4] = *(rcx_1 + 0x1e0)
float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm10, zmm10, 0x55)[0], zmm10[0])
float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
temp0_2[0] = temp0_2[0] f* *(rcx_1 + 0x420)
temp0_1[0] = temp0_1[0] f* *(rcx_1 + 0x424)

if (arg7 == 0)
label_141edd2ae:
    
    if (not(arg4[0] < zmm12[0]))
        TEB* gsbase
        void* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        
        if (data_143f3ad60 s> *(rbx_2 + 0x14))
            _Init_thread_header(&data_143f3ad60)
            
            if (data_143f3ad60 == 0xffffffff)
                zmm6 = sub_140b58170(&data_143f3ad58, "ComputeFloorDist", 1)
                _Init_thread_footer(&data_143f3ad60)
        
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        float zmm15[0x4]
        float var_c8_1[0x4] = zmm15
        void var_218
        int64_t var_148
        sub_141eb54c0(&var_148, data_143f3ad58, &var_218, 0, arg1[0x29])
        void var_200
        sub_142259c00(&var_200)
        sub_142277d10(&var_200, 2)
        (*(*arg1 + 0x468))(arg1, &var_148, &var_200)
        int64_t* rcx_10 = arg1[0x16]
        result = (*(*rcx_10 + 0x4d8))(rcx_10)
        int32_t rsi_1 = result.d
        void* var_248_1
        int64_t var_228
        float var_210
        char result_1
        int64_t zmm0_2
        float zmm1_1
        
        if (r12.b != 0 || arg4[0] <= 0f || arg6 <= 0f)
        label_141edd5de:
            
            if ((*arg5 & 1) == 0 && (arg5[3].b & 2) == 0)
                arg5[1] = arg4[0]
            else if (zmm12[0] <= 0f)
                *arg5 &= 0xfffffffd
            else
                float rax_14 = arg2[1].d
                zmm0_2 = *arg2
                temp0_2[0] = temp0_2[0] + zmm12[0]
                var_228 = zmm0_2
                zmm6 = temp0_2 ^ data_142d3f780
                
                if (data_143f3ad70 s> *(rbx_2 + 0x14))
                    _Init_thread_header(&data_143f3ad70)
                    
                    if (data_143f3ad70 == 0xffffffff)
                        zmm6 = sub_140b58170(&data_143f3ad68, "FloorLineTrace", 1)
                        _Init_thread_footer(&data_143f3ad70)
                
                var_148 = data_143f3ad68
                memset(&result_1, 0, 0x88)
                zmm1_1 = var_228:4.d
                var_210 = var_228.d
                float var_20c_3 = zmm1_1
                int32_t var_1d0_2 = 0x3f800000
                float var_208_3 = rax_14 + zmm6[0]
                var_248_1.d = rsi_1
                float zmm7_1[0x4]
                int32_t zmm8_1
                int32_t zmm9_1
                int32_t zmm10_1
                int32_t zmm12_1
                result, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1 = sub_141ec6a20(
                    sub_1405be820(arg1), &result_1, &var_228, &var_210, var_248_1.b, &var_148, 
                    &var_200)
                
                if (result.b == 0)
                    *arg5 &= 0xfffffffd
                else
                    float zmm6_1[0x4] = var_1d0_2
                    
                    if (zmm6_1[0] f<= zmm9_1)
                        *arg5 &= 0xfffffffd
                    else
                        float temp0_8[0x4] = __maxss_xmmss_memss(zmm7_1[0], 0x4019999a)
                        *arg5 |= 1
                        zmm6_1[0] = zmm6_1[0] f* zmm8_1
                        zmm7_1 = temp0_8 ^ data_142d3f780
                        zmm6_1[0] = zmm6_1[0] f- zmm10_1
                        float temp0_9[0x4] = _mm_max_ss(zmm6_1[0], zmm7_1[0])
                        
                        if (temp0_9[0] f> zmm12_1)
                            *arg5 &= 0xfffffffd
                        else
                            result = (*(*arg1 + 0x820))(arg1, &result_1)
                            
                            if (result.b == 0)
                                *arg5 &= 0xfffffffd
                            else
                                var_248_1.b = 1
                                result =
                                    sub_141ef5960(arg5, &result_1, arg5[1], temp0_9, var_248_1.b)
        else
            zmm0_2 = temp0_2[0].q
            var_210 = 4.20389539e-45f
            temp0_2[0] = temp0_2[0] - temp0_1[0]
            zmm11 = temp0_2
            zmm11[0] = zmm11[0] * 0.100000024f
            zmm0_2.d = zmm0_2.d f- zmm11[0]
            zmm13 = zmm11
            zmm13[0] = zmm13[0] + arg4[0]
            int32_t var_208_1 = zmm0_2.d
            memset(&result_1, 0, 0x88)
            arg3 = arg2[1].d
            zmm1_1 = *(arg2 + 4)
            arg3[0] = arg3[0] - zmm13[0]
            var_228.d = (*arg2).d
            var_228:4.d = zmm1_1
            int32_t var_1d0_1 = 0x3f800000
            var_248_1.d = rsi_1
            result = (*(*arg1 + 0x8c0))(arg1, &result_1, arg2, &var_228, var_248_1, &var_210, 
                &var_148, &var_200, var_228, arg3[0])
            
            if (result.b == 0)
                goto label_141edd5de
            
            void var_1bc
            
            if ((result_1 & 2) != 0)
            label_141edd482:
                float rcx_14 = var_210
                float temp0_3 = _mm_max_ss(arg6 - 0.150000006f - zmm6[0], 0)
                float var_20c_2 = temp0_3
                int32_t var_204
                
                if (rcx_14 == 1)
                    if (temp0_3 > zmm6[0] || var_208_1.d f> zmm6[0] || not(var_204.d f<= zmm6[0]))
                    label_141edd4d7:
                        zmm11 = temp0_2
                        zmm11[0] = zmm11[0] * 0.899999976f
                        zmm0_2.d = temp0_2[0].q.d f- zmm11[0]
                        zmm13 = zmm11
                        zmm13[0] = zmm13[0] + arg4[0]
                        float var_208_2 = _mm_max_ss(temp0_3, zmm0_2.d)
                        memset(&result_1, 0, 0x88)
                        arg3 = arg2[1].d
                        zmm1_1 = *(arg2 + 4)
                        arg3[0] = arg3[0] - zmm13[0]
                        var_228.d = (*arg2).d
                        var_228:4.d = zmm1_1
                        var_1d0_1 = 0x3f800000
                        var_248_1.d = rsi_1
                        (*(*arg1 + 0x8c0))(arg1, &result_1, arg2, &var_228, var_248_1, &var_210, 
                            &var_148, &var_200, var_228, arg3[0])
                else if (rcx_14 == 2 || rcx_14 == 3)
                    result.b = temp0_3 <= zmm6[0]
                    
                    if (result.b == 0)
                        goto label_141edd4d7
            else if ((*(*arg1 + 0x898))(arg1, arg2, &var_1bc, arg6).b == 0)
                goto label_141edd482
            zmm0_2.d = var_1d0_1.d f* zmm13[0]
            float temp0_6[0x4] = __maxss_xmmss_memss(temp0_1[0], 0x4019999a)
            zmm0_2.d = zmm0_2.d f- zmm11[0]
            float temp0_7[0x4] = _mm_max_ss((temp0_6 ^ data_142d3f780)[0], zmm0_2.d)
            sub_141ef5aa0(arg5, &result_1, temp0_7[0], 0)
            result = zx.q(result_1)
            
            if ((result.b & 1) == 0 || (result.b & 2) != 0)
                goto label_141edd5de
            
            result = (*(*arg1 + 0x820))(arg1, &result_1)
            
            if (result.b == 0 || temp0_7[0] > arg4[0])
                goto label_141edd5de
            
            *arg5 |= 2
        int64_t var_e8
        
        if (var_e8 != 0)
            result = sub_140a74f90(var_e8)
        
        int64_t var_108
        
        if (var_108 != 0)
            result = sub_140a74f90(var_108)
else
    result = zx.q(*arg7)
    
    if ((result.b & 1) == 0 || (result.b & 2) != 0 || *(arg7 + 0x54) f>= *(arg7 + 0x48))
        goto label_141edd2ae
    
    float zmm0_1 = *(arg7 + 0x40) f- *(arg7 + 0x4c)
    float zmm1 = *(arg7 + 0x44) f- *(arg7 + 0x50)
    
    if (zmm0_1 * zmm0_1 + zmm1 * zmm1 > 9.99999975e-05f)
        goto label_141edd2ae
    
    result = (*(*arg1 + 0x898))(arg1, &arg7[0x10], &arg7[0x1c], temp0_1)
    
    if (result.b == 0)
        goto label_141edd2ae
    
    r12.b = 1
    char rax_4 = (*(*arg1 + 0x820))(arg1, arg7)
    arg3 = arg2[1].d
    arg3[0] = arg3[0] f- *(arg7 + 0x18)
    result = sub_141ef5aa0(arg5, arg7, arg3[0], rax_4)
    
    if (rax_4 == 0)
        goto label_141edd2ae

__security_check_cookie(rax_1 ^ &var_268)
return result
