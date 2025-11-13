// 函数: sub_140e39df0
// 地址: 0x140e39df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int32_t r8 = 0
int32_t r10 = 0

if (*(arg1 + 0x1cc) s> 0)
    uint64_t i_3 = zx.q(*(arg1 + 0x1cc))
    void* rdx_1 = arg1 + 0x1e0
    uint64_t i
    
    do
        int32_t rax_1 = *(rdx_1 - 0x10)
        rdx_1 += 4
        
        if (rax_1 s<= r8)
            rax_1 = r8
        
        r8 = rax_1
        int32_t rax_2 = *(rdx_1 - 4)
        
        if (rax_2 s<= r10)
            rax_2 = r10
        
        r10 = rax_2
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_1 = 0

if (*(arg1 + 0x1cc) s> 0)
    void* r11_1 = arg1 + 0x210
    
    do
        int32_t rax_3 = *(r11_1 - 0x40)
        r11_1 += 4
        i_1 += 1
        int32_t temp24_1
        int32_t temp25_1
        temp24_1:temp25_1 = sx.q(divs.dp.d(sx.q(rax_3 * *(arg1 + 0x108) - 1 + r8), r8) + 7)
        *(r11_1 - 4) = (temp25_1 + (temp24_1 & 7)) s>> 3
        int32_t temp32_1
        int32_t temp33_1
        temp32_1:temp33_1 =
            sx.q(divs.dp.d(sx.q(*(r11_1 - 0x34) * *(arg1 + 0x10c) - 1 + r10), r10) + 7)
        *(r11_1 + 0xc) = (temp33_1 + (temp32_1 & 7)) s>> 3
    while (i_1 s< *(arg1 + 0x1cc))

int32_t r11_2 = *(arg1 + 0x230)

if (r11_2 == 1)
    *(arg1 + 0x284) = *(arg1 + (sx.q(*(arg1 + 0x234)) << 2) + 0x210)
    *(arg1 + 0x288) = *(arg1 + (sx.q(*(arg1 + 0x234)) << 2) + 0x220)
    int32_t rax_25 = *(arg1 + 0x234)
    *(arg1 + 0x28c) = rax_25
    *(arg1 + 0x27c) = r11_2
    return rax_25

int32_t rax_27 = *(arg1 + 0x108) + 7
*(arg1 + 0x27c) = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_27)
*(arg1 + 0x284) = divs.dp.d(sx.q(((temp3 + (temp2 & 7)) s>> 3) - 1 + r8), r8)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(*(arg1 + 0x10c) + 7)
int64_t rax_43 = zx.q(divs.dp.d(sx.q(((temp11 + (temp10 & 7)) s>> 3) - 1 + r10), r10))
*(arg1 + 0x288) = rax_43.d

if (r11_2 s> 0)
    void* r10_1 = arg1 + 0x234
    
    do
        int64_t r8_1 = sx.q(*r10_1)
        int32_t j_1 = *(arg1 + (r8_1 << 2) + 0x1e0) * *(arg1 + (r8_1 << 2) + 0x1d0)
        
        if (j_1 != 0)
            int32_t j
            
            do
                rax_43 = sx.q(*(arg1 + 0x27c))
                *(arg1 + (rax_43 << 2) + 0x28c) = r8_1.d
                *(arg1 + 0x27c) += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_2 += 1
        r10_1 += 4
    while (i_2 s< *(arg1 + 0x230))

return rax_43
