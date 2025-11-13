// 函数: sub_14264e5a0
// 地址: 0x14264e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
uint128_t zmm0 = *(arg2 + 0x10)
int32_t var_188 = var_188 & 0xfffffffe
int32_t var_124
int32_t var_124_1 = var_124 & 0xfffffff8
uint128_t zmm1 = *(arg2 + 0x20)
int64_t rbx = 0
int32_t* rsi = arg1
uint128_t var_158 = zmm0
uint128_t var_138 = *(arg2 + 0x30)
int64_t var_180
__builtin_memset(&var_180, 0, 0x1c)
uint128_t var_148 = zmm1
float zmm6[0x4]

if (arg3[1].d s> 0)
    int32_t var_128_1 = *(*arg3 + 8)
    zmm6 = sub_141dd9030(&var_188, arg3)

int32_t r14 = 0
void* var_170
int32_t var_168

if (var_168 s> 0)
    uint64_t rdx_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int128_t zmm9
    int128_t var_78_1 = zmm9
    float zmm10[0x4] = zx.o(0)
    int128_t zmm11 = 0x80000000
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        if (*(rbx + var_170 + 0x1c) == 2)
            int64_t* rdx_3 = var_170 + 0x48 + rbx
            int64_t* r8_1 = var_170 + 0x30 + rbx
            
            if (r8_1 != rdx_3)
                zmm1 = zx.o(*r8_1)
                int32_t rcx_2 = r8_1[1].d
                *r8_1 = *rdx_3
                r8_1[1].d = rdx_3[1].d
                *rdx_3 = zmm1.q
                rdx_3[1].d = rcx_2
            
            void* rdx_5 = var_170 + 0x54 + rbx
            void* r8_3 = var_170 + 0x3c + rbx
            
            if (r8_3 != rdx_5)
                zmm1 = zx.o(*r8_3)
                int32_t rcx_3 = *(r8_3 + 8)
                *r8_3 = *rdx_5
                *(r8_3 + 8) = *(rdx_5 + 8)
                *rdx_5 = zmm1.q
                *(rdx_5 + 8) = rcx_3
            
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            rdx_1 = zx.q(data_14401b1a0)
        
        zmm9 = *(rbx + var_170 + 4)
        
        if (not(zmm9.d f<= zmm10[0]))
            zmm8 = *(arg2 + 0x10)
            zmm6 = *(arg2 + 0x30)
            float zmm2[0x4] = *(rbx + var_170 + 0x4c)
            uint128_t zmm4 = *(arg2 + 0x20)
            float temp0_1[0x4] =
                _mm_unpacklo_ps(*(rbx + var_170 + 0x48), (*(rbx + var_170 + 0x50)).q)
            int64_t r13_1 = *(ThreadLocalStoragePointer + (rdx_1 << 3))
            int64_t* rsi_1 = *arg2
            float temp0_4[0x4] =
                _mm_mul_ps(zmm6, _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, zmm10[0].q)[0].q))
            float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
            bool cond:0_1 = data_143f71778 s> *(0x14 + r13_1)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_7)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), zmm0)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_5)
            zmm1 = _mm_mul_ps(temp0_13, temp0_6)
            float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_7)
            zmm1 = _mm_add_ps(zmm1, temp0_4)
            float temp0_20[0x4] = _mm_unpacklo_ps(*(rbx + var_170 + 0x58), zmm10[0].q)
            zmm0 = _mm_sub_ps(zmm0, temp0_18)
            float zmm3[0x4] = *(rbx + var_170 + 0x54)
            zmm1 = _mm_add_ps(zmm4, _mm_add_ps(zmm0, zmm1))
            int32_t var_260 = zmm1.d
            int32_t var_25c_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
            float temp0_27[0x4] = _mm_mul_ps(zmm6, 
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(rbx + var_170 + 0x5c)).q), temp0_20[0].q))
            float var_258_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_7)
            float temp0_33[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_5), zmm0)
            float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), temp0_5)
            float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc9), temp0_7)
            zmm1 = _mm_mul_ps(temp0_34, temp0_6)
            zmm4 =
                _mm_add_ps(zmm4, _mm_add_ps(_mm_sub_ps(zmm0, temp0_38), _mm_add_ps(zmm1, temp0_27)))
            int32_t var_250 = zmm4.d
            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float var_248_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa).d
            int32_t var_24c_1 = zmm0.d
            
            if (cond:0_1)
                _Init_thread_header(&data_143f71778)
                
                if (data_143f71778 == 0xffffffff)
                    sub_140b58170(&data_143f71770, "RawGeometryFall", 1)
                    _Init_thread_footer(&data_143f71778)
            
            void var_268
            void var_118
            sub_141eb54c0(&var_118, data_143f71770, &var_268, 1, rsi_1)
            void var_218
            memset(&var_218, 0, 0x88)
            zmm2 = var_258_1
            zmm2[0] = zmm2[0] f+ (zmm9 ^ zmm11).d
            int64_t rax_6 = *rsi_1
            int32_t var_240 = var_260
            int32_t var_23c_1 = var_25c_1.d
            float var_238_1 = zmm2[0]
            int32_t var_210_1 = 0x3f800000
            int64_t* var_288_1
            var_288_1.d = 0
            char rax_8
            int512_t zmm6_1
            int128_t zmm10_1
            int128_t zmm11_1
            rax_8, zmm6_1, zmm10_1, zmm11_1 = sub_141ec6a20((*(rax_6 + 0x150))(rsi_1), &var_218, 
                &var_260, &var_240, var_288_1.b, &var_118, &data_143f3a660)
            void var_1a8
            
            if (rax_8 != 0)
                void* rax_9 = sub_140d3c6e0(&var_1a8)
                
                if (rax_9 != 0)
                    void* rax_10 = sub_1425b0750()
                    void* rdx_8 = *(rax_9 + 0x10)
                    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                    rax_11.d s<= *(rdx_8 + 0x38)
                        && *(*(rdx_8 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30
            
            int64_t var_b8
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            int64_t var_d8
            
            if (var_d8 != 0)
                sub_140a74f90(var_d8)
            
            zmm6_1.o = zmm10_1
            int128_t zmm8_1 = *(rbx + var_170 + 4)
            int64_t* rsi_3 = *arg2
            
            if (data_143f71778 s> *(0x14 + r13_1))
                _Init_thread_header(&data_143f71778)
                
                if (data_143f71778 == 0xffffffff)
                    sub_140b58170(&data_143f71770, "RawGeometryFall", 1)
                    _Init_thread_footer(&data_143f71778)
            
            void var_267
            sub_141eb54c0(&var_118, data_143f71770, &var_267, 1, rsi_3)
            memset(&var_218, 0, 0x88)
            int64_t rax_14 = *rsi_3
            int32_t var_234 = var_250
            int32_t var_230_1 = var_24c_1
            float var_22c_1 = var_248_1 f+ (zmm8_1 ^ zmm11_1).d
            int32_t var_210_2 = 0x3f800000
            int64_t* var_288_2
            var_288_2.d = 0
            char rax_16
            rax_16, zmm6, zmm7, zmm10, zmm11 = sub_141ec6a20((*(rax_14 + 0x150))(rsi_3), &var_218, 
                &var_250, &var_234, var_288_2.b, &var_118, &data_143f3a660)
            
            if (rax_16 != 0)
                void* rax_17 = sub_140d3c6e0(&var_1a8)
                
                if (rax_17 != 0)
                    void* rax_18 = sub_1425b0750()
                    void* rdx_11 = *(rax_17 + 0x10)
                    int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                    
                    if (rax_19.d s<= *(rdx_11 + 0x38)
                            && *(*(rdx_11 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30)
                        zmm6 = var_248_1
                        float var_1f4
                        zmm6[0] = zmm6[0] - var_1f4
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            if (var_d8 != 0)
                sub_140a74f90(var_d8)
            
            if (not(zmm7[0] <= zmm10[0]))
                zmm0.d = (*(rbx + var_170 + 0x50)).d f- zmm7[0]
                *(rbx + var_170 + 0x50) = zmm0.d
            
            if (not(zmm6[0] <= zmm10[0]))
                zmm0.d = (*(rbx + var_170 + 0x5c)).d f- zmm6[0]
                *(rbx + var_170 + 0x5c) = zmm0.d
        
        rdx_1 = zx.q(data_14401b1a0)
        r14 += 1
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        rbx += 0x60
    while (r14 s< var_168)
    
    rsi = arg1

int64_t rdi_2 = sx.q(rsi[0xc])
int32_t rax_21 = (rdi_2 + 1).d
rsi[0xc] = rax_21

if (rax_21 s> rsi[0xd])
    sub_1405fdd60(&rsi[0xa])

sub_1426436f0(rdi_2 * 0x70 + *(rsi + 0x28), &var_188)
int32_t result = *rsi
*rsi = (((var_188 | result) ^ result) & 1) ^ result

if (var_170 != 0)
    result = sub_140a74f90(var_170)

int64_t rcx_29 = var_180

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
