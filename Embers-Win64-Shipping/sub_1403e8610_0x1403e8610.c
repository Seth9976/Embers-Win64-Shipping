// 函数: sub_1403e8610
// 地址: 0x1403e8610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int64_t r14 = sx.q(arg4)
int32_t rbx = 0
int32_t r11 = 0
int64_t rbp = 0

if (r14 s>= 2)
    void* rsi_2 = arg1 - arg2
    void* r9 = arg2 + 2
    int64_t i_1 = ((r14 - 2) u>> 1) + 1
    rbp = i_1 * 2
    int64_t i
    
    do
        int32_t rax_1 = sx.d(*(r9 - 2))
        int32_t rdx = sx.d(*(rsi_2 + r9 - 2))
        r9 += 4
        r10 += (rdx * rax_1) s>> arg3
        rbx += (sx.d(*(rsi_2 + r9 - 4)) * sx.d(*(r9 - 4))) s>> arg3
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp s< r14)
    r11 = (sx.d(*(arg1 + (rbp << 1))) * sx.d(*(arg2 + (rbp << 1)))) s>> arg3

return zx.q(rbx + r10 + r11)
