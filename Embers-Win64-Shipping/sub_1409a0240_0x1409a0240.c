// 函数: sub_1409a0240
// 地址: 0x1409a0240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg2 + 0x1c))
int32_t i_1 = 0
arg3[3].d = 1
*(arg3 + 0x1c) = r11.d
arg3[4].d = r11.d
*(arg3 + 0x24) = 1
int32_t* result = *arg3
float result_1 = 1f f/ _mm_cvtepi32_ps(zx.o(r11.d * r11.d)).d
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o((r11 - 2).d)).d f/ _mm_cvtepi32_ps(zx.o(r11.d)).d
*result = zmm1.d

if (r11.d s> 0 && r11.d u>= 4)
    int64_t rbx_1 = arg3[1]
    int64_t rcx = sx.q((r11 - 1).d)
    int64_t rsi_1 = arg3[2]
    int64_t r8 = rbx_1 + (rcx << 2)
    result = rsi_1 + (rcx << 2)
    
    if ((rsi_1 u> r8 || result u< rbx_1) && (rsi_1 u> &arg3[1] || result u< &arg3[1])
            && (rsi_1 u> &arg3[2] || result u< &arg3[2]) && (rbx_1 u> &arg3[1] || r8 u< &arg3[1])
            && (rbx_1 u> &arg3[2] || r8 u< &arg3[2]))
        int32_t rax_5 = r11.d & 0x80000003
        
        if (rax_5 s< 0)
            rax_5 = ((rax_5 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_2 = r11.d - rax_5
        
        do
            i_1 += 4
        while (i_1 s< rcx_2)
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_2 + 3)
        result = sx.q(result_1)
        int64_t r8_2 = sx.q((temp1_1 + (temp0_3 & 3)) s>> 2) << 4
        int64_t rcx_5
        int64_t rdi_3
        rdi_3, rcx_5 = __memfill_u32(rbx_1, result.d, r8_2 u>> 2)
        int64_t rcx_7
        int64_t rdi_5
        rdi_5, rcx_7 = __memfill_u32(rsi_1, result.d, r8_2 u>> 2)

int64_t i = sx.q(i_1)

if (i s< r11)
    result = r11 - i
    
    if (result s>= 4)
        do
            arg3[1][i] = result_1
            arg3[2][i] = result_1
            arg3[1][i + 1] = result_1
            arg3[2][i + 1] = result_1
            arg3[2][i] = result_1
            arg3[2 + 1][i] = result_1
            arg3[1][i + 3] = result_1
            result = arg3[2]
            result[i + 3] = result_1
            i += 4
        while (i s< r11 - 3)
    
    for (; i s< r11; i += 1)
        arg3[1][i] = result_1
        result = arg3[2]
        result[i] = result_1

return result
