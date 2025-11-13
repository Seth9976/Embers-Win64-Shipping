// 函数: sub_141fad6c0
// 地址: 0x141fad6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)
float var_150 = data_143dbb1f0.d[0]
int64_t var_148 = 0
char var_140 = 0
int64_t var_138 = 0
int64_t var_120
__builtin_memset(&var_120, 0, 0x1c)
void** const var_158 = &data_14328aab8
float zmm0[0x4] = *(arg1 + 0x70)
int64_t var_f8 = arg4
int64_t var_160 = arg3
int32_t var_14c = data_143dbb1f0:4.d.d
float var_130[0x4] = zmm0
float var_188
int128_t* rax_1 = (*(*arg1 + 0x268))(zmm0, &var_188, &var_f8, arg2)
float var_1a0
int128_t* rax_2 = (*(*arg1 + 0x268))(arg1, &var_1a0, &var_160, arg2)
var_120.d = (*rax_2)[0]
var_120:4.d = (*(rax_2 + 4)).d
int128_t var_118
var_118:4.d = (*rax_1)[0]
var_118:8.d = (*(rax_1 + 4)).d
var_158[3](&var_158, *(arg2 + 0x260))
uint128_t zmm4 = var_160.d
float zmm5[0x4] = var_160:4.d
float zmm3[0x4] = var_f8.d
int64_t zmm2 = var_f8:4.d
uint128_t zmm1
zmm1.d = zmm4.d f- zmm3[0]
int32_t arg_28
int128_t zmm9 = arg_28
zmm5[0] = zmm5[0] f- zmm2.d
float zmm8[0x4] = 0x3f800000
float zmm13[0x4] = arg1[9].d
float zmm14[0x4] = *(arg1 + 0x4c)
zmm13[0] = zmm13[0] f- arg1[8].d
zmm14[0] = zmm14[0] f- *(arg1 + 0x44)
zmm5[0] = zmm5[0] * zmm5[0]
zmm1.d = zmm1.d f* zmm1.d
zmm5[0] = zmm5[0] f+ zmm1.d
zmm1.d = 1f f/ zmm9.d
float temp0[0x4] = _mm_sqrt_ss(zmm5[0], zmm5[0])
zmm13[0] = zmm13[0] f* zmm1.d
zmm14[0] = zmm14[0] f* zmm1.d
temp0[0] = temp0[0] f* zmm1.d
arg_28 = temp0[0]
float zmm12[0x4] = *(arg1 + 0x70)
int32_t rcx_2 = arg1[0x11].d
char arg_30
char r15 = arg_30
float arg_8 = zmm4.d
float arg_c = zmm5[0]
float var_170[0x4] = zmm12

if (rcx_2 == 0)
    arg_28 = temp0[0]
    zmm9 = 0x3f800000
label_141fad8d0:
    
    if (r15 == 0)
        zmm3[0] = zmm3[0] f- zmm4.d
        zmm3[0] = zmm3[0] * -0.0250000004f
        zmm3[0] = zmm3[0] * -0.0500000007f
        zmm5[0] = zmm5[0] - zmm3[0]
        arg_c = zmm5[0]
    else
        zmm2.d = zmm2.d f- zmm5[0]
        zmm2.d = zmm2.d f* -0.0250000004f
        zmm4.d = zmm4.d f- zmm2.d
        arg_8 = zmm4.d
else
    if (rcx_2 == 1)
        goto label_141fad8d0
    
    if (rcx_2 == 2)
        var_170 = __mulps_xmmps_memps(zmm12, data_142f64dd0)
        
        if (r15 == 0)
            zmm3[0] = zmm3[0] f- zmm4.d

uint64_t result

if ((arg1[0x14].b & 2) == 0)
    result = sub_1423de050()
else
    result = sub_1423de320()

zmm0 = arg1[7].d
zmm9.d = zmm9.d f+ 1f
uint128_t zmm15 = *(arg1 + 0x3c)
int64_t* rbx_1 = nullptr
zmm0[0] = zmm0[0] f- arg1[6].d
zmm15.d = zmm15.d f- *(arg1 + 0x34)
uint64_t result_1 = result
int32_t r14 = 0
uint64_t result_2
void* var_1c0
int128_t* var_1b8
int32_t var_1a8
int32_t var_1a4
int16_t* var_198
int32_t var_190
int16_t* var_180

