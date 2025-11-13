// 函数: sub_1417a53b0
// 地址: 0x1417a53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
char r12 = arg3
int64_t* r14 = arg2
float result[0x4] = zx.o(0)
*arg2 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
*(arg2 + 0xc) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
int32_t var_180 = 0x7f7fffff
arg2[1].d = 0x7f7fffff
int32_t var_150 = 0xff7fffff
*(arg2 + 0x14) = 0xff7fffff
int32_t arg_8 = 0
int64_t* var_1b0 = nullptr
void* i_1 = nullptr
*arg1[6] = 0
int64_t var_1b8 = *arg1
int32_t var_1a0 = 0xffffffff
int32_t var_198 = 0
sub_1417b4db0(&var_1b8)
void* i = i_1
float zmm0_1[0x4] = zx.o(0)

if (i != 0)
    int32_t* rsi_1 = nullptr
    char* rdi_1 = nullptr
    int128_t zmm6
    int128_t var_58_1 = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    char* var_188_1 = nullptr
    
    do
        int64_t r9_1 = *arg1[1]
        int64_t* rcx_2
        
        if (r12 == 0)
            rcx_2 = arg1[2]
            
            if (rdi_1[*rcx_2] != 0)
                goto label_1417a57aa
        else
            int64_t r10_1 = sx.q(var_1a0)
            int32_t* r11_1 = arg1[5]
            float zmm1[0x4]
            int64_t zmm2
            float temp0_3[0x4]
            
            if (*(r10_1 + *(i + 0x28)) != 0)
                int64_t rax_4 = *(i + 0x40)
                int64_t rcx_1 = r10_1 * 3
                zmm1 = zx.o(*(rax_4 + (rcx_1 << 3) + 0xc))
                int32_t rdx = *(rax_4 + (rcx_1 << 3) + 8)
                int32_t r8 = *(rax_4 + (rcx_1 << 3) + 0x14)
                *(rsi_1 + r9_1) = *(rax_4 + (rcx_1 << 3))
                *(rsi_1 + r9_1 + 0xc) = zmm1.q
                *(rsi_1 + r9_1 + 8) = rdx
                *(rsi_1 + r9_1 + 0x14) = r8
                zmm1 = *(rsi_1 + r9_1 + 0xc)
                zmm2 = *(rsi_1 + r9_1 + 0x10)
                zmm1[0] = zmm1[0] f- *(rsi_1 + r9_1)
                zmm2.d = zmm2.d f- *(rsi_1 + r9_1 + 4)
                zmm0_1 = *(rsi_1 + r9_1 + 0x14)
                zmm0_1[0] = zmm0_1[0] f- *(rsi_1 + r9_1 + 8)
                
                if (zmm1[0] f<= zmm2.d || not(zmm1[0] > zmm0_1[0]))
                    zmm1 = _mm_max_ss(zmm0_1[0], zmm2.d)
                
                temp0_3 = _mm_cvtepi32_ps(zx.o(*r11_1))
            
            if (*(r10_1 + *(i + 0x28)) == 0 || zmm1[0] >= temp0_3[0])
                rdi_1[*arg1[2]] = 0
                int64_t rcx_4 = r10_1 * 5
                int64_t rax_6 = *(i + 0x58)
                int64_t* r14_1 = arg1[3]
                zmm1 = *(rax_6 + (rcx_4 << 3) + 0x10)
                int32_t r8_1 = r14_1[1].d
                zmm6 = *(rax_6 + (rcx_4 << 3))
                arg_8 = r8_1
                zmm8 = zx.o(*(rax_6 + (rcx_4 << 3) + 0x20))
                float var_e8_1 = zmm1[0]
                int32_t var_170
                int64_t var_16c
                int32_t var_164
                int32_t rbx_1
                int64_t* rdi_2
                
                if (*(r10_1 + *(i + 0x28)) == 0)
                    int32_t var_150_1 = 0xff7fffff
                    int64_t var_178
                    rdi_2 = &var_178
                    var_178 = (_mm_unpacklo_ps(0xff7fffff, 0xff7fffff)).q
                    rbx_1 = rbx | 2 | 0xc
                    int32_t var_118_1 = 0x7f7fffff
                    var_170 = 0xff7fffff
                    var_16c = (_mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)).q
                    var_164 = 0x7f7fffff
                else
                    int64_t var_14c
                    rdi_2 = &var_14c
                    int32_t rax_8 = *(rsi_1 + r9_1 + 8)
                    rbx_1 = rbx | 1
                    var_14c = *(rsi_1 + r9_1)
                    int32_t var_144_1 = rax_8
                    int64_t var_140_1 = *(rsi_1 + r9_1 + 0xc)
                    int32_t var_138_1 = *(rsi_1 + r9_1 + 0x14)
                
                int32_t rcx_6 = rbx_1 & 0xfffffff7
                
                if ((rbx_1.b & 8) == 0)
                    rcx_6 = rbx_1
                
                int32_t rdx_2 = rcx_6 & 0xfffffffb
                
                if ((rcx_6.b & 4) == 0)
                    rdx_2 = rcx_6
                
                int32_t rcx_8 = rdx_2 & 0xfffffffd
                
                if ((rdx_2.b & 2) == 0)
                    rcx_8 = rdx_2
                
                int32_t rdx_4 = rcx_8 & 0xfffffffe
                
                if ((rcx_8.b & 1) == 0)
                    rdx_4 = rcx_8
                
                r14_1[1].d = r8_1 + 1
                
                if (r8_1 + 1 s> *(r14_1 + 0xc))
                    sub_1405c4fe0(r14_1)
                    r8_1 = arg_8
                
                zmm0_1 = zx.o(*rdi_2)
                int32_t rax_15 = rdi_2[1].d
                int64_t rbx_3 = sx.q(var_e8_1)
                int128_t* rcx_12 = (sx.q(r8_1) << 6) + *r14_1
                *rcx_12 = zmm6
                rcx_12[1] = zmm1
                rcx_12[2].q = zmm8.q
                *(rcx_12 + 0x28) = zmm0_1.q
                rcx_12[3].d = rax_15
                int32_t rax_16 = *(rdi_2 + 0x14)
                *(rcx_12 + 0x34) = *(rdi_2 + 0xc)
                *(rcx_12 + 0x3c) = rax_16
                int64_t* r14_2 = arg1[4]
                int64_t r12_1 = sx.q(r14_2[1].d)
                
                if (rbx_3.d s>= r12_1.d)
                    int32_t j_1 = rbx_3.d - r12_1.d + 1
                    int32_t rax_17 = j_1 + r12_1.d
                    r14_2[1].d = rax_17
                    
                    if (rax_17 s> *(r14_2 + 0xc))
                        sub_140adefe0(r14_2)
                        r8_1 = arg_8
                    
                    if (j_1 != 0)
                        char* rax_20 = *r14_2 + r12_1 * 0x24 + 0x20
                        int32_t j
                        
                        do
                            *rax_20 = 0
                            rax_20 = &rax_20[0x24]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                
                int64_t rdx_7 = rbx_3 * 9
                rbx = rdx_4
                rdi_1 = var_188_1
                r12 = arg3
                *(*r14_2 + (rdx_7 << 2) + 0x20) = 1
                int64_t rcx_15 = *r14_2
                r14 = arg2
                *(rcx_15 + (rdx_7 << 2)) = r8_1
                *(rcx_15 + (rdx_7 << 2) + 4) = 0xffffffff
                *(rcx_15 + (rdx_7 << 2) + 8) = var_170
                *(rcx_15 + (rdx_7 << 2) + 0xc) = var_16c.d
                *(rcx_15 + (rdx_7 << 2) + 0x10) = var_16c:4.d
                *(rcx_15 + (rdx_7 << 2) + 0x14) = var_164
                int32_t var_160
                *(rcx_15 + (rdx_7 << 2) + 0x18) = var_160
                int32_t var_15c
                *(rcx_15 + (rdx_7 << 2) + 0x1c) = var_15c
            else
                rcx_2 = arg1[2]
            label_1417a57aa:
                rdi_1[*rcx_2] = 1
                float temp0_6[0x4] = __minss_xmmss_memss((*(rsi_1 + r9_1))[0], *r14)
                int64_t temp0_7 = __minss_xmmss_memss((*(r14 + 4)).d, *(rsi_1 + r9_1 + 4))
                float temp0_8[0x4] = __minss_xmmss_memss(r14[1].d[0], *(rsi_1 + r9_1 + 8))
                *r14 = (_mm_unpacklo_ps(temp0_6, temp0_7)).q
                r14[1].d = temp0_8[0]
                float temp0_10[0x4] = __maxss_xmmss_memss((*(rsi_1 + r9_1 + 0xc))[0], *(r14 + 0xc))
                int64_t temp0_11 = __maxss_xmmss_memss((*(rsi_1 + r9_1 + 0x10)).d, r14[2].d)
                float temp0_12[0x4] =
                    __maxss_xmmss_memss((*(rsi_1 + r9_1 + 0x14))[0], *(r14 + 0x14))
                *(r14 + 0xc) = (_mm_unpacklo_ps(temp0_10, temp0_11)).q
                *(r14 + 0x14) = temp0_12[0]
                zmm0_1 = *(rsi_1 + r9_1 + 0xc)
                zmm0_1[0] = zmm0_1[0] f- *(rsi_1 + r9_1)
                zmm2.d = (*(rsi_1 + r9_1 + 0x10)).d f- *(rsi_1 + r9_1 + 4)
                zmm1 = *(rsi_1 + r9_1 + 0x14)
                zmm1[0] = zmm1[0] f- *(rsi_1 + r9_1 + 8)
                float (* rax_32)[0x4] = arg1[6]
                zmm0_1[0] = zmm0_1[0] * 0.333333343f
                zmm2.d = zmm2.d f* 0.333333343f
                zmm1[0] = zmm1[0] * 0.333333343f
                zmm2.d = zmm2.d f+ zmm0_1[0]
                zmm0_1 = *rax_32
                zmm0_1[0] = zmm0_1[0] + 1f
                zmm2.d = zmm2.d f+ zmm1[0]
                *rax_32 = zmm0_1[0]
                result[0] = result[0] f+ zmm2.d
        rdi_1 = &rdi_1[1]
        rsi_1 = &rsi_1[6]
        var_188_1 = rdi_1
        
        if (var_1b0 != 0)
            int32_t var_190
            int32_t rax_37 = var_190 + 1
            var_190 = rax_37
            
            if (rax_37 s>= var_1b0[1].d)
            label_1417a58a3:
                var_198 += 1
                sub_1417b4db0(&var_1b8)
                i = i_1
            else
                int64_t* rdx_9 = *(*var_1b0 + (sx.q(rax_37) << 3))
                int32_t var_128_1 = rdx_9[1].d
                i_1.o = (*rdx_9).o
                i = i_1
        else
            int32_t rax_34 = var_1a0 + 1
            var_1a0 = rax_34
            int32_t var_194
            
            if (rax_34 s>= var_194)
                goto label_1417a58a3
    while (i != 0)
    
    zmm0_1 = *arg1[6]

result[0] = result[0] / zmm0_1[0]
return result
