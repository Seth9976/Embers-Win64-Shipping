// 函数: sub_14264df20
// 地址: 0x14264df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
uint128_t zmm0 = *(arg2 + 0x10)
int32_t var_168 = var_168 & 0xfffffffe
int32_t var_104
int32_t var_104_1 = var_104 & 0xfffffff8
int128_t* rbx = nullptr
int32_t* r12 = arg1
uint128_t var_138 = zmm0
uint128_t var_118 = *(arg2 + 0x30)
void* var_160 = nullptr
int32_t var_158 = 0
int64_t var_150 = 0
int64_t var_148 = 0
uint128_t var_128 = *(arg2 + 0x20)
float zmm6[0x4]

if (arg3[1].d s> 0)
    int32_t var_108_1 = *(*arg3 + 8)
    zmm6 = sub_141dd8a80(&var_168, arg3)

int32_t r14 = 0

if (var_158 s> 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t r13_1 = zx.q(data_14401b1a0)
    int128_t zmm7
    int128_t var_58_1 = zmm7
    float zmm8[0x4] = zx.o(0)
    int128_t zmm9 = 0x80000000
    float var_48_1[0x4] = zmm6
    
    do
        uint128_t zmm1
        
        if (*(rbx + var_160 + 0x1c) == 2)
            int64_t* rdx_2 = var_160 + 0x3c + rbx
            int64_t* r8_1 = var_160 + 0x30 + rbx
            
            if (r8_1 != rdx_2)
                zmm1 = zx.o(*r8_1)
                int32_t rcx_2 = r8_1[1].d
                *r8_1 = *rdx_2
                r8_1[1].d = rdx_2[1].d
                *rdx_2 = zmm1.q
                rdx_2[1].d = rcx_2
        
        zmm7 = *(rbx + var_160 + 4)
        void var_1f8
        int32_t var_1d4
        void var_188
        void var_f8
        int64_t var_b8
        int64_t var_98
        float zmm2[0x4]
        float zmm4[0x4]
        
        if (not(zmm7.d f<= zmm8[0]))
            zmm6 = *(arg2 + 0x10)
            zmm2 = *(rbx + var_160 + 0x40)
            zmm4 = *(arg2 + 0x30)
            int64_t rax_4 = *(ThreadLocalStoragePointer + (r13_1 << 3))
            int64_t* rsi_1 = *arg2
            float temp0_1[0x4] =
                _mm_unpacklo_ps(*(rbx + var_160 + 0x3c), (*(rbx + var_160 + 0x44)).q)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_5[0x4] =
                _mm_mul_ps(zmm4, _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, zmm8[0].q)[0].q))
            float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            bool cond:0_1 = data_143f71778 s> *(0x14 + rax_4)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_7)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_2), zmm0)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            zmm0 = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
            zmm1 = _mm_mul_ps(temp0_13, temp0_6)
            zmm0 = _mm_mul_ps(zmm0, temp0_2)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            zmm1 = _mm_add_ps(zmm1, temp0_5)
            zmm0 = _mm_add_ps(_mm_sub_ps(zmm0, _mm_mul_ps(temp0_17, temp0_7)), zmm1)
            zmm1 = _mm_add_ps(*(arg2 + 0x20), zmm0)
            int32_t var_240 = zmm1.d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            int32_t var_238_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            int32_t var_23c_1 = zmm0.d
            
            if (cond:0_1)
                _Init_thread_header(&data_143f71778)
                
                if (data_143f71778 == 0xffffffff)
                    sub_140b58170(&data_143f71770, "RawGeometryFall", 1)
                    _Init_thread_footer(&data_143f71778)
            
            void var_248
            sub_141eb54c0(&var_f8, data_143f71770, &var_248, 1, rsi_1)
            memset(&var_1f8, 0, 0x88)
            zmm2 = var_238_1
            zmm2[0] = zmm2[0] f+ (zmm7 ^ zmm9).d
            int64_t rax_5 = *rsi_1
            int32_t var_220 = var_240
            int32_t var_21c_1 = var_23c_1.d
            float var_218_1 = zmm2[0]
            int32_t var_1f0_1 = 0x3f800000
            int64_t* var_268_1
            var_268_1.d = 0
            char rax_7
            rax_7, zmm6, zmm8, zmm9 = sub_141ec6a20((*(rax_5 + 0x150))(rsi_1), &var_1f8, &var_240, 
                &var_220, var_268_1.b, &var_f8, &data_143f3a660)
            
            if (rax_7 != 0)
                void* rax_8 = sub_140d3c6e0(&var_188)
                
                if (rax_8 != 0)
                    void* rax_9 = sub_1425b0750()
                    void* rdx_5 = *(rax_8 + 0x10)
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s<= *(rdx_5 + 0x38)
                            && *(*(rdx_5 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                        zmm6 = var_238_1
                        zmm6[0] = zmm6[0] f- var_1d4
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            if (not(zmm6[0] <= zmm8[0]))
                zmm0.d = (*(rbx + var_160 + 0x44)).d f- zmm6[0]
                *(rbx + var_160 + 0x44) = zmm0.d
        
        zmm7 = *(rbx + var_160)
        
        if (not(zmm7.d f<= zmm8[0]))
            zmm6 = *(arg2 + 0x10)
            zmm2 = *(rbx + var_160 + 0x34)
            zmm4 = *(arg2 + 0x30)
            int64_t rax_12 = *(ThreadLocalStoragePointer + (r13_1 << 3))
            int64_t* rsi_3 = *arg2
            float temp0_25[0x4] =
                _mm_unpacklo_ps(*(rbx + var_160 + 0x30), (*(rbx + var_160 + 0x38)).q)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_29[0x4] =
                _mm_mul_ps(zmm4, _mm_unpacklo_ps(temp0_25, _mm_unpacklo_ps(zmm2, zmm8[0].q)[0].q))
            float temp0_30[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            bool cond:1_1 = data_143f71778 s> *(0x14 + rax_12)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xc9), temp0_31)
            float temp0_36[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_26), zmm0)
            float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
            zmm0 = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
            zmm1 = _mm_mul_ps(temp0_37, temp0_30)
            zmm0 = _mm_mul_ps(zmm0, temp0_26)
            float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
            zmm1 = _mm_add_ps(zmm1, temp0_29)
            zmm0 = _mm_add_ps(_mm_sub_ps(zmm0, _mm_mul_ps(temp0_41, temp0_31)), zmm1)
            zmm1 = _mm_add_ps(*(arg2 + 0x20), zmm0)
            int32_t var_230 = zmm1.d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            int32_t var_228_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            int32_t var_22c_1 = zmm0.d
            
            if (cond:1_1)
                _Init_thread_header(&data_143f71778)
                
                if (data_143f71778 == 0xffffffff)
                    sub_140b58170(&data_143f71770, "RawGeometryFall", 1)
                    _Init_thread_footer(&data_143f71778)
            
            void var_247
            sub_141eb54c0(&var_f8, data_143f71770, &var_247, 1, rsi_3)
            memset(&var_1f8, 0, 0x88)
            zmm2 = var_228_1
            zmm2[0] = zmm2[0] f+ (zmm7 ^ zmm9).d
            int64_t rax_13 = *rsi_3
            int32_t var_214 = var_230
            int32_t var_210_1 = var_22c_1.d
            float var_20c_1 = zmm2[0]
            int32_t var_1f0_2 = 0x3f800000
            int64_t* var_268_2
            var_268_2.d = 0
            char rax_15
            rax_15, zmm6, zmm8, zmm9 = sub_141ec6a20((*(rax_13 + 0x150))(rsi_3), &var_1f8, 
                &var_230, &var_214, var_268_2.b, &var_f8, &data_143f3a660)
            
            if (rax_15 != 0)
                void* rax_16 = sub_140d3c6e0(&var_188)
                
                if (rax_16 != 0)
                    void* rax_17 = sub_1425b0750()
                    void* rdx_8 = *(rax_16 + 0x10)
                    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                    
                    if (rax_18.d s<= *(rdx_8 + 0x38)
                            && *(*(rdx_8 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                        zmm6 = var_228_1
                        zmm6[0] = zmm6[0] f- var_1d4
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            if (not(zmm6[0] <= zmm8[0]))
                zmm0.d = (*(rbx + var_160 + 0x38)).d f- zmm6[0]
                *(rbx + var_160 + 0x38) = zmm0.d
        
        r14 += 1
        rbx += 0x48
    while (r14 s< var_158)
    
    r12 = arg1

int64_t rdi_2 = sx.q(r12[0xc])
int32_t rax_20 = (rdi_2 + 1).d
r12[0xc] = rax_20

if (rax_20 s> r12[0xd])
    sub_1405fdd60(&r12[0xa])

sub_1426436f0(rdi_2 * 0x70 + *(r12 + 0x28), &var_168)
int32_t result = *r12
*r12 = (((var_168 | result) ^ result) & 1) ^ result

if (var_150 != 0)
    result = sub_140a74f90(var_150)

if (var_160 != 0)
    result = sub_140a74f90(var_160)

__security_check_cookie(rax_1 ^ &var_288)
return result
