// 函数: sub_140960430
// 地址: 0x140960430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x688)
int32_t zmm0 = *(arg1 + 0x720)
int32_t rax = 0
float zmm2 = *(arg1 + 0x718)
void* rdx = *(arg1 + 0x6e8)

if (0 == *(rdx + 0x40))
    *(rdx + 0x40) = 0
else
    rax = *(rdx + 0x40)

uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(r8)).d f* zmm0
zmm1.d = zmm1.d f* (zmm2 + zmm2)
zmm1.d = zmm1.d f- 0.5f
int32_t rsi_1 = rax - (int.d(zmm1.d) s>> 1)
zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x688))).d f* data_143989b0c
zmm1.d = zmm1.d f* *(arg1 + 0x718)
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f- 0.5f
uint64_t result = zx.q(int.d(zmm1.d) s>> 1)

if (rsi_1 s> result.d)
    int64_t* rbx_1 = *(arg1 + 0x6e8)
    int32_t rdi_1 = 0
    
    if (rsi_1 != 0)
        do
            void* rcx_2 = *rbx_1
            
            if (rcx_2 == 0)
                return result
            
            result = *(rcx_2 + 0x28)
            
            if (result u<= rbx_1[1])
                int32_t rdx_1 = *(rcx_2 + 0x14)
                int32_t rax_3 = rsi_1 - rdi_1
                
                if (rdx_1 s> rax_3)
                    rdi_1 = rsi_1
                    *(rcx_2 + 0x14) = rdx_1 - rax_3
                    rbx_1[1] += sx.q(rax_3)
                    rbx_1[2].d = 0
                    int32_t result_1 = *(rbx_1 + 0x14)
                    *(rbx_1 + 0x14) = 0
                    result = zx.q(result_1)
                else
                    *(rbx_1 + 0x14)
                    *(rbx_1 + 0x14) = 0
                    void* rbp_1 = *rbx_1
                    uint64_t rcx_3 = zx.q(*(rbp_1 + 0x14))
                    rbx_1[1] += rcx_3
                    rdi_1 += rcx_3.d
                    int64_t* rax_5 = j_sub_140a82f30(0x10)
                    
                    if (rax_5 != 0)
                        *rax_5 = 0
                        rax_5[1].d = *(rbp_1 + 0x20)
                        int64_t** rcx_5 = rbx_1[6]
                        rbx_1[6] = rax_5
                        *rcx_5 = rax_5
                    
                    result = *rbx_1
                    *rbx_1 = *(result + 0x18)
            else
                rbx_1[1] = result
        while (rdi_1 u< rsi_1)
    
    result = zx.q(rbx_1[8].d)
    rbx_1[8].d += rbx_1[2].d - rsi_1

return result
