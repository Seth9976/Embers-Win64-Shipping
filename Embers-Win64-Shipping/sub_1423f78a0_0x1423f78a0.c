// 函数: sub_1423f78a0
// 地址: 0x1423f78a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rbx_1 = rbp
        
        if (r14_1 s< arg2)
            do
                int32_t r11_1 = rbx_1 * 2
                uint64_t rdx_1 = zx.q(r11_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int32_t* r9_1 = (sx.q(r11_1) + 2) * 0xc8
                    int32_t* r10_1 = sx.q(rdx_1.d) * 0xc8
                    int32_t rax_9 = *(r9_1 + arg1)
                    int32_t rdi_1 = *(r10_1 + arg1)
                    bool c_1 = rax_9 u< rdi_1
                    
                    if (rax_9 == rdi_1)
                        c_1 = *(r9_1 + arg1 + 4) u< *(r10_1 + arg1 + 4)
                    
                    if (c_1 != 0)
                        rdx_1 = zx.q(r11_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r10_3 = sx.q(rbx_1) * 0xc8 + arg1
                int32_t* r9_3 = sx.q(rdx_1.d) * 0xc8 + arg1
                result = zx.q(*r10_3)
                int32_t r11_2 = *r9_3
                bool c_2 = result.d u< r11_2
                
                if (result.d == r11_2)
                    result = zx.q(r9_3[1])
                    c_2 = r10_3[1] u< result.d
                
                if (c_2 == 0)
                    break
                
                if (r10_3 != r9_3)
                    int64_t rax_13 = *(r10_3 + 0xc0)
                    zmm1 = *(r10_3 + 0x10)
                    var_1c8 = *r10_3
                    int128_t var_1a8_1 = *(r10_3 + 0x20)
                    int128_t var_198_1 = *(r10_3 + 0x30)
                    int128_t var_188_1 = *(r10_3 + 0x40)
                    int128_t var_178_1 = *(r10_3 + 0x50)
                    int128_t var_168_1 = *(r10_3 + 0x60)
                    int128_t var_158_1 = *(r10_3 + 0x70)
                    int128_t var_148_1 = *(r10_3 + 0x80)
                    int128_t var_138_1 = *(r10_3 + 0x90)
                    int128_t var_128_1 = *(r10_3 + 0xa0)
                    int128_t var_118_1 = *(r10_3 + 0xb0)
                    *r10_3 = *r9_3
                    *(r10_3 + 0x10) = *(r9_3 + 0x10)
                    *(r10_3 + 0x20) = *(r9_3 + 0x20)
                    *(r10_3 + 0x30) = *(r9_3 + 0x30)
                    *(r10_3 + 0x40) = *(r9_3 + 0x40)
                    *(r10_3 + 0x50) = *(r9_3 + 0x50)
                    *(r10_3 + 0x60) = *(r9_3 + 0x60)
                    *(r10_3 + 0x70) = *(r9_3 + 0x70)
                    *(r10_3 + 0x80) = *(r9_3 + 0x80)
                    *(r10_3 + 0x90) = *(r9_3 + 0x90)
                    *(r10_3 + 0xa0) = *(r9_3 + 0xa0)
                    *(r10_3 + 0xb0) = *(r9_3 + 0xb0)
                    *(r10_3 + 0xc0) = *(r9_3 + 0xc0)
                    *r9_3 = var_1c8
                    *(r9_3 + 0x10) = zmm1
                    *(r9_3 + 0x20) = var_1a8_1
                    *(r9_3 + 0x30) = var_198_1
                    *(r9_3 + 0x40) = var_188_1
                    *(r9_3 + 0x50) = var_178_1
                    *(r9_3 + 0x60) = var_168_1
                    *(r9_3 + 0x70) = var_158_1
                    *(r9_3 + 0x80) = var_148_1
                    *(r9_3 + 0x90) = var_138_1
                    *(r9_3 + 0xa0) = var_128_1
                    *(r9_3 + 0xb0) = var_118_1
                    *(r9_3 + 0xc0) = rax_13
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                rbx_1 = rdx_1.d
            while (result.d s< arg2)
        
        r14_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rbp_2 = result * 0xc8 + arg1
    
    do
        if (arg1 != rbp_2)
            uint64_t result_1 = arg1[0xc].q
            zmm1 = arg1[1]
            var_1c8 = *arg1
            int128_t var_1a8_2 = arg1[2]
            int128_t var_198_2 = arg1[3]
            int128_t var_188_2 = arg1[4]
            int128_t var_178_2 = arg1[5]
            int128_t var_168_2 = arg1[6]
            int128_t var_158_2 = arg1[7]
            int128_t var_148_2 = arg1[8]
            int128_t var_138_2 = arg1[9]
            int128_t var_128_2 = arg1[0xa]
            int128_t var_118_2 = arg1[0xb]
            *arg1 = *rbp_2
            arg1[1] = *(rbp_2 + 0x10)
            arg1[2] = *(rbp_2 + 0x20)
            arg1[3] = *(rbp_2 + 0x30)
            arg1[4] = *(rbp_2 + 0x40)
            arg1[5] = *(rbp_2 + 0x50)
            arg1[6] = *(rbp_2 + 0x60)
            arg1[7] = *(rbp_2 + 0x70)
            arg1[8] = *(rbp_2 + 0x80)
            arg1[9] = *(rbp_2 + 0x90)
            arg1[0xa] = *(rbp_2 + 0xa0)
            arg1[0xb] = *(rbp_2 + 0xb0)
            arg1[0xc].q = *(rbp_2 + 0xc0)
            *rbp_2 = var_1c8
            *(rbp_2 + 0x10) = zmm1
            *(rbp_2 + 0x20) = var_1a8_2
            *(rbp_2 + 0x30) = var_198_2
            *(rbp_2 + 0x40) = var_188_2
            *(rbp_2 + 0x50) = var_178_2
            *(rbp_2 + 0x60) = var_168_2
            *(rbp_2 + 0x70) = var_158_2
            *(rbp_2 + 0x80) = var_148_2
            *(rbp_2 + 0x90) = var_138_2
            *(rbp_2 + 0xa0) = var_128_2
            *(rbp_2 + 0xb0) = var_118_2
            result = result_1
            *(rbp_2 + 0xc0) = result
        
        int32_t rbx_2 = 0
        
        if (i s> 1)
            do
                int32_t result_2 = rbx_2 * 2
                result = zx.q(result_2 + 1)
                
                if ((result + 1).d s< i)
                    int32_t* r9_5 = (sx.q(result_2) + 2) * 0xc8
                    int32_t* r10_5 = sx.q(result.d) * 0xc8
                    int32_t rcx_8 = *(r9_5 + arg1)
                    int32_t rsi_1 = *(r10_5 + arg1)
                    bool c_3 = rcx_8 u< rsi_1
                    
                    if (rcx_8 == rsi_1)
                        c_3 = *(r9_5 + arg1 + 4) u< *(r10_5 + arg1 + 4)
                    
                    if (c_3 != 0)
                        result = zx.q(result_2)
                    
                    result = zx.q(result.d + 1)
                
                void* r10_7 = sx.q(rbx_2) * 0xc8 + arg1
                void* r9_7 = sx.q(result.d) * 0xc8 + arg1
                int32_t rcx_12 = *r10_7
                int32_t r11_3 = *r9_7
                bool c_4 = rcx_12 u< r11_3
                
                if (rcx_12 == r11_3)
                    c_4 = *(r10_7 + 4) u< *(r9_7 + 4)
                
                if (c_4 == 0)
                    break
                
                if (r10_7 != r9_7)
                    int64_t rcx_14 = *(r10_7 + 0xc0)
                    int128_t var_100_1 = *r10_7
                    int128_t var_f0_1 = *(r10_7 + 0x10)
                    int128_t var_e0_1 = *(r10_7 + 0x20)
                    int128_t var_d0_1 = *(r10_7 + 0x30)
                    int128_t var_c0_1 = *(r10_7 + 0x40)
                    int128_t var_b0_1 = *(r10_7 + 0x50)
                    int128_t var_a0_1 = *(r10_7 + 0x60)
                    int128_t var_90_1 = *(r10_7 + 0x70)
                    int128_t var_80_1 = *(r10_7 + 0x80)
                    int128_t var_70_1 = *(r10_7 + 0x90)
                    int128_t var_60_1 = *(r10_7 + 0xa0)
                    int128_t var_50_1 = *(r10_7 + 0xb0)
                    *r10_7 = *r9_7
                    *(r10_7 + 0x10) = *(r9_7 + 0x10)
                    *(r10_7 + 0x20) = *(r9_7 + 0x20)
                    *(r10_7 + 0x30) = *(r9_7 + 0x30)
                    *(r10_7 + 0x40) = *(r9_7 + 0x40)
                    *(r10_7 + 0x50) = *(r9_7 + 0x50)
                    *(r10_7 + 0x60) = *(r9_7 + 0x60)
                    *(r10_7 + 0x70) = *(r9_7 + 0x70)
                    *(r10_7 + 0x80) = *(r9_7 + 0x80)
                    *(r10_7 + 0x90) = *(r9_7 + 0x90)
                    *(r10_7 + 0xa0) = *(r9_7 + 0xa0)
                    *(r10_7 + 0xb0) = *(r9_7 + 0xb0)
                    *(r10_7 + 0xc0) = *(r9_7 + 0xc0)
                    *r9_7 = var_100_1
                    *(r9_7 + 0x10) = var_f0_1
                    *(r9_7 + 0x20) = var_e0_1
                    *(r9_7 + 0x30) = var_d0_1
                    *(r9_7 + 0x40) = var_c0_1
                    *(r9_7 + 0x50) = var_b0_1
                    *(r9_7 + 0x60) = var_a0_1
                    *(r9_7 + 0x70) = var_90_1
                    *(r9_7 + 0x80) = var_80_1
                    *(r9_7 + 0x90) = var_70_1
                    *(r9_7 + 0xa0) = var_60_1
                    *(r9_7 + 0xb0) = var_50_1
                    *(r9_7 + 0xc0) = rcx_14
                
                rbx_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbp_2 -= 0xc8
    while (i s> 0)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
