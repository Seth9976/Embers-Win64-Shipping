// 函数: sub_142b84e00
// 地址: 0x142b84e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int64_t arg_8
int64_t arg_10

if (rdx == -0x10000000000000)
    arg_8 = 0x7ff0000000000000
    memmove(&arg_10, &arg_8, 8)
    return zx.o(arg_10) ^ data_142d8e3c0

int64_t rax

if (rdx s>= 0)
    int64_t rcx_2 = rdx & 0xfffffffffffff
    int64_t rax_1 = rcx_2 + 0x10000000000000
    
    if ((0x7ff0000000000000 & rdx) == 0)
        rax_1 = rcx_2
    
    if (rax_1 == 0)
        return -0x8000000000000000
    
    rax = rdx - 1
else
    rax = rdx + 1

arg_8 = rax
memmove(&arg_10, &arg_8, 8)
return zx.o(arg_10)
