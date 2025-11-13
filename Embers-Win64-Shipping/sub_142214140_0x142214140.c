// 函数: sub_142214140
// 地址: 0x142214140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rdi = 0
void* rax = *(arg1 + 0x238)
*(arg1 + 0x1d0) = 0
*(arg1 + 0x26c) = 0
uint32_t zmm2[0x4] = *(rax + 0x40)
bool cond:0 = _mm_and_ps(*(rax + 0x38), 0x7fffffff)[0] f> 9.99999994e-09f
int32_t arg_10 = 0
int32_t arg_18 = 0
uint32_t zmm0[0x4] = *(rax + 0x3c)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
int64_t r12
r12.b = _mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999994e-09f
int64_t r13
r13.b = temp0_1[0] f> 9.99999994e-09f
uint8_t rax_2 = (*(rax + 0x30) u>> 1).b & 1
uint64_t rax_3
uint32_t zmm0_1[0x4]
uint32_t zmm6[0x4]
int128_t zmm7
int128_t zmm8
zmm0_1, rax_3, zmm6, zmm7, zmm8 = sub_140a454f0(zmm0, 0x43340000)
int32_t i = 0
float zmm9 = zmm0_1[0] * 0.00555555569f
int32_t i_1 = 0

if (*(arg1 + 0x118) s> 0)
    void* rcx = nullptr
    int128_t var_68_1 = zmm7
    int128_t var_78_1 = zmm8
    void* var_90_1 = nullptr
    
    do
        rax_3 = *(arg1 + 0xf8)
        int32_t rbp_1 = 0
        int32_t r8_1 = *(arg1 + 0x114)
        int32_t* r11_1 = nullptr
        int64_t rsi_1 = *(arg1 + 0xf0)
        int64_t r14_1 = sx.q(*(arg1 + 0x30))
        void* r15_2 = sx.q(zx.d(*(rcx + rax_3)) * r8_1) + rsi_1
        int32_t rcx_3 = *(r14_1 + r15_2)
        int32_t* r10_1 = r14_1 + r15_2
        void* rdi_1 = r15_2
        int32_t rdx_2 = rcx_3 & 0xf0000000
        
        if (rdx_2 == 0x40000000 || rdx_2 == 0x10000000)
            rax_3 = zx.q(rcx_3) & 0x3fff
        
        if ((rdx_2 == 0x40000000 || rdx_2 == 0x10000000) && rax_3.d == 0x3fff)
            r10_1[7] = 0
            r10_1[2] = 0
            *(arg1 + 0x26c) += 1
            rdi = arg_10
            rsi = arg_18
        else if (rdx_2 != 0x80000000)
            rdi = arg_10
            rsi = arg_18
        else
            int32_t rcx_6 = rcx_3 s>> 0xe & 0x3fff
            
            if (rcx_6 == 0x3fff)
                rdi = arg_10
                rsi = arg_18
            else
                int32_t rdx_3 = *(arg1 + 0x1d0)
                void* r9_1 = sx.q(rcx_6 * r8_1) + rsi_1
                int32_t* r8_2 = r14_1 + r9_1
                
                while (r15_2 != r9_1)
                    int32_t rdx_4 = 1
                    float zmm1_1[0x4]
                    float zmm2_1[0x4]
                    
                    if (cond:0 != 0)
                        zmm2_1 = *(rdi_1 + 0x14)
                        zmm2_1[0] = zmm2_1[0] f- *(r9_1 + 0x14)
                        zmm0_1 = *(rdi_1 + 0x18)
                        zmm0_1[0] = zmm0_1[0] f- *(r9_1 + 0x18)
                        zmm1_1 = *(rdi_1 + 0x10)
                        zmm1_1[0] = zmm1_1[0] f- *(r9_1 + 0x10)
                        void* rax_7 = *(arg1 + 0x238)
                        int32_t rdx_5 = data_143a2f094
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] f+ zmm0_1[0]
                        zmm0_1 = 0x3f800000
                        zmm0_1[0] = 1f f/ *(rax_7 + 0x38)
                        float temp0_3[0x4] = _mm_sqrt_ss(zmm2_1[0], zmm2_1[0])
                        temp0_3[0] = temp0_3[0] f* zmm0_1[0]
                        int32_t rax_8 = int.d(temp0_3[0])
                        
                        if (rax_8 s<= rdx_5)
                            rdx_5 = rax_8
                        
                        rdx_4 = rdx_5 + 1
                    
                    if (r12.b != 0)
                        float zmm3[0x4] = r10_1[0xe]
                        uint32_t zmm4_1[0x4] = r10_1[0xd]
                        zmm2_1 = zmm3
                        zmm2_1[0] = zmm2_1[0] f* r8_2[0xe]
                        zmm4_1[0] = zmm4_1[0] f* r8_2[0xd]
                        float zmm5_1[0x4] = r10_1[0xf]
                        zmm5_1[0] = zmm5_1[0] f* r8_2[0xf]
                        zmm2_1[0] = zmm2_1[0] f+ zmm4_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm5_1[0]
                        zmm2_1[0] = zmm2_1[0] - 1f
                        zmm2_1[0] = zmm2_1[0] * -0.5f
                        
                        if (rax_2 != 0 && r11_1 != 0)
                            zmm3[0] = zmm3[0] f* r11_1[0xe]
                            zmm4_1[0] = zmm4_1[0] f* r11_1[0xd]
                            zmm5_1[0] = zmm5_1[0] f* r11_1[0xf]
                            zmm3[0] = zmm3[0] f+ zmm4_1[0]
                            zmm3[0] = zmm3[0] + zmm5_1[0]
                            zmm3[0] = zmm3[0] - 1f
                            zmm3[0] = zmm3[0] * -0.5f
                            
                            if (not(zmm2_1[0] >= zmm3[0]))
                                zmm2_1 = zmm3
                        
                        int32_t rax_9 = data_143a2f098
                        zmm2_1[0] = zmm2_1[0] / zmm9
                        int32_t rcx_8 = int.d(zmm2_1[0])
                        
                        if (rcx_8 s<= rax_9)
                            rax_9 = rcx_8
                        
                        rdx_4 += rax_9
                    
                    if (r13.b != 0)
                        zmm2_1 = r10_1[0x10]
                        zmm2_1[0] = zmm2_1[0] f- r8_2[0x10]
                        zmm1_1 = _mm_and_ps(zmm2_1, zmm6)
                        
                        if (r11_1 != 0)
                            zmm0_1 = r11_1[0x10]
                            zmm0_1[0] = zmm0_1[0] f- zmm2_1[0]
                            uint32_t temp0_5[0x4] = _mm_and_ps(zmm0_1, zmm6)
                            
                            if (not(zmm1_1[0] f>= temp0_5[0]))
                                zmm1_1 = temp0_5
                        
                        zmm1_1[0] = zmm1_1[0] f/ *(*(arg1 + 0x238) + 0x40)
                        rdx_4 += int.d(zmm1_1[0])
                    
                    r10_1[7] = rdx_4
                    int32_t rcx_9 = rdx_4 * 2
                    rbp_1 += rcx_9
                    rdx_3 = *(arg1 + 0x1d0) + rcx_9
                    r11_1 = r10_1
                    *(arg1 + 0x1d0) = rdx_3
                    rdi_1 = r9_1
                    r10_1 = r8_2
                    int32_t rcx_12 = *r8_2 s>> 0xe & 0x3fff
                    
                    if (rcx_12 == 0x3fff)
                        break
                    
                    r9_1 = sx.q(*(arg1 + 0x114) * rcx_12) + *(arg1 + 0xf0)
                    r8_2 = sx.q(*(arg1 + 0x30)) + r9_1
                
                i = i_1
                rsi = arg_18 + rbp_1 + 2
                *(arg1 + 0x1d0) = rdx_3 + 2
                rdi = arg_10 + 1
                r10_1[7] = 1
                rax_3 = zx.q(rbp_1)
                arg_18 = rsi
                r10_1[2] = rax_3.d
                arg_10 = rdi
        
        i += 1
        rcx = var_90_1 + 2
        i_1 = i
        var_90_1 = rcx
    while (i s< *(arg1 + 0x118))

*(arg1 + 0x1d8) = rdi

if (rdi s<= 0)
    *(arg1 + 0x1d4) = 0
    return rax_3

int32_t rax_6 = rsi + ((rdi - 2) << 1)
*(arg1 + 0x1d4) = rax_6
return rax_6
