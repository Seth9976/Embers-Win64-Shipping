// 函数: sub_14260a640
// 地址: 0x14260a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
int64_t r13 = 0
int128_t* r14 = arg3
int32_t var_4e8 = 0x80
*arg5 = 0
int32_t i_3
int32_t* var_4f0 = &i_3
void var_4a8
void* var_4f8 = &var_4a8
i_3 = 0
int32_t rax_3
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
uint32_t zmm10[0x4]
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10 =
    sub_142613e80(arg1, arg2, arg3, arg4, var_4f8, var_4f0, var_4e8)
int64_t result

if ((rax_3 u>> 0x1f).b == 0)
    int32_t i_2 = i_3
    int128_t var_88_1 = zmm9
    zmm9 = 0x7f7fffff
    
    if (i_2 s> 0)
        void* rsi_1 = &var_4a8
        uint64_t i_1 = zx.q(i_2)
        int128_t var_58_1 = zmm6
        int32_t var_4bc
        zmm6 = var_4bc
        int128_t var_68_1 = zmm7
        int32_t var_4b8
        zmm7 = var_4b8
        int128_t var_78_1 = zmm8
        int32_t var_4c0
        zmm8 = var_4c0
        uint32_t var_98_1[0x4] = zmm10
        zmm10 = 0x7fffffff
        uint64_t i
        
        do
            int64_t rbx_1 = *rsi_1
            char var_4d8 = 0
            sub_142612180(arg1, rbx_1, arg2, &var_4d8)
            
            if (var_4d8 != 0)
                if (rbx_1 != 0)
                    void* r9_1 = *arg1
                    char r14_1 = (*(r9_1 + 0x9c)).b
                    char r11_1 = (*(r9_1 + 0xa0)).b
                    uint64_t r8_3 = zx.q((1 << r11_1).d - 1) & zx.q(rbx_1.d)
                    int32_t rdx_3 = ((1 << r14_1).d - 1) & (rbx_1 u>> r11_1).d
                    
                    if (rdx_3 u< *(r9_1 + 0x30))
                        int32_t* r10_2 = zx.q(rdx_3) * 0xb0 + *(r9_1 + 0x90)
                        
                        if (*r10_2 ==
                                ((rbx_1 u>> (r14_1 + r11_1)).d & ((1 << (*(r9_1 + 0x98)).b).d - 1)))
                            void* rax_10 = *(r10_2 + 8)
                            
                            if (rax_10 != 0 && r8_3.d u< *(rax_10 + 0x18) && r10_2 != 0)
                                zmm9, zmm10 = sub_1426054a0(arg1, r10_2, 
                                    (r8_3 << 5) + *(r10_2 + 0x10), arg2, &var_4c0)
                                zmm7 = var_4b8
                                zmm6 = var_4bc
                                zmm8 = var_4c0
                    
                    r14 = arg3
                
                uint32_t zmm2_1[0x4] = *(arg2 + 4)
                int128_t zmm3_1
                zmm3_1.d = zmm8.d f- *arg2
                float zmm1_1 = zmm7.d f- *(arg2 + 8)
                float zmm0_1 = zmm6.d f- zmm2_1[0]
                zmm3_1.d = zmm3_1.d f* zmm3_1.d
                zmm3_1.d = zmm3_1.d f+ zmm0_1 * zmm0_1
                zmm3_1.d = zmm3_1.d f+ zmm1_1 * zmm1_1
                
                if (not(zmm3_1.d f>= zmm9.d))
                    zmm2_1[0] = zmm2_1[0] f- zmm6.d
                    
                    if (not(_mm_and_ps(zmm2_1, zmm10)[0] f>= *(r14 + 4)))
                        if (arg6 != 0)
                            *arg6 = zmm8.d
                            arg6[1] = zmm6.d
                            arg6[2] = zmm7.d
                        
                        zmm9 = zmm3_1
                        r13 = rbx_1
            
            rsi_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *arg5 = r13
    result = 0x40000000
else
    result = 0x80000008

__security_check_cookie(rax_1 ^ &var_518)
return result
