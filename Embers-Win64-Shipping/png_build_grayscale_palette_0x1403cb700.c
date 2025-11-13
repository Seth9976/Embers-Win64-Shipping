// 函数: png_build_grayscale_palette
// 地址: 0x1403cb700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1 - 1 u> 7 || not(test_bit(0x8b, arg1 - 1)))
    return 

int64_t rax_1 = sx.q(arg1 - 1)
char r8 = *(&data_1436adfc0 + (rax_1 << 2))
void* rdx = arg2 + 5
int64_t i_1 = neg.q(*(&data_1436adf80 + (rax_1 << 3)) & 0xfffffffffffffffe)
char rax = 0
int64_t i

do
    *(rdx - 5) = rax
    *(rdx - 4) = rax
    *(rdx - 3) = rax
    char rcx_1 = r8 + rax
    *(rdx - 2) = rcx_1
    *(rdx - 1) = rcx_1
    *rdx = rcx_1
    rdx += 6
    rax += r8 * 2
    i = i_1
    i_1 += 2
while (i != -2)
