// 函数: sub_14108c030
// 地址: 0x14108c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
*(arg1 + 0xd4) = 0
__builtin_memset(arg1 + 0xdc, 0xff, 0x20)
__builtin_memset(arg1 + 0xfc, 0, 0x1e)

if (arg2 s> 0)
    int64_t rdx = 0
    void* rax_1 = arg1 + 0x10
    
    do
        int64_t rcx = *(arg3 + (rdx << 3))
        rdx += 1
        *(rax_1 - 0x10) = rcx
        *(rax_1 - 8) = 0
        *rax_1 = 0xffffffff
        *(rax_1 + 4) = 0
        *(rax_1 + 5) = arg4
        rax_1 += 0x18
    while (rdx s< r11)

__builtin_memset(arg1 + 0xc0, 0, 0x11)
*(arg1 + 0xd4) = 0

if (r11.d s< 8)
    memset(arg1 + r11 * 0x18, 0, sx.q(8 - r11.d) * 0x18)

return arg1
