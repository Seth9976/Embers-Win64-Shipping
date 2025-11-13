// 函数: sub_142613e80
// 地址: 0x142613e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg2 + 8)
int64_t* r10 = arg1
uint128_t zmm2 = *(arg2 + 4)
int64_t* r11 = arg4
float zmm4[0x4] = *arg2
float zmm3 = *(arg3 + 4)
void* rdx = *arg1
uint128_t zmm0
zmm0.d = zmm2.d f- zmm3
float zmm5[0x4] = *arg3
int32_t r9 = arg7
float zmm6[0x4] = *(arg3 + 8)
float zmm7[0x4] = zmm1
zmm7[0] = zmm7[0] - zmm6[0]
zmm6[0] = zmm6[0] + zmm1[0]
float var_1a4 = zmm3 f+ zmm2.d
zmm1 = 0x3f800000
float zmm8[0x4] = zmm4
zmm3 = *(rdx + 0x1c)
zmm8[0] = zmm8[0] - zmm5[0]
int32_t var_194 = zmm0.d
zmm2.d = 1f f/ *(rdx + 0x28)
zmm5[0] = zmm5[0] + zmm4[0]
float var_190 = zmm7[0]
float var_198 = zmm8[0]
zmm8[0] = zmm8[0] - zmm3
float var_1a0 = zmm6[0]
float var_1a8 = zmm5[0]
zmm8[0] = zmm8[0] f* zmm2.d
int32_t rcx = int.d(zmm8[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm8[0]))
    zmm8 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8, zmm8[0].q)) & 1)))

int32_t rbx = int.d(zmm8[0])
zmm5[0] = zmm5[0] - zmm3
int32_t var_1b4 = rbx
zmm5[0] = zmm5[0] f* zmm2.d
int32_t rcx_2 = int.d(zmm5[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

zmm1[0] = 1f f/ *(rdx + 0x2c)
zmm2 = *(rdx + 0x24)
zmm6[0] = zmm6[0] f- zmm2.d
int32_t r8 = int.d(zmm5[0])
zmm6[0] = zmm6[0] * zmm1[0]
int32_t var_1b8 = r8
int32_t rcx_4 = int.d(zmm6[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm6[0]))
    zmm6 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))

int32_t rdx_1 = int.d(zmm6[0])
int32_t r13 = 0
void* r15 = nullptr
int32_t r14 = 0
int32_t var_88 = 0
void* var_80 = nullptr
zmm7[0] = zmm7[0] f- zmm2.d
int32_t var_1b0 = rdx_1
zmm7[0] = zmm7[0] * zmm1[0]
int32_t rcx_6 = int.d(zmm7[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm7[0]))
    zmm7 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q)) & 1)))

int32_t r12 = int.d(zmm7[0])
int32_t rbx_3

if (r12 s> rdx_1)
label_142614289:
    rbx_3 = 0x40000000
else
    int32_t rcx_8 = r12 * 0xd8163841
    int32_t arg_18 = rcx_8
    
    while (true)
        int32_t rbp_1 = rbx
        
        if (rbx s<= r8)
            int32_t rcx_9 = rcx_8 - rbx * 0x72594cbd
            int32_t arg_10 = rcx_9
            
            while (true)
                void* rax_10 = *r10
                uint64_t rbx_1 = 0
                int64_t rdi_1 = sx.q(rcx_9)
                void* i = *(*(rax_10 + 0x80) + ((sx.q(*(rax_10 + 0x38)) & rdi_1) << 3))
                void* rsi_1
                void var_188
                
                if (i == 0)
                    rsi_1 = &var_188
                else
                    do
                        void* rax_12 = *(i + 8)
                        
                        if (rax_12 != 0 && *(rax_12 + 8) == rbp_1 && *(rax_12 + 0xc) == r12)
                            rbx_1 = zx.q(rbx_1.d + 1)
                        
                        i = *(i + 0x68)
                    while (i != 0)
                    
                    if (rbx_1.d s< 0x20)
                        rsi_1 = &var_188
                    else
                        if (r13 s< rbx_1.d)
                            if (r15 != 0)
                                data_143b50298(r15)
                            
                            void* rax_13 = data_143b50290(zx.q((rbx_1 << 3).d), 1)
                            r9 = arg7
                            r13 = rbx_1.d
                            r10 = arg1
                            r15 = rax_13
                            r11 = arg4
                            var_80 = rax_13
                            var_88 = rbx_1.d
                        
                        rsi_1 = r15
                void* rax_14 = *r10
                int64_t r8_1 = 0
                int64_t rdi_2 = sx.q(rbx_1.d)
                void* i_1 = *(*(rax_14 + 0x80) + ((sx.q(*(rax_14 + 0x38)) & rdi_1) << 3))
                
                if (i_1 != 0)
                    do
                        void* rax_16 = *(i_1 + 8)
                        
                        if (rax_16 != 0 && *(rax_16 + 8) == rbp_1 && *(rax_16 + 0xc) == r12
                                && r8_1 s< rdi_2)
                            *(rsi_1 + (r8_1 << 3)) = i_1
                            r8_1 += 1
                        
                        i_1 = *(i_1 + 0x68)
                    while (i_1 != 0)
                    
                    r15 = var_80
                    r13 = var_88
                
                int64_t rbx_2 = 0
                
                if (rdi_2 s> 0)
                    while (true)
                        int32_t rax_18 = sub_1426148f0(r10, *(rsi_1 + (rbx_2 << 3)), &var_198, 
                            &var_1a8, r11, arg5 + (sx.q(r14) << 3), r9 - r14)
                        r9 = arg7
                        r14 += rax_18
                        
                        if (r14 s>= r9)
                            rbx_3 = 0x40000010
                            break
                        
                        r10 = arg1
                        rbx_2 += 1
                        r11 = arg4
                        
                        if (rbx_2 s>= rdi_2)
                            goto label_14261423c
                    
                    break
                
            label_14261423c:
                rbp_1 += 1
                r8 = var_1b8
                rcx_9 = arg_10 - 0x72594cbd
                r11 = arg4
                arg_10 = rcx_9
                
                if (rbp_1 s> r8)
                    rcx_8 = arg_18
                    rbx = var_1b4
                    rdx_1 = var_1b0
                    goto label_142614270
            
            break
        
    label_142614270:
        rcx_8 -= 0x27e9c7bf
        r12 += 1
        arg_18 = rcx_8
        
        if (r12 s> rdx_1)
            goto label_142614289

*arg6 = r14

if (r15 != 0)
    data_143b50298(r15)

return zx.q(rbx_3)
