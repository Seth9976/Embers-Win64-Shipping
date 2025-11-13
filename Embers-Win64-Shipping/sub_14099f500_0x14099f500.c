// 函数: sub_14099f500
// 地址: 0x14099f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 0x1c))
int32_t i_1 = 0
int32_t* rdi = *arg3
arg3[3].d = 1
*(arg3 + 0x1c) = rbp.d
arg3[4].d = 0
*(arg3 + 0x24) = 0
int64_t result

if (rbp.d != 6)
    int128_t zmm8
    zmm8.d = float.s(rbp.d)
    int128_t zmm6
    zmm6.d = 1f f/ zmm8.d
    float result_1
    result_1, result = cosf(zmm6.d * 6.28318548f)
    result_1 = result_1 * 0.25f + 0.375f
    result_1 = 1f / (0.375f / ((0.625f - result_1 * result_1) f* zmm6.d) f+ zmm8.d)
    zmm8.d = zmm8.d f* result_1
    int128_t zmm7
    zmm7.d = 1f f- zmm8.d
    *rdi = zmm7.d
    
    if (rbp.d s> 0 && rbp.d u>= 4)
        int64_t rdi_1 = arg3[1]
        result = rdi_1 + (sx.q((rbp - 1).d) << 2)
        
        if (rdi_1 u> &arg3[1] || result u< &arg3[1])
            int32_t rax_7 = rbp.d & 0x80000003
            
            if (rax_7 s< 0)
                rax_7 = ((rax_7 - 1) | 0xfffffffc) + 1
            
            int32_t rcx_2 = rbp.d - rax_7
            
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
                *(arg3[1] + (i << 2)) = result_1
                *(arg3[1] + (i << 2) + 4) = result_1
                *(arg3[1] + (i << 2) + 8) = result_1
                result = arg3[1]
                *(result + (i << 2) + 0xc) = result_1
                i += 4
            while (i s< rbp - 3)
        
        for (; i s< rbp; i += 1)
            result = arg3[1]
            *(result + (i << 2)) = result_1
else
    *rdi = 0x3f000000
    *arg3[1] = 0x3daaaaab
    *(arg3[1] + 4) = 0x3daaaaab
    *(arg3[1] + 8) = 0x3daaaaab
    *(arg3[1] + 0xc) = 0x3daaaaab
    *(arg3[1] + 0x10) = 0x3daaaaab
    result = arg3[1]
    *(result + 0x14) = 0x3daaaaab

return result
