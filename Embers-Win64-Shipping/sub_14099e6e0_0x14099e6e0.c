// 函数: sub_14099e6e0
// 地址: 0x14099e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg2 + 0x18))
int32_t i_1 = 2
*(arg3 + 0x1c) = rsi.d
arg3[3].d = 1
arg3[4].d = 0
*(arg3 + 0x24) = 0
int32_t r11 = (rsi - 2).d
arg4[3].d = 1
*(arg4 + 0x1c) = rsi.d
arg4[4].d = 0
*(arg4 + 0x24) = 0
**arg3 = 0xc0400000
*arg3[1] = 0x40400000
*(arg3[1] + 4) = 0
**arg4 = 0xc0400000
*arg4[1] = 0
void* const result = arg4[1]
*(result + 4) = 0x40400000

if (rsi.d s> 2 && r11 u>= 4)
    int64_t rdx = arg4[1]
    int64_t rdi_1 = arg3[1]
    int64_t rcx = sx.q((rsi - 1).d)
    result = rdx + (rcx << 2)
    int64_t rdx_1 = rdi_1 + (rcx << 2)
    
    if ((rdx + 8 u> rdx_1 || result u< rdi_1 + 8) && (rdx + 8 u> &arg4[1] || result u< &arg4[1])
            && (rdx + 8 u> &arg3[1] || result u< &arg3[1])
            && (rdi_1 + 8 u> &arg4[1] || rdx_1 u< &arg4[1])
            && (rdi_1 + 8 u> &arg3[1] || rdx_1 u< &arg3[1]))
        int32_t r11_1 = r11 & 0x80000003
        
        if (r11_1 s< 0)
            r11_1 = ((r11_1 - 1) | 0xfffffffc) + 1
        
        int32_t rax_7 = rsi.d - r11_1
        
        do
            i_1 += 4
        while (i_1 s< rax_7)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_7 + 1)
        result = nullptr
        int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4
        __builtin_memset(rdi_1 + 8, 0, rdx_5 u>> 2 << 2)
        __builtin_memset(rdx + 8, 0, rdx_5 u>> 2 << 2)

int64_t i = sx.q(i_1)

if (i s< rsi)
    result = rsi - i
    
    if (result s>= 4)
        do
            *(arg3[1] + (i << 2)) = 0
            *(arg4[1] + (i << 2)) = 0
            *(arg3[1] + (i << 2) + 4) = 0
            *(arg4[1] + (i << 2) + 4) = 0
            *(arg3[1] + (i << 2) + 8) = 0
            *(arg4[1] + (i << 2) + 8) = 0
            *(arg3[1] + (i << 2) + 0xc) = 0
            result = arg4[1]
            *(result + (i << 2) + 0xc) = 0
            i += 4
        while (i s< rsi - 3)
    
    for (; i s< rsi; i += 1)
        *(arg3[1] + (i << 2)) = 0
        result = arg4[1]
        *(result + (i << 2)) = 0

return result
