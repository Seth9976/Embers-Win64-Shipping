// 函数: sub_1411857c0
// 地址: 0x1411857c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t r9 = 0
int32_t rbp = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, arg1[1].d)
uint128_t result_1
uint128_t result_2 = result_1
uint128_t result = zx.o(0)
uint128_t zmm7
uint128_t var_48 = zmm7
int32_t i = (temp0 u>> 0x1f) + temp0
int64_t var_d8 = 0
int32_t var_cc = 0

while (i u< arg1[1].d)
    int64_t r15_1 = *arg1
    int64_t rsi_1 = sx.q(rbp)
    rbp = (rsi_1 + 1).d
    
    if (rbp s> r9)
        sub_1406105e0(&var_d8)
        r9 = var_cc
        rdi = var_d8
    
    int64_t i_2 = sx.q(i)
    i += 1
    *(rdi + (rsi_1 << 2)) = *(r15_1 + (i_2 << 2))

sub_140626020(rdi, rbp)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp)
int32_t i_3 = 0
int32_t rax_5 = (temp3 - temp2) s>> 1
*arg2 = 0
uint128_t zmm12 = _mm_cvtepi32_ps(zx.o(rbp - rax_5))
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rax_5))
int32_t i_1

do
    i_1 = i_3 + 1
    int32_t r9_1 = 0
    result_1 = zx.o(0)
    zmm7 = 0x7f7fffff
    float zmm5_1 = -3.40282347e+38f
    uint128_t zmm2_1
    zmm2_1.d = float.s(zx.q(i_1))
    zmm2_1.d = zmm2_1.d f* 0.100000001f
    uint128_t zmm1_1
    zmm1_1.d = zmm9.d f* zmm2_1.d
    uint128_t zmm0_1
    zmm0_1.d = zmm9.d f- zmm1_1.d
    int64_t rcx_4 = sx.q(int.d(zmm0_1.d))
    zmm0_1.d = zmm12.d f* zmm2_1.d
    zmm0_1.d = zmm0_1.d f+ zmm9.d
    int64_t rdx_4 = sx.q(int.d(zmm0_1.d))
    
    if (rcx_4 s>= rdx_4)
    label_141185a6d:
        zmm5_1 = (zx.o(0)).d
        zmm2_1 = zx.o(0)
        result_1 = zx.o(0)
    else
        if (rdx_4 - rcx_4 s>= 4)
            void* r8_2 = rdi + ((rcx_4 + 2) << 2)
            int64_t j_1 = ((rdx_4 - rcx_4 - 4) u>> 2) + 1
            rcx_4 += j_1 << 2
            r9_1 = (j_1 << 2).d
            int64_t j
            
            do
                uint128_t zmm4_1 = *(r8_2 - 8)
                zmm2_1 = *(r8_2 - 4)
                result_1.d = result_1.d f+ zmm4_1.d
                zmm1_1 = *r8_2
                int32_t zmm3 = *(r8_2 + 4)
                zmm0_1 = _mm_min_ss(zmm4_1.d, zmm7.d)
                zmm4_1 = _mm_max_ss(zmm4_1.d, zmm5_1)
                r8_2 += 0x10
                result_1.d = result_1.d f+ zmm2_1.d
                zmm7 = _mm_min_ss(zmm0_1.d, zmm2_1.d)
                zmm5_1 = _mm_max_ss(zmm4_1.d, zmm2_1.d)
                result_1.d = result_1.d f+ zmm1_1.d
                zmm7 = _mm_min_ss(zmm7.d, zmm1_1.d)
                zmm5_1 = _mm_max_ss(zmm5_1, zmm1_1.d)
                result_1.d = result_1.d f+ zmm3
                zmm7 = _mm_min_ss(zmm7.d, zmm3)
                zmm5_1 = _mm_max_ss(zmm5_1, zmm3)
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        if (rcx_4 s< rdx_4)
            r9_1 += rdx_4.d - rcx_4.d
            
            do
                zmm2_1 = *(rdi + (rcx_4 << 2))
                rcx_4 += 1
                result_1.d = result_1.d f+ zmm2_1.d
                zmm7 = _mm_min_ss(zmm2_1.d, zmm7.d)
                zmm5_1 = _mm_max_ss(zmm2_1.d, zmm5_1).d
            while (rcx_4 s< rdx_4)
        
        if (r9_1 == 0)
            goto label_141185a6d
        
        zmm1_1.d = float.s(zx.q(r9_1))
        zmm5_1 = (zmm5_1 f- zmm7.d) * 0.5f
        zmm2_1.d = zmm1_1.d f* 100f
        result_1.d = result_1.d f/ zmm1_1.d
        zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(rbp)).d
    
    if (i_3 != 0)
        zmm0_1.d = result_1.d f* 0.5f
        
        if (zmm5_1 f> zmm0_1.d)
            break
    
    *arg2 = zmm2_1.d
    result = result_1
    i_3 = i_1
while (i_1 u< 0xa)

if (rdi != 0)
    sub_140a74f90(rdi)

return result
