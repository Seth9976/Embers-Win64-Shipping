// 函数: sub_141506d50
// 地址: 0x141506d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
int64_t* rcx = *(arg1 + 0x50)
int64_t var_410
__builtin_memset(&var_410, 0, 0x30)
int64_t rax_3 = (*(*rcx + 0x248))(zx.o(0), zx.o(0))
uint128_t zmm0 = *(arg1 + 0x60)
int128_t var_408
int128_t* rdi = &var_408
uint128_t zmm1 = *(arg1 + 0x70)
int64_t* i = nullptr
int64_t rdx = *(arg1 + 0xb0)
int64_t var_478 = rax_3
int32_t var_470 = *(arg1 + 0x44)
int32_t var_420 = *(arg1 + 0xa8)
char var_41c = *(arg1 + 0x48)
uint128_t var_468 = zmm0
uint128_t var_458 = zmm1
char var_41b = *(arg1 + 0x2d)
uint128_t var_448 = *(arg1 + 0x80)
char var_41a = *(arg1 + 0x49)
uint128_t var_438 = *(arg1 + 0x90)
uint64_t var_428 = *(arg1 + 0xa0)
char var_419 = 0
int32_t var_418 = 0

do
    int64_t* rcx_1 = *(i + rdx)
    int64_t rax_10
    
    if (rcx_1 == 0)
        rax_10 = 0
    else
        rax_10 = (*(*rcx_1 + 8))(rcx_1)
        rdx = *(arg1 + 0xb0)
    
    *(rdi - 8) = rax_10
    int64_t rax_11 = *(i + rdx + 8)
    i = &i[4]
    *rdi = rax_11
    rdi = &rdi[1]
while (i s< 0x60)

int64_t result = sx.q(*(arg1 + 0xb8))
int32_t r15 = 0
int64_t* r14 = *(arg1 + 0xb0)
void* r12_1 = result * 0x68 + r14

if (r14 == r12_1)
    *(arg1 + 0xb8) = 0
