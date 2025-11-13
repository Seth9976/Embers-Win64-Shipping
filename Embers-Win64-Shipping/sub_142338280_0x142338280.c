// 函数: sub_142338280
// 地址: 0x142338280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm10 = zx.o(0)
int128_t zmm11
int128_t var_98 = zmm11
int64_t* rax_2 = *(**(*(arg1 + 0x30) + 0x58) + (sx.q(*(arg1 + 0x40)) << 3))
int64_t* r13 = rax_2[3]
int64_t* result = *(arg1 + 0x38)
int64_t* result_1 = result
void var_c0
void var_b4
void var_a8
uint128_t zmm0

if (result == 0)
    int32_t rax_16 = (*(*r13 + 0x58))(r13)
    int32_t r14_2 = 0
    arg2[1].d = 0
    int32_t temp0_4
    int32_t result_2
    temp0_4:result_2 = muls.dp.d(0x55555556, rax_16)
    result = zx.q(result_2)
    int32_t rdx_10 = rax_16 s/ 3
    
    if (*(arg2 + 0xc) != rdx_10)
        result = sub_1405dadb0(arg2, rdx_10)
    
    if (rax_16 s> 0)
        do
            int32_t rax_18 = (*(*r13 + 0x68))(r13, zx.q(r14_2))
            int64_t r8_6 = *r13
            int32_t rax_19 = (*(r8_6 + 0x68))(r13, zx.q(r14_2 + 1), r8_6)
            int64_t r8_7 = *r13
            int32_t rax_20 = (*(r8_7 + 0x68))(r13, zx.q(r14_2 + 2), r8_7)
            int64_t* rax_21 = sub_142316040(&var_a8, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_18)
            float rcx_17 = rax_21[1].d
            zmm8 = zx.o(*rax_21)
            int64_t* rax_22
            int512_t zmm6_2
            rax_22, zmm6_2 = sub_142316040(&var_b4, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_19)
            zmm6_2.o = zx.o(*rax_22)
            int32_t rax_23 = rax_22[1].d
            int64_t* rax_24
            rax_24, zmm6 = sub_142316040(&var_c0, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_20)
            uint128_t zmm4_2
            zmm4_2.d = rax_23.d f- rcx_17
            int64_t rbx_6 = sx.q(arg2[1].d)
            zmm0 = zx.o(*rax_24)
            zmm7.d = zmm6.d f- zmm8.d
            uint128_t zmm5_2 = zmm0
            zmm9 = zmm0
            zmm0 = zmm4_2
            zmm9.d = zmm9.d f- zmm8.d
            float zmm2_2 = rax_24[1].d f- rcx_17
            uint64_t var_f0_2 = zmm8.q
            int32_t rax_26 = (rbx_6 + 1).d
            uint128_t zmm3_2
            zmm3_2.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f- var_f0_2:4.d
            zmm5_2.d = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55).d f- var_f0_2:4.d
            zmm4_2.d = zmm4_2.d f* zmm9.d
            float zmm1_2 = zmm3_2.d
            zmm3_2.d = zmm3_2.d f* zmm9.d
            zmm0.d = zmm0.d f* zmm5_2.d
            zmm1_2 = zmm1_2 * zmm2_2 f- zmm0.d
            zmm0 = zmm7
            zmm7.d = zmm7.d f* zmm5_2.d
            zmm0.d = zmm0.d f* zmm2_2
            zmm7.d = zmm7.d f- zmm3_2.d
            zmm4_2.d = zmm4_2.d f- zmm0.d
            zmm7.d = zmm7.d f* zmm7.d
            zmm4_2.d = zmm4_2.d f* zmm4_2.d
            zmm4_2.d = zmm4_2.d f+ zmm1_2 * zmm1_2
            zmm4_2.d = zmm4_2.d f+ zmm7.d
            zmm6.d = _mm_sqrt_ss(0, zmm4_2.d).d f* 0.5f
            arg2[1].d = rax_26
            
            if (rax_26 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            result = *arg2
            zmm10.d = zmm10.d f+ zmm6.d
            r14_2 += 3
            *(result + (rbx_6 << 2)) = zmm6.d
        while (r14_2 s< rax_16)
else
    int64_t rbx_1 = sx.q(result[1].d)
    
    if (rbx_1.d != 0)
        int64_t r14_1 = 0
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rbx_1.d)
            sub_1405dadb0(arg2, rbx_1.d)
            result = result_1
        
        if (rbx_1.d s> 0)
            do
                int32_t rdi_1 = *(*result + (r14_1 << 2))
                int32_t rax_5 = (*(*r13 + 0x68))(r13, zx.q(rdi_1))
                int64_t r8_1 = *r13
                int32_t rax_6 = (*(r8_1 + 0x68))(r13, zx.q(rdi_1 + 1), r8_1)
                int64_t r8_2 = *r13
                int32_t rax_7 = (*(r8_2 + 0x68))(r13, zx.q(rdi_1 + 2), r8_2)
                int64_t* rax_8 = sub_142316040(&var_c0, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_5)
                float rcx_5 = rax_8[1].d
                zmm8 = zx.o(*rax_8)
                int64_t* rax_9
                int512_t zmm6_1
                rax_9, zmm6_1 = sub_142316040(&var_b4, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_6)
                zmm6_1.o = zx.o(*rax_9)
                int32_t rax_10 = rax_9[1].d
                int64_t* rax_11
                rax_11, zmm6 = sub_142316040(&var_a8, *(arg1 + 0x30), rax_2, &rax_2[0x27], rax_7)
                float zmm3_1[0x4] = zmm6
                uint128_t zmm4_1
                zmm4_1.d = rax_10.d f- rcx_5
                zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                zmm0 = zx.o(*rax_11)
                zmm7.d = zmm6.d f- zmm8.d
                float rax_12 = rax_11[1].d
                uint128_t zmm5_1 = zmm0
                zmm9 = zmm0
                uint64_t var_f0_1 = zmm8.q
                zmm3_1[0] = zmm3_1[0] f- var_f0_1:4.d
                zmm0 = zmm4_1
                zmm9.d = zmm9.d f- zmm8.d
                float zmm2_1 = rax_12 - rcx_5
                zmm5_1.d = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55).d f- var_f0_1:4.d
                zmm4_1.d = zmm4_1.d f* zmm9.d
                float zmm1_1 = zmm3_1[0] * zmm2_1
                zmm0.d = zmm0.d f* zmm5_1.d
                zmm3_1[0] = zmm3_1[0] f* zmm9.d
                zmm1_1 = zmm1_1 f- zmm0.d
                zmm0 = zmm7
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm0.d = zmm0.d f* zmm2_1
                zmm7.d = zmm7.d f- zmm3_1[0]
                zmm4_1.d = zmm4_1.d f- zmm0.d
                zmm7.d = zmm7.d f* zmm7.d
                zmm4_1.d = zmm4_1.d f* zmm4_1.d
                zmm4_1.d = zmm4_1.d f+ zmm1_1 * zmm1_1
                zmm4_1.d = zmm4_1.d f+ zmm7.d
                zmm6.d = _mm_sqrt_ss(0, zmm4_1.d).d f* 0.5f
                int64_t rbx_4 = sx.q(arg2[1].d)
                int32_t rax_13 = (rbx_4 + 1).d
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                zmm10.d = zmm10.d f+ zmm6.d
                r14_1 += 1
                *(*arg2 + (rbx_4 << 2)) = zmm6.d
                result = result_1
            while (r14_1 s< rbx_1)
return result
