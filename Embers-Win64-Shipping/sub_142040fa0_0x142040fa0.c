// 函数: sub_142040fa0
// 地址: 0x142040fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm11[0x4]
float var_98[0x4] = zmm11
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
float zmm13[0x4] = *(arg4 + 4)
zmm13[0] = zmm13[0] f- arg3[1]
float zmm12[0x4] = *arg4
float zmm8[0x4] = zx.o(0)
zmm12[0] = zmm12[0] f- *arg3
float zmm9[0x4] = 0x3f800000
int128_t zmm6
zmm6.d = (*(arg4 + 8)).d f- arg3[2]
float zmm7[0x4] = zmm12
zmm7[0] = zmm7[0] * zmm12[0]
zmm13[0] = zmm13[0] * zmm13[0]
float var_1f0 = zmm13[0]
float var_1f4 = zmm12[0]
zmm7[0] = zmm7[0] + zmm13[0]
float var_1f8

if (zmm7[0] != 1f)
    if (zmm7[0] >= 9.99999994e-09f)
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0] * temp0_1[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        float var_1e8_1 = temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm13[0]
        zmm12[0] = zmm12[0] * temp0_1[0]
        var_1f0 = temp0_1[0]
        zmm13 = temp0_1
        var_1f8 = 0f
        var_1f4 = zmm12[0]
    else
        zmm13 = data_143dbb1fc
        zmm12 = data_143dbb1f8
        var_1f0 = zmm13[0]
        var_1f8 = data_143dbb200[0]
        var_1f4 = zmm12[0]
else if (zmm6.d f!= 0f)
    var_1f0 = zmm13[0]
    var_1f8 = 0f
    var_1f4 = zmm12[0]
else
    var_1f8 = zmm6.d

float zmm15[0x4] = arg5
float temp0_2[0x4] = _mm_sqrt_ss(0, zmm7[0])
int64_t rcx = data_143f5b298
zmm15[0] = zmm15[0] * zmm15[0]
float var_1e8_2 = temp0_2[0]
uint64_t result
float zmm6_1[0x4]
result, zmm6_1 = sub_1423de540(rcx, arg1, 1)
uint64_t result_1 = result

if (result == 0)
    result.b = 0
else
    zmm11 = arg8
    float zmm0_1[0x4]
    
    if (not(__andps_xmmxud_memxud(zmm11, data_142d3f770)[0] > 9.99999994e-09f))
        zmm0_1, result = sub_142436950(result)
        zmm11 = zmm0_1
    
    zmm11 ^= data_142d3f780
    zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
    zmm7[0] = zmm7[0] * zmm11[0]
    zmm15[0] = zmm15[0] * zmm15[0]
    zmm6_1[0] = zmm6_1[0] * zmm15[0]
    zmm6_1[0] = zmm6_1[0] + zmm7[0]
    zmm6_1[0] = zmm6_1[0] * zmm11[0]
    zmm15[0] = zmm15[0] - zmm6_1[0]
    
    if (zmm15[0] < 0f)
        result.b = 0
    else
        int32_t rcx_2 = arg9
        float temp0_4[0x4] = _mm_sqrt_ss(0, zmm15[0])
        zmm11[0] = zmm11[0] * temp0_2[0]
        float zmm1_1[0x4] = 0x3f800000
        zmm15[0] = zmm15[0] - temp0_4[0]
        temp0_4[0] = temp0_4[0] + zmm15[0]
        zmm1_1[0] = 1f / zmm11[0]
        temp0_4[0] = temp0_4[0] * zmm1_1[0]
        zmm15[0] = zmm15[0] * zmm1_1[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] + 1f
        zmm15[0] = zmm15[0] / temp0_4[0]
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm15[0] = zmm15[0] + 1f
        zmm15[0] = zmm15[0] / zmm15[0]
        float zmm4_1[0x4]
        float zmm5_1[0x4]
        
        if (rcx_2 != 0)
            zmm0_1 = _mm_max_ss(zmm15[0], zmm15[0])
            float temp0_11[0x4] = _mm_min_ss(zmm15[0], zmm15[0])
            
            zmm6_1 = arg6 == 0 ? zmm0_1 : temp0_11
            
            float var_1b0 = zmm6_1[0]
            
            if (arg6 == 0)
                zmm0_1 = temp0_11
            
            float var_1ac_1 = zmm0_1[0]
            zmm0_1 = 0xbf800000
            float var_1e0
            bool cond:7_1
            
            if (arg6 == 0)
                if (not(zmm15[0] <= zmm15[0]))
                    temp0_4[0] - 0f
                    
                    if (temp0_4[0] > 0f)
                        goto label_1420413cf
                    
                    if (temp0_4[0] < 0f)
                        goto label_1420413db
                    
                    var_1e0 = 0f
                    goto label_1420413b8
                
                zmm15[0] - 0f
                
                if (zmm15[0] <= 0f)
                    if (zmm15[0] >= 0f)
                        zmm5_1 = zx.o(0)
                        goto label_1420413e8
                    
                label_1420413db:
                    var_1e0 = -1f
                    goto label_1420413b8
                
            label_1420413cf:
                var_1e0 = 1f
            label_1420413b8:
                
                if (zmm15[0] >= zmm15[0])
                label_142041403:
                    zmm15[0] - 0f
                    cond:7_1 = zmm15[0] < 0f
                    
                    if (zmm15[0] <= 0f)
                        goto label_14204140f
                    
                    zmm0_1 = 0x3f800000
                else
                    temp0_4[0] - 0f
                    cond:7_1 = temp0_4[0] < 0f
                    
                    if (temp0_4[0] <= 0f)
                    label_14204140f:
                        
                        if (not(cond:7_1))
                            zmm0_1 = zx.o(0)
                    else
                        zmm0_1 = 0x3f800000
            else
                bool cond:6_1
                
                if (not(zmm15[0] >= zmm15[0]))
                    temp0_4[0] - 0f
                    cond:6_1 = temp0_4[0] >= 0f
                    
                    if (temp0_4[0] <= 0f)
                        goto label_142041390
                    
                    zmm5_1 = 0x3f800000
                    goto label_1420413e8
                
                zmm15[0] - 0f
                cond:6_1 = zmm15[0] >= 0f
                
                if (zmm15[0] <= 0f)
                label_142041390:
                    
                    if (cond:6_1)
                        zmm5_1 = zx.o(0)
                        goto label_1420413e8
                    
                    zmm5_1 = 0xbf800000
                    goto label_1420413e8
                
                zmm5_1 = 0x3f800000
            label_1420413e8:
                var_1e0 = zmm5_1[0]
                
                if (arg6 == 0)
                    goto label_1420413b8
                
                if (zmm15[0] <= zmm15[0])
                    goto label_142041403
                
                temp0_4[0] - 0f
                cond:7_1 = temp0_4[0] < 0f
                
                if (temp0_4[0] <= 0f)
                    goto label_14204140f
                
                zmm0_1 = 0x3f800000
            uint64_t rsi_1 = zx.q(data_14401b1a0)
            void var_170
            void* r13_1 = &var_170
            TEB* gsbase
            void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            int32_t rdi_1 = 0
            zmm11[0] = zmm11[0] * -0.5f
            int64_t r12_1 = 0
            int128_t zmm10 = arg7
            float var_1dc_1 = zmm0_1[0]
        label_14204144b:
            zmm0_1 = *(&var_1b0 + r12_1)
            zmm5_1 = *(&var_1e0 + r12_1)
            int32_t* rdx_1 = arg3
            zmm15[0] = zmm15[0] - zmm0_1[0]
            zmm4_1 = var_1f8
            float temp0_12[0x4] = _mm_sqrt_ss(0, zmm0_1[0])
            float temp0_13[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm15[0])
            zmm4_1[0] = zmm4_1[0] * temp0_12[0]
            temp0_13[0] = temp0_13[0] f* data_14399f680
            temp0_13[0] = temp0_13[0] f* data_14399f678:4.d
            temp0_13[0] = temp0_13[0] f* data_14399f678.d
            zmm5_1[0] = zmm5_1[0] * temp0_13[0]
            zmm0_1 = zmm12
            zmm0_1[0] = zmm0_1[0] * temp0_12[0]
            zmm12 = zmm9
            temp0_13[0] = temp0_13[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] + zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * temp0_13[0]
            temp0_13[0] = temp0_13[0] + zmm0_1[0]
            zmm13[0] = zmm13[0] * temp0_12[0]
            float var_178_1 = zmm4_1[0]
            zmm13[0] = zmm13[0] + zmm5_1[0]
            zmm6_1 = zmm8
            zmm12[0] = zmm12[0] / temp0_12[0]
            *r13_1 = (_mm_unpacklo_ps(temp0_13, zmm13[0].q)).q
            zmm0_1 = zx.o(*rdx_1)
            *(r13_1 + 8) = var_178_1
            zmm7 = *(r13_1 + 8)
            zmm13 = *(r13_1 + 4)
            float zmm14[0x4] = *r13_1
            zmm5_1 = rdx_1[2]
            int64_t var_1d8 = zmm0_1.q
            
            while (true)
                zmm1_1 = rdx_1[2]
                zmm6_1[0] = zmm6_1[0] + 0.125f
                zmm6_1[0] = zmm6_1[0] * var_1e8_2
                zmm6_1[0] = zmm6_1[0] * zmm12[0]
                zmm7[0] = zmm7[0] * zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                zmm13[0] = zmm13[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] + zmm7[0]
                zmm6_1[0] = zmm6_1[0] * zmm11[0]
                zmm14[0] = zmm14[0] * zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] f- zmm10.d
                zmm14[0] = zmm14[0] f+ *rdx_1
                zmm6_1[0] = zmm6_1[0] + zmm1_1[0]
                zmm1_1 = rdx_1[1]
                zmm1_1[0] = zmm1_1[0] + zmm13[0]
                float var_1c8 = zmm14[0]
                float var_1c0_1 = zmm6_1[0]
                float var_1c4_1 = zmm1_1[0]
                
                if (rcx_2 == 2 && not(zmm6_1[0] >= zmm5_1[0]))
                    if (arg12 != 0)
                    label_142041695:
                        zmm5_1 = var_1c0_1
                        var_1d8.d = var_1c8[0]
                        var_1d8:4.d = var_1c4_1[0]
                        float var_1d0_3 = zmm5_1[0]
                        
                        if (zmm6_1[0] < zmm9[0])
                            continue
                    
                    if (rdi_1 == 0xffffffff)
                    label_1420416f8:
                        result.b = 0
                        break
                    
                    int64_t rcx_3 = sx.q(rdi_1) * 3
                    int32_t var_168[0x4]
                    result = zx.q(var_168[rcx_3])
                    *arg2 = *(&var_170 + (rcx_3 << 2))
                    arg2[1].d = result.d
                    result.b = 1
                    break
                
                if (data_143f40708 s> *(0x14 + *(ThreadLocalStoragePointer + (rsi_1 << 3))))
                    _Init_thread_header(&data_143f40708)
                    
                    if (data_143f40708 == 0xffffffff)
                        sub_140b58170(&data_143f40700, "SuggestProjVelTrace", 1)
                        _Init_thread_footer(&data_143f40708)
                
                void var_1ec
                void var_158
                sub_141eb54c0(&var_158, data_143f40700, &var_1ec, 1, nullptr)
                sub_141eb8b70(&var_158, arg11)
                int32_t var_18c_1 = zmm10.d
                void* var_208_1 = &var_158
                int32_t var_190 = 2
                void* const var_218_1
                var_218_1.d = 1
                result, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 = sub_141ecd9f0(
                    result_1, &var_1d8, &var_1c8, &data_14399f720, var_218_1.d, &var_190, 
                    var_208_1, arg10)
                int64_t var_118
                int64_t var_f8
                
                if (result.b == 0)
                    if (var_f8 != 0)
                        sub_140a74f90(var_f8)
                    
                    if (var_118 != 0)
                        sub_140a74f90(var_118)
                    
                    rdx_1 = arg3
                    rcx_2 = arg9
                    goto label_142041695
                
                if (var_f8 != 0)
                    sub_140a74f90(var_f8)
                
                if (var_118 != 0)
                    sub_140a74f90(var_118)
                
                rdi_1 += 1
                r12_1 += 4
                r13_1 += 0xc
                
                if (rdi_1 s>= 2)
                    goto label_1420416f8
                
                zmm12 = var_1f4
                zmm13 = var_1f0
                rcx_2 = arg9
                goto label_14204144b
        else
            bool cond:2_1
            bool cond:3_1
            
            if (arg6 == rcx_2.b)
                bool cond:0_1 = zmm15[0] <= zmm15[0]
                zmm5_1 = _mm_max_ss(zmm15[0], zmm15[0])
                
                if (cond:0_1)
                label_142041281:
                    zmm15[0] - 0f
                    cond:2_1 = zmm15[0] >= 0f
                    cond:3_1 = zmm15[0] > 0f
                else
                    temp0_4[0] - 0f
                    cond:2_1 = temp0_4[0] >= 0f
                    cond:3_1 = temp0_4[0] > 0f
            else
                bool cond:1_1 = zmm15[0] >= zmm15[0]
                zmm5_1 = _mm_min_ss(zmm15[0], zmm15[0])
                
                if (cond:1_1)
                    goto label_142041281
                
                temp0_4[0] - 0f
                cond:2_1 = temp0_4[0] >= 0f
                cond:3_1 = temp0_4[0] > 0f
            
            if (not(cond:3_1))
                if (cond:2_1)
                    zmm9 = zx.o(0)
                else
                    zmm9 = 0xbf800000
            
            zmm4_1 = var_1f8
            zmm15[0] = zmm15[0] - zmm5_1[0]
            float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5_1[0])
            float temp0_8[0x4] = _mm_sqrt_ss(0, zmm15[0])
            zmm12[0] = zmm12[0] * temp0_7[0]
            zmm13[0] = zmm13[0] * temp0_7[0]
            temp0_8[0] = temp0_8[0] f* data_14399f678.d
            temp0_8[0] = temp0_8[0] f* data_14399f678:4.d
            temp0_8[0] = temp0_8[0] f* data_14399f680
            zmm4_1[0] = zmm4_1[0] * temp0_7[0]
            temp0_8[0] = temp0_8[0] * zmm9[0]
            temp0_8[0] = temp0_8[0] * zmm9[0]
            temp0_8[0] = temp0_8[0] * zmm9[0]
            temp0_8[0] = temp0_8[0] + zmm12[0]
            temp0_8[0] = temp0_8[0] + zmm13[0]
            temp0_8[0] = temp0_8[0] + zmm4_1[0]
            *arg2 = (_mm_unpacklo_ps(temp0_8, temp0_8[0].q)).q
            arg2[1].d = temp0_8[0]
            result.b = 1

__security_check_cookie(rax_1 ^ &var_238)
return result
