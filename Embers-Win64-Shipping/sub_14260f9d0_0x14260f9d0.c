// 函数: sub_14260f9d0
// 地址: 0x14260f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
float zmm7[0x4] = arg3
int32_t var_f8 = 0x20
float zmm10[0x4] = arg2
int16_t var_d8[0x20]
int16_t (* var_100)[0x20] = &var_d8
int32_t rdi = 0
arg3 = (*arg1)[2]
arg2 = *arg1
int32_t zmm0 = arg3[0] f+ zmm7[0]
float zmm3 = arg2[0] + zmm7[0]
arg3[0] = arg3[0] - zmm7[0]
arg2[0] = arg2[0] - zmm7[0]
int32_t rax_2
int128_t zmm6
rax_2, zmm6 = sub_14262e640(arg8, arg2, arg3, zmm3, zmm0, var_100, var_f8)
int64_t r8 = sx.q(rax_2)
int64_t var_e8 = r8

if (rax_2 s> 0)
    int64_t rbp_1 = 0
    int128_t var_48_1 = zmm6
    
    do
        uint64_t rdx_1 = zx.q(var_d8[rbp_1])
        void* rax_4 = *(arg7 + (rdx_1 << 3))
        
        if (rax_4 != arg4)
            uint32_t zmm1[0x4] = (*arg1)[1]
            float zmm0_1 = zmm10[0] f+ *(rax_4 + 0x284)
            zmm1[0] = zmm1[0] f- *(rax_4 + 0x230)
            float zmm2 = *arg1 f- *(rax_4 + 0x22c)
            zmm6.d = (*arg1)[2].d f- *(rax_4 + 0x234)
            
            if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f>= zmm0_1 * 0.5f))
                zmm6.d = zmm6.d f* zmm6.d
                zmm6.d = zmm6.d f+ zmm2 * zmm2
                
                if (not(zmm6.d f> zmm7[0] * zmm7[0]))
                    int32_t rcx_1 = *(rax_4 + 0x2a0)
                    
                    if ((*(arg4 + 0x2a8) & rcx_1) == 0 && (*(arg4 + 0x2a4) & rcx_1) != 0)
                        int64_t rbx_1
                        
                        if (rdi != 0)
                            rbx_1 = sx.q(rdi)
                            
                            if (zmm6.d f< *(arg5 + (rbx_1 << 3) - 4))
                                int32_t r8_1 = 0
                                int64_t i = 0
                                
                                if (rbx_1 s>= 4)
                                    void* rcx_2 = arg5 + 0xc
                                    
                                    do
                                        if (zmm6.d f<= *(rcx_2 - 8))
                                            goto label_14260fbf0
                                        
                                        if (zmm6.d f<= *rcx_2)
                                            r8_1 += 1
                                            goto label_14260fbf0
                                        
                                        if (zmm6.d f<= *(rcx_2 + 8))
                                            r8_1 += 2
                                            goto label_14260fbf0
                                        
                                        if (zmm6.d f<= *(rcx_2 + 0x10))
                                            r8_1 += 3
                                            goto label_14260fbf0
                                        
                                        r8_1 += 4
                                        i += 4
                                        rcx_2 += 0x20
                                    while (i s< rbx_1 - 3)
                                
                                if (i s< rbx_1)
                                    void* rax_7 = arg5 + 4 + (i << 3)
                                    
                                    while (not(zmm6.d f<= *rax_7))
                                        r8_1 += 1
                                        i += 1
                                        rax_7 += 8
                                        
                                        if (i s>= rbx_1)
                                            break
                                
                            label_14260fbf0:
                                rbx_1 = sx.q(r8_1)
                                int32_t rcx_4 = arg6 - (r8_1 + 1)
                                int32_t rax_9 = rdi - r8_1
                                
                                if (rax_9 s< rcx_4)
                                    rcx_4 = rax_9
                                
                                if (rcx_4 s> 0)
                                    memmove(arg5 + (sx.q(r8_1 + 1) << 3), arg5 + (rbx_1 << 3), 
                                        rcx_4 << 3)
                                
                                r8 = var_e8
                                goto label_14260fc23
                            
                            if (rdi s< arg6)
                                goto label_14260fc23
                        else
                            rbx_1 = 0
                        label_14260fc23:
                            int32_t rcx_6 = rdi + 1
                            *(arg5 + (rbx_1 << 3) + 4) = zmm6.d
                            *(arg5 + (rbx_1 << 3)) = rdx_1.d
                            rdi = arg6
                            
                            if (rcx_6 s< arg6)
                                rdi = rcx_6
        
        rbp_1 += 1
    while (rbp_1 s< r8)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rdi)
