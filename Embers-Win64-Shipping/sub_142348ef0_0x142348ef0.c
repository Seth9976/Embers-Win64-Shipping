// 函数: sub_142348ef0
// 地址: 0x142348ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14
int64_t* var_30 = r14
void* r15 = arg3
int64_t* r12 = arg2
void* rdi = arg1
uint64_t rax
uint32_t zmm0[0x4]

if (*(arg1 + 0x121) == 0 || *(arg1 + 0x120) == 0)
    void* rbx_1 = *(arg1 + 0x110)
    
    if (rbx_1 == 0 || *(rbx_1 + 0x30) != *(arg4 + 0x30))
    label_142348fcf:
        r14.b = 1
    else
        rax = sx.q(*(rbx_1 + 0x40))
        
        if (*(arg4 + 0x40) != rax.d)
        label_142348fcf_1:
            r14.b = 1
        else
            if (rax.d s> 0)
                void* r14_1 = *(rbx_1 + 0x38)
                int64_t r10_1 = 0
                uint64_t* r9 = *(arg4 + 0x38)
                arg5 = data_143a2ff14
                int32_t* r11_1 = r14_1 + 8
                r14 = r14_1 - r9
                
                while (true)
                    if (*(r14 + r9) == *r9)
                        zmm0 = *(*(rbx_1 + 0x48) + (sx.q(*r11_1) << 2))
                        zmm0[0] = zmm0[0] f- *(*(arg4 + 0x48) + (sx.q(r9[1].d) << 2))
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= arg5[0]))
                            r10_1 += 1
                            r11_1 = &r11_1[4]
                            r9 = &r9[2]
                            
                            if (r10_1 s< rax)
                                continue
                            
                            r15 = arg3
                            break
                    
                    r15 = arg3
                    goto label_142348fcf_2
            
            r14.b = 0
else
label_142348fcf_2:
    r14.b = 1

void* rcx_1 = *(rdi + 0x110)

if (rcx_1 == 0 || *(rdi + 0xc8) == 0 || *(rcx_1 + 0x30) != *(arg4 + 0x30))
    rax.b = 1
else
    rax.b = 0

*(rdi + 0x39) = rax.b

if (rax.b == 0)
    void* i = *(rdi + 0xc0)
    
    if ((i.b & 1) != 0)
        i = (i s>> 1) + rdi + 0xc0
    
    for (void* rcx_5 = (sx.q(*(rdi + 0xc8)) << 5) + i; i != rcx_5; i += 0x20)
        if (*i == 0)
            *(rdi + 0x39) = 1
            break

if (*(rdi + 0x118) != 0)
    arg5 = sub_14198b920(rdi + 0x118)
    int64_t* rcx_7 = *(rdi + 0x118)
    *(rdi + 0x118) = 0
    
    if (rcx_7 != 0)
        rcx_7[9].d -= 1
        
        if (rcx_7[9].d == 1)
            arg5 = sub_140a2f6e0(rcx_7)

int64_t* rcx_8 = *(rdi + 0x110)

if (rcx_8 != 0)
    arg5 = sub_142336f40(rcx_8)

*(rdi + 0x124) = arg7
*(rdi + 0x110) = arg4
int64_t* result = data_143f58af8

if (*(result + 4) == 0)
    result = sub_142342990(rdi, r12, r15, arg6, arg5, arg7, r14.b)
else
    *(rdi + 0x121) = r14.b
    *(rdi + 0x120) = 1

