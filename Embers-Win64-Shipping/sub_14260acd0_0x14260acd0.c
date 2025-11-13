// 函数: sub_14260acd0
// 地址: 0x14260acd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_528
int64_t rax_1 = __security_cookie ^ &var_528
int64_t r15 = 0
int128_t* r14 = arg3
int32_t var_4f8 = 0x80
*arg5 = 0
int32_t i_3
int32_t* var_500 = &i_3
void var_4a8
void* var_508 = &var_4a8
i_3 = 0
int32_t rax_3
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
uint32_t zmm10[0x4]
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10 =
    sub_142613e80(arg1, arg2, arg3, arg4, var_508, var_500, var_4f8)
int64_t result

if ((rax_3 u>> 0x1f).b == 0)
    int128_t* rcx = arg2
    int128_t var_58_1 = zmm6
    zmm6 = 0x7f7fffff
    
    if (arg7 != 0)
        rcx = arg7
    
    int128_t var_68_1 = zmm7
    int32_t i_2 = i_3
    int128_t var_78_1 = zmm8
    int128_t var_88_1 = zmm9
    zmm7 = *rcx
    zmm8 = *(rcx + 4)
    zmm9 = *(rcx + 8)
    float var_4d8 = zmm7.d
    int32_t var_4d4_1 = zmm8.d
    int32_t var_4d0_1 = zmm9.d
    
    if (i_2 s> 0)
        float var_4c0
        float zmm4_1 = var_4c0
        int32_t var_4c4
        uint32_t zmm3_1[0x4] = var_4c4
        int32_t var_4c8
        int128_t zmm5_1 = var_4c8
        uint64_t i_1 = zx.q(i_2)
        void* rsi_1 = &var_4a8
        uint32_t var_98_1[0x4] = zmm10
        zmm10 = 0x7fffffff
        uint64_t i
        
        do
            int64_t rdi_1 = *rsi_1
            
            if (rdi_1 != 0)
                void* r9 = *arg1
                char r14_1 = (*(r9 + 0x9c)).b
                char r11_1 = (*(r9 + 0xa0)).b
                uint64_t r8_2 = zx.q((1 << r11_1).d - 1) & zx.q(rdi_1.d)
                int32_t rdx_2 = ((1 << r14_1).d - 1) & (rdi_1 u>> r11_1).d
                
                if (rdx_2 u< *(r9 + 0x30))
                    int32_t* r10_2 = zx.q(rdx_2) * 0xb0 + *(r9 + 0x90)
                    
                    if (*r10_2 == ((rdi_1 u>> (r14_1 + r11_1)).d & ((1 << (*(r9 + 0x98)).b).d - 1)))
                        void* rax_11 = *(r10_2 + 8)
                        
                        if (rax_11 != 0 && r8_2.d u< *(rax_11 + 0x18) && r10_2 != 0)
                            zmm6, zmm10 = sub_1426054a0(arg1, r10_2, (r8_2 << 5) + *(r10_2 + 0x10), 
                                &var_4d8, &var_4c8)
                            zmm4_1 = var_4c0
                            zmm3_1 = var_4c4
                            zmm5_1 = var_4c8
                            zmm9 = var_4d0_1
                            zmm8 = var_4d4_1
                            zmm7 = var_4d8
                
                r14 = arg3
            
            int128_t zmm2_1
            zmm2_1.d = zmm5_1.d f- zmm7.d
            zmm3_1[0] = zmm3_1[0] f- zmm8.d
            float zmm1_1 = zmm4_1 f- zmm9.d
            zmm2_1.d = zmm2_1.d f* zmm2_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm3_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm3_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm1_1 * zmm1_1
            
            if (not(zmm2_1.d f>= zmm6.d))
                uint32_t zmm0_1[0x4] = *(arg2 + 4)
                zmm0_1[0] = zmm0_1[0] f- zmm3_1[0]
                
                if (not(_mm_and_ps(zmm0_1, zmm10)[0] f>= *(r14 + 4)))
                    if (arg6 != 0)
                        *arg6 = zmm5_1.d
                        arg6[1] = zmm3_1[0]
                        arg6[2] = zmm4_1
                    
                    zmm6 = zmm2_1
                    r15 = rdi_1
            
            rsi_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *arg5 = r15
    result = 0x40000000
else
    result = 0x80000008

__security_check_cookie(rax_1 ^ &var_528)
return result
