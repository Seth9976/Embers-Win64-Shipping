// 函数: sub_141eb2a30
// 地址: 0x141eb2a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10210)
void var_10248
int64_t rax_1 = __security_cookie ^ &var_10248
int32_t* rdx = arg9
char result_1 = 0
uint32_t result = *(arg2 + 0xc)
int32_t* var_101d0 = rdx
arg2[1].d = 0

if (result s< 0 && result != 0)
    sub_1405a5390(arg2, 0)
    rdx = var_101d0

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    float zmm7[0x4] = *arg5
    zmm7[0] = zmm7[0] f- *arg4
    int128_t zmm8
    zmm8.d = (*(arg5 + 4)).d f- arg4[1]
    int128_t zmm9
    zmm9.d = (*(arg5 + 8)).d f- arg4[2]
    int128_t zmm6 = _mm_sqrt_ss(0, zmm8.d f* zmm8.d + zmm7[0] * zmm7[0] + zmm9.d f* zmm9.d)
    
    if (not(zmm6.d f<= 9.99999994e-09f))
        int128_t zmm10 = zmm6
        
        if (not(zmm6.d f<= 0f))
            void var_10180
            void** var_10138
            sub_141eb5350(&var_10138, arg7, 0, 
                sub_1422655c0(&var_10180, arg6, *(arg7 + 0x10), arg8, arg7, rdx, 1))
            float zmm4_1[0x4] = data_143f3a510
            int128_t zmm1_1 = data_14325cf00
            float zmm2_1[0x4] = arg4[1]
            int32_t* rbx_1 = *(arg1 + 0x1f8)
            int128_t var_10108_1 = zx.o(0)
            void var_100b0
            void* var_100c0_1 = &var_100b0
            int128_t var_100ec_1 = zx.o(0)
            void** const var_10110 = &data_142fcabc0
            float zmm0_1[0x4] = 0x3f800000
            zmm0_1[0] = 1f f/ zmm6.d
            int32_t var_100f8_1 = 0xffffffff
            int16_t var_100f0_1 = 0
            int32_t var_100cc_1 = 0
            char var_100c8_1 = 0
            int64_t var_100b8_1 = 0x200
            void* var_b0_1 = nullptr
            int32_t var_a8_1 = 0
            int32_t var_a4_1 = 0x200
            char result_2 = 0
            var_101d0 = rbx_1
            int128_t var_100dc_1 = zmm1_1
            zmm7[0] = zmm7[0] * zmm0_1[0]
            zmm9.d = zmm9.d f* zmm0_1[0]
            zmm8.d = zmm8.d f* zmm0_1[0]
            zmm0_1 = zmm7
            zmm7 = *arg4
            zmm2_1 = _mm_unpacklo_ps(zmm2_1, 0)
            int64_t var_101c0_1 = (_mm_unpacklo_ps(zmm0_1, zmm8.q)).q
            zmm0_1 = zmm4_1
            zmm4_1 = __andps_xmmxud_memxud(zmm4_1, data_143f3a520)
            zmm0_1[0].q = zx.o(0) u>> 0x40
            int128_t zmm3 = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, arg4[2][0].q), zmm2_1[0].q)
            int32_t var_101a8_1 = zmm9.d
            float var_10158_1[0x4] = zmm7
            int128_t var_10168 = zmm3
            float var_10148_1[0x4] = zmm4_1
            void* rax_3
            int128_t zmm6_1
            rax_3, zmm6_1 = sub_141d3bad0()
            void* const rax_4
            
            if (rax_3 == 0)
                rax_4 = nullptr
            else
                rax_4 = sub_1407faf10(rax_3)
            
            SRWLOCK* SRWLock = rax_4 + 8
            
            if (rax_4 == 0)
                SRWLock = nullptr
            
            if (SRWLock != 0)
                AcquireSRWLockShared(SRWLock)
            
            int64_t* rax_5 = sub_14226e750(rbx_1)
            
            if (rax_5 != 0)
                (*(*rax_5 + 0x348))(rax_5, "Runtime\Engine\Public\PhysXInterfaceWrapper.h", 0x18)
            
            int32_t rcx_8 = *(arg7 + 0x18)
            int16_t rsi
            
            if (rcx_8 == 0)
                rsi = 7
            else if (rcx_8 == 1)
                rsi = 5
            else if (rcx_8 != 2)
                rsi = 7
            else
                rsi = (rcx_8 - 1).w + 5
            
            float var_101b0
            int32_t* rax_7 = sub_140acc970(&var_101b0, &var_10180)
            int32_t* rcx_11 = var_101d0
            int16_t var_10188_1 = rsi
            char var_10186_1 = 0
            int128_t var_10198 = *rax_7
            int64_t* rax_8 = sub_14226e750(rcx_11)
            var_101d0.d = var_101c0_1.d[0]
            float var_101c8_1 = var_101a8_1[0]
            result_1 = 0
            int64_t var_10208_1 = 0
            void*** var_10210_1 = &var_10138
            float zmm0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            char var_10218_1
            var_10218_1.q = &var_10198
            int16_t var_101d6
            int16_t* var_10220_2 = &var_101d6
            var_101b0 = zmm7[0]
            var_101d0:4.d = var_101c0_1:4.d
            float var_101ac_1 = zmm0_3[0]
            var_101d6 = 0x607
            void** const* var_10228_2 = &var_10110
            float var_101a8_2 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
            (*(*rax_8 + 0x2f0))(rax_8, &var_101b0, &var_101d0, zmm6_1, var_10228_2, var_10220_2, 
                var_10218_1, var_10210_1, var_10208_1)
            int64_t r8_2 = sx.q(var_a8_1)
            
            if (r8_2.d s> 0)
                void var_80b0
                
                if (var_100c8_1 != 0)
                    result_2 = 1
                    void* rcx_13 = &var_80b0
                    
                    if (var_b0_1 != 0)
                        rcx_13 = var_b0_1
                    
                    zmm10 = *(rcx_13 + (r8_2 << 6) - 0xc)
                
                int64_t* r9_2 = &var_80b0
                
                if (var_b0_1 != 0)
                    r9_2 = var_b0_1
                
                var_10218_1.q = arg2
                var_10228_2.d = zmm6_1.d
                sub_141eafa80(&result_2, arg1, r8_2.d, r9_2, var_10228_2.b, &var_10180, 
                    var_10218_1, arg4, arg5, nullptr, &var_10168, zmm10.d, *(arg7 + 0x12), 
                    *(arg7 + 0x13), result_2)
                result_1 = result_2
            
            if (rax_5 != 0)
                (*(*rax_5 + 0x350))(rax_5)
            
            if (SRWLock != 0)
                ReleaseSRWLockShared(SRWLock)
            
            if (var_b0_1 != 0)
                sub_140a74f90(var_b0_1)
    
    result = zx.d(result_1)

__security_check_cookie(rax_1 ^ &var_10248)
return result
