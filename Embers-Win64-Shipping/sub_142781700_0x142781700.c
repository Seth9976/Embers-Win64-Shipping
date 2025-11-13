// 函数: sub_142781700
// 地址: 0x142781700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r10_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                zmm6 = *(arg4 + 4)
                uint64_t r8 = zx.q(((r10_1 << 1) + 1).d)
                int32_t rdx_1 = (r8 + 1).d
                
                if (rdx_1 s< arg2)
                    zmm4 = *arg4
                    zmm3 = *(arg4 + 8)
                    int32_t* rcx = sx.q(rdx_1) * 0x58
                    zmm5.d = zmm6.d f- *(rcx + arg1 + 4)
                    zmm2.d = zmm4.d f- *(rcx + arg1)
                    zmm0.d = zmm3.d f- *(rcx + arg1 + 8)
                    int32_t* rcx_1 = sx.q(r8.d) * 0x58
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm5.d = zmm5.d f+ zmm2.d
                    zmm1.d = zmm6.d f- *(rcx_1 + arg1 + 4)
                    zmm4.d = zmm4.d f- *(rcx_1 + arg1)
                    zmm3.d = zmm3.d f- *(rcx_1 + arg1 + 8)
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm1.d = zmm1.d f+ zmm4.d
                    zmm1.d = zmm1.d f+ zmm3.d
                    
                    if (zmm5.d f< zmm1.d)
                        rdx_1 = r8.d
                    
                    r8 = zx.q(rdx_1)
                
                zmm3 = *arg4
                zmm2 = *(arg4 + 8)
                int32_t* rdx_3 = sx.q(r10_1.d) * 0x58 + arg1
                zmm4.d = zmm6.d f- rdx_3[1]
                zmm1.d = zmm3.d f- *rdx_3
                zmm0.d = zmm2.d f- rdx_3[2]
                result = sx.q(r8.d) * 0x58 + arg1
                zmm4.d = zmm4.d f* zmm4.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm6.d = zmm6.d f- *(result + 4)
                zmm3.d = zmm3.d f- *result
                zmm2.d = zmm2.d f- *(result + 8)
                zmm4.d = zmm4.d f+ zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm6.d = zmm6.d f+ zmm3.d
                zmm6.d = zmm6.d f+ zmm2.d
                
                if (zmm4.d f>= zmm6.d)
                    break
                
                if (rdx_3 != result)
                    zmm3 = *rdx_3
                    zmm4 = *(rdx_3 + 0x10)
                    zmm5 = *(rdx_3 + 0x20)
                    zmm6 = *(rdx_3 + 0x30)
                    zmm7 = *(rdx_3 + 0x40)
                    zmm2 = zx.o(*(rdx_3 + 0x50))
                    *rdx_3 = *result
                    *(rdx_3 + 0x10) = *(result + 0x10)
                    *(rdx_3 + 0x20) = *(result + 0x20)
                    *(rdx_3 + 0x30) = *(result + 0x30)
                    *(rdx_3 + 0x40) = *(result + 0x40)
                    *(rdx_3 + 0x50) = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2.q
                
                result = zx.q(((r8 << 1) + 1).d)
                r10_1 = zx.q(r8.d)
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
            zmm2 = zx.o(arg1[5].q)
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
            *(rdi_2 + 0x50) = zmm2.q
        
        uint64_t r11_1 = 0
        
        if (i s> 1)
            do
                zmm6 = *(arg4 + 4)
                uint64_t r8_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t rdx_4 = (r8_1 + 1).d
                
                if (rdx_4 s< i)
                    zmm4 = *arg4
                    zmm3 = *(arg4 + 8)
                    int32_t* rcx_2 = sx.q(rdx_4) * 0x58
                    zmm5.d = zmm6.d f- *(rcx_2 + arg1 + 4)
                    zmm2.d = zmm4.d f- *(rcx_2 + arg1)
                    zmm0.d = zmm3.d f- *(rcx_2 + arg1 + 8)
                    int32_t* rcx_3 = sx.q(r8_1.d) * 0x58
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm5.d = zmm5.d f+ zmm2.d
                    zmm1.d = zmm6.d f- *(rcx_3 + arg1 + 4)
                    zmm4.d = zmm4.d f- *(rcx_3 + arg1)
                    zmm3.d = zmm3.d f- *(rcx_3 + arg1 + 8)
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm1.d = zmm1.d f+ zmm4.d
                    zmm1.d = zmm1.d f+ zmm3.d
                    
                    if (zmm5.d f< zmm1.d)
                        rdx_4 = r8_1.d
                    
                    r8_1 = zx.q(rdx_4)
                
                zmm3 = *arg4
                zmm2 = *(arg4 + 8)
                int128_t* rdx_6 = sx.q(r11_1.d) * 0x58 + arg1
                zmm4.d = zmm6.d f- *(rdx_6 + 4)
                zmm1.d = zmm3.d f- *rdx_6
                zmm0.d = zmm2.d f- *(rdx_6 + 8)
                result = sx.q(r8_1.d) * 0x58 + arg1
                zmm4.d = zmm4.d f* zmm4.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm6.d = zmm6.d f- *(result + 4)
                zmm3.d = zmm3.d f- *result
                zmm2.d = zmm2.d f- *(result + 8)
                zmm4.d = zmm4.d f+ zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm6.d = zmm6.d f+ zmm3.d
                zmm6.d = zmm6.d f+ zmm2.d
                
                if (zmm4.d f>= zmm6.d)
                    break
                
                if (rdx_6 != result)
                    zmm3 = *rdx_6
                    zmm4 = rdx_6[1]
                    zmm5 = rdx_6[2]
                    zmm6 = rdx_6[3]
                    zmm7 = rdx_6[4]
                    zmm2 = zx.o(rdx_6[5].q)
                    *rdx_6 = *result
                    rdx_6[1] = *(result + 0x10)
                    rdx_6[2] = *(result + 0x20)
                    rdx_6[3] = *(result + 0x30)
                    rdx_6[4] = *(result + 0x40)
                    rdx_6[5].q = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2.q
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r11_1 = zx.q(r8_1.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x58
    while (i s> 0)

return result