else
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t r11_1 = 0
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    uint128_t zmm13 = 0x3f800000
    
    do
        zmm7 = *(r14 + 0x10)
        zmm8 = *(r14 + 0x30)
        zmm9 = *(r14 + 0x50)
        uint40_t var_d8_1 = (r14[0xc]).5
        int32_t rdx_1 = var_d8_1.d
        char r9_1 = var_d8_1:4.b
        int32_t rax_13 = rdx_1 & 0x55555555
        int32_t rdx_3 = rdx_1 u>> 1 & 0x55555555
        int32_t rcx_5 = (rax_13 u>> 1 ^ rax_13) & 0x33333333
        int32_t rax_17 = (rcx_5 u>> 2 ^ rcx_5) & 0xf0f0f0f
        int32_t r8_4 = (rax_17 u>> 4 ^ rax_17) & 0xff00ff
        int32_t rax_21 = (rdx_3 u>> 1 ^ rdx_3) & 0x33333333
        int32_t rcx_9 = (rax_21 u>> 2 ^ rax_21) & 0xf0f0f0f
        int32_t rdx_7 = (rcx_9 u>> 4 ^ rcx_9) & 0xff00ff
        uint64_t rcx_11 = zx.q(*(arg1 + 0x18))
        int64_t r10_1 = r11_1 * 0x54
        zmm1 = _mm_cvtepi32_ps(zx.o(1 << r9_1))
        uint128_t zmm2
        zmm2.d = float.s(rcx_11)
        zmm0.d = float.s(zx.q(*(arg1 + 0x1c)))
        zmm0.d = zmm0.d f/ zmm1.d
        zmm6.d = float.s(zx.q((r8_4 u>> 8).w) ^ zx.q(r8_4.w))
        uint128_t zmm3
        zmm3.d = zmm13.d f/ zmm0.d
        zmm0.d = float.s(zx.q(*(arg1 + 0x20)))
        uint64_t rdx_8 = zx.q(*(arg1 + 0x14))
        zmm6.d = zmm6.d f* zmm3.d
        zmm0.d = zmm0.d f/ zmm1.d
        uint128_t zmm5_1
        zmm5_1.d = float.s(zx.q((rdx_7 u>> 8).w) ^ zx.q(rdx_7.w))
        uint128_t zmm4_1
        zmm4_1.d = zmm13.d f/ zmm0.d
        zmm0.d = float.s(rdx_8)
        zmm5_1.d = zmm5_1.d f* zmm4_1.d
        zmm2.d = zmm2.d f/ zmm0.d
        zmm0.d = zmm6.d f+ zmm3.d
        zmm1.d = zmm2.d f* zmm3.d
        zmm2.d = zmm2.d f* zmm4_1.d
        zmm0.d = zmm0.d f+ zmm1.d
        zmm3.d = zmm5_1.d f+ zmm4_1.d
        zmm6.d = zmm6.d f- zmm1.d
        zmm5_1.d = zmm5_1.d f- zmm2.d
        void var_3dc
        *(&var_3dc + r10_1) = r9_1
        int32_t r8_5 = (rdx_8 + (rcx_11 << 1)).d
        char var_488_2 = 1
        zmm3.d = zmm3.d f+ zmm2.d
        _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm6.d = zmm5_1.d
        zmm4_1 = _mm_cvtepi32_ps(zx.o(r8_5))
        _mm_shuffle_ps(zmm6, zmm6, 0xc6)
        zmm6.d = zmm0.d
        _mm_shuffle_ps(zmm6, zmm6, 0x27)
        zmm6.d = zmm3.d
        void var_3d8
        *(&var_3d8 + r10_1) = _mm_shuffle_ps(zmm6, zmm6, 0x39)
        void var_3c8
        *(&var_3c8 + r10_1) = 1.d
        uint128_t temp0_7 = _mm_bsrli_si128(zmm7, 4)
        zmm3 = _mm_cvtepi32_ps(zx.o(zmm7.d * r8_5))
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm1.d = zmm3.d f+ zmm4_1.d
        zmm0 = _mm_cvtepi32_ps(zx.o(temp0_7.d * r8_5))
        char var_488_3 = 1
        zmm3.d = zmm0.d
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm2.d = zmm0.d f+ zmm4_1.d
        zmm3.d = zmm1.d
        _mm_shuffle_ps(zmm3, zmm3, 0x27)
        zmm3.d = zmm2.d
        void var_3c4
        *(&var_3c4 + r10_1) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        void var_3b4
        *(&var_3b4 + r10_1) = var_488_2.d
        uint128_t temp0_14 = _mm_bsrli_si128(zmm8, 4)
        zmm3 = _mm_cvtepi32_ps(zx.o(zmm8.d * r8_5))
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm1.d = zmm3.d f+ zmm4_1.d
        zmm0 = _mm_cvtepi32_ps(zx.o(temp0_14.d * r8_5))
        char var_488_4 = 1
        zmm3.d = zmm0.d
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm2.d = zmm0.d f+ zmm4_1.d
        zmm3.d = zmm1.d
        _mm_shuffle_ps(zmm3, zmm3, 0x27)
        zmm3.d = zmm2.d
        void var_3b0
        *(&var_3b0 + r10_1) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        void var_3a0
        *(&var_3a0 + r10_1) = var_488_3.d
        int32_t rax_46 = _mm_bsrli_si128(zmm9, 4).d
        zmm3 = _mm_cvtepi32_ps(zx.o(zmm9.d * r8_5))
        zmm1.d = zmm3.d f+ zmm4_1.d
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_46 * r8_5))
        zmm2.d = zmm0.d f+ zmm4_1.d
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = zmm0.d
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm1.d
        _mm_shuffle_ps(zmm3, zmm3, 0x27)
        zmm3.d = zmm2.d
        void var_39c
        *(&var_39c + r10_1) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        void var_38c
        *(&var_38c + r10_1) = var_488_4.d
        int128_t var_3f8
        i.b = var_3f8:8.q != r14[8]
        int64_t rax_50
        rax_50.b = var_408:8.q != r14[4]
        i.b |= rax_50.b
        result.b = var_410 != *r14
        r15 += 1
        i.b |= result.b
        r11_1 += 1
        
        if (r15 == 8 || i.b != 0)
            int32_t var_3e0_1 = r15
            result, zmm13 = sub_141511fd0(arg2, &var_478)
            r11_1 = 0
            r15 = 0
            
            if (i.b != 0)
                int64_t rdx_10 = *(arg1 + 0xb0)
                int64_t* rdi_1 = &var_408
                
                for (i = nullptr; i s< 0x60; )
                    int64_t* rcx_13 = *(i + rdx_10)
                    int64_t rax_52
                    
                    if (rcx_13 == 0)
                        rax_52 = 0
                    else
                        rax_52 = (*(*rcx_13 + 8))(rcx_13)
                        rdx_10 = *(arg1 + 0xb0)
                    
                    rdi_1[-1] = rax_52
                    result = *(i + rdx_10 + 8)
                    i = &i[4]
                    *rdi_1 = result
                    rdi_1 = &rdi_1[2]
                
                r11_1 = 0
        
        r14 = &r14[0xd]
    while (r14 != r12_1)
    
    if (r15 s> 0)
        int32_t var_3e0_2 = r15
        result = sub_141511fd0(arg2, &var_478)
    
    *(arg1 + 0xb8) = 0

__security_check_cookie(rax_1 ^ &var_4b8)
return result
