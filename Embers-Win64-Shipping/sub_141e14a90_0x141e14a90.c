// 函数: sub_141e14a90
// 地址: 0x141e14a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
*(arg1 + 0x1c) = 0
int32_t* rbp = arg2
void* rbx_1

if (rsi != 0)
    rbx_1 = arg1[1]

uint64_t result

if (rsi == 0 || rbx_1 == 0)
    result.b = 3
else
    arg1[6].b = 0
    int32_t arg_8
    result = sub_141e21e70(rbx_1, *arg2, &arg_8)
    int64_t r8_1 = sx.q(result.d)
    *(arg1 + 0x24) = r8_1.d
    
    if (result.d s< 0 || r8_1.d s>= *(rbx_1 + 0x150))
        result.b = 2
    else
        void* rdx_1 = r8_1 * 0x58 + *(rbx_1 + 0x148)
        char rax = *(rdx_1 + 0x19)
        float zmm0_1
        
        if (rax == 0)
            zmm0_1 = *(rdx_1 + 0x24)
        else
            uint32_t rcx_1 = zx.d(rax)
            
            if (rcx_1 == 1)
                zmm0_1 = *(rdx_1 + 0x24) f+ *(rdx_1 + 0x1c)
            else if (rcx_1 != 2)
                zmm0_1 = *(rdx_1 + 0x24)
            else
                zmm0_1 = *(rdx_1 + 0x24) f* *(rdx_1 + 0x20) f+ *(rdx_1 + 0x1c)
        
        uint32_t zmm7[0x4]
        uint32_t var_28_1[0x4] = zmm7
        int128_t zmm8
        int128_t var_38_1 = zmm8
        int128_t zmm9
        int128_t var_48_1 = zmm9
        arg1[5].d = zmm0_1
        uint32_t zmm0_2[0x4]
        zmm0_2, result = sub_141e246e0(rbx_1, r8_1.d)
        *(arg1 + 0x2c) = zmm0_2[0]
        
        if (*(rsi + 0x28) == 0)
            result.b = 1
        else
            uint32_t zmm2_1[0x4] = arg1[2].d
            zmm7 = 0x7fffffff
            
            if (_mm_and_ps(zmm2_1, 0x7fffffff)[0] f<= 9.99999994e-09f)
                result.b = 1
            else
                zmm8 = zx.o(0)
                zmm9 = 0x80000000
                uint32_t zmm1_1[0x4]
                
                if (*(rsi + 0x184) != 0)
                    zmm1_1 = *(rsi + 0x180)
                    
                    if (*(rsi + 0x17c) == 0)
                        zmm0_2 = *rbp
                    else
                        zmm0_2 = *(rsi + 0x178)
                        *rbp = zmm0_2[0]
                        zmm2_1 = arg1[2].d
                    
                    zmm1_1[0] = zmm1_1[0] f- zmm0_2[0]
                    zmm1_1[0] = zmm1_1[0] f/ zmm2_1[0]
                    arg1[3].d = zmm1_1[0]
                    result.b = zmm1_1[0] f>= 0f
                    goto label_141e14cdf
                
                zmm0_2 = *(rsi + 0x12c)
                zmm0_2[0] = zmm0_2[0] f* *(rbx_1 + 0x94)
                arg1[3].d = zmm0_2[0]
                
                if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f<= 9.99999994e-09f)
                    result.b = 1
                else
                    if (sub_1417fc2d0(rbx_1 + 0x1a0).b == 0)
                    label_141e14cce:
                        zmm1_1 = arg1[3].d
                        bool cond:2_1 = zmm1_1[0] f> zmm8.d
                        zmm1_1[0] = zmm1_1[0] f* arg1[2].d
                        result.b = cond:2_1
                    label_141e14cdf:
                        arg1[4].b = result.b
                        *(arg1 + 0x34) = 0xffffffff
                    else
                        zmm0_2 = arg1[3].d
                        zmm0_2[0] = zmm0_2[0] f- 1f
                        
                        if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f<= 9.99999994e-09f)
                            goto label_141e14cce
                        
                        result, zmm7, zmm8, zmm9 = sub_141e184c0(arg1)
                        
                        if (*(arg1 + 0x31) == 0)
                            goto label_141e14cce
                        
                        int32_t zmm0_3 = sub_141e20140(arg1, (*rbp)[0])
                        zmm1_1 = arg1[2].d
                        
                        if (arg1[4].b == 0)
                            zmm1_1 ^= zmm9
                        
                        zmm1_1[0] = zmm1_1[0] f+ zmm0_3
                        zmm0_2 = sub_141e58490(&arg1[0xc], zmm1_1[0])
                        
                        if (not(zmm0_2[0] f== arg1[0xb].d))
                            arg1[0xb].d = zmm0_2[0]
                            sub_141e6cd00(&arg1[0xc], arg1 + 0x34, zmm0_2[0], &arg1[0x10])
                            *(arg1 + 0x5c) =
                                sub_141e585c0(&arg1[0xc], *(arg1 + 0x34), arg1[0xb].d[0])[0]
                        
                        zmm1_1 = *(arg1 + 0x5c)
                        zmm1_1[0] = zmm1_1[0] f- *rbp
                        zmm1_1[0] = zmm1_1[0] f/ arg1[2].d
                        arg1[3].d = zmm1_1[0]
                    
                    *(arg1 + 0x1c) = zmm1_1[0]
                    
                    if (arg3 != 0)
                        void* r8_2 = arg1[1]
                        zmm2_1 = *rbp
                        float zmm3_1 = zmm2_1[0] f+ zmm1_1[0]
                        int64_t rax_1 = sx.q(*(r8_2 + 0x188))
                        
                        if (rax_1.d s<= 0)
                        labelid_18:
                            result = 0
                        else if (zmm3_1 f< zmm2_1[0])
                            if (rax_1.d - 1 s< 0)
                            labelid_18:
                                result = 0
                            else
                                int64_t rdx_6 = sx.q(rax_1.d - 1)
                                result = *(r8_2 + 0x180) + rdx_6 * 0xc
                                
                                while (true)
                                    zmm0_2 = *(result + 4)
                                    
                                    if (zmm0_2[0] f< zmm2_1[0])
                                        break
                                    
                                    result -= 0xc
                                    int64_t temp2_1 = rdx_6
                                    rdx_6 -= 1
                                    
                                    if (temp2_1 - 1 s< 0)
                                        goto label_141e14d81_2
                                
                                if (not(zmm0_2[0] f>= zmm3_1))
                                label_141e14d81:
                                    result = 0
                        else if (rax_1.d s<= 0)
                        label_141e14d81_1:
                            result = 0
                        else
                            int64_t rcx_10 = 0
                            result = *(r8_2 + 0x180)
                            
                            while (true)
                                zmm0_2 = *(result + 4)
                                
                                if (zmm0_2[0] f> zmm2_1[0])
                                    break
                                
                                rcx_10 += 1
                                result += 0xc
                                
                                if (rcx_10 s>= rax_1)
                                    goto label_141e14d81_2
                            
                            if (zmm0_2[0] f> zmm3_1)
                            label_141e14d81_2:
                                result = 0
                        
                        *arg3 = result
                        
                        if (result != 0)
                            zmm0_2 = *(result + 4)
                            zmm0_2[0] = zmm0_2[0] f- *rbp
                            *(arg1 + 0x1c) = zmm0_2[0]
                    
                    zmm2_1 = *(arg1 + 0x1c)
                    zmm0_2 = zmm2_1
                    
                    if (arg1[4].b == 0)
                        zmm1_1 = arg_8 ^ zmm9
                        
                        if (not(zmm2_1[0] f> zmm1_1[0]))
                        label_141e14dc9:
                            *(arg1 + 0x1c) = zmm1_1[0]
                            zmm0_2 = zmm1_1
                            arg1[6].b = 1
                    else
                        zmm1_1 = *(arg1 + 0x2c)
                        zmm1_1[0] = zmm1_1[0] f- arg_8
                        
                        if (not(zmm2_1[0] f< zmm1_1[0]))
                            goto label_141e14dc9
                    
                    zmm1_1 = zmm0_2
                    
                    if (arg3 != 0 && *arg3 != 0 && not(zmm2_1[0] f== zmm0_2[0]))
                        *arg3 = 0
                        zmm1_1 = *(arg1 + 0x1c)
                    
                    if (_mm_and_ps(zmm1_1, zmm7)[0] f<= zmm8.d)
                        result.b = 1
                    else
                        zmm1_1[0] = zmm1_1[0] f+ *rbp
                        result.b = 0
                        *rbp = zmm1_1[0]
                        zmm0_2 = *(arg1 + 0x1c)
                        zmm0_2[0] = zmm0_2[0] f/ arg1[3].d
                        zmm1_1 = arg1[2].d
                        zmm1_1[0] = zmm1_1[0] f- zmm0_2[0]
                        arg1[2].d = _mm_max_ss(zmm1_1[0], zmm8.d)[0]

return result
