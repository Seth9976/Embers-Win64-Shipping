// 函数: sub_141c64c30
// 地址: 0x141c64c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = *(arg1 + 0x58) * *(arg1 + 0x54)
void* rcx_3 = ((sx.q(*(arg1 + 0x50)) + 3) << 4) + arg1
int32_t rax = *(rcx_3 + 0xc)
*(rcx_3 + 8) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(rcx_3, 0)

void* rbx_3 = ((sx.q(*(arg1 + 0x50)) + 3) << 4) + arg1
int64_t r14 = sx.q(*(rbx_3 + 8))
int32_t rax_1 = r14.d + rsi_1
*(rbx_3 + 8) = rax_1

if (rax_1 s> *(rbx_3 + 0xc))
    sub_1406105e0(rbx_3)

memset(*rbx_3 + (r14 << 2), 0, sx.q(rsi_1) << 2)
int64_t i = 0
int64_t r9 = *(arg1 + (sx.q(*(arg1 + 0x50)) + 3) * 0x10)
int64_t result

do
    int64_t rax_7 = (i + 1) * 2
    int32_t* r15_1 = *(arg1 + (rax_7 << 3))
    result = sx.q(*(arg1 + (rax_7 << 3) + 8))
    void* r12_1 = &r15_1[result * 2]
    
    if (r15_1 != r12_1)
        int32_t* r10_1 = &r15_1[1]
        
        do
            void* r11_1 = *(arg1 + 0x60)
            int64_t rbp_1 = sx.q(*r15_1) * 0x3f0
            int64_t r14_1 = *(r11_1 + 0xc8)
            int64_t rbx_4 = sx.q(*(r14_1 + rbp_1 + 0xb8))
            int64_t r8_5
            
            if (rbx_4.d != 0xffffffff)
                int32_t* r8_4
                
                if (*(r11_1 + 0xf0) == *(r11_1 + 0x11c))
                label_141c64d8a:
                    r8_4 = nullptr
                else
                    void* r8_2 = r11_1 + 0x120
                    void* rdx_2 = *(r8_2 + 8)
                    
                    if (rdx_2 != 0)
                        r8_2 = rdx_2
                    
                    int32_t rax_10 = *(r8_2 + (((sx.q(*(r11_1 + 0x130)) - 1) & rbx_4) << 2))
                    
                    if (rax_10 == 0xffffffff)
                    label_141c64d8a_1:
                        r8_4 = nullptr
                    else
                        while (true)
                            r8_4 = sx.q(rax_10) * 0x78 + *(r11_1 + 0xe8)
                            
                            if (*r8_4 == rbx_4.d)
                                break
                            
                            rax_10 = r8_4[0x1c]
                            
                            if (rax_10 == 0xffffffff)
                                goto label_141c64d8a_2
                        
                        if (rax_10 == 0xffffffff)
                        label_141c64d8a_2:
                            r8_4 = nullptr
                
                void* rcx_10 = &r8_4[2]
                int64_t* rax_11 = 0x30
                
                if (r8_4 == 0)
                    rcx_10 = nullptr
                
                if (*(rcx_10 + 0x50) == 0)
                    rax_11 = 0x40
                
                r8_5 = *(rax_11 + rcx_10)
            else if (i != 1)
                r8_5 = *(r14_1 + rbp_1 + 0x40)
            else
                r8_5 = *(r14_1 + rbp_1 + 0x50)
            
            int64_t rdx_3 = sx.q(*(r11_1 + 0x1b0))
            result = zx.q(*(r14_1 + rbp_1 + 0x3d4))
            int32_t rsi_4 = rdx_3.d * result.d
            int64_t r11_2 = sx.q(rsi_4)
            float zmm1[0x4]
            
            if (result.d == 1)
                int32_t rdx_4 = *(arg1 + 0x54)
                
                if (rdx_4 != 2)
                    goto label_141c64e97
                
                result = 0
                int64_t rbx_5 = 0
                
                if (rsi_4 s> 0)
                    do
                        zmm1 = *(r8_5 + (rbx_5 << 2))
                        int32_t rcx_11 = 0
                        zmm1[0] = zmm1[0] f* *r10_1
                        zmm1[0] = zmm1[0] * 0.5f
                        
                        if (rdx_4 s> 0)
                            do
                                rcx_11 += 1
                                zmm1[0] = zmm1[0] f+ *(r9 + (result << 2))
                                *(r9 + (result << 2)) = zmm1[0]
                                result += 1
                                rdx_4 = *(arg1 + 0x54)
                            while (rcx_11 s< rdx_4)
                        
                        rbx_5 += 1
                    while (rbx_5 s< r11_2)
            else
                float zmm0_1[0x4]
                
                if (result.d != 2 || *(arg1 + 0x54) != 1)
                label_141c64e97:
                    int64_t j = 0
                    
                    if (rsi_4 s> 0 && rsi_4 u>= 0x10)
                        float zmm3[0x4] = *r10_1
                        int64_t rcx_13 = sx.q(rsi_4 - 1)
                        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                        result = r8_5 + (rcx_13 << 2)
                        int64_t rdx_5 = r9 + (rcx_13 << 2)
                        
                        if ((r9 u> result || rdx_5 u< r8_5) && (r9 u> r10_1 || rdx_5 u< r10_1))
                            int32_t rax_14 = rsi_4 & 0x8000000f
                            
                            if (rax_14 s< 0)
                                rax_14 = ((rax_14 - 1) | 0xfffffff0) + 1
                            
                            result = r9 + 0x10
                            int128_t* rcx_15 = r8_5 - r9
                            
                            do
                                zmm0_1 = *(result - 0x10)
                                j += 0x10
                                float zmm2[0x4] = *(rcx_15 + result)
                                float temp0_2[0x4] = _mm_mul_ps(*(rcx_15 + result - 0x10), temp0_1)
                                float temp0_3[0x4] = _mm_mul_ps(zmm2, temp0_1)
                                *(result - 0x10) = _mm_add_ps(temp0_2, zmm0_1)
                                zmm1 = *(rcx_15 + result + 0x10)
                                float temp0_5[0x4] = _mm_add_ps(temp0_3, *result)
                                float temp0_6[0x4] = _mm_mul_ps(zmm1, temp0_1)
                                *result = temp0_5
                                *(result + 0x10) = _mm_add_ps(temp0_6, *(result + 0x10))
                                *(result + 0x20) = _mm_add_ps(
                                    _mm_mul_ps(*(rcx_15 + result + 0x20), temp0_1), 
                                    *(result + 0x20))
                                result += 0x40
                            while (j s< sx.q(rsi_4 - rax_14))
                    
                    if (j s< r11_2)
                        result = r11_2 - j
                        
                        if (result s>= 4)
                            result = r9 + 4 + (j << 2)
                            int64_t rdx_8 = r8_5 - r9
                            int64_t j_3 = ((r11_2 - j - 4) u>> 2) + 1
                            j += j_3 << 2
                            int64_t j_1
                            
                            do
                                zmm0_1 = *(rdx_8 + result - 4)
                                zmm0_1[0] = zmm0_1[0] f* *r10_1
                                zmm0_1[0] = zmm0_1[0] f+ *(result - 4)
                                *(result - 4) = zmm0_1[0]
                                zmm1 = *(result + rdx_8)
                                zmm1[0] = zmm1[0] f* *r10_1
                                zmm1[0] = zmm1[0] f+ *result
                                *result = zmm1[0]
                                zmm0_1 = *(rdx_8 + result + 4)
                                zmm0_1[0] = zmm0_1[0] f* *r10_1
                                zmm0_1[0] = zmm0_1[0] f+ *(result + 4)
                                *(result + 4) = zmm0_1[0]
                                zmm1 = *(rdx_8 + result + 8)
                                zmm1[0] = zmm1[0] f* *r10_1
                                zmm1[0] = zmm1[0] f+ *(result + 8)
                                *(result + 8) = zmm1[0]
                                result += 0x10
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        if (j s< r11_2)
                            result = r9 + (j << 2)
                            int64_t j_4 = r11_2 - j
                            int64_t j_2
                            
                            do
                                zmm0_1 = *(result + r8_5 - r9)
                                zmm0_1[0] = zmm0_1[0] f* *r10_1
                                zmm0_1[0] = zmm0_1[0] f+ *result
                                *result = zmm0_1[0]
                                result += 4
                                j_2 = j_4
                                j_4 -= 1
                            while (j_2 != 1)
                else
                    int64_t rcx_12 = 0
                    result = 0
                    
                    if (rdx_3 s> 0)
                        do
                            zmm0_1 = *(r8_5 + (rcx_12 << 2) + 4)
                            zmm0_1[0] = zmm0_1[0] f+ *(r8_5 + (rcx_12 << 2))
                            rcx_12 += 2
                            zmm0_1[0] = zmm0_1[0] f* *r10_1
                            zmm0_1[0] = zmm0_1[0] * 0.5f
                            zmm0_1[0] = zmm0_1[0] f+ *(r9 + (result << 2))
                            *(r9 + (result << 2)) = zmm0_1[0]
                            result += 1
                        while (result s< rdx_3)
            r15_1 = &r15_1[2]
            r10_1 = &r10_1[2]
        while (r15_1 != r12_1)
    
    i += 1
while (i s< 2)

return result
