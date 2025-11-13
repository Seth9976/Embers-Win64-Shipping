// 函数: sub_14038aa40
// 地址: 0x14038aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x2138)
int32_t rcx = *(arg1 + 0x2134)
int32_t r11_1 = rcx - rax

if (rcx - rax s< 0)
    r11_1 += 0xc8

int32_t r8 = 0

if (arg3 s<= 0x1e0)
label_14038aa88:
    
    if (rax == rcx)
        rax -= 1
else
    if (rax != rcx)
        rax += 1
        
        if (rax == 0xc8)
            rax = 0
        
        goto label_14038aa88
    
    rax -= 1

if (rax s< 0)
    rax = 0xc7

void* rcx_4 = (sx.q(rax) + 0x130) * 0x1c + arg1
*arg2 = *rcx_4
arg2[1] = *(rcx_4 + 4)
arg2[2] = *(rcx_4 + 8)
arg2[3] = *(rcx_4 + 0xc)
arg2[4] = *(rcx_4 + 0x10)
arg2[5] = *(rcx_4 + 0x14)
arg2[6] = *(rcx_4 + 0x18)
*(arg1 + 0x213c) += arg3 s/ 0x78
int32_t i = *(arg1 + 0x213c)

if (i s>= 4)
    int32_t rcx_5 = *(arg1 + 0x2138)
    
    do
        i -= 4
        rcx_5 += 1
    while (i s>= 4)
    
    *(arg1 + 0x2138) = rcx_5
    *(arg1 + 0x213c) = i

int32_t rax_10 = *(arg1 + 0x2138)

if (rax_10 s>= 0xc8)
    *(arg1 + 0x2138) = rax_10 - 0xc8

int32_t rcx_6 = 0
float zmm1 = (zx.o(0)).d
int64_t r11_2 = 0

if (r11_1 - 0xa s> 0)
    rcx_6 = r11_1 - 0xa

void* result = zx.q(0xc8 - rcx_6)
int64_t rdx_4 = sx.q(result.d)

if (rdx_4 s>= 4)
    void* rcx_7 = arg1 + 0x1e08
    result = ((rdx_4 - 4) u>> 2) + 1
    r8 = (result << 2).d
    r11_2 = result << 2
    void* i_1
    
    do
        zmm1 = zmm1 f+ *(rcx_7 - 4)
        rcx_7 += 0x10
        zmm1 = zmm1 f+ *(rcx_7 - 0x10) f+ *(rcx_7 - 0xc) f+ *(rcx_7 - 8)
        i_1 = result
        result -= 1
    while (i_1 != 1)

if (r11_2 s< rdx_4)
    int64_t i_6 = rdx_4 - r11_2
    result = arg1 + 0x1e04 + (r11_2 << 2)
    r8 += i_6.d
    int64_t i_2
    
    do
        zmm1 = zmm1 f+ *result
        result += 4
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

int64_t rdx_5 = sx.q(r8)

if (rdx_5 s< 0xc8)
    result = 0xc8 - rdx_5
    
    if (result s>= 4)
        result = arg1 + 0x1ae8 + (rdx_5 << 2)
        int64_t i_5 = ((0xc4 - rdx_5) u>> 2) + 1
        rdx_5 += i_5 << 2
        int64_t i_3
        
        do
            zmm1 = zmm1 f+ *(result - 4)
            result += 0x10
            zmm1 = zmm1 f+ *(result - 0x10) f+ *(result - 0xc) f+ *(result - 8)
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    if (rdx_5 s< 0xc8)
        int64_t i_7 = 0xc8 - rdx_5
        result = arg1 + 0x1ae4 + (rdx_5 << 2)
        int64_t i_4
        
        do
            zmm1 = zmm1 f+ *result
            result += 4
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)

arg2[5] = (1f - zmm1) f* *(arg1 + 0x2124) + zmm1 f* *(arg1 + 0x2128)
return result
