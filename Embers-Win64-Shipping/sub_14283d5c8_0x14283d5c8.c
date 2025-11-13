// 函数: sub_14283d5c8
// 地址: 0x14283d5c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x30)
int32_t* rbx_1 = arg4 - arg3
float* r11 = arg3
int64_t i_1 = 0x40
int64_t i

do
    int32_t j = 0
    int32_t zmm1 = (zx.o(0)).d
    *(*(arg1 + 0x28) + (sx.q(result) << 2)) = *(arg2 - arg3 + r11)
    
    if (*(arg1 + 0x20) s> 0)
        int32_t* r9 = arg1 + 0x34
        
        do
            int64_t r15_1 = sx.q(*r9)
            int32_t r8_2 = (*(arg1 + 0x30) << 7) - *(*(arg1 + 0x1c8) + (r15_1 << 2))
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r8_2)
            int32_t rax_5 = (temp4_1 + (temp3_1 & 0x7f)) s>> 7
            int64_t k_1 = 5
            float* rdx_6 = arg1 + (((zx.q(r8_2) & 0x7f) + 0x75) << 2)
            int64_t k
            
            do
                int32_t rcx_1 = rax_5
                rax_5 -= 1
                float zmm0 = *(*(arg1 + 0x28) + ((zx.q(rcx_1) & 0x7ff) << 2)) * *rdx_6
                rdx_6 = &rdx_6[0x80]
                zmm1 = zmm1 f+ zmm0
                k = k_1
                k_1 -= 1
            while (k != 1)
            int32_t rax_6 = (r15_1 + 1).d
            j += 1
            *r9 = rax_6
            *(arg1 + 0x1c0)
            *r9 = mods.dp.d(sx.q(rax_6), *(arg1 + 0x1c0))
            r9 = &r9[1]
        while (j s< *(arg1 + 0x20))
    
    zmm1 = zmm1 f* *(arg1 + 0x10)
    *r11 = zmm1 + *r11
    *(rbx_1 + r11) = zmm1 f+ *(rbx_1 + r11)
    result = (*(arg1 + 0x30) + 1) & 0x800007ff
    
    if (result s< 0)
        result = ((result - 1) | 0xfffff800) + 1
    
    r11 = &r11[1]
    *(arg1 + 0x30) = result
    i = i_1
    i_1 -= 1
while (i != 1)
return result
