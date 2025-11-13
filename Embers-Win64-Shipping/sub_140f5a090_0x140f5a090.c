// 函数: sub_140f5a090
// 地址: 0x140f5a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int128_t zmm7 = arg3[7]
float zmm2 = arg3[0xa]
float zmm4 = arg3[9]
uint128_t zmm10 = *(arg4 + 0x1c)
int32_t r15 = 0
uint128_t zmm8 = arg3[8]
int128_t zmm9 = *(arg4 + 0x18)
uint128_t zmm0
zmm0.d = zmm8.d f* zmm4
int128_t zmm11
zmm11.d = zmm9.d f- arg3[0xb]
zmm9.d = zmm9.d f- arg3[0xb]
float zmm5 = zmm7.d * zmm2 f- zmm0.d
zmm0.d = zmm10.d f- arg3[0xc]
uint128_t zmm6
zmm6.d = 1f / zmm5
zmm10.d = zmm10.d f/ zmm5
zmm8.d = zmm8.d f* zmm6.d
zmm9.d = zmm9.d f* zmm8.d
zmm11.d = zmm11.d f* zmm2 f* zmm6.d
zmm0.d = zmm0.d f* zmm4 f* zmm6.d
zmm11.d = zmm11.d f- zmm0.d
zmm0.d = zmm6.d f* arg3[0xc]
zmm10.d = zmm10.d f- zmm0.d
int32_t var_178 = zmm11.d
zmm10.d = zmm10.d f* zmm7.d
zmm10.d = zmm10.d f- zmm9.d
int32_t var_174 = zmm10.d

if (arg1[0x56].d s<= 0)
label_140f5a2e2:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
else
    zmm6 = 0x3f000000
    int64_t rbx_1 = 0
    
    while (true)
        void* r14_1 = arg1[0x55]
        
        if (*(rbx_1 + r14_1 + 0xb8) == 0xffffffff)
            uint128_t zmm1 = *(rbx_1 + r14_1 + 0x90)
            zmm2 = *(rbx_1 + r14_1 + 0xa8) f* zmm6.d
            zmm0.d = zmm1.d f- zmm2
            
            if (not(zmm11.d f< zmm0.d))
                zmm1.d = zmm1.d f+ zmm2
                
                if (not(zmm11.d f> zmm1.d))
                    zmm1 = *(rbx_1 + r14_1 + 0x94)
                    zmm2 = *(rbx_1 + r14_1 + 0xac) f* zmm6.d
                    zmm0.d = zmm1.d f- zmm2
                    
                    if (not(zmm10.d f< zmm0.d))
                        zmm1.d = zmm1.d f+ zmm2
                        
                        if (not(zmm10.d f> zmm1.d))
                            zmm6 = sub_140f2ad60(arg1, &var_178, r14_1 + 0x98 + rbx_1, arg3)
                            *(rbx_1 + r14_1 + 0xb8) = *(arg4 + 0x50)
                            
                            if (0f f!= arg1[0x59].d)
                                *(rbx_1 + r14_1 + 0xca) = 1
                                *(rbx_1 + r14_1 + 0xbc) = 0
                                *(rbx_1 + r14_1 + 0xc0) = var_178.q
                                *arg2 = 0
                                *(arg2 + 8) = 0
                                *(arg2 + 0x10) = 0
                                arg2[0x20] = 0
                                __builtin_memset(&arg2[0x28], 0, 0x88)
                                break
                            
                            arg1[0x5b].d = arg1[0x57].d
                            
                            if ((*(arg1 + 0x2d4) & 4) == 0)
                                *(rbx_1 + r14_1 + 0x88) = var_178.q
                            
                            if ((*(*arg1 + 0x248))(arg1, zx.q(r15), &var_178, arg3) != 0)
                                int64_t* rbx_2 = arg1[2]
                                int64_t r14_2 = 0
                                
                                if (rbx_2 != 0)
                                    int32_t rax_7 = rbx_2[1].d
                                    
                                    if (rax_7 != 0)
                                        rbx_2[1].d = rax_7 + 1
                                        rax_7.b = 1
                                    
                                    if (rax_7.b == 0)
                                        rbx_2 = nullptr
                                    
                                    if (rbx_2 != 0)
                                        int32_t rax_8 = rbx_2[1].d
                                        r14_2 = arg1[1]
                                        rbx_2[1].d = rax_8
                                        
                                        if (rax_8 == 0)
                                            (**rbx_2)(rbx_2)
                                            int32_t temp4_1 = *(rbx_2 + 0xc)
                                            *(rbx_2 + 0xc) -= 1
                                            
                                            if (temp4_1 == 1)
                                                (*(*rbx_2 + 8))(rbx_2, 1)
                                        
                                        rbx_2[1].d += 1
                                
                                int32_t var_b4
                                int32_t var_b4_1 = var_b4 & 0xffffff00
                                char var_168 = 1
                                int64_t var_160_1 = 0
                                int64_t var_158_1 = 0
                                char var_148_1 = 0
                                int64_t var_140_1 = 0
                                int64_t var_138_1 = 0
                                int128_t var_128
                                __builtin_memset(&var_128, 0, 0x70)
                                int32_t var_b8_1 = 0x20702
                                int64_t var_130_1 = r14_2
                                
                                if (rbx_2 != 0)
                                    *(rbx_2 + 0xc) += 1
                                    rbx_2[1].d -= 1
                                    var_128.q = rbx_2
                                    
                                    if (rbx_2[1].d == 1)
                                        (**rbx_2)(rbx_2)
                                        int32_t temp2_1 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (temp2_1 == 1)
                                            (*(*rbx_2 + 8))(rbx_2, 1)
                                
                                sub_140596b00(arg2, &var_168)
                                sub_140597700(&var_168)
                                
                                if (rbx_2 != 0)
                                    rbx_2[1].d -= 1
                                    
                                    if (rbx_2[1].d == 1)
                                        int64_t r8_3 = *rbx_2
                                        (*r8_3)(rbx_2, zx.o(0), r8_3)
                                        int32_t temp3_1 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (temp3_1 == 1)
                                            int64_t r8_4 = *rbx_2
                                            (*(r8_4 + 8))(rbx_2, 1, r8_4)
                                
                                goto label_140f5a369
                            
                            zmm10 = var_174
                            zmm11 = var_178
        
        r15 += 1
        rbx_1 += 0xd0
        
        if (r15 s>= arg1[0x56].d)
            goto label_140f5a2e2

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
label_140f5a369:
__security_check_cookie(rax_1 ^ &var_198)
return arg2