if (not(zmm9.d f<= 0f))
    zmm1 = zx.o(0)
    int32_t i
    
    do
        if (r15 == 0)
            zmm0 = zmm13
            zmm0[0] = zmm0[0] f* zmm1.d
            zmm0[0] = zmm0[0] f+ arg1[8].d
        else
            zmm0 = zmm14
            zmm0[0] = zmm0[0] f* zmm1.d
            zmm0[0] = zmm0[0] f+ *(arg1 + 0x44)
        
        sub_140a2e390(&var_198, u"%1.2f", fconvert.d(zmm0[0]))
        int16_t* const r9_2 = &data_142d40450
        
        if (var_190 != 0)
            r9_2 = var_198
        
        int32_t zmm7_1
        uint128_t zmm10_1
        int128_t zmm11_1
        int128_t zmm12_1
        zmm7_1, zmm8, i, zmm10_1, zmm11_1, zmm12_1 = sub_1424235b0(result_1, &arg_30, &arg_28, r9_2)
        (*(*arg1 + 0x268))(arg1, &var_1a8, &arg_8, arg2, result_2, var_1c0, var_1b8)
        uint128_t zmm0_1
        int128_t zmm1_1
        uint128_t zmm2_1
        
        if (r15 == 0)
            if (arg1[0x11].d != 2)
                zmm2_1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x44))).d f* zmm7_1
                zmm2_1 ^= zmm11_1
            else
                zmm2_1 = zmm10_1
            
            zmm1_1 = var_1a8
            int16_t* r9_7 = &data_142d40450
            zmm2_1.d = zmm2_1.d f+ var_1a4
            
            if (var_190 != 0)
                r9_7 = var_198
            
            void* rcx_11 = *(arg2 + 0x260)
            var_1b8 = &data_14399f5e0
            var_1c0 = &arg1[0xe]
            result_2 = result_1
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(arg_30.d)).d f* 0.5f
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm6 = sub_142409910(rcx_11, zmm1_1, zmm2_1, r9_7, result_2, var_1c0, &data_14399f5e0)
            var_188 = arg_8[0]
            zmm1.d = zmm15.d f+ arg_c
            zmm0 = data_143dbb1f0.d
            var_158 = &data_14328aab8
            int64_t rax_9 = *arg1
            float var_150_2 = zmm0[0]
            int32_t var_184_1 = zmm1.d
            int32_t var_14c_2 = data_143dbb1f0:4.d.d
            int64_t var_148_2 = 0
            char var_140_2 = 0
            int64_t var_138_2 = 0
            int64_t var_120_2
            __builtin_memset(&var_120_2, 0, 0x1c)
            int128_t var_130_2 = zmm12_1
            float (* rax_10)[0x4] = (*(rax_9 + 0x268))(arg1, &var_180, &var_188, arg2)
            float (* rax_11)[0x4] = (*(*arg1 + 0x268))(arg1, &var_170, &arg_8, arg2)
            var_120_2.d = (*rax_11)[0]
            var_120_2:4.d = (*rax_11)[1].d
            int128_t var_118_2
            var_118_2:4.d = (*rax_10)[0]
            var_118_2:8.d = (*rax_10)[1].d
            result = var_158[3](&var_158, *(arg2 + 0x260))
            zmm0 = arg_8
            zmm0[0] = zmm0[0] + zmm6[0]
            arg_8 = zmm0[0]
        else
            int16_t* const r9_4 = &data_142d40450
            zmm1_1 = var_1a8
            void* rcx_7 = *(arg2 + 0x260)
            
            if (var_190 != 0)
                r9_4 = var_198
            
            var_1b8 = &data_14399f5e0
            var_1c0 = &arg1[0xe]
            result_2 = result_1
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(arg_28)).d f* 0.5f
            zmm2_1.d = var_1a4.d f- zmm0_1.d
            zmm1_1.d = zmm1_1.d f- _mm_cvtepi32_ps(zx.o(arg_30.d)).d
            zmm1_1.d = zmm1_1.d f- 4f
            zmm6 = sub_142409910(rcx_7, zmm1_1, zmm2_1, r9_4, result_2, var_1c0, &data_14399f5e0)
            zmm1 = data_143dbb1f0.d
            var_158 = &data_14328aab8
            zmm8[0] = zmm8[0] + arg_8
            int64_t rax_5 = *arg1
            int32_t var_150_1 = zmm1.d
            int64_t var_148_1 = 0
            char var_140_1 = 0
            var_1a0 = zmm8[0]
            float var_19c_1 = arg_c[0]
            float var_14c_1 = data_143dbb1f0:4.d[0]
            int64_t var_138_1 = 0
            int64_t var_120_1
            __builtin_memset(&var_120_1, 0, 0x1c)
            int128_t var_130_1 = zmm12_1
            void var_f0
            float (* rax_6)[0x4] = (*(rax_5 + 0x268))(arg1, &var_f0, &var_1a0, arg2)
            void var_e8
            float (* rax_7)[0x4] = (*(*arg1 + 0x268))(arg1, &var_e8, &arg_8, arg2)
            var_120_1.d = (*rax_7)[0]
            var_120_1:4.d = (*rax_7)[1].d
            int128_t var_118_1
            var_118_1:4.d = (*rax_6)[0]
            var_118_1:8.d = (*rax_6)[1].d
            result = var_158[3](&var_158, *(arg2 + 0x260))
            zmm0 = arg_c
            zmm0[0] = zmm0[0] + zmm6[0]
            arg_c = zmm0[0]
        int16_t* rcx_15 = var_198
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        r14 += 1
        rbx_1 = nullptr
        zmm1 = _mm_cvtepi32_ps(zx.o(r14))
    while (zmm1.d f< i)
    zmm8 = 0x3f800000
    zmm6 = zx.o(0)

