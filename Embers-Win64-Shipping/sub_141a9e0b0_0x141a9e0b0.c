// 函数: sub_141a9e0b0
// 地址: 0x141a9e0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result
void* rcx = *(arg2 + 0x18)
int64_t* r14 = arg3
void* var_128 = rcx
int64_t r12 = sx.q(*(arg1 + 0xe0))
int128_t zmm8

if (r12 s> 0)
    zmm7 = 0x3727c5ac
    int64_t rdi_1 = 0
    int64_t r14_1 = 0
    
    do
        result = *(arg1 + 0xe8)
        void* rbx_2 = *(arg1 + 0xd8) + r14_1
        zmm6 = *(result + (rdi_1 << 2))
        
        if (not(zmm6.d f<= zmm7.d))
            result = sub_141ea6180(rbx_2, rcx)
            
            if (result.b != 0
                    && (*(rbx_2 + 0x12) != 0 || *(rbx_2 + 0x13) != 0 || *(rbx_2 + 0x14) != 0))
                result = sx.q(*(rbx_2 + 0x18))
                
                if (result.d != 0xffffffff)
                    *((result << 7) + *(arg1 + 0xf8) + 0x10) = zmm6.d
                    int64_t rdx_1 = sx.q(*(rbx_2 + 0xc))
                    
                    if (*(rdx_1 + *(arg2 + 0x20)) == 0)
                        zmm7, zmm8 = sub_141a98300(arg2 + 8, rdx_1.d)
                    
                    result = *(arg1 + 0xf8)
                    int128_t* rdx_4 = rdx_1 * 0x30 + *(arg2 + 8)
                    int64_t rcx_6 = sx.q(*(rbx_2 + 0x18)) << 7
                    *(rcx_6 + result + 0x50) = *rdx_4
                    *(rcx_6 + result + 0x60) = rdx_4[1]
                    *(rcx_6 + result + 0x70) = rdx_4[2]
            
            rcx = var_128
        
        rdi_1 += 1
        r14_1 += 0x1c
    while (rdi_1 s< r12)
    
    r14 = arg3

if (*(arg1 + 0x100) s> 0)
    int64_t rdx_5 = sx.q(*(arg1 + 0xd4))
    int128_t var_68_1 = zmm8
    
    if (*(rdx_5 + *(arg2 + 0x20)) == 0)
        sub_141a98300(arg2 + 8, rdx_5.d)
    
    int64_t rax_4 = *(arg2 + 8)
    int64_t rcx_9 = rdx_5 * 6
    float var_d8[0x4] = *(rax_4 + (rcx_9 << 3))
    int128_t var_c8_1 = *(rax_4 + (rcx_9 << 3) + 0x10)
    float var_b8_1[0x4] = *(rax_4 + (rcx_9 << 3) + 0x20)
    int128_t var_a8
    sub_141a80fc0(&var_a8, &var_d8, &data_143dbb0c0, arg1 + 0xf8)
    int32_t rax_5 = *(arg1 + 0xd4)
    int64_t rbx_3 = sx.q(r14[1].d)
    zmm6 = var_a8
    int32_t rax_6 = (rbx_3 + 1).d
    r14[1].d = rax_6
    
    if (rax_6 s> *(r14 + 0xc))
        sub_1405c4fe0(r14)
    
    result = *r14
    int128_t* rcx_13 = rbx_3 << 6
    *(rcx_13 + result) = rax_5.o
    *(rcx_13 + result + 0x10) = zmm6
    int128_t var_98
    *(rcx_13 + result + 0x20) = var_98
    int128_t var_88
    *(rcx_13 + result + 0x30) = var_88

__security_check_cookie(result_1 ^ &var_148)
return result
