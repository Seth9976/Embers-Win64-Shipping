// 函数: sub_14239dfd0
// 地址: 0x14239dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int128_t zmm0
int128_t zmm2
int128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r10_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int64_t rcx_1 = (sx.q(r10_1) + 2) * 6
                    int64_t rax_7 = *(arg1 + (rcx_1 << 3))
                    int64_t r8_2 = sx.q(rdx_1.d) * 6
                    int64_t temp4_1 = *(arg1 + (r8_2 << 3))
                    bool c_1 = rax_7 u< temp4_1
                    
                    if (rax_7 == temp4_1)
                        zmm0 = *(arg1 + (rcx_1 << 3) + 0x24)
                        float temp6_1 = *(arg1 + (r8_2 << 3) + 0x24)
                        zmm0.d f- temp6_1
                        c_1 = zmm0.d f< temp6_1
                    
                    rax_7.b = c_1
                    
                    if (rax_7.b != 0)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t* r8_5 = &arg1[sx.q(r11_1) * 3]
                int64_t rcx_2 = *r8_5
                result = &arg1[sx.q(rdx_1.d) * 3]
                int64_t temp3_1 = *result
                bool c_2 = rcx_2 u< temp3_1
                
                if (rcx_2 == temp3_1)
                    zmm0 = *(r8_5 + 0x24)
                    float temp5_1 = *(result + 0x24)
                    zmm0.d f- temp5_1
                    c_2 = zmm0.d f< temp5_1
                
                rcx_2.b = c_2
                
                if (rcx_2.b == 0)
                    break
                
                if (r8_5 != result)
                    zmm2 = *r8_5
                    zmm3 = *(r8_5 + 0x10)
                    zmm4 = *(r8_5 + 0x20)
                    *r8_5 = *result
                    *(r8_5 + 0x10) = *(result + 0x10)
                    *(r8_5 + 0x20) = *(result + 0x20)
                    *result = zmm2
                    *(result + 0x10) = zmm3
                    *(result + 0x20) = zmm4
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = rdx_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rsi_3 = &arg1[result * 3]
    
    do
        if (arg1 != rsi_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            *arg1 = *rsi_3
            arg1[1] = rsi_3[1]
            arg1[2] = rsi_3[2]
            *rsi_3 = zmm2
            rsi_3[1] = zmm3
            rsi_3[2] = zmm4
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t r10_2 = r11_2 * 2
                uint64_t rdx_2 = zx.q(r10_2 + 1)
                
                if ((rdx_2 + 1).d s< i)
                    int64_t rcx_4 = (sx.q(r10_2) + 2) * 6
                    int64_t rax_16 = *(arg1 + (rcx_4 << 3))
                    int64_t r8_7 = sx.q(rdx_2.d) * 6
                    int64_t temp8_1 = *(arg1 + (r8_7 << 3))
                    bool c_3 = rax_16 u< temp8_1
                    
                    if (rax_16 == temp8_1)
                        zmm0 = *(arg1 + (rcx_4 << 3) + 0x24)
                        float temp10_1 = *(arg1 + (r8_7 << 3) + 0x24)
                        zmm0.d f- temp10_1
                        c_3 = zmm0.d f< temp10_1
                    
                    rax_16.b = c_3
                    
                    if (rax_16.b != 0)
                        rdx_2 = zx.q(r10_2)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                void* r8_10 = &arg1[sx.q(r11_2) * 3]
                int64_t rcx_5 = *r8_10
                result = &arg1[sx.q(rdx_2.d) * 3]
                int64_t temp7_1 = *result
                bool c_4 = rcx_5 u< temp7_1
                
                if (rcx_5 == temp7_1)
                    zmm0 = *(r8_10 + 0x24)
                    float temp9_1 = *(result + 0x24)
                    zmm0.d f- temp9_1
                    c_4 = zmm0.d f< temp9_1
                
                rcx_5.b = c_4
                
                if (rcx_5.b == 0)
                    break
                
                if (r8_10 != result)
                    zmm2 = *r8_10
                    zmm3 = *(r8_10 + 0x10)
                    zmm4 = *(r8_10 + 0x20)
                    *r8_10 = *result
                    *(r8_10 + 0x10) = *(result + 0x10)
                    *(r8_10 + 0x20) = *(result + 0x20)
                    *result = zmm2
                    *(result + 0x10) = zmm3
                    *(result + 0x20) = zmm4
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r11_2 = rdx_2.d
            while (result.d s< i)
        
        i -= 1
        rsi_3 -= 0x30
    while (i s> 0)

return result
