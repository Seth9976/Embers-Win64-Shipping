// 函数: sub_1426a2d90
// 地址: 0x1426a2d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r8_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r8_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    void* r9_1 = arg1 + (sx.q(r8_1) + 2) * 0x18
                    int64_t rcx = sx.q(rdx_1.d) * 3
                    int32_t rax_8 = *(r9_1 + 0xc)
                    int32_t temp4_1 = *(arg1 + (rcx << 3) + 0xc)
                    
                    if (rax_8 s< temp4_1)
                        rax_8.b = 1
                    else if (rax_8 != temp4_1)
                        rax_8.b = 0
                    else
                        rax_8 = *(r9_1 + 8)
                        int32_t temp6_1 = *(arg1 + (rcx << 3) + 8)
                        
                        if (rax_8 s< temp6_1 ||
                                (rax_8 == temp6_1 && *(r9_1 + 0x10) u< *(arg1 + (rcx << 3) + 0x10)))
                            rax_8.b = 1
                        else
                            rax_8.b = 0
                    
                    if (rax_8.b != 0)
                        rdx_1 = zx.q(r8_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int128_t* r9_2 = arg1 + sx.q(r11_1) * 0x18
                int64_t rcx_2 = sx.q(rdx_1.d) * 3
                result = zx.q(*(r9_2 + 0xc))
                int32_t temp3_1 = *(arg1 + (rcx_2 << 3) + 0xc)
                int128_t* r8_2 = arg1 + (rcx_2 << 3)
                
                if (result.d s>= temp3_1)
                    if (result.d != temp3_1)
                        break
                    
                    result = zx.q(*(r9_2 + 8))
                    int32_t temp5_1 = *(r8_2 + 8)
                    
                    if (result.d s>= temp5_1)
                        if (result.d != temp5_1)
                            break
                        
                        result = zx.q(r8_2[1].d)
                        
                        if (r9_2[1].d u>= result.d)
                            break
                
                if (r9_2 != r8_2)
                    zmm3 = *r9_2
                    zmm2 = r9_2[1].q
                    *r9_2 = *r8_2
                    r9_2[1].q = r8_2[1].q
                    *r8_2 = zmm3
                    r8_2[1].q = zmm2
                
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
    int128_t* rsi_1 = arg1 + result * 0x18
    
    do
        if (arg1 != rsi_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rsi_1
            arg1[1].q = rsi_1[1].q
            *rsi_1 = zmm3
            rsi_1[1].q = zmm2
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* r9_3 = arg1 + (sx.q(result_1) + 2) * 0x18
                    int64_t rdx_2 = sx.q(result.d) * 3
                    int32_t rcx_9 = *(r9_3 + 0xc)
                    int32_t temp8_1 = *(arg1 + (rdx_2 << 3) + 0xc)
                    
                    if (rcx_9 s< temp8_1)
                        rcx_9.b = 1
                    else if (rcx_9 != temp8_1)
                        rcx_9.b = 0
                    else
                        rcx_9 = *(r9_3 + 8)
                        int32_t temp10_1 = *(arg1 + (rdx_2 << 3) + 8)
                        
                        if (rcx_9 s< temp10_1 || (rcx_9 == temp10_1
                                && *(r9_3 + 0x10) u< *(arg1 + (rdx_2 << 3) + 0x10)))
                            rcx_9.b = 1
                        else
                            rcx_9.b = 0
                    
                    if (rcx_9.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_4 = arg1 + sx.q(r11_2) * 0x18
                int64_t rdx_4 = sx.q(result.d) * 3
                int32_t rcx_12 = *(r9_4 + 0xc)
                int32_t temp7_1 = *(arg1 + (rdx_4 << 3) + 0xc)
                void* r8_3 = arg1 + (rdx_4 << 3)
                
                if (rcx_12 s>= temp7_1)
                    if (rcx_12 != temp7_1)
                        break
                    
                    int32_t rcx_13 = *(r9_4 + 8)
                    int32_t temp9_1 = *(r8_3 + 8)
                    
                    if (rcx_13 s>= temp9_1)
                        if (rcx_13 != temp9_1)
                            break
                        
                        if (*(r9_4 + 0x10) u>= *(r8_3 + 0x10))
                            break
                
                if (r9_4 != r8_3)
                    zmm3 = *r9_4
                    zmm2 = *(r9_4 + 0x10)
                    *r9_4 = *r8_3
                    *(r9_4 + 0x10) = *(r8_3 + 0x10)
                    *r8_3 = zmm3
                    *(r8_3 + 0x10) = zmm2
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0x18
    while (i s> 0)

return result
