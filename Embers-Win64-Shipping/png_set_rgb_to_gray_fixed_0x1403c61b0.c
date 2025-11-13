// 函数: png_set_rgb_to_gray_fixed
// 地址: 0x1403c61b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rax_1

if (arg2 == 3)
    rax_1 = 0x200000
else if (arg2 == 2)
    rax_1 = 0x400000
else
    if (arg2 != 1)
        png_error(arg1, "invalid error action to rgb_to_gray")
        noreturn
    
    rax_1 = 0x600000

int32_t rax_2 = rax_1 | *(arg1 + 0x15c)
*(arg1 + 0x15c) = rax_2

if (*(arg1 + 0x25e) == 3)
    *(arg1 + 0x15c) = rax_2 | 0x1000

uint64_t rbx
rbx.w = 0x5b8a
uint64_t rdi
rdi.w = 0x1b38

if ((arg4 | arg3) s>= 0)
    if (arg4 + arg3 s> 0x1869f)
        png_warning(arg1, "ignoring out of range rgb_to_gray coefficients")
    else
        rdi = zx.q((arg3 << 0xf) u/ 0x186a0)
        rbx = zx.q((arg4 << 0xf) u/ 0x186a0)

*(arg1 + 0x412) = rdi.w
*(arg1 + 0x414) = rbx.w
*(arg1 + 0x416) = -0x8000 - rdi.w - rbx.w
