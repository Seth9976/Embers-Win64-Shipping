// 函数: sub_1410ee880
// 地址: 0x1410ee880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rax_2 = *(arg1 + 0xa0)
int128_t zmm0 = *(rax_2 + 0xaa4)
int128_t zmm1 = *(rax_2 + 0xaa8)
float zmm3[0x4] = *(rax_2 + 0xaa0)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1.d
int128_t var_f8
__builtin_memcpy(&var_f8, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
int128_t var_c8
__builtin_memcpy(&var_c8, 
    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
temp0_2[0] = 0x3f800000
zmm1 = data_143dbb1e0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
int128_t var_d8 = zx.o(0)
int128_t var_a8 = zmm1
int128_t var_98 = zmm1
void* var_1e0 = temp0_3[0].q
float var_108[0x4] = temp0_3
int32_t rax_4 = sub_14139cec0(sub_14139bef0(arg2))
int64_t* rax_5 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
void* var_1d0
sub_1419a2ec0(rax_5, &var_1d0, &data_143f140e0, 0)
void* var_1c0
sub_1419a2ec0(rax_5, &var_1c0, &data_143f12f80, rax_4 - 1)
void* r15 = var_1c0
int32_t i = 0
int64_t var_154
__builtin_memset(&var_154, 0, 0x43)
int128_t var_1b0
__builtin_memset(&var_1b0, 0, 0x30)
int128_t var_168 = zx.o(0)
int16_t var_110 = 0
sub_140fdc870(arg2, &var_1b0)
int64_t var_178 = data_14395da18
int64_t var_180 = data_14395da00
int64_t var_170 = data_1439b53d0
int64_t rax_9 = 0
void* r14 = var_1d0
var_1b0.q = data_1439c9410

if (r14 != 0)
    int64_t rdx_3 = sx.q(*(r14 + 0x10c))
    void* var_1c8
    int64_t* rbx_1 = *(var_1c8 + 0x10)
    int64_t rax_11 = rbx_1[3]
    
    if (*(rax_11 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_11 = rbx_1[3]
    
    rax_9 = *(rax_11 + (rdx_3 << 3))

var_1b0:8.q = rax_9
int64_t rax_12 = 0

if (r15 != 0)
    int64_t rdx_4 = sx.q(*(r15 + 0x10c))
    void* var_1b8
    int64_t* rbx_2 = *(var_1b8 + 0x10)
    int64_t rax_14 = rbx_2[3]
    
    if (*(rax_14 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_4.d)
        rax_14 = rbx_2[3]
    
    rax_12 = *(rax_14 + (rdx_4 << 3))

int128_t var_190
var_190.q = rax_12
int32_t var_158 = 1
sub_1419870b0(arg2, &var_1b0, 2)
int32_t result
uint128_t zmm6
result, zmm6 = sub_141105780(r14, arg2, (zx.o(0)).d)

if (*(arg1 + 0xa8) s> 0)
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t r14_1 = 0
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    
    do
        int64_t r15_1 = *(arg1 + 0xa0)
        int32_t rbx_3 = *(arg2 + 0x8c)
        int32_t rax_15 = *(r14_1 + r15_1 + 0xad8)
        
        if (rbx_3 != rax_15)
            bool cond:0_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rax_15
            
            if (cond:0_1)
                void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_16 = &rdx_9[3]
                
                if (rax_16 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_16 = &rdx_9[3]
                
                *(arg2 + 0x30) = rax_16
                int64_t* rax_17 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_17 = rdx_9
                int32_t rax_18 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_9[1]
                rdx_9[1] = 0
                *rdx_9 = &data_142f11588
                rdx_9[2].d = rax_18
            else
                *(arg2 + 0x90) = rax_15
        
        zmm7 = zx.o(*(r14_1 + r15_1 + 0x15a0))
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        zmm8 = zx.o(*(r14_1 + r15_1 + 0x159c))
        zmm9 = zx.o(*(r14_1 + r15_1 + 0x1598))
        zmm6 = _mm_cvtepi32_ps(zx.o(*(r14_1 + r15_1 + 0x15a4)))
        void* rax_19 = &rcx_16[5]
        zmm7 = _mm_cvtepi32_ps(zmm7)
        zmm8 = _mm_cvtepi32_ps(zmm8)
        zmm9 = _mm_cvtepi32_ps(zmm9)
        
        if (rax_19 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_16[5]
        
        *(arg2 + 0x30) = rax_19
        void** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        rcx_16[3].d = 0
        *rcx_16 = &data_142d54998
        rcx_16[2].d = zmm9.d
        *(rcx_16 + 0x14) = zmm8.d
        *(rcx_16 + 0x1c) = zmm7.d
        rcx_16[4].d = zmm6.d
        *(rcx_16 + 0x24) = 0x3f800000
        sub_1419ab500(r15, arg2, &var_108, rax_4)
        int64_t r15_2 = data_1439c91b0
        void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_22 = &rcx_23[5]
        
        if (rax_22 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_22 = &rcx_23[5]
        
        *(arg2 + 0x30) = rax_22
        int64_t* rax_23 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_23 = rcx_23
        *(arg2 + 8) = &rcx_23[1]
        rcx_23[1] = 0
        *rcx_23 = &data_142d56618
        rcx_23[2].d = 0
        rcx_23[3] = r15_2
        rcx_23[4].d = 0
        void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_25 = &rcx_29[4]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x28)
            rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_29[4]
        
        *(arg2 + 0x30) = rax_25
        int64_t* rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_29
        *(arg2 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        result = 0x42d54988
        *rcx_29 = &data_142d54988
        rcx_29[2].d = 0
        *(rcx_29 + 0x14) = 2
        rcx_29[3].d = 1
        
        if (*(arg2 + 0x8c) != rbx_3)
            bool cond:1_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rbx_3
            
            if (cond:1_1)
                void*** rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_28 = &rdx_15[3]
                
                if (rax_28 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_28 = &rdx_15[3]
                
                *(arg2 + 0x30) = rax_28
                int64_t* rax_29 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_29 = rdx_15
                result = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_15[1]
                rdx_15[1] = 0
                *rdx_15 = &data_142f11588
                rdx_15[2].d = result
            else
                *(arg2 + 0x90) = rbx_3
        
        i += 1
        r14_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

__security_check_cookie(rax_1 ^ &var_208)
return result
