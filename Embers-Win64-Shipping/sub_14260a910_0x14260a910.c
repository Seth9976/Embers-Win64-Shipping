// 函数: sub_14260a910
// 地址: 0x14260a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
int64_t r12 = 0
int32_t var_528 = 0x80
*arg5 = 0
int32_t var_518
int32_t* var_530 = &var_518
int64_t var_4d8[0x80]
int64_t (* var_538)[0x80] = &var_4d8
var_518 = 0
int32_t rax_2
float zmm6[0x4]
float zmm7[0x4]
uint32_t zmm8[0x4]
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_142613e80(arg1, arg2, arg3, arg4, var_538, var_530, var_528)
int64_t result

if ((rax_2 u>> 0x1f).b == 0)
    int128_t* rcx_2 = arg2
    int32_t rbp_1 = -1
    float var_58_1[0x4] = zmm6
    
    if (arg7 != 0)
        rcx_2 = arg7
    
    int32_t rax_5 = var_518
    int32_t r15_1 = -1
    float var_68_1[0x4] = zmm7
    int32_t rdi_1 = 0
    zmm7 = 0x7f7fffff
    float zmm0_1[0x4] = *(rcx_2 + 4)
    zmm6 = 0x7f7fffff
    uint32_t var_78_1[0x4] = zmm8
    zmm8 = 0x7f7fffff
    int128_t var_88_1 = zmm9
    zmm9 = arg8
    int128_t var_98_1 = zmm10
    zmm10 = *rcx_2
    int128_t var_a8_1 = zmm11
    zmm11 = *(rcx_2 + 8)
    float var_4f0 = zmm10.d
    float var_4ec_1 = zmm0_1[0]
    int32_t var_4e8_1 = zmm11.d
    zmm9.d = zmm9.d f* zmm9.d
    
    if (rax_5 s> 0)
        int32_t var_4f8
        float zmm3_1[0x4] = var_4f8
        int32_t var_4fc
        int32_t zmm4_1 = var_4fc
        int32_t var_500
        float zmm5_1[0x4] = var_500
        int128_t* rcx_3 = arg2
        int128_t* rdx = arg3
        int64_t (* r14_1)[0x80] = &var_4d8
        int128_t var_b8_1 = zmm12
        zmm12 = 0x38d1b717
        int128_t var_c8_1 = zmm13
        
        do
            int64_t r8 = *r14_1
            
            if (r8 != 0)
                void* r10_1 = *arg1
                char rsi_1 = (*(r10_1 + 0x9c)).b
                char r11_1 = (*(r10_1 + 0xa0)).b
                int32_t r9_2 = ((1 << r11_1).d - 1) & r8.d
                int32_t rdx_3 = ((1 << rsi_1).d - 1) & (r8 u>> r11_1).d
                
                if (rdx_3 u< *(r10_1 + 0x30))
                    int32_t* rdx_5 = zx.q(rdx_3) * 0xb0 + *(r10_1 + 0x90)
                    
                    if (*rdx_5 == ((r8 u>> (rsi_1 + r11_1)).d & ((1 << (*(r10_1 + 0x98)).b).d - 1)))
                        void* rax_11 = *(rdx_5 + 8)
                        
                        if (rax_11 != 0 && r9_2 u< *(rax_11 + 0x18) && rdx_5 != 0)
                            zmm6, zmm7, zmm8, zmm9, zmm12 = sub_1426054a0(arg1, rdx_5, 
                                (zx.q(r9_2) << 5) + *(rdx_5 + 0x10), &var_4f0, &var_500)
                            zmm3_1 = var_4f8
                            zmm4_1 = var_4fc
                            zmm5_1 = var_500
                            zmm11 = var_4e8_1
                            zmm10 = var_4f0
                
                rdx = arg3
                rcx_3 = arg2
                rax_5 = var_518
            
            uint32_t zmm2_1[0x4] = *(rcx_3 + 4)
            zmm5_1[0] = zmm5_1[0] f- zmm10.d
            zmm3_1[0] = zmm3_1[0] f- zmm11.d
            zmm2_1[0] = zmm2_1[0] f- zmm4_1
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
            uint32_t temp0_1[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
            bool cond:1_1 = temp0_1[0] f> *(rdx + 4)
            zmm5_1[0] = zmm5_1[0] + zmm3_1[0]
            
            if (not(cond:1_1))
                if (not(zmm5_1[0] f>= zmm9.d))
                    float temp0_2[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm5_1[0])
                    temp0_2[0] = temp0_2[0] f+ temp0_1[0]
                    
                    if (not(temp0_2[0] >= zmm7[0]))
                        *arg6 = zmm5_1[0]
                        zmm7 = temp0_2
                        arg6[1] = zmm4_1
                        rbp_1 = rdi_1
                        arg6[2] = zmm3_1[0]
                else if (zmm5_1[0] < zmm6[0])
                label_14260abf6:
                    
                    if (rbp_1 s< 0)
                        *arg6 = zmm5_1[0]
                        arg6[1] = zmm4_1
                        arg6[2] = zmm3_1[0]
                    
                    zmm6 = zmm5_1
                    zmm8 = temp0_1
                    r15_1 = rdi_1
                else
                    zmm6[0] = zmm6[0] f+ zmm12.d
                    
                    if (not(zmm5_1[0] >= zmm6[0]) && not(temp0_1[0] f>= zmm8[0]))
                        goto label_14260abf6
            
            rdi_1 += 1
            r14_1 = &(*r14_1)[1]
        while (rdi_1 s< rax_5)
        
        if (rbp_1 s>= 0)
            r12 = var_4d8[sx.q(rbp_1)]
        else if (r15_1 s>= 0)
            r12 = var_4d8[sx.q(r15_1)]
    
    *arg5 = r12
    result = 0x40000000
else
    result = 0x80000008

__security_check_cookie(rax_1 ^ &var_558)
return result
