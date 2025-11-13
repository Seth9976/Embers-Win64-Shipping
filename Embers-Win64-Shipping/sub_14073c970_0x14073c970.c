// 函数: sub_14073c970
// 地址: 0x14073c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_3)
int32_t rdx = 0

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

uint32_t rcx_2 = zx.d(rax[1])
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t i_1 = rcx_2 & 0x7fff

if ((not.b((rcx_2 u>> 0xf).b) & 1) != 0 && i_1 s>= *r8)
    int64_t rax_8 = 0
    int32_t* rdx_3 = nullptr
    
    do
        i_1 -= *(rdx_3 + r8)
        rax_8 += 1
        rdx_3 = rax_8 << 2
    while (i_1 s>= *(rdx_3 + r8))

void var_208
sub_140742c10(&var_208, arg2)
void* result = sub_140d3c6e0(rbx)

if (result != 0)
    result = sub_142591550()

if (*(rbx + 0x58) != 0 && rbx[0x86].b != 0)
    result = sub_140d3c6e0(rbx)
    void* result_6 = result
    
    if (result != 0)
        void* rax_9 = sub_142591550()
        void* rcx_6 = *(result_6 + 0x10)
        result = rax_9 + 0x30
        int64_t rdx_5 = sx.q(*(result + 8))
        
        if (rdx_5.d s<= *(rcx_6 + 0x38) && *(*(rcx_6 + 0x30) + (rdx_5 << 3)) == result
                && *(result_6 + 0x430) != 0)
            result = sub_141f66050(result_6, rbx[0x1a])

int128_t zmm10
zmm10.d = 1f f/ rbx[0x64]
char var_9e
char var_9d
char var_9c
char r8_1

if (var_9e != 0 || var_9d != 0 || var_9c != 0)
    r8_1 = 1
