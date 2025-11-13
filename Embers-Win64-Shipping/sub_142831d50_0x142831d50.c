// 函数: sub_142831d50
// 地址: 0x142831d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int64_t rsi = 0xffffffff
int32_t rbp = 0
int128_t zmm7 = 0x497423f0
int128_t zmm8
int128_t var_38 = zmm8

if (*(arg1 + 8) s> 0)
    int64_t* r14_1 = nullptr
    
    while (true)
        zmm8 = zmm7
        int32_t* result = *(r14_1 + *(arg1 + 0x68))
        int64_t rax_1
        rax_1.b = result[1].b
        
        if (rax_1.b != 0 && rax_1.b != 3)
            zmm6 = 0x461c4000
            
            if (*(result + 5) == 0xff)
                zmm6 = 0x45fa0000
            
            if (rax_1.b == 2)
                zmm6.d = zmm6.d f+ -1000f
            
            int32_t rax_2 = sub_141840b50(result)
            int64_t zmm0
            zmm0.d = float.s(zx.q(*(arg1 + 0x70) - rax_2))
            zmm6.d = zmm6.d f- zmm0.d
            
            if (result[0x3a1] != 1)
                double zmm1[0x2] = _mm_cvtps_pd(result[0x3a2][0])
                int64_t temp0_2 = _mm_cvtps_pd(zmm6.q)
                zmm1[0] = zmm1[0] * 1000.0
                zmm1[0] = zmm1[0] f+ temp0_2
                zmm6 = _mm_cvtpd_ps(zmm1)
            
            if (not(zmm7.d f<= zmm6.d))
                zmm7 = zmm6
            
            int32_t rax_4 = rbp
            
            if (zmm8.d f<= zmm6.d)
                rax_4 = rsi.d
            
            rbp += 1
            r14_1 = &r14_1[1]
            rsi = sx.q(rax_4)
            
            if (rbp s< *(arg1 + 8))
                continue
            else
                if (rax_4 s< 0)
                    break
                
                result = *(*(arg1 + 0x68) + (rsi << 3))
                sub_1428394c0(result)
        
        return result

return nullptr
