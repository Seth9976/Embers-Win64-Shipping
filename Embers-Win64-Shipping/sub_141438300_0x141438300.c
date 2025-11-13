// 函数: sub_141438300
// 地址: 0x141438300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm0
int128_t zmm1

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t r10_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    zmm0 = *(&arg1[(sx.q(r10_1) + 2) * 0xa] + 0x1c)
                    zmm1 = *(&arg1[sx.q(rdx_1.d) * 0xa] + 0x1c)
                    int64_t rax_8
                    
                    if (zmm0.d f== zmm1.d)
                        rax_8.b = arg1[(sx.q(r10_1) + 2) * 0xa].d u< arg1[sx.q(rdx_1.d) * 0xa].d
                    else
                        rax_8.b = zmm1.d f> zmm0.d
                    
                    if (rax_8.b != 0)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int128_t* r10_4 = &arg1[sx.q(r11_1) * 0xa]
                zmm0 = *(r10_4 + 0x1c)
                int128_t* r9_5 = &arg1[sx.q(rdx_1.d) * 0xa]
                zmm1 = *(r9_5 + 0x1c)
                
                if (zmm0.d f== zmm1.d)
                    result.b = *r10_4 u< *r9_5
                else
                    result.b = zmm1.d f> zmm0.d
                
                if (result.b == 0)
                    break
                
                if (r10_4 != r9_5)
                    zmm1 = r10_4[1]
                    var_168 = *r10_4
                    int128_t var_148_1 = r10_4[2]
                    int128_t var_138_1 = r10_4[3]
                    int128_t var_128_1 = r10_4[4]
                    int128_t var_118_1 = r10_4[5]
                    int128_t var_108_1 = r10_4[6]
                    int128_t var_f8_1 = r10_4[7]
                    int128_t var_e8_1 = r10_4[8]
                    int128_t var_d8_1 = r10_4[9]
                    *r10_4 = *r9_5
                    r10_4[1] = r9_5[1]
                    r10_4[2] = r9_5[2]
                    r10_4[3] = r9_5[3]
                    r10_4[4] = r9_5[4]
                    r10_4[5] = r9_5[5]
                    r10_4[6] = r9_5[6]
                    r10_4[7] = r9_5[7]
                    r10_4[8] = r9_5[8]
                    zmm0 = var_168
                    r10_4[9] = r9_5[9]
                    *r9_5 = zmm0
                    r9_5[1] = zmm1
                    r9_5[2] = var_148_1
                    r9_5[3] = var_138_1
                    r9_5[4] = var_128_1
                    r9_5[5] = var_118_1
                    r9_5[6] = var_108_1
                    r9_5[7] = var_f8_1
                    r9_5[8] = var_e8_1
                    r9_5[9] = var_d8_1
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = rdx_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_3 = &arg1[result * 0xa]
    
    do
        if (arg1 != rdi_3)
            zmm1 = arg1[1]
            result = &var_168
            var_168 = *arg1
            int128_t var_148_2 = arg1[2]
            int128_t var_138_2 = arg1[3]
            int128_t var_128_2 = arg1[4]
            int128_t var_118_2 = arg1[5]
            int128_t var_108_2 = arg1[6]
            int128_t var_f8_2 = arg1[7]
            int128_t var_e8_2 = arg1[8]
            int128_t var_d8_2 = arg1[9]
            *arg1 = *rdi_3
            arg1[1] = rdi_3[1]
            arg1[2] = rdi_3[2]
            arg1[3] = rdi_3[3]
            arg1[4] = rdi_3[4]
            arg1[5] = rdi_3[5]
            arg1[6] = rdi_3[6]
            arg1[7] = rdi_3[7]
            arg1[8] = rdi_3[8]
            zmm0 = var_168
            arg1[9] = rdi_3[9]
            *rdi_3 = zmm0
            rdi_3[1] = zmm1
            rdi_3[2] = var_148_2
            rdi_3[3] = var_138_2
            rdi_3[4] = var_128_2
            rdi_3[5] = var_118_2
            rdi_3[6] = var_108_2
            rdi_3[7] = var_f8_2
            rdi_3[8] = var_e8_2
            rdi_3[9] = var_d8_2
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t r10_5 = r11_2 * 2
                uint64_t rdx_2 = zx.q(r10_5 + 1)
                
                if ((rdx_2 + 1).d s< i)
                    int32_t* rcx_3 = (sx.q(r10_5) + 2) * 0xa0
                    zmm0 = *(rcx_3 + arg1 + 0x1c)
                    zmm1 = *(&arg1[sx.q(rdx_2.d) * 0xa] + 0x1c)
                    uint64_t rax_13
                    
                    if (zmm0.d f== zmm1.d)
                        rax_13.b = *(rcx_3 + arg1) u< arg1[sx.q(rdx_2.d) * 0xa].d
                    else
                        rax_13.b = zmm1.d f> zmm0.d
                    
                    if (rax_13.b != 0)
                        rdx_2 = zx.q(r10_5)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                void* r10_8 = &arg1[sx.q(r11_2) * 0xa]
                zmm0 = *(r10_8 + 0x1c)
                int32_t* r9_10 = &arg1[sx.q(rdx_2.d) * 0xa]
                zmm1 = r9_10[7]
                
                if (zmm0.d f== zmm1.d)
                    result.b = *r10_8 u< *r9_10
                else
                    result.b = zmm1.d f> zmm0.d
                
                if (result.b == 0)
                    break
                
                if (r10_8 != r9_10)
                    int128_t var_c8_1 = *r10_8
                    int128_t var_b8_1 = *(r10_8 + 0x10)
                    int128_t var_a8_1 = *(r10_8 + 0x20)
                    int128_t var_98_1 = *(r10_8 + 0x30)
                    int128_t var_88_1 = *(r10_8 + 0x40)
                    int128_t var_78_1 = *(r10_8 + 0x50)
                    int128_t var_68_1 = *(r10_8 + 0x60)
                    int128_t var_58_1 = *(r10_8 + 0x70)
                    int128_t var_48_1 = *(r10_8 + 0x80)
                    int128_t var_38_1 = *(r10_8 + 0x90)
                    *r10_8 = *r9_10
                    *(r10_8 + 0x10) = *(r9_10 + 0x10)
                    *(r10_8 + 0x20) = *(r9_10 + 0x20)
                    *(r10_8 + 0x30) = *(r9_10 + 0x30)
                    *(r10_8 + 0x40) = *(r9_10 + 0x40)
                    *(r10_8 + 0x50) = *(r9_10 + 0x50)
                    *(r10_8 + 0x60) = *(r9_10 + 0x60)
                    *(r10_8 + 0x70) = *(r9_10 + 0x70)
                    *(r10_8 + 0x80) = *(r9_10 + 0x80)
                    *(r10_8 + 0x90) = *(r9_10 + 0x90)
                    *r9_10 = var_c8_1
                    *(r9_10 + 0x10) = var_b8_1
                    *(r9_10 + 0x20) = var_a8_1
                    *(r9_10 + 0x30) = var_98_1
                    *(r9_10 + 0x40) = var_88_1
                    *(r9_10 + 0x50) = var_78_1
                    *(r9_10 + 0x60) = var_68_1
                    *(r9_10 + 0x70) = var_58_1
                    *(r9_10 + 0x80) = var_48_1
                    *(r9_10 + 0x90) = var_38_1
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r11_2 = rdx_2.d
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0xa0
    while (i s> 0)

__security_check_cookie(rax_1 ^ &var_168)
return result