if (data_143f0f21f != 0)
    uint64_t rdx_2 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_2.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_2) && data_143a2e1b8 != 0)
            void* r8_2 = *(rdi + 0x58)
            
            if (r8_2 != 0)
                result = *(rdi + 0x110)
                
                if (*(rdi + 0x39) != 0)
                    int64_t* rbx_2 = *(**(rdi + 0x40) + (sx.q(result[6].d) << 3))
                    void* rdx_5 = *(rbx_2[3] + 0x10)
                    void* arg_20 = rdx_5
                    
                    if (rdx_5 != 0)
                        *(rdx_5 + 8) += 1
                        rdx_5 = arg_20
                    
                    int64_t r10_2 = sx.q(rbx_2[1].d)
                    int32_t rax_6 = rbx_2[0x1d].d
                    int32_t rsi_1 = 0
                    int32_t r11_2 = 0
                    
                    if (r10_2.d s> 0 && r10_2.d u>= 8)
                        int64_t r8_3 = *rbx_2
                        int32_t zmm4[0x4] = zx.o(0)
                        int32_t zmm5[0x4] = zx.o(0)
                        int32_t rcx_14 = r10_2.d & 0x80000007
                        
                        if (rcx_14 s< 0)
                            rcx_14 = ((rcx_14 - 1) | 0xfffffff8) + 1
                        
                        int64_t i_1 = 0
                        int64_t rax_9 = 0
                        int32_t temp0_10[0x4]
                        
                        do
                            arg5 = zx.o(*(r8_3 + rax_9 + 0x2c0))
                            r11_2 += 8
                            zmm0 = zx.o(*(r8_3 + rax_9 + 0x1d8))
                            i_1 += 8
                            uint128_t zmm2 = zx.o(*(r8_3 + rax_9 + 0xf0))
                            int32_t zmm3[0x4] = zx.o(*(r8_3 + rax_9 + 8))
                            rax_9 += 0x740
                            int32_t temp0_3[0x4] = _mm_unpacklo_epi32(zmm3, zmm0[0].q)
                            zmm0 = zx.o(*(r8_3 + rax_9 - 0x1c8))
                            zmm2 = _mm_unpacklo_epi32(zmm2, arg5[0].q)
                            arg5 = zx.o(*(r8_3 + rax_9 - 0xe0))
                            int32_t temp0_5[0x4] = _mm_unpacklo_epi32(temp0_3, zmm2.q)
                            zmm2 = zx.o(*(r8_3 + rax_9 - 0x2b0))
                            int32_t temp0_6[0x4] = _mm_add_epi32(temp0_5, zmm4)
                            zmm2 = _mm_unpacklo_epi32(zmm2, arg5[0].q)
                            zmm4 = temp0_6
                            temp0_10 = _mm_add_epi32(
                                _mm_unpacklo_epi32(
                                    _mm_unpacklo_epi32(zx.o(*(r8_3 + rax_9 - 0x398)), zmm0[0].q), 
                                    zmm2.q), 
                                zmm5)
                            zmm5 = temp0_10
                        while (i_1 s< sx.q(r10_2.d - rcx_14))
                        
                        int32_t temp0_11[0x4] = _mm_add_epi32(zmm4, temp0_10)
                        int32_t temp0_13[0x4] =
                            _mm_add_epi32(temp0_11, _mm_bsrli_si128(temp0_11, 8))
                        rsi_1 = _mm_add_epi32(temp0_13, _mm_bsrli_si128(temp0_13, 4))[0]
                    
                    int64_t r11_3 = sx.q(r11_2)
                    int32_t r8_4 = 0
                    int32_t r9_3 = 0
                    
                    if (r11_3 s< r10_2)
                        if (r10_2 - r11_3 s>= 2)
                            int64_t r10_3 = *rbx_2
                            int64_t rax_12 = r11_3 * 0xe8
                            int64_t i_4 = ((r10_2 - r11_3 - 2) u>> 1) + 1
                            r11_3 += i_4 << 1
                            int64_t i_2
                            
                            do
                                r8_4 += *(r10_3 + rax_12 + 8)
                                r9_3 += *(r10_3 + rax_12 + 0xf0)
                                rax_12 += 0x1d0
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                        
                        if (r11_3 s< r10_2)
                            rsi_1 += *(r11_3 * 0xe8 + *rbx_2 + 8)
                        
                        rsi_1 += r8_4 + r9_3
                    
                    int64_t var_f8
                    __builtin_memset(&var_f8, 0, 0x14)
                    void* var_e0
                    __builtin_memset(&var_e0, 0, 0x1a)
                    sub_14081d930(&var_f8, rdx_5)
                    int32_t var_e8_1 = rsi_1
                    int64_t var_f0
                    var_f0:4.d = 0
                    int16_t var_c8_1 = 0x101
                    int32_t rax_15 = rbx_2[1].d
                    int64_t var_d8
                    
                    if (rax_15 s> var_d8:4.d)
                        sub_1408e7310(&var_e0, rax_15)
                        rax_15 = rbx_2[1].d
                    
                    void* rbx_3 = *rbx_2
                    void* r13_2 = sx.q(rax_15) * 0xe8 + rbx_3
                    
                    if (rbx_3 != r13_2)
                        do
                            int64_t r14_3 = sx.q(var_d8.d)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = mulu.dp.d(0xaaaaaaab, *(rbx_3 + 4))
                            int32_t rax_17 = (r14_3 + 1).d
                            int64_t var_c0 = 0
                            int32_t r15_2 = *(rbx_3 + 8)
                            uint32_t rsi_3 = temp2_1 u>> 1
                            int16_t var_a4_1 = 0x100
                            r12.b = *(rbx_3 + 0xe0) == 0
                            int64_t var_b8_1 = 3
                            char var_a2_1 = r12.b
                            int32_t var_b0_1 = rax_6
                            uint32_t var_ac_1 = rsi_3
                            int32_t var_a8_1 = r15_2
                            var_d8.d = rax_17
                            
                            if (rax_17 s> var_d8:4.d)
                                sub_1405e4030(&var_e0, r14_3.d)
                            
                            void* rcx_25
                            
                            if ((var_e0.b & 1) == 0)
                                rcx_25 = var_e0
                            else
                                rcx_25 = &var_e0 + (var_e0 s>> 1)
                            
                            int64_t rax_21 = r14_3 << 5
                            *(rax_21 + rcx_25) = 0
                            *(rax_21 + rcx_25 + 8) = 3
                            *(rax_21 + rcx_25 + 0x10) = rax_6
                            *(rax_21 + rcx_25 + 0x14) = rsi_3
                            *(rax_21 + rcx_25 + 0x18) = r15_2
                            *(rax_21 + rcx_25 + 0x1c) = 0x100
                            *(rax_21 + rcx_25 + 0x1e) = r12.b
                            sub_1405d1550(&var_c0, 0)
                            rbx_3 += 0xe8
                        while (rbx_3 != r13_2)
                        
                        rdi = arg1
                        r12 = arg2
                    
                    void* rcx_27
                    
                    if ((var_e0.b & 1) == 0)
                        rcx_27 = var_e0
                    else
                        rcx_27 = &var_e0 + (var_e0 s>> 1)
                    
                    void* rcx_28 = *(rdi + 0x58)
                    int32_t var_80_1 = var_d8.d
                    int128_t var_68 = rcx_27.o
                    sub_14205e930(rcx_28, &var_68)
                    sub_1420711f0(r12, arg3, 1)
                    sub_142346790(rdi + 0x70, &var_f8)
                    sub_1419ba620(rdi + 0x70)
                    void* rbx_4
                    
                    if ((var_e0.b & 1) == 0)
                        rbx_4 = var_e0
                    else
                        rbx_4 = &var_e0 + (var_e0 s>> 1)
                    
                    int32_t i_5 = var_d8.d
                    
                    if (i_5 != 0)
                        int32_t i_3
                        
                        do
                            sub_1405d1550(rbx_4)
                            rbx_4 += 0x20
                            i_3 = i_5
                            i_5 -= 1
                        while (i_3 != 1)
                    
                    sub_140a1d5c0(&var_e0)
                    sub_14081c9d0(&var_f8)
                    return sub_14081c9d0(&arg_20)
                
                if ((*(result + 0x104) & 2) == 0)
                    void* rax_27 = *(rdi + 0xc0)
                    
                    if ((rax_27.b & 1) != 0)
                        rax_27 = (rax_27 s>> 1) + rdi + 0xc0
                    
                    int32_t var_70_1 = *(rdi + 0xc8)
                    uint32_t var_58[0x4] = rax_27.o
                    sub_14205e930(r8_2, &var_58)
                    void* var_98 = rdi + 0x70
                    void var_a0
                    return sub_140ca9be0(&r12[2], &var_a0, &var_98, nullptr)

return result
