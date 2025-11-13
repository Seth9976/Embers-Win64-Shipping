// 函数: sub_141950e80
// 地址: 0x141950e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm1

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
                    int32_t* r9_1 = arg1 + (sx.q(r8_1) + 2) * 0xc
                    int64_t rcx = sx.q(rdx_1.d) * 3
                    int32_t rax_8 = *r9_1
                    int32_t temp4_1 = *(arg1 + (rcx << 2))
                    bool c_1 = rax_8 u< temp4_1
                    
                    if (rax_8 == temp4_1)
                        rax_8 = r9_1[1]
                        int32_t temp6_1 = *(arg1 + (rcx << 2) + 4)
                        c_1 = rax_8 u< temp6_1
                        
                        if (rax_8 == temp6_1)
                            c_1 = r9_1[2] u< *(arg1 + (rcx << 2) + 8)
                    
                    rax_8.b = c_1
                    
                    if (rax_8.b != 0)
                        rdx_1 = zx.q(r8_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r9_2 = arg1 + sx.q(r11_1) * 0xc
                int64_t rcx_2 = sx.q(rdx_1.d) * 3
                result = zx.q(*r9_2)
                int32_t temp3_1 = *(arg1 + (rcx_2 << 2))
                bool c_2 = result.d u< temp3_1
                int64_t* r8_2 = arg1 + (rcx_2 << 2)
                
                if (result.d == temp3_1)
                    result = zx.q(r9_2[1])
                    int32_t temp5_1 = *(r8_2 + 4)
                    c_2 = result.d u< temp5_1
                    
                    if (result.d == temp5_1)
                        c_2 = r9_2[2] u< r8_2[1].d
                
                result.b = c_2
                
                if (result.b == 0)
                    break
                
                if (r9_2 != r8_2)
                    zmm1 = *r9_2
                    int32_t rcx_3 = r9_2[2]
                    *r9_2 = *r8_2
                    r9_2[2] = r8_2[1].d
                    *r8_2 = zmm1
                    r8_2[1].d = rcx_3
                
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
    void* rsi_1 = arg1 + result * 0xc
    
    do
        if (arg1 != rsi_1)
            zmm1 = *arg1
            int32_t rcx_5 = arg1[1].d
            *arg1 = *rsi_1
            result = zx.q(*(rsi_1 + 8))
            arg1[1].d = result.d
            *rsi_1 = zmm1
            *(rsi_1 + 8) = rcx_5
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* r9_3 = arg1 + (sx.q(result_1) + 2) * 0xc
                    int64_t rdx_2 = sx.q(result.d) * 3
                    int32_t rcx_11 = *r9_3
                    int32_t temp10_1 = *(arg1 + (rdx_2 << 2))
                    bool c_3 = rcx_11 u< temp10_1
                    
                    if (rcx_11 == temp10_1)
                        rcx_11 = *(r9_3 + 4)
                        int32_t temp12_1 = *(arg1 + (rdx_2 << 2) + 4)
                        c_3 = rcx_11 u< temp12_1
                        
                        if (rcx_11 == temp12_1)
                            c_3 = *(r9_3 + 8) u< *(arg1 + (rdx_2 << 2) + 8)
                    
                    rcx_11.b = c_3
                    
                    if (rcx_11.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_4 = arg1 + sx.q(r11_2) * 0xc
                int64_t rdx_4 = sx.q(result.d) * 3
                int32_t rcx_14 = *r9_4
                int32_t temp9_1 = *(arg1 + (rdx_4 << 2))
                bool c_4 = rcx_14 u< temp9_1
                void* r8_3 = arg1 + (rdx_4 << 2)
                
                if (rcx_14 == temp9_1)
                    rcx_14 = *(r9_4 + 4)
                    int32_t temp11_1 = *(r8_3 + 4)
                    c_4 = rcx_14 u< temp11_1
                    
                    if (rcx_14 == temp11_1)
                        c_4 = *(r9_4 + 8) u< *(r8_3 + 8)
                
                rcx_14.b = c_4
                
                if (rcx_14.b == 0)
                    break
                
                if (r9_4 != r8_3)
                    zmm1 = *r9_4
                    int32_t rdx_5 = *(r9_4 + 8)
                    *r9_4 = *r8_3
                    *(r9_4 + 8) = *(r8_3 + 8)
                    *r8_3 = zmm1
                    *(r8_3 + 8) = rdx_5
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0xc
    while (i s> 0)

return result