if (r15 != 0 && (arg1[0x14].b & 8) != 0)
    int32_t i_1 = 0
    
    if (arg1[0xd].d s> 0)
        do
            result = arg1[0xc]
            
            if (*(rbx_1 + result + 8) != 0)
                zmm0 = arg1[9].d
                zmm2.d = var_160.d.d f- arg1[8].d
                zmm0[0] = zmm0[0] f- arg1[8].d
                zmm3 = *(rbx_1 + result + 0x24)
                zmm2.d = zmm2.d f/ zmm0[0]
                
                if (zmm2.d f>= zmm6[0])
                    zmm2 = _mm_min_ss(zmm2.d, zmm8[0])
                else
                    zmm2 = zmm6[0].q
                
                zmm0 = *(arg1 + 0x4c)
                zmm0[0] = zmm0[0] f- *(arg1 + 0x44)
                zmm3[0] = zmm3[0] f- *(arg1 + 0x44)
                zmm3[0] = zmm3[0] / zmm0[0]
                
                if (zmm3[0] >= zmm6[0])
                    zmm3 = _mm_min_ss(zmm3[0], zmm8[0])
                else
                    zmm3 = zmm6
                
                zmm1.d = arg1[7].d.d f- arg1[6].d
                zmm0 = *(arg1 + 0x3c)
                zmm0[0] = zmm0[0] f- *(arg1 + 0x34)
                int64_t rax_13 = *arg1
                zmm1.d = zmm1.d f* zmm2.d
                zmm0[0] = zmm0[0] * zmm3[0]
                zmm1.d = zmm1.d f+ arg1[6].d
                zmm0[0] = zmm0[0] f+ *(arg1 + 0x34)
                var_188 = zmm1.d
                float var_184_2 = zmm0[0]
                (*(rax_13 + 0x268))(arg1, &var_1a8, &var_188, arg2, result_2, var_1c0, var_1b8)
                sub_140a2e390(&var_180, u"%.2f", _mm_cvtps_pd(*(rbx_1 + arg1[0xc] + 0x24)))
                int16_t* const r9_11 = &data_142d40450
                int32_t var_178
                
                if (var_178 != 0)
                    r9_11 = var_180
                
                int32_t zmm7_2
                int32_t zmm8_1
                uint128_t zmm10_2
                int128_t zmm11_2
                zmm7_2, zmm8_1, zmm10_2, zmm11_2 = sub_1424235b0(result_1, &arg_30, &arg_28, r9_11)
                uint128_t zmm2_2
                
                if (arg1[0x11].d != 2)
                    zmm2_2.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x44))).d f* zmm7_2
                    zmm2_2 ^= zmm11_2
                else
                    zmm2_2 = zmm10_2
                
                int16_t* const r9_12 = &data_142d40450
                
                if (var_178 != 0)
                    r9_12 = var_180
                
                void* rcx_20 = arg1[0xc] + 0x10
                int128_t zmm1_2 = var_1a8
                zmm2_2.d = zmm2_2.d f+ var_1a4
                int64_t r15_2 = sx.q(i_1) << 6
                uint128_t zmm0_2
                zmm0_2.d = _mm_cvtepi32_ps(zx.o(arg_30.d)).d f* 0.5f
                zmm1_2.d = zmm1_2.d f- zmm0_2.d
                uint128_t zmm6_1 = sub_142409910(*(arg2 + 0x260), zmm1_2, zmm2_2, r9_12, result_1, 
                    rcx_20 + r15_2, &data_14399f5e0)
                int64_t rax_15 = arg1[0xc]
                uint128_t zmm0_3 =
                    zx.o(*(*(rbx_1 + rax_15) + (sx.q(*(rbx_1 + rax_15 + 8)) << 3) - 8))
                uint128_t zmm2_3 = zmm0_3
                var_1a0.q = zmm0_3.q
                zmm0_3.d = (*(arg1 + 0x4c)).d f- *(arg1 + 0x44)
                zmm2_3.d = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55).d f- *(arg1 + 0x44)
                zmm2_3.d = zmm2_3.d f/ zmm0_3.d
                
                if (zmm2_3.d f>= zmm6_1.d)
                    zmm2_3 = _mm_min_ss(zmm2_3.d, zmm8_1)
                else
                    zmm2_3 = zmm6_1
                
                float zmm1_3 = *(arg1 + 0x3c) f- *(arg1 + 0x34)
                int64_t rax_17 = *arg1
                var_1a0 = arg1[7].d.d
                float var_19c_2 = zmm1_3 f* zmm2_3.d f+ *(arg1 + 0x34)
                var_1a8.q = *(*(rax_17 + 0x268))(arg1, &var_170, &var_1a0, arg2)
                sub_140a2e390(&var_198, u"%.2f", _mm_cvtps_pd((*(rbx_1 + arg1[0xc] + 0x2c)).q).q)
                int16_t* rcx_26 = var_180
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                int16_t* r9_14 = &data_142d40450
                int16_t* rdx_14 = var_198
                var_180 = rdx_14
                
                if (var_190 != 0)
                    r9_14 = rdx_14
                
                var_178 = var_190
                var_198 = nullptr
                int32_t var_18c
                int32_t var_174_1 = var_18c
                var_190.q = 0
                int32_t zmm7_3
                int32_t zmm9_1
                uint128_t zmm10_3
                int128_t zmm11_3
                zmm7_3, zmm8, zmm9_1, zmm10_3, zmm11_3 =
                    sub_1424235b0(result_1, &arg_30, &arg_28, r9_14)
                uint128_t zmm2_4
                
                if (arg1[0x11].d != 2)
                    zmm2_4.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x44))).d f* zmm7_3
                    zmm2_4 ^= zmm11_3
                else
                    zmm2_4 = zmm10_3
                
                int16_t* r9_15 = &data_142d40450
                
                if (var_178 != 0)
                    r9_15 = var_180
                
                int128_t zmm1_4 = var_1a8
                zmm2_4.d = zmm2_4.d f+ var_1a4
                var_1b8 = &data_14399f5e0
                var_1c0 = arg1[0xc] + 0x10 + r15_2
                void* rcx_32 = *(arg2 + 0x260)
                result_2 = result_1
                uint128_t zmm0_4
                zmm0_4.d = _mm_cvtepi32_ps(zx.o(arg_30.d)).d f* zmm9_1
                zmm1_4.d = zmm1_4.d f- zmm0_4.d
                result, zmm6 =
                    sub_142409910(rcx_32, zmm1_4, zmm2_4, r9_15, result_2, var_1c0, &data_14399f5e0)
                int16_t* rcx_33 = var_180
                
                if (rcx_33 != 0)
                    result = sub_140a74f90(rcx_33)
            
            i_1 += 1
            rbx_1 = &rbx_1[8]
        while (i_1 s< arg1[0xd].d)

return result