else
    r8_1 = 0

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    
    do
        char var_a0
        char var_9f
        float zmm2[0x4]
        
        if (var_a0 != 0 || var_9f != 0)
            void* var_1f8
            float* rdx_7 = var_1f8
            float zmm1[0x4] = data_143dbb1fc
            zmm2 = data_143dbb200
            int32_t var_21c_1 = 0x3f800000
            float var_228[0x4]
            var_228[0] = data_143dbb1f8[0]
            int64_t var_238_1 = 0
            float temp0_1[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
            temp0_1[0] = zmm1[0]
            int32_t var_230_1 = 0
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm2[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            var_228 = temp0_3
            float temp0_5[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rbx + 0x100))
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rbx + 0xe0))
            float temp0_9[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rbx + 0xf0))
            float temp0_11[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rbx + 0xd0))
            int32_t var_204
            var_1f8 = &rdx_7[sx.q(var_204)]
            float temp0_14[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
            *rdx_7 = temp0_14[0]
            void* var_1e0
            float* rdx_8 = var_1e0
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
            int32_t var_1ec
            var_1e0 = &rdx_8[sx.q(var_1ec)]
            *rdx_8 = temp0_15[0]
            void* var_1c8
            float* rdx_9 = var_1c8
            int32_t result_1
            result = sx.q(result_1)
            var_1c8 = &rdx_9[result]
            *rdx_9 = temp0_16[0]
            
            if (var_9f != 0)
                zmm1 = data_143dbb1fc
                zmm2 = data_143dbb200
                void* var_1b0
                float* rdx_10 = var_1b0
                int32_t var_20c_1 = 0x3f800000
                float var_218[0x4]
                var_218[0] = data_143dbb1f8[0]
                int64_t var_238_2 = 0
                float temp0_17[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                temp0_17[0] = zmm1[0]
                int32_t var_230_2 = 0
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                temp0_18[0] = zmm2[0]
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
                var_218 = temp0_19
                float temp0_21[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(rbx + 0x180))
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(rbx + 0x170))
                float temp0_25[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(rbx + 0x160))
                int32_t var_1bc
                var_1b0 = &rdx_10[sx.q(var_1bc)]
                float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_23), 
                    _mm_add_ps(temp0_25, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(rbx + 0x150))))
                temp0_14[0] = temp0_14[0] - temp0_30[0]
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
                temp0_15[0] = temp0_15[0] - temp0_31[0]
                float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
                temp0_16[0] = temp0_16[0] - temp0_32[0]
                temp0_14[0] = temp0_14[0] f* zmm10.d
                temp0_15[0] = temp0_15[0] f* zmm10.d
                *rdx_10 = temp0_14[0]
                void* var_198
                float* rdx_11 = var_198
                temp0_16[0] = temp0_16[0] f* zmm10.d
                int32_t var_1a4
                var_198 = &rdx_11[sx.q(var_1a4)]
                *rdx_11 = temp0_15[0]
                void* var_180
                float* rdx_12 = var_180
                int32_t result_2
                result = sx.q(result_2)
                var_180 = &rdx_12[result]
                *rdx_12 = temp0_16[0]
        
        if (r8_1 != 0)
            zmm7 = 0x3f800000
            zmm8 = zx.o(0)
            float zmm3[0x4]
            float zmm5[0x4]
            
            if (var_9e != 0)
                zmm2 = data_142d4cc00
                zmm3 = zx.o(0)
                void* var_d8
                float* rdx_13 = var_d8
                float temp0_34[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0xf0))
                zmm5 = zx.o(0)
                int64_t var_238_3 = 0
                float temp0_36[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0xe0))
                int32_t var_230_3 = 0
                float temp0_38[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x100))
                float temp0_40[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0xd0))
                int32_t var_e4
                var_d8 = &rdx_13[sx.q(var_e4)]
                float temp0_41[0x4] = _mm_add_ps(temp0_38, temp0_34)
                zmm5[0] = 0x3f000000
                zmm7 = _mm_add_ps(temp0_41, _mm_add_ps(temp0_36, temp0_40))
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                float temp0_45[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm8[0] = zmm8[0] + zmm7[0]
                temp0_45[0] = temp0_45[0] * temp0_45[0]
                zmm8[0] = zmm8[0] + temp0_45[0]
                zmm3[0] = zmm8[0]
                float temp0_46[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                temp0_46[0] = temp0_46[0] * temp0_46[0]
                zmm3[0] = zmm3[0] * temp0_46[0]
                zmm5[0] = zmm5[0] - zmm3[0]
                temp0_46[0] = temp0_46[0] * zmm5[0]
                temp0_46[0] = temp0_46[0] + temp0_46[0]
                temp0_46[0] = temp0_46[0] * temp0_46[0]
                zmm3[0] = zmm3[0] * temp0_46[0]
                zmm5[0] = 0.5f - zmm3[0]
                temp0_46[0] = temp0_46[0] * zmm5[0]
                temp0_46[0] = temp0_46[0] + temp0_46[0]
                zmm7[0] = zmm7[0] * temp0_46[0]
                zmm8[0] = zmm8[0] * temp0_46[0]
                *rdx_13 = zmm7[0]
                void* var_c0
                float* rdx_14 = var_c0
                temp0_45[0] = temp0_45[0] * temp0_46[0]
                int32_t var_cc
                var_c0 = &rdx_14[sx.q(var_cc)]
                *rdx_14 = zmm8[0]
                void* var_a8
                float* rdx_15 = var_a8
                int32_t result_5
                result = sx.q(result_5)
                var_a8 = &rdx_15[result]
                *rdx_15 = temp0_45[0]
            
            if (var_9d != 0)
                zmm7 ^= 0x80000000
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                float zmm0[0x4]
                
                if (zmm7[0] == 1f)
                    zmm0 = zx.o(0)
                else if (zmm7[0] >= 9.99999994e-09f)
                    zmm3 = zx.o(0)
                    float zmm4[0x4] = zx.o(0)
                    zmm4[0] = 0x3f000000
                    zmm3[0] = zmm7[0]
                    float temp0_47[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_47[0] = temp0_47[0] * temp0_47[0]
                    zmm3[0] = zmm3[0] * temp0_47[0]
                    zmm4[0] = zmm4[0] - zmm3[0]
                    temp0_47[0] = temp0_47[0] * zmm4[0]
                    temp0_47[0] = temp0_47[0] + temp0_47[0]
                    temp0_47[0] = temp0_47[0] * temp0_47[0]
                    zmm3[0] = zmm3[0] * temp0_47[0]
                    zmm4[0] = 0.5f - zmm3[0]
                    temp0_47[0] = temp0_47[0] * zmm4[0]
                    temp0_47[0] = temp0_47[0] + temp0_47[0]
                    temp0_47[0] = temp0_47[0] * zmm7[0]
                    temp0_47[0] = temp0_47[0] * zmm8[0]
                    zmm7 = temp0_47
                    zmm8 = temp0_47
                    zmm0 = zx.o(0)
                else
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm0 = data_143dbb200
                
                void* var_120
                float* rdx_16 = var_120
                int32_t var_12c
                var_120 = &rdx_16[sx.q(var_12c)]
                *rdx_16 = zmm8[0]
                void* var_108
                float* rdx_17 = var_108
                int32_t var_114
                var_108 = &rdx_17[sx.q(var_114)]
                *rdx_17 = zmm7[0]
                void* var_f0
                float* rdx_18 = var_f0
                int32_t result_4
                result = sx.q(result_4)
                var_f0 = &rdx_18[result]
                *rdx_18 = zmm0[0]
            
            if (var_9c != 0)
                zmm2 = data_142d4cc30
                zmm3 = zx.o(0)
                void* var_168
                float* rdx_19 = var_168
                float temp0_49[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0xf0))
                zmm5 = zx.o(0)
                int64_t var_238_4 = 0
                float temp0_51[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0xe0))
                int32_t var_230_4 = 0
                float temp0_53[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x100))
                float temp0_55[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0xd0))
                int32_t var_174
                var_168 = &rdx_19[sx.q(var_174)]
                float temp0_56[0x4] = _mm_add_ps(temp0_53, temp0_49)
                zmm5[0] = 0x3f000000
                float temp0_58[0x4] = _mm_add_ps(temp0_56, _mm_add_ps(temp0_51, temp0_55))
                temp0_58[0] = temp0_58[0] * temp0_58[0]
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
                temp0_59[0] = temp0_59[0] * temp0_59[0]
                temp0_59[0] = temp0_59[0] + temp0_58[0]
                temp0_60[0] = temp0_60[0] * temp0_60[0]
                temp0_59[0] = temp0_59[0] + temp0_60[0]
                zmm3[0] = temp0_59[0]
                float temp0_61[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                temp0_61[0] = temp0_61[0] * temp0_61[0]
                zmm3[0] = zmm3[0] * temp0_61[0]
                zmm5[0] = zmm5[0] - zmm3[0]
                temp0_61[0] = temp0_61[0] * zmm5[0]
                temp0_61[0] = temp0_61[0] + temp0_61[0]
                temp0_61[0] = temp0_61[0] * temp0_61[0]
                zmm3[0] = zmm3[0] * temp0_61[0]
                zmm5[0] = 0.5f - zmm3[0]
                temp0_61[0] = temp0_61[0] * zmm5[0]
                temp0_61[0] = temp0_61[0] + temp0_61[0]
                temp0_58[0] = temp0_58[0] * temp0_61[0]
                temp0_59[0] = temp0_59[0] * temp0_61[0]
                *rdx_19 = temp0_58[0]
                void* var_150
                float* rdx_20 = var_150
                temp0_60[0] = temp0_60[0] * temp0_61[0]
                int32_t var_15c
                var_150 = &rdx_20[sx.q(var_15c)]
                *rdx_20 = temp0_59[0]
                float* var_138
                float* rdx_21 = var_138
                int32_t result_3
                result = sx.q(result_3)
                var_138 = &rdx_21[result]
                *rdx_21 = temp0_60[0]
        
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
