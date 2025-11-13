// 函数: sub_141a2b950
// 地址: 0x141a2b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int64_t zmm2
uint128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rbx_1 = zx.q(rsi_1 + 1)
                int32_t r8 = (rbx_1 + 1).d
                
                if (r8 s< arg2)
                    if (arg4(arg1 + sx.q(r8) * 0x28, arg1 + sx.q(rbx_1.d) * 0x28) != 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* rsi_2 = arg1 + sx.q(rbx_1.d) * 0x28
                int128_t* rbp_1 = arg1 + sx.q(r14_1) * 0x28
                result = arg4(rbp_1, rsi_2)
                
                if (result.b == 0)
                    break
                
                if (rbp_1 != rsi_2)
                    zmm3 = *rbp_1
                    zmm4 = rbp_1[1]
                    zmm2 = rbp_1[2].q
                    *rbp_1 = *rsi_2
                    rbp_1[1] = rsi_2[1]
                    rbp_1[2].q = rsi_2[2].q
                    *rsi_2 = zmm3
                    rsi_2[1] = zmm4
                    rsi_2[2].q = zmm2
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    uint128_t* r12_1 = arg1 + result * 0x28
    
    do
        if (arg1 != r12_1)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm2 = arg1[2].q
            *arg1 = *r12_1
            arg1[1] = r12_1[1]
            arg1[2].q = r12_1[2].q
            *r12_1 = zmm3
            r12_1[1] = zmm4
            r12_1[2].q = zmm2
        
        int32_t r15_1 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_3 = r15_1 * 2
                rbx_2 = zx.q(rsi_3 + 1)
                int32_t r8_1 = (rbx_2 + 1).d
                
                if (r8_1 s< i)
                    if (arg4(arg1 + sx.q(r8_1) * 0x28, arg1 + sx.q(rbx_2.d) * 0x28) != 0)
                        rbx_2 = zx.q(rsi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                uint128_t* rsi_4 = arg1 + sx.q(rbx_2.d) * 0x28
                uint128_t* rbp_2 = arg1 + sx.q(r15_1) * 0x28
                result = arg4(rbp_2, rsi_4)
                
                if (result.b == 0)
                    break
                
                if (rbp_2 != rsi_4)
                    zmm3 = *rbp_2
                    zmm4 = rbp_2[1]
                    zmm2 = rbp_2[2].q
                    *rbp_2 = *rsi_4
                    rbp_2[1] = rsi_4[1]
                    rbp_2[2].q = rsi_4[2].q
                    *rsi_4 = zmm3
                    rsi_4[1] = zmm4
                    rsi_4[2].q = zmm2
                
                r15_1 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r12_1 -= 0x28
    while (i s> 0)

return result
