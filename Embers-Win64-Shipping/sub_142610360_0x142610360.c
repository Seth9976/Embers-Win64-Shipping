// 函数: sub_142610360
// 地址: 0x142610360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
float* r14 = arg3

if (arg2 != 0)
    void* r11_1 = *arg1
    char rsi_1 = (*(r11_1 + 0xa0)).b
    char rbp_1 = (*(r11_1 + 0x9c)).b
    int32_t r10_3 = (arg2 u>> rsi_1).d & ((1 << rbp_1).d - 1)
    int32_t r8_2 = ((1 << rsi_1).d - 1) & arg2.d
    
    if (r10_3 u< *(r11_1 + 0x30))
        int64_t rdi_1 = *(r11_1 + 0x90)
        int32_t* rbx_1 = zx.q(r10_3) * 0xb0
        
        if (*(rbx_1 + rdi_1) == ((arg2 u>> (rsi_1 + rbp_1)).d & ((1 << (*(r11_1 + 0x98)).b).d - 1)))
            void* rax_4 = *(rbx_1 + rdi_1 + 8)
            
            if (rax_4 != 0 && r8_2 u< *(rax_4 + 0x18))
                int64_t rcx_5 = *(rbx_1 + rdi_1 + 0x10)
                void* rsi_4 = (zx.q(r8_2) << 5) + rcx_5
                uint8_t rax_5 = *(rsi_4 + 0x1f) u>> 6
                
                if (rax_5 == 1)
                    int64_t r8_3 = *(rbx_1 + rdi_1 + 0x18)
                    uint64_t rcx_6 = zx.q(*(rsi_4 + 4)) * 3
                    uint64_t rdx_2 = zx.q(*(rsi_4 + 6)) * 3
                    float zmm2 = *(r8_3 + (rcx_6 << 2) + 4) - r14[1]
                    float zmm1 = *(r8_3 + (rcx_6 << 2)) - *r14
                    float zmm0 = *(r8_3 + (rcx_6 << 2) + 8) - r14[2]
                    float zmm5 = *(r8_3 + (rdx_2 << 2) + 8) - r14[2]
                    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
                    zmm1 = *(r8_3 + (rdx_2 << 2)) - *r14
                    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
                    zmm2 = *(r8_3 + (rdx_2 << 2) + 4)
                    zmm0 = zmm2 - r14[1]
                    
                    if (arg4 == 0)
                        return 0x40000000
                    
                    zmm1 = zmm1 * zmm1 + zmm0 * zmm0
                    zmm0 = *(r8_3 + (rcx_6 << 2) + 4)
                    zmm1 = zmm1 + zmm5 * zmm5
                    zmm1 = _mm_sqrt_ss(zmm1, zmm1) + temp0_1[0]
                    *arg4 = zmm2 / zmm1 * temp0_1[0]
                        - zmm0 / zmm1 * temp0_1[0] f+ *(r8_3 + (rcx_6 << 2) + 4)
                    return 0x40000000
                
                float var_48
                
                if (rax_5 != 2)
                    int64_t r12_1 = *(rbx_1 + rdi_1 + 0x28)
                    int32_t rbp_3 = 0
                    uint64_t r15_1 = zx.q(((rsi_4 - rcx_5) s>> 5).d) * 3
                    
                    if (zx.d(*(r12_1 + (r15_1 << 2) + 9)) != 0)
                        uint32_t r14_1 = zx.d(*(rsi_4 + 0x1e))
                        int32_t rax_20 = *(r12_1 + (r15_1 << 2) + 4)
                        uint32_t rdx_5 = r14_1
                        
                        while (true)
                            char* r8_7 = zx.q((rax_20 + rbp_3) << 2) + *(rbx_1 + rdi_1 + 0x38)
                            char rax_23 = *r8_7
                            int32_t* r11_2
                            
                            if (rax_23 u>= r14_1.b)
                                r11_2 = *(rbx_1 + rdi_1 + 0x30) + (
                                    zx.q((zx.d(rax_23) - rdx_5 + *(r12_1 + (r15_1 << 2))) * 3) << 2)
                            else
                                r11_2 = *(rbx_1 + rdi_1 + 0x18)
                                    + zx.q(*(rsi_4 + (zx.q(rax_23) << 1) + 4)) * 0xc
                                rdx_5 = zx.d(r14_1.b)
                            
                            char rax_30 = r8_7[1]
                            int128_t* r10_4
                            
                            if (rax_30 u>= r14_1.b)
                                r10_4 = *(rbx_1 + rdi_1 + 0x30) + (
                                    zx.q((zx.d(rax_30) - rdx_5 + *(r12_1 + (r15_1 << 2))) * 3) << 2)
                            else
                                r10_4 = *(rbx_1 + rdi_1 + 0x18)
                                    + zx.q(*(rsi_4 + (zx.q(rax_30) << 1) + 4)) * 0xc
                                rdx_5 = zx.d(r14_1.b)
                            
                            char rax_37 = r8_7[2]
                            int32_t* r9_4
                            
                            if (rax_37 u>= r14_1.b)
                                r9_4 = *(rbx_1 + rdi_1 + 0x30) + (
                                    zx.q((zx.d(rax_37) - rdx_5 + *(r12_1 + (r15_1 << 2))) * 3) << 2)
                            else
                                r9_4 = *(rbx_1 + rdi_1 + 0x18)
                                    + zx.q(*(rsi_4 + (zx.q(rax_37) << 1) + 4)) * 0xc
                            
                            if (sub_1426076f0(arg3, r11_2, r10_4, r9_4, &var_48) != 0)
                                break
                            
                            rbp_3 += 1
                            rdx_5 = zx.d(r14_1.b)
                            rax_20 = *(r12_1 + (r15_1 << 2) + 4)
                            
                            if (rbp_3 s>= zx.d(*(r12_1 + (r15_1 << 2) + 9)))
                                return 0x80000008
                        
                        goto label_14261058c
                else
                    int64_t rbx_2 = *(rbx_1 + rdi_1 + 0x18)
                    int32_t* rdi_2 = rbx_2 + zx.q(*(rsi_4 + 6)) * 0xc
                    int128_t* rbp_2 = rbx_2 + zx.q(*(rsi_4 + 8)) * 0xc
                    
                    if (sub_1426076f0(r14, rbx_2 + zx.q(*(rsi_4 + 4)) * 0xc, rbp_2, rdi_2, &var_48)
                        != 0)
                    label_14261058c:
                        
                        if (arg4 == 0)
                            return 0x40000000
                        
                        *arg4 = var_48
                        return 0x40000000
                    
                    if (sub_1426076f0(r14, rdi_2, rbp_2, rbx_2 + zx.q(*(rsi_4 + 0xa)) * 0xc, 
                            &var_48) != 0)
                        goto label_14261058c

return 0x80000008
