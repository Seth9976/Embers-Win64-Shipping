// 函数: sub_142781b00
// 地址: 0x142781b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
int128_t zmm8
int128_t var_48 = zmm8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int128_t zmm9
int128_t var_58 = zmm9
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int128_t zmm10
int128_t var_68 = zmm10
int32_t rdi = result.d
int128_t zmm11
int128_t var_78 = zmm11
int128_t zmm0
uint128_t zmm1
int64_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r8_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r9_1 = (r8_1 + 1).d
                
                if (r9_1 s< arg2)
                    void* rcx_1 = sx.q(r9_1) * 0x58 + arg1
                    zmm0 = *(rcx_1 + 0x1c)
                    zmm1 = *(rcx_1 + 0x20)
                    zmm3 = *(rcx_1 + 0x28)
                    zmm7 = *(rcx_1 + 0x24)
                    zmm2 = *(rcx_1 + 0x18)
                    zmm5 = *(rcx_1 + 0x2c)
                    void* rdx_2 = sx.q(r8_1.d) * 0x58 + arg1
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm9 = *(rdx_2 + 0x28)
                    zmm11 = *(rdx_2 + 0x24)
                    zmm4 = *(rdx_2 + 0x1c)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm8 = *(rdx_2 + 0x18)
                    zmm10 = *(rdx_2 + 0x2c)
                    zmm6 = *(rdx_2 + 0x20)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm7.d = zmm7.d f+ zmm3.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm7.d = zmm7.d f+ zmm5.d
                    zmm11.d = zmm11.d f* zmm11.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm9.d = zmm9.d f* zmm9.d
                    zmm8.d = zmm8.d f+ zmm4.d
                    zmm11.d = zmm11.d f+ zmm9.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm2 = _mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).q.d, _mm_sqrt_ss(0, zmm7.d).d).q
                    zmm10.d = zmm10.d f* zmm10.d
                    zmm8.d = zmm8.d f+ zmm6.d
                    zmm11.d = zmm11.d f+ zmm10.d
                    
                    if (_mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d f< zmm2.d)
                        r9_1 = r8_1.d
                    
                    r8_1 = zx.q(r9_1)
                
                int128_t* rdx_4 = sx.q(r11_1.d) * 0x58 + arg1
                zmm0 = *(rdx_4 + 0x1c)
                zmm1 = rdx_4[2].d
                zmm3 = *(rdx_4 + 0x28)
                zmm7 = *(rdx_4 + 0x24)
                zmm2 = *(rdx_4 + 0x18)
                zmm5 = *(rdx_4 + 0x2c)
                result = sx.q(r8_1.d) * 0x58 + arg1
                zmm0.d = zmm0.d f* zmm0.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm9 = *(result + 0x28)
                zmm11 = *(result + 0x24)
                zmm4 = *(result + 0x1c)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm8 = *(result + 0x18)
                zmm10 = *(result + 0x2c)
                zmm6 = *(result + 0x20)
                zmm1.d = zmm1.d f* zmm1.d
                zmm7.d = zmm7.d f* zmm7.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm5.d = zmm5.d f* zmm5.d
                zmm7.d = zmm7.d f+ zmm3.d
                zmm8.d = zmm8.d f* zmm8.d
                zmm7.d = zmm7.d f+ zmm5.d
                zmm11.d = zmm11.d f* zmm11.d
                zmm4.d = zmm4.d f* zmm4.d
                zmm9.d = zmm9.d f* zmm9.d
                zmm8.d = zmm8.d f+ zmm4.d
                zmm11.d = zmm11.d f+ zmm9.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm10.d = zmm10.d f* zmm10.d
                zmm8.d = zmm8.d f+ zmm6.d
                zmm11.d = zmm11.d f+ zmm10.d
                
                if (_mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).q.d, _mm_sqrt_ss(0, zmm7.d).d).q.d
                        f<= _mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d)
                    break
                
                if (rdx_4 != result)
                    zmm3 = *rdx_4
                    zmm4 = rdx_4[1]
                    zmm5 = rdx_4[2]
                    zmm6 = rdx_4[3]
                    zmm7 = rdx_4[4]
                    zmm2 = rdx_4[5].q
                    *rdx_4 = *result
                    rdx_4[1] = *(result + 0x10)
                    rdx_4[2] = *(result + 0x20)
                    rdx_4[3] = *(result + 0x30)
                    rdx_4[4] = *(result + 0x40)
                    rdx_4[5].q = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r11_1 = zx.q(r8_1.d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rdi_2 = result * 0x58 + arg1
    
    do
        if (arg1 != rdi_2)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm5 = arg1[2]
            zmm6 = arg1[3]
            zmm7 = arg1[4]
            zmm2 = arg1[5].q
            *arg1 = *rdi_2
            arg1[1] = *(rdi_2 + 0x10)
            arg1[2] = *(rdi_2 + 0x20)
            arg1[3] = *(rdi_2 + 0x30)
            arg1[4] = *(rdi_2 + 0x40)
            arg1[5].q = *(rdi_2 + 0x50)
            *rdi_2 = zmm3
            *(rdi_2 + 0x10) = zmm4
            *(rdi_2 + 0x20) = zmm5
            *(rdi_2 + 0x30) = zmm6
            *(rdi_2 + 0x40) = zmm7
            *(rdi_2 + 0x50) = zmm2
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r11_2 = (r8_2 + 1).d
                
                if (r11_2 s< i)
                    void* rcx_3 = sx.q(r11_2) * 0x58 + arg1
                    zmm0 = *(rcx_3 + 0x28)
                    zmm1 = *(rcx_3 + 0x2c)
                    zmm2 = *(rcx_3 + 0x24)
                    zmm3 = *(rcx_3 + 0x1c)
                    zmm5 = *(rcx_3 + 0x18)
                    zmm4 = *(rcx_3 + 0x20)
                    void* rdx_6 = sx.q(r8_2.d) * 0x58 + arg1
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm9 = *(rdx_6 + 0x28)
                    zmm11 = *(rdx_6 + 0x24)
                    zmm6 = *(rdx_6 + 0x1c)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm8 = *(rdx_6 + 0x18)
                    zmm10 = *(rdx_6 + 0x2c)
                    zmm7 = *(rdx_6 + 0x20)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm5.d = zmm5.d f+ zmm3.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm5.d = zmm5.d f+ zmm4.d
                    zmm11.d = zmm11.d f* zmm11.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm9.d = zmm9.d f* zmm9.d
                    zmm8.d = zmm8.d f+ zmm6.d
                    zmm11.d = zmm11.d f+ zmm9.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm2 = _mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).q.d, _mm_sqrt_ss(0, zmm5.d).d).q
                    zmm10.d = zmm10.d f* zmm10.d
                    zmm8.d = zmm8.d f+ zmm7.d
                    zmm11.d = zmm11.d f+ zmm10.d
                    
                    if (_mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d f< zmm2.d)
                        r11_2 = r8_2.d
                    
                    r8_2 = zx.q(r11_2)
                
                int128_t* rdx_8 = sx.q(rbx_1.d) * 0x58 + arg1
                zmm0 = *(rdx_8 + 0x1c)
                zmm1 = rdx_8[2].d
                zmm3 = *(rdx_8 + 0x28)
                zmm7 = *(rdx_8 + 0x24)
                zmm2 = *(rdx_8 + 0x18)
                zmm5 = *(rdx_8 + 0x2c)
                result = sx.q(r8_2.d) * 0x58 + arg1
                zmm0.d = zmm0.d f* zmm0.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm9 = *(result + 0x28)
                zmm11 = *(result + 0x24)
                zmm4 = *(result + 0x1c)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm8 = *(result + 0x18)
                zmm10 = *(result + 0x2c)
                zmm6 = *(result + 0x20)
                zmm1.d = zmm1.d f* zmm1.d
                zmm7.d = zmm7.d f* zmm7.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm5.d = zmm5.d f* zmm5.d
                zmm7.d = zmm7.d f+ zmm3.d
                zmm8.d = zmm8.d f* zmm8.d
                zmm7.d = zmm7.d f+ zmm5.d
                zmm11.d = zmm11.d f* zmm11.d
                zmm4.d = zmm4.d f* zmm4.d
                zmm9.d = zmm9.d f* zmm9.d
                zmm8.d = zmm8.d f+ zmm4.d
                zmm11.d = zmm11.d f+ zmm9.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm10.d = zmm10.d f* zmm10.d
                zmm8.d = zmm8.d f+ zmm6.d
                zmm11.d = zmm11.d f+ zmm10.d
                
                if (_mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).q.d, _mm_sqrt_ss(0, zmm7.d).d).q.d
                        f<= _mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d)
                    break
                
                if (rdx_8 != result)
                    zmm3 = *rdx_8
                    zmm4 = rdx_8[1]
                    zmm5 = rdx_8[2]
                    zmm6 = rdx_8[3]
                    zmm7 = rdx_8[4]
                    zmm2 = rdx_8[5].q
                    *rdx_8 = *result
                    rdx_8[1] = *(result + 0x10)
                    rdx_8[2] = *(result + 0x20)
                    rdx_8[3] = *(result + 0x30)
                    rdx_8[4] = *(result + 0x40)
                    rdx_8[5].q = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2
                
                result = zx.q(((r8_2 << 1) + 1).d)
                rbx_1 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x58
    while (i s> 0)

return result
