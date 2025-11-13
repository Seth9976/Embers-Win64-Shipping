// 函数: sub_140610f60
// 地址: 0x140610f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int64_t i = sx.q(arg3 - 1 + arg2)
int32_t rbx = 0
int64_t rdx = sx.q(arg2)
uint32_t r10 = 0
int32_t r9 = 0

if (i s< rdx)
    return 0

if (i - rdx + 1 s< 2)
    r10 = zx.d(*(i + arg1)) << r9.b
else
    do
        char rcx_1 = r9.b + 8
        r11 += zx.d(*(i + arg1)) << r9.b
        r9 += 0x10
        uint32_t rax_7 = zx.d(*(i + arg1 - 1))
        i -= 2
        rbx += rax_7 << rcx_1
    while (i s>= rdx + 1)
    
    if (i s>= rdx)
        r10 = zx.d(*(i + arg1)) << r9.b

return zx.q(rbx + r11 + r10)
