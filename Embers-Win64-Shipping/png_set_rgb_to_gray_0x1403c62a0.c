// 函数: png_set_rgb_to_gray
// 地址: 0x1403c62a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6

if (arg1 == 0)
    return 

int32_t rax_1 = sub_1403c0150(arg1, arg4, "rgb to gray green coefficient")
int32_t rax_2 = sub_1403c0150(arg1, arg3.q, "rgb to gray red coefficient")
int32_t rcx_1

if (arg2 == 3)
    rcx_1 = 0x200000
else if (arg2 == 2)
    rcx_1 = 0x400000
else
    if (arg2 != 1)
        png_error(arg1, "invalid error action to rgb_to_gray")
        noreturn
    
    rcx_1 = 0x600000

int32_t rcx_2 = rcx_1 | *(arg1 + 0x15c)
*(arg1 + 0x15c) = rcx_2

if (*(arg1 + 0x25e) == 3)
    *(arg1 + 0x15c) = rcx_2 | 0x1000

uint64_t rdi
rdi.w = 0x5b8a
uint32_t rbx_1
rbx_1.w = 0x1b38

if ((rax_2 | rax_1) s>= 0)
    if (rax_2 + rax_1 s> 0x1869f)
        png_warning(arg1, "ignoring out of range rgb_to_gray coefficients")
    else
        rbx_1 = (rax_2 << 0xf) u/ 0x186a0
        rdi = zx.q((rax_1 << 0xf) u/ 0x186a0)

*(arg1 + 0x412) = rbx_1.w
*(arg1 + 0x414) = rdi.w
*(arg1 + 0x416) = -0x8000 - rbx_1.w - rdi.w
