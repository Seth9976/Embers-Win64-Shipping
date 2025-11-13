// 函数: sub_142bd87e0
// 地址: 0x142bd87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int32_t i = *(arg1 + 0x18)
int32_t r9_1 = *arg2 + 1
uint64_t r8 = 0

if (i != 0)
    int64_t rsi_1 = *(arg1 + 0x20)
    
    do
        uint64_t rcx_3 = zx.q(((i - r8.d) u>> 1) + r8.d)
        int32_t rax_1 = *(rsi_1 + (rcx_3 << 3))
        void* rdx = rsi_1 + (rcx_3 << 3)
        
        if (rax_1 == r9_1)
            uint64_t rax_4 = zx.q(*(rdx + 4))
            *arg2 = r9_1
            return rax_4
        
        int32_t rax_2 = rax_1 & 0x7fffffff
        
        if (rax_2 == r9_1)
            r11 = *(rdx + 4)
        
        if (rax_2 u>= r9_1)
            i = rcx_3.d
        else
            r8 = zx.q((rcx_3 + 1).d)
    while (r8.d u< i)
    
    if (r11 != 0)
        *arg2 = r9_1
        return zx.q(r11)

if (r8.d u>= *(arg1 + 0x18))
    *arg2 = 0
    return zx.q(r11)

int64_t rax_5 = *(arg1 + 0x20)
uint64_t rax_6 = zx.q(*(rax_5 + (r8 << 3) + 4))
*arg2 = *(rax_5 + (zx.q(r8.d) << 3)) & 0x7fffffff
return rax_6
