// 函数: sub_1421f4700
// 地址: 0x1421f4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float* rdi = arg3
int32_t r8 = *(arg1 + 0x3c)
void* rbx = arg2
float zmm10[0x4]
float var_88[0x4] = zmm10
int128_t zmm14
int128_t var_c8 = zmm14
int32_t rax = *(arg1 + 0xbc)
int32_t arg_8 = r8

if (rax s>= 0)
    if (r8 s> rax)
        r8 = rax
    
    arg_8 = r8

bool cond:0 = *(arg1 + 0xe0) == 0
float zmm8[0x4] = 0x3f800000
float (* r11)[0x4] = arg6
float arg_10 = 1f
int32_t rax_1 = arg5[1].d
uint64_t var_188 = *arg5
uint64_t var_178
float var_138
uint128_t zmm0
float zmm1[0x4]
float zmm7[0x4]
uint32_t zmm9[0x4]
float zmm11[0x4]
uint32_t zmm12[0x4]
uint128_t zmm13
int128_t zmm15

if (cond:0)
    zmm11 = var_188.d
    var_138 = rax_1.d
    zmm0 = var_188:4.d
else
    uint32_t var_118[0x4]
    zmm7, zmm8, zmm9, zmm12, zmm13, zmm15 = sub_140631b10(r11, &var_118)
    zmm1 = *(arg5 + 4)
    int32_t zmm2_1 = arg5[1].d
    r8 = arg_8
    r11 = arg6
    int32_t var_17c_1 = 0x3f800000
    float zmm3_1[0x4] = var_188.o
    zmm3_1[0] = (*arg5).d
    var_178 = 0
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
    temp0_1[0] = zmm1[0]
    int32_t var_170_1 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2_1
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_188.o = temp0_3
    float var_e8[0x4]
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), var_e8)
    float var_108[0x4]
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), var_108)
    float var_f8[0x4]
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), var_f8)
    float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), var_118)
    zmm11 = _mm_add_ps(_mm_add_ps(temp0_5, zmm0), _mm_add_ps(temp0_7, temp0_11))
    var_138 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)[0]
    zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0x55)

int64_t r9 = *(arg1 + 0x58)
zmm14 = zx.o(0)
int64_t r10 = *(arg1 + 0x60)
zmm10 = zmm8
zmm6 = zx.o(0)
arg5.d = zmm14.d
int64_t var_158 = r9
int64_t var_150 = r10
int64_t var_160 = sx.q(r8)
float var_168 = zmm8[0]
float var_164 = zmm8[0]
float arg_18 = zmm8[0]
float var_128[0x4] = zmm11
int32_t var_148 = zmm0.d
int64_t result

