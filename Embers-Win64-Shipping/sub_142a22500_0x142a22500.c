// 函数: sub_142a22500
// 地址: 0x142a22500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int16_t* r11 = arg1 + 0xc10
int32_t r14 = 0x10
int32_t result

do
    int32_t rbx_1 = 0
    int64_t i_1 = i
    int64_t j_1 = 2
    int64_t j
    
    do
        void* rax_1 = *(arg1 + 0xf00)
        void* rcx = rax_1 + i_1
        int32_t rdx_4 = sx.d(*(rax_1 + i_1 + 0x1c)) + sx.d(*(rax_1 + i_1 + 0x20))
            + sx.d(*(rcx + 0x10)) + sx.d(*(rcx + 0xc))
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(((zx.q(rdx_4 s>> 0x1f) << 3) + 4).d + rdx_4)
        *r11 = ((temp1_1 + (temp0_1 & 7)) s>> 3).w & *(arg1 + 0xdd8)
        void* rax_12 = *(arg1 + 0xf00)
        void* rcx_1 = rax_12 + i_1
        int32_t rdx_10 = sx.d(*(rax_12 + i_1 + 0x1e)) + sx.d(*(rax_12 + i_1 + 0x22))
            + sx.d(*(rcx_1 + 0x12)) + sx.d(*(rcx_1 + 0xe))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(((zx.q(rdx_10 s>> 0x1f) << 3) + 4).d + rdx_10)
        r11[1] = ((temp3_1 + (temp2_1 & 7)) s>> 3).w & *(arg1 + 0xdd8)
        
        if (*(*(arg1 + 0xf00) + 0xa) != 0)
            sub_142a22d70(arg1 + 0x890 + sx.q(r14 + rbx_1) * 0x38, arg1)
        
        result = *r11
        rbx_1 += 1
        *(r11 + 0xe0) = result
        i_1 += 8
        r11 = &r11[0x1c]
        j = j_1
        j_1 -= 1
    while (j != 1)
    r14 += 2
    i += 0x20
while (i s< 0x40)

return result
