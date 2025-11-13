// 函数: sub_142a49120
// 地址: 0x142a49120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r11_1 = *(arg1 + 8)
int32_t rax_1

if (r11_1 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r11_1) s>> 5

int32_t rcx = 0

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_1)
    arg2 = rax_1

if (arg3 s>= 0)
    int32_t rax_2 = rax_1 - arg2
    rcx = arg3
    
    if (arg3 s> rax_2)
        rcx = rax_2

void* r10_1

if ((r11_1.b & 2) == 0)
    r10_1 = *(arg1 + 0x18)
else
    r10_1 = arg1 + 0xa

void* rdx = r10_1 + (sx.q(arg2) << 1)
int64_t result = sx.q(arg5)
int64_t r9 = arg4 + (result << 1)

if (rdx != r9 && rcx s> 0)
    return memmove(r9, rdx, rcx * 2) __tailcall

return result
