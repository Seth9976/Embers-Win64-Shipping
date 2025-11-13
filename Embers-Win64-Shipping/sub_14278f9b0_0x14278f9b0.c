// 函数: sub_14278f9b0
// 地址: 0x14278f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140775cf0(&arg1[2], 0)

int32_t* rdx_1 = arg1[0xa]
int32_t* rdi = *arg3
int128_t zmm8 = rdx_1[4]
void* r15_2 = &rdi[sx.q(arg3[1].d) * 0x20]
int128_t zmm9 = rdx_1[2]
int128_t zmm7 = rdx_1[3]
zmm8.d = zmm8.d f* zmm8.d
zmm9.d = zmm9.d f* zmm9.d
zmm7.d = zmm7.d f* zmm7.d

if (rdi != r15_2)
    int32_t* rbx_1 = &rdi[0xe]
    int32_t* rax_1 = rdx_1
    
    do
        float zmm1[0x4] = rax_1[1]
        int32_t* rcx_1
        float temp0_1[0x4]
        
        if (not(zmm1[0] <= 0f))
            rcx_1 = rax_1
            temp0_1 = __minss_xmmss_memss(rbx_1[8][0], rbx_1[7])
        
        if (zmm1[0] <= 0f || not(temp0_1[0] < zmm1[0]))
            float zmm0[0x4]
            float zmm2[0x4]
            
            if (0f f>= rax_1[2])
            label_14278fad0:
                
                if (0f f>= rax_1[3])
                label_14278fb0d:
                    
                    if (not(0f f>= rax_1[4]))
                        zmm2 = *(arg2 + 0x10)
                        rcx_1 = rax_1
                        zmm1 = zmm2
                        zmm1[0] = zmm1[0] f- *rdi
                        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        temp0_3[0] = temp0_3[0] f- rbx_1[-0xd]
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        temp0_4[0] = temp0_4[0] f- rbx_1[-0xc]
                        zmm1[0] = zmm1[0] * zmm1[0]
                        temp0_3[0] = temp0_3[0] * temp0_3[0]
                        temp0_4[0] = temp0_4[0] * temp0_4[0]
                        zmm1[0] = zmm1[0] + temp0_3[0]
                        zmm1[0] = zmm1[0] + temp0_4[0]
                    
                    if (0f f>= rax_1[4] || not(zmm1[0] f> zmm8.d))
                        int64_t rbp_1 = sx.q(arg1[3].d)
                        int32_t var_b0_1 = rdi[2]
                        int32_t var_a4_1 = rbx_1[-6]
                        int32_t rax_4 = rbx_1[-3]
                        int64_t var_b8_1 = *rdi
                        int32_t var_8c_1 = *rbx_1
                        int32_t rax_6 = rbx_1[-9]
                        int64_t var_ac_1 = *(rbx_1 - 0x20)
                        int64_t var_a0_1 = *(rbx_1 - 0x14)
                        int64_t var_70_1 = *(rbx_1 + 0x28)
                        int64_t rax_8 = *(rbx_1 + 0x30)
                        int64_t var_94_1 = *(rbx_1 - 8)
                        int32_t rax_9 = (rbp_1 + 1).d
                        float var_88_1 = rbx_1[7][0]
                        float var_84_1 = rbx_1[8][0]
                        int64_t var_80_1 = *(rbx_1 - 0x2c)
                        arg1[3].d = rax_9
                        
                        if (rax_9 s> *(arg1 + 0x1c))
                            sub_1407755b0(&arg1[2])
                        
                        int64_t rax_10 = arg1[2]
                        float (* rcx_3)[0x4] = rbp_1 * 0x58
                        *(rcx_3 + rax_10) = var_b8_1.o
                        *(rcx_3 + rax_10 + 0x10) = var_ac_1:4.o
                        *(rcx_3 + rax_10 + 0x20) = rax_4.o
                        *(rcx_3 + rax_10 + 0x30) = var_88_1.o
                        *(rcx_3 + rax_10 + 0x40) = rax_6.o
                        *(rcx_3 + rax_10 + 0x50) = rax_8
                        rdx_1 = arg1[0xa]
                        rcx_1 = rdx_1
                        int32_t rax_11 = *rdx_1
                        
                        if (rax_11 s> 0 && arg1[3].d == rax_11)
                            break
                else
                    zmm0 = rbx_1[-0xa]
                    rcx_1 = rax_1
                    zmm2 = rbx_1[-0xb]
                    zmm1 = rbx_1[-9]
                    rax_1 = arg1[0xa]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm0[0] = zmm0[0] * zmm0[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm2[0] = zmm2[0] + zmm0[0]
                    zmm2[0] = zmm2[0] + zmm1[0]
                    
                    if (not(zmm2[0] f< zmm7.d))
                        goto label_14278fb0d
            else
                zmm2 = rbx_1[-1]
                rcx_1 = rax_1
                float zmm5 = rbx_1[-2]
                zmm0 = rbx_1[-4]
                float zmm4 = rbx_1[-5]
                float zmm3 = *rbx_1
                zmm1 = rbx_1[-3]
                rax_1 = arg1[0xa]
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm4 = zmm4 * zmm4 + zmm0[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                
                if (not(_mm_min_ss(zmm4 + zmm1[0], zmm5 * zmm5 + zmm2[0] + zmm3 * zmm3) f< zmm9.d))
                    goto label_14278fad0
        
        rdi -= -0x80
        rbx_1 -= -0x80
        rax_1 = rcx_1
        rdx_1 = rcx_1
    while (rdi != r15_2)

rdx_1[5].b
jump(*(*arg1 + 0x18))