if (r8 s> 0)
    zmm1 = 0x7fffffff
    int64_t r15_1 = 0
    float var_58_1[0x4] = zmm7
    zmm7 = 0x80000000
    uint32_t var_78_1[0x4] = zmm9
    uint32_t var_a8_1[0x4] = zmm12
    int32_t r13_1 = 1
    uint128_t var_b8_1 = zmm13
    int128_t var_d8_1 = zmm15
    zmm15 = 0x38d1b717
    
    do
        int32_t rax_2
        
        if (arg4 == 0)
            rax_2 = r13_1 - 1
        else
            rax_2 = *(arg4 + (r15_1 << 3))
        
        int64_t* rsi_2 = sx.q(zx.d(*(r10 + (sx.q(rax_2) << 1))) * *(arg1 + 0x40)) + r9
        
        if (r13_1 s< r8)
            int32_t rax_4
            
            if (arg4 == 0)
                rax_4 = r13_1
            else
                rax_4 = *(arg4 + (r15_1 << 3) + 8)
            
            *(r10 + (sx.q(rax_4) << 1))
        
        zmm9 = rsi_2[0xa].d
        zmm12 = *(rsi_2 + 0x54)
        zmm9[0] = zmm9[0] f* *(arg1 + 0x68)
        char rax_10 = *(arg1 + 0xe2)
        zmm12[0] = zmm12[0] f* *(arg1 + 0x6c)
        uint32_t temp0_17[0x4] = _mm_and_ps(zmm9, zmm1)
        zmm12 = _mm_and_ps(zmm12, zmm1)
        
        if (rax_10 u<= 1 || rax_10 == 6)
            zmm12 = temp0_17
        
        int32_t var_170_2 = rsi_2[3].d
        int32_t var_180_1 = rsi_2[1].d
        var_178 = rsi_2[2]
        var_188 = *rsi_2
        sub_1421da940(rsi_2, arg1 + 0x30, r11, &var_178, &var_188)
        int64_t rax_13 = sx.q(*(arg1 + 0xd0))
        uint32_t zmm2_2[0x4]
        uint32_t zmm3_2[0x4]
        uint128_t zmm5
        
        if (rax_13.d != 0)
            zmm7 = var_148
            zmm6 = zmm11
            zmm8 = var_138
            zmm13 = var_178.d
            zmm14 = var_178:4.d
            zmm6[0] = zmm6[0] f- zmm13.d
            zmm15 = var_170_2
            zmm7[0] = zmm7[0] f- zmm14.d
            zmm10 = *(rax_13 + rsi_2 + 4)
            zmm8[0] = zmm8[0] f- zmm15.d
            zmm11 = zmm7
            zmm0.d = zmm6.d f* zmm6[0]
            zmm11[0] = zmm11[0] * zmm7[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] + zmm8[0]
            
            if (not(zmm11[0] <= 9.99999994e-09f))
                zmm0 = zmm11
                zmm3_2 = zmm0
                zmm5 = _mm_rsqrt_ss(zmm0.d, zmm3_2[0])
                zmm2_2 = 0x3f000000
                zmm3_2[0] = zmm3_2[0] f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1 = zmm3_2
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm5.d f* zmm2_2[0]
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1 = zmm5
                zmm1[0] = zmm1[0] f* zmm5.d
                zmm3_2[0] = zmm3_2[0] f* zmm1[0]
                zmm0.d = zmm5.d f* (0.5f f- zmm3_2[0])
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1 = zmm5
                zmm0.d = zmm5.d f* zmm6[0]
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm5.d = zmm5.d f* zmm8[0]
                zmm6 = zmm0
                zmm7 = zmm1
                zmm8 = zmm5
            
            zmm6[0] = zmm6[0] * zmm10[0]
            zmm7[0] = zmm7[0] * zmm10[0]
            zmm8[0] = zmm8[0] * zmm10[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            
            if (not(zmm11[0] > zmm10[0]))
                zmm6[0] = zmm6[0] * 1048576f
                zmm7[0] = zmm7[0] * 1048576f
                zmm8[0] = zmm8[0] * 1048576f
            
            zmm14.d = zmm14.d f+ zmm7[0]
            zmm1 = var_188:4.d
            zmm0.d = var_188.d.d f+ zmm6[0]
            zmm10 = arg_18
            zmm15.d = zmm15.d f+ zmm8[0]
            zmm13.d = zmm13.d f+ zmm6[0]
            zmm6 = zx.o(0)
            zmm1[0] = zmm1[0] + zmm7[0]
            zmm7 = 0x80000000
            var_178:4.d = zmm14.d
            zmm14 = arg5.d
            var_188.d = zmm0.d
            zmm0.d = var_180_1.d f+ zmm8[0]
            var_170_2 = zmm15.d
            zmm8 = arg_10
            zmm15 = 0x38d1b717
            var_178.d = zmm13.d
            var_188:4.d = zmm1[0]
            var_180_1 = zmm0.d
        
        int128_t* rax_14 = sx.q(*(arg1 + 0xd4))
        
        if (rax_14.d s> 0)
            zmm14 = *(rax_14 + rsi_2)
            arg5.d = zmm14.d
        
        result = sx.q(*(arg1 + 0xc4))
        float zmm4_1
        
        if (result.d s<= 0)
            zmm4_1 = var_168
            zmm5 = var_164
        else
            result += rsi_2
            zmm8 = *result
            zmm4_1 = *(result + 4)
            zmm5 = *(result + 8)
            zmm10 = *(result + 0xc)
            arg_10 = zmm8[0]
            var_168 = zmm4_1
            var_164 = zmm5.d
            arg_18 = zmm10[0]
        
        uint32_t r9_2 = 0
        zmm11 = zx.o(var_178)
        zmm13 = zx.o(var_188)
        
        if (arg7 u>= 4)
            uint64_t rax_17 = zx.q(((arg7 - 4) u>> 2) + 1)
            uint64_t i_2 = zx.q(rax_17.d)
            r9_2 = (rax_17 << 2).d
            uint64_t i
            
            do
                *rbx = zmm11.q
                *(rbx + 8) = var_170_2
                zmm2_2 = zmm12 ^ zmm7
                *(rbx + 0xc) = *(rsi_2 + 0xc)
                *(rbx + 0x10) = zmm13.q
                *(rbx + 0x18) = var_180_1
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x5c)) & 0x1ffffff).d f* zmm15.d
                *(rbx + 0x1c) = zmm0.d
                
                if (zmm6[0] f> *(rsi_2 + 0x44))
                    zmm1 = zmm2_2
                else
                    zmm1 = zmm12
                
                zmm0 = temp0_17
                
                if (zmm6[0] f> rsi_2[8].d)
                    zmm0 ^= zmm7
                    zmm3_2 = zmm0
                else
                    zmm3_2 = temp0_17 ^ zmm7
                
                *(rbx + 0x20) = zmm0.d
                *(rbx + 0x24) = zmm1[0]
                *(rbx + 0x28) = *(rsi_2 + 0x2c)
                *(rbx + 0x2c) = zmm14.d
                *(rbx + 0x30) = *(rsi_2 + 0x60)
                
                if ((*(arg1 + 0x28) & 1) != 0)
                    *rdi = zmm8[0]
                    rdi[1] = zmm4_1
                    rdi[2] = zmm5.d
                    rdi[3] = zmm10[0]
                    rdi = &rdi[4]
                
                *(rbx + 0x40) = zmm11.q
                zmm1 = zmm12
                *(rbx + 0x48) = var_170_2
                *(rbx + 0x4c) = *(rsi_2 + 0xc)
                *(rbx + 0x50) = zmm13.q
                *(rbx + 0x58) = var_180_1
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x5c)) & 0x1ffffff).d f* zmm15.d
                *(rbx + 0x5c) = zmm0.d
                
                if (not(zmm6[0] f<= *(rsi_2 + 0x44)))
                    zmm1 ^= zmm7
                
                zmm0 = temp0_17
                
                if (not(zmm6[0] f<= rsi_2[8].d))
                    zmm0 ^= zmm7
                
                *(rbx + 0x60) = zmm0.d
                *(rbx + 0x64) = zmm1[0]
                *(rbx + 0x68) = *(rsi_2 + 0x2c)
                *(rbx + 0x6c) = zmm14.d
                *(rbx + 0x70) = *(rsi_2 + 0x60)
                
                if ((*(arg1 + 0x28) & 1) != 0)
                    *rdi = zmm8[0]
                    rdi[1] = zmm4_1
                    rdi[2] = zmm5.d
                    rdi[3] = zmm10[0]
                    rdi = &rdi[4]
                
                *(rbx + 0x80) = zmm11.q
                *(rbx + 0x88) = var_170_2
                *(rbx + 0x8c) = *(rsi_2 + 0xc)
                *(rbx + 0x90) = zmm13.q
                *(rbx + 0x98) = var_180_1
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x5c)) & 0x1ffffff).d f* zmm15.d
                *(rbx + 0x9c) = zmm0.d
                
                if (zmm6[0] f> *(rsi_2 + 0x44))
                    zmm1 = zmm2_2
                else
                    zmm1 = zmm12
                
                if (zmm6[0] f> rsi_2[8].d)
                    zmm0 = zmm3_2
                else
                    zmm0 = temp0_17
                
                *(rbx + 0xa0) = zmm0.d
                *(rbx + 0xa4) = zmm1[0]
                *(rbx + 0xa8) = *(rsi_2 + 0x2c)
                *(rbx + 0xac) = zmm14.d
                *(rbx + 0xb0) = *(rsi_2 + 0x60)
                
                if ((*(arg1 + 0x28) & 1) != 0)
                    *rdi = zmm8[0]
                    rdi[1] = zmm4_1
                    rdi[2] = zmm5.d
                    rdi[3] = zmm10[0]
                    rdi = &rdi[4]
                
                *(rbx + 0xc0) = zmm11.q
                *(rbx + 0xc8) = var_170_2
                *(rbx + 0xcc) = *(rsi_2 + 0xc)
                *(rbx + 0xd0) = zmm13.q
                *(rbx + 0xd8) = var_180_1
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x5c)) & 0x1ffffff).d f* zmm15.d
                *(rbx + 0xdc) = zmm0.d
                
                if (not(zmm6[0] f> *(rsi_2 + 0x44)))
                    zmm2_2 = zmm12
                
                if (not(zmm6[0] f> rsi_2[8].d))
                    zmm3_2 = temp0_17
                
                *(rbx + 0xe0) = zmm3_2[0]
                *(rbx + 0xe4) = zmm2_2[0]
                *(rbx + 0xe8) = *(rsi_2 + 0x2c)
                *(rbx + 0xec) = zmm14.d
                *(rbx + 0xf0) = *(rsi_2 + 0x60)
                
                if ((*(arg1 + 0x28) & 1) != 0)
                    *rdi = zmm8[0]
                    rdi[1] = zmm4_1
                    rdi[2] = zmm5.d
                    rdi[3] = zmm10[0]
                    rdi = &rdi[4]
                
                rbx += 0x100
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (r9_2 u< arg7)
            uint64_t i_3 = zx.q(arg7 - r9_2)
            uint64_t i_1
            
            do
                *rbx = zmm11.q
                zmm1 = zmm12
                *(rbx + 8) = var_170_2
                int32_t rax_33 = *(rsi_2 + 0xc)
                *(rbx + 0x10) = zmm13.q
                *(rbx + 0xc) = rax_33
                *(rbx + 0x18) = var_180_1
                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x5c)) & 0x1ffffff).d f* zmm15.d
                *(rbx + 0x1c) = zmm0.d
                
                if (not(zmm6[0] f<= *(rsi_2 + 0x44)))
                    zmm1 ^= zmm7
                
                zmm0 = temp0_17
                
                if (not(zmm6[0] f<= rsi_2[8].d))
                    zmm0 ^= zmm7
                
                *(rbx + 0x20) = zmm0.d
                *(rbx + 0x24) = zmm1[0]
                result = zx.q(*(rsi_2 + 0x2c))
                *(rbx + 0x2c) = zmm14.d
                *(rbx + 0x28) = result.d
                *(rbx + 0x30) = *(rsi_2 + 0x60)
                
                if ((*(arg1 + 0x28) & 1) != 0)
                    *rdi = zmm8[0]
                    rdi[1] = zmm4_1
                    rdi[2] = zmm5.d
                    rdi[3] = zmm10[0]
                    rdi = &rdi[4]
                
                rbx += 0x40
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        zmm11 = var_128
        r13_1 += 1
        zmm1 = 0x7fffffff
        r15_1 += 1
        r8 = arg_8
        r9 = var_158
        r10 = var_150
        r11 = arg6
    while (r15_1 s< var_160)

result.b = 1
return result
