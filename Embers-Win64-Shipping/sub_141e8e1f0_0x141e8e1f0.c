// 函数: sub_141e8e1f0
// 地址: 0x141e8e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r14 = result.d
int64_t zmm2
uint128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rdi_1 = r14
        
        if (r15_1 s< arg2)
            do
                int32_t r10_1 = rdi_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int64_t rax_6 = (sx.q(r10_1) + 2) * 9
                    char r11_1 = *(arg1 + (rax_6 << 3) + 0x44)
                    int64_t rcx = sx.q(rdx_1.d) * 9
                    char rbx_1 = *(arg1 + (rcx << 3) + 0x44)
                    
                    if (r11_1 == rbx_1)
                        rcx.b = *(arg1 + (rax_6 << 3) + 0x18) u< *(arg1 + (rcx << 3) + 0x18)
                    else
                        char rax_9 = (*arg4).b
                        rcx.b = (rax_9 & r11_1) != 0
                        
                        if (rcx.b == (rax_9 & rbx_1) != 0)
                            rcx.b = r11_1 u< rbx_1
                    
                    if (rcx.b != 0)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t rcx_1 = sx.q(rdi_1) * 9
                char rbx_2 = *(arg1 + (rcx_1 << 3) + 0x44)
                int128_t* r11_2 = arg1 + (rcx_1 << 3)
                int64_t rcx_2 = sx.q(rdx_1.d) * 9
                char rdi_2 = *(arg1 + (rcx_2 << 3) + 0x44)
                int128_t* r10_2 = arg1 + (rcx_2 << 3)
                
                if (rbx_2 == rdi_2)
                    result = *(r10_2 + 0x18)
                    rcx_2.b = *(r11_2 + 0x18) u< result
                else
                    result = zx.q(*arg4)
                    rcx_2.b = (result.b & rbx_2) != 0
                    result.b = (result.b & rdi_2) != 0
                    
                    if (rcx_2.b == result.b)
                        rcx_2.b = rbx_2 u< rdi_2
                
                if (rcx_2.b == 0)
                    break
                
                if (r11_2 != r10_2)
                    zmm3 = *r11_2
                    zmm4 = r11_2[1]
                    zmm5 = r11_2[2]
                    zmm6 = r11_2[3]
                    zmm2 = r11_2[4].q
                    *r11_2 = *r10_2
                    r11_2[1] = r10_2[1]
                    r11_2[2] = r10_2[2]
                    r11_2[3] = r10_2[3]
                    r11_2[4].q = r10_2[4].q
                    *r10_2 = zmm3
                    r10_2[1] = zmm4
                    r10_2[2] = zmm5
                    r10_2[3] = zmm6
                    r10_2[4].q = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                rdi_1 = rdx_1.d
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = r14
        r14 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    uint128_t* r14_1 = arg1 + result * 0x48
    
    do
        if (arg1 != r14_1)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm5 = arg1[2]
            zmm6 = arg1[3]
            zmm2 = arg1[4].q
            *arg1 = *r14_1
            arg1[1] = r14_1[1]
            arg1[2] = r14_1[2]
            arg1[3] = r14_1[3]
            arg1[4].q = r14_1[4].q
            *r14_1 = zmm3
            r14_1[1] = zmm4
            r14_1[2] = zmm5
            r14_1[3] = zmm6
            r14_1[4].q = zmm2
        
        int32_t rdi_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = rdi_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int64_t rcx_7 = (sx.q(result_1) + 2) * 9
                    char r11_3 = *(arg1 + (rcx_7 << 3) + 0x44)
                    int64_t rdx_2 = sx.q(result.d) * 9
                    char rbx_3 = *(arg1 + (rdx_2 << 3) + 0x44)
                    
                    if (r11_3 == rbx_3)
                        rdx_2.b = *(arg1 + (rcx_7 << 3) + 0x18) u< *(arg1 + (rdx_2 << 3) + 0x18)
                    else
                        char rcx_10 = (*arg4).b
                        rdx_2.b = (rcx_10 & r11_3) != 0
                        
                        if (rdx_2.b == (rcx_10 & rbx_3) != 0)
                            rdx_2.b = r11_3 u< rbx_3
                    
                    if (rdx_2.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rdx_3 = sx.q(rdi_3) * 9
                char rbx_4 = *(arg1 + (rdx_3 << 3) + 0x44)
                uint128_t* r11_4 = arg1 + (rdx_3 << 3)
                int64_t rdx_4 = sx.q(result.d) * 9
                char rdi_4 = *(arg1 + (rdx_4 << 3) + 0x44)
                uint128_t* r10_3 = arg1 + (rdx_4 << 3)
                
                if (rbx_4 == rdi_4)
                    rdx_4.b = *(r11_4 + 0x18) u< *(r10_3 + 0x18)
                else
                    char rcx_14 = (*arg4).b
                    rdx_4.b = (rcx_14 & rbx_4) != 0
                    
                    if (rdx_4.b == (rcx_14 & rdi_4) != 0)
                        rdx_4.b = rbx_4 u< rdi_4
                
                if (rdx_4.b == 0)
                    break
                
                if (r11_4 != r10_3)
                    zmm3 = *r11_4
                    zmm4 = r11_4[1]
                    zmm5 = r11_4[2]
                    zmm6 = r11_4[3]
                    zmm2 = r11_4[4].q
                    *r11_4 = *r10_3
                    r11_4[1] = r10_3[1]
                    r11_4[2] = r10_3[2]
                    r11_4[3] = r10_3[3]
                    r11_4[4].q = r10_3[4].q
                    *r10_3 = zmm3
                    r10_3[1] = zmm4
                    r10_3[2] = zmm5
                    r10_3[3] = zmm6
                    r10_3[4].q = zmm2
                
                rdi_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        r14_1 -= 0x48
    while (i s> 0)

return result
