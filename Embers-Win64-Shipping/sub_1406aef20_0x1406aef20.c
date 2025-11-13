// 函数: sub_1406aef20
// 地址: 0x1406aef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x10)
int64_t rcx = *(arg1 + 0x18)
uint64_t r9 = zx.q(arg2)
int64_t rax
int64_t rdx_2
rdx_2:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx - rbx)
uint64_t rax_2 = rdx_2 s>> 2 u>> 0x3f
int64_t r11_2 = (rcx - rbx) s/ 0x18

if (r9 u< r11_2)
    uint64_t rax_3 = r9 * 3
    *(arg1 + 0x18) = rbx + (rax_3 << 3)
    return rax_3

if (r9 u> r11_2)
    int64_t rax_4
    int64_t rdx_3
    rdx_3:rax_4 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x20) - rbx)
    int64_t rdx_4 = rdx_3 s>> 2
    rax_2 = rdx_4 u>> 0x3f
    
    if (r9 u> rdx_4 + rax_2)
        return sub_14068b2f0(arg1 + 0x10, r9)
    
    int64_t i_1 = r9 - r11_2
    
    if (r9 != r11_2)
        rax_2 = 0
        int64_t i
        
        do
            __builtin_memset(rcx, 0, 0x11)
            rcx += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x18) = rcx

return rax_2
