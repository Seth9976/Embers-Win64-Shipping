// 函数: sub_1417253d0
// 地址: 0x1417253d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = arg3
*arg2 = (_mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)).q
int64_t* r8 = arg2
int32_t var_130 = 0x7f7fffff
arg2[1].d = 0x7f7fffff
*(arg2 + 0xc) = (_mm_unpacklo_ps(0xff7fffff, 0xff7fffff)).q
float zmm0[0x4] = zx.o(0)
int32_t var_140 = 0xff7fffff
*(arg2 + 0x14) = 0xff7fffff
float result[0x4] = zx.o(0)
int32_t arg_8 = 0
*arg1[6] = 0
int64_t* rax_1 = *arg1
int128_t* r13 = *rax_1
void* rax_4 = &r13[sx.q(rax_1[1].d) * 4]

if (r13 != rax_4)
    int64_t* rsi_1 = nullptr
    char* rdi_1 = nullptr
    void* r12_1 = r13 + 0x28
    int128_t zmm6
    int128_t var_58_1 = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    char* var_148_1 = nullptr
    
    do
        int64_t rdx = *arg1[1]
        int64_t* rcx_1
        
        if (r10 == 0)
            rcx_1 = arg1[2]
            
            if (rdi_1[*rcx_1] != 0)
                goto label_141725715
        else
            float zmm1[0x4] = zx.o(*(r12_1 + 0xc))
            int32_t* r10_1 = arg1[5]
            int32_t rax_6 = *(r12_1 + 8)
            int32_t rcx = *(r12_1 + 0x14)
            *(rsi_1 + rdx) = *r12_1
            *(rsi_1 + rdx + 0xc) = zmm1.q
            *(rsi_1 + rdx + 8) = rax_6
            *(rsi_1 + rdx + 0x14) = rcx
            zmm1 = *(rsi_1 + rdx + 0xc)
            int64_t zmm2 = *(rsi_1 + rdx + 0x10)
            zmm1[0] = zmm1[0] f- *(rsi_1 + rdx)
            zmm2.d = zmm2.d f- *(rsi_1 + rdx + 4)
            zmm0 = *(rsi_1 + rdx + 0x14)
            zmm0[0] = zmm0[0] f- *(rsi_1 + rdx + 8)
            
            if (zmm1[0] f<= zmm2.d || not(zmm1[0] > zmm0[0]))
                zmm1 = _mm_max_ss(zmm0[0], zmm2.d)
            
            float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(*r10_1))
            
            if (zmm1[0] >= temp0_3[0])
                rdi_1[*arg1[2]] = 0
                zmm9 = zx.o(*(rsi_1 + rdx))
                int32_t rbp_1 = *(rsi_1 + rdx + 8)
                zmm10 = zx.o(*(rsi_1 + rdx + 0xc))
                int32_t r14_1 = *(rsi_1 + rdx + 0x14)
                int64_t* rbx_1 = arg1[3]
                zmm1 = r13[1]
                zmm6 = *r13
                int32_t r8_1 = rbx_1[1].d
                zmm8 = zx.o(r13[2].q)
                float var_e0_1 = zmm1[0]
                arg_8 = r8_1
                rbx_1[1].d = r8_1 + 1
                int32_t arg_20 = 0
                
                if (r8_1 + 1 s> *(rbx_1 + 0xc))
                    sub_1405c4fe0(rbx_1)
                    r8_1 = arg_8
                
                int128_t* rax_11 = (sx.q(r8_1) << 6) + *rbx_1
                int64_t rbx_2 = sx.q(var_e0_1)
                *rax_11 = zmm6
                rax_11[1] = zmm1
                rax_11[2].q = zmm8.q
                *(rax_11 + 0x28) = zmm9.q
                *(rax_11 + 0x34) = zmm10.q
                rax_11[3].d = rbp_1
                *(rax_11 + 0x3c) = r14_1
                int64_t* r14_2 = arg1[4]
                int64_t rbp_2 = sx.q(r14_2[1].d)
                
                if (rbx_2.d s>= rbp_2.d)
                    int32_t i_1 = rbx_2.d - rbp_2.d + 1
                    int32_t rax_12 = i_1 + rbp_2.d
                    r14_2[1].d = rax_12
                    
                    if (rax_12 s> *(r14_2 + 0xc))
                        sub_140adefe0(r14_2)
                        r8_1 = arg_8
                    
                    if (i_1 != 0)
                        char* rax_15 = *r14_2 + rbp_2 * 0x24 + 0x20
                        int32_t i
                        
                        do
                            *rax_15 = 0
                            rax_15 = &rax_15[0x24]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    rdi_1 = var_148_1
                
                int64_t rdx_3 = rbx_2 * 9
                *(*r14_2 + (rdx_3 << 2) + 0x20) = 1
                int64_t rcx_7 = *r14_2
                *(rcx_7 + (rdx_3 << 2)) = r8_1
                r8 = arg2
                *(rcx_7 + (rdx_3 << 2) + 4) = 0xffffffff
                int32_t var_120
                *(rcx_7 + (rdx_3 << 2) + 8) = var_120
                int32_t var_11c
                *(rcx_7 + (rdx_3 << 2) + 0xc) = var_11c
                int32_t var_118
                *(rcx_7 + (rdx_3 << 2) + 0x10) = var_118
                int32_t var_114
                *(rcx_7 + (rdx_3 << 2) + 0x14) = var_114
                int32_t var_110
                *(rcx_7 + (rdx_3 << 2) + 0x18) = var_110
                int32_t var_10c
                *(rcx_7 + (rdx_3 << 2) + 0x1c) = var_10c
            else
                rcx_1 = arg1[2]
            label_141725715:
                rdi_1[*rcx_1] = 1
                float temp0_4[0x4] = __minss_xmmss_memss((*(rsi_1 + rdx))[0], *r8)
                int64_t temp0_5 = __minss_xmmss_memss((*(r8 + 4)).d, *(rsi_1 + rdx + 4))
                float temp0_6[0x4] = __minss_xmmss_memss(r8[1].d[0], *(rsi_1 + rdx + 8))
                *r8 = (_mm_unpacklo_ps(temp0_4, temp0_5)).q
                r8[1].d = temp0_6[0]
                float temp0_8[0x4] = __maxss_xmmss_memss((*(rsi_1 + rdx + 0xc))[0], *(r8 + 0xc))
                int64_t temp0_9 = __maxss_xmmss_memss((*(rsi_1 + rdx + 0x10)).d, r8[2].d)
                float temp0_10[0x4] = __maxss_xmmss_memss((*(rsi_1 + rdx + 0x14))[0], *(r8 + 0x14))
                *(r8 + 0xc) = (_mm_unpacklo_ps(temp0_8, temp0_9)).q
                *(r8 + 0x14) = temp0_10[0]
                zmm0 = *(rsi_1 + rdx + 0xc)
                zmm0[0] = zmm0[0] f- *(rsi_1 + rdx)
                zmm2.d = (*(rsi_1 + rdx + 0x10)).d f- *(rsi_1 + rdx + 4)
                zmm1 = *(rsi_1 + rdx + 0x14)
                zmm1[0] = zmm1[0] f- *(rsi_1 + rdx + 8)
                float (* rax_27)[0x4] = arg1[6]
                zmm0[0] = zmm0[0] * 0.333333343f
                zmm2.d = zmm2.d f* 0.333333343f
                zmm1[0] = zmm1[0] * 0.333333343f
                zmm2.d = zmm2.d f+ zmm0[0]
                zmm0 = *rax_27
                zmm0[0] = zmm0[0] + 1f
                zmm2.d = zmm2.d f+ zmm1[0]
                *rax_27 = zmm0[0]
                result[0] = result[0] f+ zmm2.d
        r10 = arg3
        rdi_1 = &rdi_1[1]
        rsi_1 = &rsi_1[3]
        var_148_1 = rdi_1
        r13 = &r13[4]
        r12_1 += 0x40
    while (r13 != rax_4)
    
    zmm0 = *arg1[6]

result[0] = result[0] / zmm0[0]
return result
