// 函数: sub_142329b00
// 地址: 0x142329b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *arg2
*(arg1 + 8) = 0
uint16_t rdx_1 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_2 = (zmm0 u>> 0x17).w
uint32_t rcx = zx.d(rax_2.b)

if (rcx u<= 0x70)
    rdx_1 &= 0x8000
    
    if (0x70 - rcx + 0xe s<= 0x18)
        int32_t r8_2 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_4 = ((r8_2 u>> (0x70 - rcx + 0xe).b).w & 0x3ff) | rdx_1
        rdx_1 = rax_4
        
        if (((r8_2 u>> ((0x70 - rcx).b + 0xd)).b & 1) != 0)
            rdx_1 = rax_4 + 1
else if (rcx u< 0x8f)
    rdx_1 = (rdx_1 & 0x8000) | ((rax_2 - 0x10) & 0x1f) << 0xa | ((zmm0 u>> 0xd).w & 0x3ff)
else
    rdx_1 = (rdx_1 & 0xfbff) | 0x7bff

zmm0 = arg2[1]
*arg1 = rdx_1
uint16_t rdx_3 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_7 = (zmm0 u>> 0x17).w
uint32_t rcx_3 = zx.d(rax_7.b)

if (rcx_3 u<= 0x70)
    rdx_3 &= 0x8000
    
    if (0x70 - rcx_3 + 0xe s<= 0x18)
        int32_t r8_7 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_9 = ((r8_7 u>> (0x70 - rcx_3 + 0xe).b).w & 0x3ff) | rdx_3
        rdx_3 = rax_9
        
        if (((r8_7 u>> ((0x70 - rcx_3).b + 0xd)).b & 1) != 0)
            rdx_3 = rax_9 + 1
else if (rcx_3 u< 0x8f)
    rdx_3 = (rdx_3 & 0x8000) | ((rax_7 - 0x10) & 0x1f) << 0xa | ((zmm0 u>> 0xd).w & 0x3ff)
else
    rdx_3 = (rdx_3 & 0xfbff) | 0x7bff

zmm0 = arg2[2]
arg1[1] = rdx_3
uint16_t rdx_5 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_12 = (zmm0 u>> 0x17).w
uint32_t rcx_6 = zx.d(rax_12.b)

if (rcx_6 u<= 0x70)
    rdx_5 &= 0x8000
    
    if (0x70 - rcx_6 + 0xe s<= 0x18)
        int32_t r8_12 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_14 = ((r8_12 u>> (0x70 - rcx_6 + 0xe).b).w & 0x3ff) | rdx_5
        rdx_5 = rax_14
        
        if (((r8_12 u>> ((0x70 - rcx_6).b + 0xd)).b & 1) != 0)
            rdx_5 = rax_14 + 1
else if (rcx_6 u< 0x8f)
    rdx_5 = (rdx_5 & 0x8000) | ((rax_12 - 0x10) & 0x1f) << 0xa | ((zmm0 u>> 0xd).w & 0x3ff)
else
    rdx_5 = (rdx_5 & 0xfbff) | 0x7bff

zmm0 = *arg3
arg1[2] = rdx_5
uint16_t rdx_7 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_17 = (zmm0 u>> 0x17).w
uint32_t rcx_9 = zx.d(rax_17.b)

if (rcx_9 u<= 0x70)
    rdx_7 &= 0x8000
    
    if (0x70 - rcx_9 + 0xe s<= 0x18)
        int32_t r8_17 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_19 = ((r8_17 u>> (0x70 - rcx_9 + 0xe).b).w & 0x3ff) | rdx_7
        rdx_7 = rax_19
        
        if (((r8_17 u>> ((0x70 - rcx_9).b + 0xd)).b & 1) != 0)
            rdx_7 = rax_19 + 1
else if (rcx_9 u< 0x8f)
    rdx_7 = (rdx_7 & 0x8000) | ((zmm0 u>> 0xd).w & 0x3ff) | ((rax_17 - 0x10) & 0x1f) << 0xa
else
    rdx_7 = (rdx_7 & 0xfbff) | 0x7bff

zmm0 = arg3[1]
arg1[3] = rdx_7
uint16_t rdx_9 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_22 = (zmm0 u>> 0x17).w
uint32_t rcx_12 = zx.d(rax_22.b)

if (rcx_12 u<= 0x70)
    rdx_9 &= 0x8000
    
    if (0x70 - rcx_12 + 0xe s<= 0x18)
        int32_t r8_22 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_24 = ((r8_22 u>> (0x70 - rcx_12 + 0xe).b).w & 0x3ff) | rdx_9
        rdx_9 = rax_24
        
        if (((r8_22 u>> ((0x70 - rcx_12).b + 0xd)).b & 1) != 0)
            rdx_9 = rax_24 + 1
else if (rcx_12 u< 0x8f)
    rdx_9 = (rdx_9 & 0x8000) | ((zmm0 u>> 0xd).w & 0x3ff) | ((rax_22 - 0x10) & 0x1f) << 0xa
else
    rdx_9 = (rdx_9 & 0xfbff) | 0x7bff

zmm0 = arg3[2]
arg1[4] = rdx_9
uint16_t rdx_11 = (zmm0 u>> 0x1f).w << 0xf | (zmm0.w & 0x7fff)
uint16_t rax_27 = (zmm0 u>> 0x17).w
uint32_t rcx_15 = zx.d(rax_27.b)

if (rcx_15 u<= 0x70)
    rdx_11 &= 0x8000
    
    if (0x70 - rcx_15 + 0xe s<= 0x18)
        int32_t r8_27 = (zmm0 & 0x7fffff) | 0x800000
        uint16_t rax_29 = ((r8_27 u>> (0x70 - rcx_15 + 0xe).b).w & 0x3ff) | rdx_11
        rdx_11 = rax_29
        
        if (((r8_27 u>> ((0x70 - rcx_15).b + 0xd)).b & 1) != 0)
            rdx_11 = rax_29 + 1
else if (rcx_15 u< 0x8f)
    rdx_11 = (rdx_11 & 0x8000) | ((zmm0 u>> 0xd).w & 0x3ff) | ((rax_27 - 0x10) & 0x1f) << 0xa
else
    rdx_11 = (rdx_11 & 0xfbff) | 0x7bff

arg1[5] = rdx_11
return arg1
