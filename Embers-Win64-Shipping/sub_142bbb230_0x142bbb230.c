// 函数: sub_142bbb230
// 地址: 0x142bbb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *(arg1 + 0x10)

if (arg2 s<= *r14)
    return zx.q(**(arg1 + 8) << 0x10)

uint64_t r11 = zx.q(*arg1)
int32_t rdx = 1

if (r11.d u> 1)
    int64_t rcx = 1
    void* rax_4 = &r14[1]
    
    do
        if (arg2 s<= *rax_4)
            int64_t rbx = *(arg1 + 8)
            int64_t rcx_2 = sx.q(rdx - 1)
            int32_t rsi = *(rbx + (rcx_2 << 2))
            int32_t* rdi = sx.q(rdx) << 2
            return zx.q(
                sub_142b91790(arg2 - r14[rcx_2], *(rdi + r14) - r14[rcx_2]) * (*(rdi + rbx) - rsi)
                + (rsi << 0x10))
        
        rdx += 1
        rcx += 1
        rax_4 += 4
    while (rcx s< r11)

return zx.q(*(*(arg1 + 8) + (sx.q((r11 - 1).d) << 2)) << 0x10)
