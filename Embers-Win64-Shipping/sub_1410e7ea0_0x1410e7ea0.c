// 函数: sub_1410e7ea0
// 地址: 0x1410e7ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int64_t zmm2
uint128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rbp
        
        if (r15_1 s< arg2)
            do
                int32_t r9_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r9_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int64_t rax_6 = (sx.q(r9_1) + 2) * 5
                    int64_t* rdi_1 = *(arg1 + (rax_6 << 3) + 0x10)
                    void* r8_1 = arg1 + (rax_6 << 3)
                    int32_t r10_1 = *(rdi_1 + 0x44)
                    int64_t rcx = sx.q(rdx_1.d) * 5
                    void* rbx_1 = *(arg1 + (rcx << 3) + 0x10)
                    uint64_t rax_8 = zx.q(*(rbx_1 + 0x44))
                    
                    if (rax_8.d == r10_1)
                        rax_8 = zx.q(*(arg1 + (rcx << 3) + 0x24))
                        char r10_2 = *(r8_1 + 0x24)
                        
                        if (rax_8.b == r10_2)
                            rax_8 = zx.q(*(arg1 + (rcx << 3) + 0x20))
                            int32_t temp4_1 = *(r8_1 + 0x20)
                            
                            if (rax_8.d != temp4_1)
                                rax_8.b = rax_8.d s< temp4_1
                            else
                                rax_8 = *(arg1 + (rcx << 3))
                                int64_t temp6_1 = *r8_1
                                
                                if (rax_8 == temp6_1)
                                    rax_8.b = *rbx_1 s< *rdi_1
                                else
                                    rax_8.b = rax_8 u< temp6_1
                        else
                            rax_8.b = rax_8.b u< r10_2
                    else
                        rax_8.b = rax_8.d s> r10_1
                    
                    if (rax_8.b != 0)
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t rcx_1 = sx.q(r11_1) * 5
                uint64_t* r11_2 = *(arg1 + (rcx_1 << 3) + 0x10)
                int128_t* r9_2 = arg1 + (rcx_1 << 3)
                int64_t rcx_2 = sx.q(rdx_1.d) * 5
                void* r10_3 = *(arg1 + (rcx_2 << 3) + 0x10)
                int128_t* r8_2 = arg1 + (rcx_2 << 3)
                int32_t rcx_3 = *(r11_2 + 0x44)
                result = zx.q(*(r10_3 + 0x44))
                
                if (result.d == rcx_3)
                    result = zx.q(*(r8_2 + 0x24))
                    char rcx_4 = *(r9_2 + 0x24)
                    
                    if (result.b == rcx_4)
                        result = zx.q(r8_2[2].d)
                        int32_t temp3_1 = r9_2[2].d
                        
                        if (result.d != temp3_1)
                            result.b = result.d s< temp3_1
                        else
                            result = *r8_2
                            int64_t temp5_1 = *r9_2
                            
                            if (result == temp5_1)
                                result.b = *r10_3 s< *r11_2
                            else
                                result.b = result u< temp5_1
                    else
                        result.b = result.b u< rcx_4
                else
                    result.b = result.d s> rcx_3
                
                if (result.b == 0)
                    break
                
                if (r9_2 != r8_2)
                    zmm3 = *r9_2
                    zmm4 = r9_2[1]
                    zmm2 = r9_2[2].q
                    *r9_2 = *r8_2
                    r9_2[1] = r8_2[1]
                    r9_2[2].q = r8_2[2].q
                    *r8_2 = zmm3
                    r8_2[1] = zmm4
                    r8_2[2].q = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = rdx_1.d
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    uint128_t* rbp_1 = arg1 + result * 0x28
    
    do
        if (arg1 != rbp_1)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm2 = arg1[2].q
            *arg1 = *rbp_1
            arg1[1] = rbp_1[1]
            arg1[2].q = rbp_1[2].q
            *rbp_1 = zmm3
            rbp_1[1] = zmm4
            rbp_1[2].q = zmm2
        
        int32_t r11_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int64_t rcx_9 = (sx.q(result_1) + 2) * 5
                    uint64_t* rsi_1 = *(arg1 + (rcx_9 << 3) + 0x10)
                    void* r8_3 = arg1 + (rcx_9 << 3)
                    int32_t r10_4 = *(rsi_1 + 0x44)
                    int64_t rdx_2 = sx.q(result.d) * 5
                    void* rdi_2 = *(arg1 + (rdx_2 << 3) + 0x10)
                    uint64_t rcx_11 = zx.q(*(rdi_2 + 0x44))
                    
                    if (rcx_11.d == r10_4)
                        rcx_11 = zx.q(*(arg1 + (rdx_2 << 3) + 0x24))
                        char r10_5 = *(r8_3 + 0x24)
                        
                        if (rcx_11.b == r10_5)
                            rcx_11 = zx.q(*(arg1 + (rdx_2 << 3) + 0x20))
                            int32_t temp8_1 = *(r8_3 + 0x20)
                            
                            if (rcx_11.d != temp8_1)
                                rcx_11.b = rcx_11.d s< temp8_1
                            else
                                rcx_11 = *(arg1 + (rdx_2 << 3))
                                int64_t temp10_1 = *r8_3
                                
                                if (rcx_11 == temp10_1)
                                    rcx_11.b = *rdi_2 s< *rsi_1
                                else
                                    rcx_11.b = rcx_11 u< temp10_1
                        else
                            rcx_11.b = rcx_11.b u< r10_5
                    else
                        rcx_11.b = rcx_11.d s> r10_4
                    
                    if (rcx_11.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rdx_3 = sx.q(r11_3) * 5
                uint64_t* r11_4 = *(arg1 + (rdx_3 << 3) + 0x10)
                uint128_t* r9_3 = arg1 + (rdx_3 << 3)
                int64_t rdx_4 = sx.q(result.d) * 5
                void* r10_6 = *(arg1 + (rdx_4 << 3) + 0x10)
                uint128_t* r8_4 = arg1 + (rdx_4 << 3)
                int32_t rdx_5 = *(r11_4 + 0x44)
                uint64_t rcx_14 = zx.q(*(r10_6 + 0x44))
                
                if (rcx_14.d == rdx_5)
                    rcx_14 = zx.q(*(r8_4 + 0x24))
                    char rdx_6 = *(r9_3 + 0x24)
                    
                    if (rcx_14.b == rdx_6)
                        rcx_14 = zx.q(r8_4[2].d)
                        int32_t temp7_1 = r9_3[2].d
                        
                        if (rcx_14.d != temp7_1)
                            rcx_14.b = rcx_14.d s< temp7_1
                        else
                            rcx_14 = *r8_4
                            int64_t temp9_1 = *r9_3
                            
                            if (rcx_14 == temp9_1)
                                rcx_14.b = *r10_6 s< *r11_4
                            else
                                rcx_14.b = rcx_14 u< temp9_1
                    else
                        rcx_14.b = rcx_14.b u< rdx_6
                else
                    rcx_14.b = rcx_14.d s> rdx_5
                
                if (rcx_14.b == 0)
                    break
                
                if (r9_3 != r8_4)
                    zmm3 = *r9_3
                    zmm4 = r9_3[1]
                    zmm2 = r9_3[2].q
                    *r9_3 = *r8_4
                    r9_3[1] = r8_4[1]
                    r9_3[2].q = r8_4[2].q
                    *r8_4 = zmm3
                    r8_4[1] = zmm4
                    r8_4[2].q = zmm2
                
                r11_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbp_1 -= 0x28
    while (i s> 0)

return result
