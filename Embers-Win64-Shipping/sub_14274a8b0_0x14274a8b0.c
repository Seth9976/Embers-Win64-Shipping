// 函数: sub_14274a8b0
// 地址: 0x14274a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rbx = 0
int32_t r11 = *(arg1 + 0x80)
int64_t r8 = *(arg1 + 0x50)
uint64_t rdx = zx.q(*rax)
int32_t rbp = *(arg1 + 0x40)
*(arg1 + 0x10) = &rax[1]
int64_t r9 = rdx * 0x70
uint64_t rdi_1 = zx.q(zx.d(rax[1]) * r11)
*(arg1 + 0x10) = &rax[2]
uint32_t r14 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rbp + 3)
int128_t* rdi_2 = rdi_1 + *(arg1 + 0x70)
int32_t result = (temp2 + (temp1 & 3)) s>> 2
int64_t r14_2 = zx.q(r14 * r11) + *(arg1 + 0x70)
int64_t result_1 = sx.q(result)

if (result s> 0)
    char* rsi_1 = nullptr
    
    do
        int128_t zmm0 = *rdi_2
        rdi_2 = &rdi_2[1]
        int32_t rax_5 = rbp
        
        if (rbp s>= 4)
            rax_5 = 4
        
        rbp -= 4
        char temp0_2 = _mm_movemask_ps(
            __andps_xmmxud_memxud(data_143f87690 ^ zmm0, (&data_143f87950)[sx.q(rax_5)])
            ^ data_143f87690)
        int64_t r10_2 = sx.q(temp0_2)
        rsi_1[r14_2] = temp0_2
        rsi_1 = &rsi_1[1]
        int64_t r10_3 = r10_2 - (r10_2 u>> 1 & 0x5555555555555555)
        int64_t rdx_8 = (r10_3 u>> 2 & 0x3333333333333333) + (r10_3 & 0x3333333333333333)
        result = (((((rdx_8 u>> 4) + rdx_8) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38).d
        rbx += result
    while (rsi_1 s< result_1)
    
    if (rbx != 0)
        int32_t rax_15 = *(r9 + r8 + 0x10)
        *(r9 + r8 + 0x10) += rbx
        result = rax_15 + 1
        *(arg1 + 0xa4) = result

*(arg1 + 0xa8) = rbx

if (rbx != 0 && *(arg1 + 0x40) != rbx)
    *(arg1 + 0xac) = 0
    return result

*(arg1 + 0xac) = 1
return result
