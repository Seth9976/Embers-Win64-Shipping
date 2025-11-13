// 函数: sub_1409a0410
// 地址: 0x1409a0410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_2 = 0.0625f
int64_t rbp = sx.q(*(arg2 + 0x1c))
int32_t i_1 = 0
int128_t zmm9 = 0x3f200000
float result_1 = 0.0625f
arg3[3].d = 1
*(arg3 + 0x1c) = rbp.d
arg3[4].d = 0
*(arg3 + 0x24) = 0

if (rbp.d != 6)
    int128_t zmm8
    zmm8.d = float.s(rbp.d)
    int128_t zmm6
    zmm6.d = 1f f/ zmm8.d
    float zmm0_1 = cosf(zmm6.d * 6.28318548f) * 0.25f + 0.375f
    result_2 = (0.625f - zmm0_1 * zmm0_1) f* zmm6.d
    zmm8.d = zmm8.d f* result_2
    result_1 = result_2
    zmm9.d = 1f f- zmm8.d

int64_t result = *arg3
*result = zmm9.d

if (rbp.d s> 0 && rbp.d u>= 4)
    int64_t rdi_1 = arg3[1]
    result = rdi_1 + (sx.q((rbp - 1).d) << 2)
    
    if (rdi_1 u> &arg3[1] || result u< &arg3[1])
        int32_t rax_2 = rbp.d & 0x80000003
        
        if (rax_2 s< 0)
            rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_2 = rbp.d - rax_2
        
        do
            i_1 += 4
        while (i_1 s< rcx_2)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2 + 3)
        result = sx.q(result_1)
        int64_t rcx_6
        int64_t rdi_2
        rdi_2, rcx_6 =
            __memfill_u32(rdi_1, result.d, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2)

int64_t i = sx.q(i_1)

if (i s< rbp)
    result = rbp - i
    
    if (result s>= 4)
        do
            *(arg3[1] + (i << 2)) = result_2
            *(arg3[1] + (i << 2) + 4) = result_2
            *(arg3[1] + (i << 2) + 8) = result_2
            result = arg3[1]
            *(result + (i << 2) + 0xc) = result_2
            i += 4
        while (i s< rbp - 3)
    
    for (; i s< rbp; i += 1)
        result = arg3[1]
        *(result + (i << 2)) = result_2

return result
