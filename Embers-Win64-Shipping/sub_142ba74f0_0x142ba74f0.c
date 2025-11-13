// 函数: sub_142ba74f0
// 地址: 0x142ba74f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*(arg1 + 0x434))
uint32_t r10 = 0
uint32_t r11 = 0
int32_t rdi = arg2.d

if (arg2.d u< rsi.d)
    if (*(arg1 + 0x132) == 0)
        int64_t rdx_3 = *(arg1 + 0x438)
        uint64_t rax_8 = zx.q(rdi * 2)
        void* r9_3 = rdx_3 + 4 + zx.q(rax_8.d)
        uint32_t r11_9 = zx.d(*(rax_8 + rdx_3)) << 8 | zx.d(*(rax_8 + rdx_3 + 1))
        uint32_t r10_7 = r11_9
        
        if (r9_3 u<= zx.q((rsi * 2).d) + rdx_3)
            r10_7 = zx.d(*(r9_3 - 2)) << 8 | zx.d(*(r9_3 - 1))
        
        r11 = r11_9 * 2
        r10 = r10_7 * 2
    else
        int64_t r9_1 = *(arg1 + 0x438)
        uint64_t rax_1 = zx.q((arg2 << 2).d)
        uint64_t rdx = zx.q(rax_1.d)
        r11 = ((zx.d(*(rax_1 + r9_1)) << 8 | zx.d(*(rax_1 + r9_1 + 1))) << 8
            | zx.d(*(rdx + r9_1 + 2))) << 8 | zx.d(*(rdx + r9_1 + 3))
        void* rdx_2 = rdx + 8 + r9_1
        r10 = r11
        
        if (rdx_2 u<= zx.q((rsi << 2).d) + r9_1)
            r10 = ((zx.d(*(rdx_2 - 4)) << 8 | zx.d(*(rdx_2 - 3))) << 8 | zx.d(*(rdx_2 - 2))) << 8
                | zx.d(*(rdx_2 - 1))

uint32_t rcx_5 = *(arg1 + 0x400)

if (r11 u<= rcx_5)
    if (r10 u<= rcx_5)
        goto label_142ba761b
    
    if (rdi == (rsi - 2).d)
        r10 = rcx_5
    label_142ba761b:
        
        if (r10 u< r11)
            *arg3 = rcx_5 - r11
            return zx.q(r11)
        
        *arg3 = r10 - r11
        return zx.q(r11)

*arg3 = 0
return 0
