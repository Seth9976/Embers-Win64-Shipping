// 函数: sub_141256040
// 地址: 0x141256040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
uint128_t zmm0
uint128_t zmm1
uint128_t zmm3

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rbx
        
        if (rdi_1 s< arg2)
            uint64_t rcx
            
            do
                int32_t r8_1 = r9_1 * 2
                rcx = zx.q(r8_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int64_t rdx_1 = sx.q(rcx.d) * 5
                    uint128_t var_88_1 = *(arg1 + (rdx_1 << 3) + 0x10)
                    int64_t rax_7 = (sx.q(r8_1) + 2) * 5
                    zmm3 = _mm_bsrli_si128(*(arg1 + (rdx_1 << 3)), 8)
                    zmm0 = *(arg1 + (rax_7 << 3) + 0x10)
                    int64_t rdx_2 = zmm3.q
                    uint64_t rax_8 = _mm_bsrli_si128(*(arg1 + (rax_7 << 3)), 8).q
                    
                    if (rax_8 == rdx_2)
                        rax_8 = zmm0:8.q u>> 0x20
                        uint32_t rdx_4 = (var_88_1:8.q u>> 0x20).d
                        
                        if (rax_8.d == rdx_4)
                            rax_8.b = 0
                        else
                            rax_8.b = rax_8.d s< rdx_4
                    else
                        rax_8.b = rax_8 u< rdx_2
                    
                    if (rax_8.b != 0)
                        rcx = zx.q(r8_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int64_t rdx_5 = sx.q(rcx.d) * 5
                uint128_t* r8_2 = arg1 + (rdx_5 << 3)
                zmm3 = *r8_2
                uint128_t* r9_2 = arg1 + sx.q(r9_1) * 0x28
                uint128_t var_28_1 = *(arg1 + (rdx_5 << 3) + 0x10)
                zmm0 = r9_2[1]
                zmm1 = zx.o(r9_2[2].q)
                result = _mm_bsrli_si128(*r9_2, 8).q
                int64_t rdx_7 = _mm_bsrli_si128(zmm3, 8).q
                
                if (result == rdx_7)
                    result = zmm0:8.q u>> 0x20
                    uint32_t rdx_9 = (var_28_1:8.q u>> 0x20).d
                    
                    if (result.d == rdx_9)
                        break
                    
                    result.b = result.d s< rdx_9
                else
                    result.b = result u< rdx_7
                
                if (result.b == 0)
                    break
                
                zmm3 = *r9_2
                *r9_2 = *r8_2
                r9_2[1] = r8_2[1]
                r9_2[2].q = r8_2[2].q
                r9_1 = rcx.d
                *r8_2 = zmm3
                r8_2[1] = zmm0
                r8_2[2].q = zmm1.q
            while (((rcx << 1) + 1).d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    uint128_t* rdi_3 = i * 0x28
    
    do
        int32_t r9_3 = 0
        uint128_t zmm2 = zx.o(arg1[2].q)
        zmm3 = *arg1
        uint128_t zmm4 = arg1[1]
        *arg1 = *(rdi_3 + arg1)
        arg1[1] = *(rdi_3 + arg1 + 0x10)
        arg1[2].q = *(rdi_3 + arg1 + 0x20)
        *(rdi_3 + arg1) = zmm3
        *(rdi_3 + arg1 + 0x10) = zmm4
        *(rdi_3 + arg1 + 0x20) = zmm2.q
        
        if (j s> 1)
            do
                int32_t r8_3 = r9_3 * 2
                uint64_t rdx_10 = zx.q(r8_3 + 1)
                
                if ((rdx_10 + 1).d s< j)
                    int64_t rcx_2 = sx.q(rdx_10.d) * 5
                    uint128_t var_58_2 = *(arg1 + (rcx_2 << 3) + 0x10)
                    int64_t rax_17 = (sx.q(r8_3) + 2) * 5
                    zmm3 = _mm_bsrli_si128(*(arg1 + (rcx_2 << 3)), 8)
                    zmm0 = *(arg1 + (rax_17 << 3) + 0x10)
                    int64_t rcx_3 = zmm3.q
                    uint64_t rax_18 = _mm_bsrli_si128(*(arg1 + (rax_17 << 3)), 8).q
                    
                    if (rax_18 == rcx_3)
                        rax_18 = zmm0:8.q u>> 0x20
                        uint32_t rcx_5 = (var_58_2:8.q u>> 0x20).d
                        
                        if (rax_18.d == rcx_5)
                            rax_18.b = 0
                        else
                            rax_18.b = rax_18.d s< rcx_5
                    else
                        rax_18.b = rax_18 u< rcx_3
                    
                    if (rax_18.b != 0)
                        rdx_10 = zx.q(r8_3)
                    
                    rdx_10 = zx.q(rdx_10.d + 1)
                
                int64_t rcx_6 = sx.q(rdx_10.d) * 5
                uint128_t* r8_4 = arg1 + (rcx_6 << 3)
                zmm3 = *r8_4
                uint128_t* r9_4 = arg1 + sx.q(r9_3) * 0x28
                uint128_t var_b8_2 = *(arg1 + (rcx_6 << 3) + 0x10)
                zmm0 = r9_4[1]
                zmm1 = zx.o(r9_4[2].q)
                result = _mm_bsrli_si128(*r9_4, 8).q
                int64_t rcx_8 = _mm_bsrli_si128(zmm3, 8).q
                
                if (result == rcx_8)
                    result = zmm0:8.q u>> 0x20
                    uint32_t rcx_10 = (var_b8_2:8.q u>> 0x20).d
                    
                    if (result.d == rcx_10)
                        break
                    
                    result.b = result.d s< rcx_10
                else
                    result.b = result u< rcx_8
                
                if (result.b == 0)
                    break
                
                zmm3 = *r9_4
                result = zx.q(((rdx_10 << 1) + 1).d)
                *r9_4 = *r8_4
                r9_4[1] = r8_4[1]
                r9_4[2].q = r8_4[2].q
                r9_3 = rdx_10.d
                *r8_4 = zmm3
                r8_4[1] = zmm0
                r8_4[2].q = zmm1.q
            while (result.d s< j)
        
        j -= 1
        i -= 1
        rdi_3 -= 0x28
    while (i s> 0)

return result
