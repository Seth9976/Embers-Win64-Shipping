// 函数: sub_142a4a410
// 地址: 0x142a4a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)

if ((*(arg1 + 8) & 1) != 0 || arg2 == 0 || arg3 s< 0 || arg4 == 0
        || (arg4 s< 0 && *(arg2 + (rdi << 1)) == 0))
    return 0xffffffff

int16_t rdx = *(arg1 + 8)
int32_t rax_2

if (rdx s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rdx) s>> 5

int32_t rcx = arg5
int32_t r11 = 0

if (rcx s< 0)
    rcx = 0
else if (rcx s> rax_2)
    rcx = rax_2

if (arg6 s>= 0)
    int32_t rax_3 = rax_2 - rcx
    r11 = arg6
    
    if (arg6 s> rax_3)
        r11 = rax_3

void* rbx = arg1 + 0xa

if ((rdx.b & 2) == 0)
    rbx = *(arg1 + 0x18)

int16_t* rax_5 = sub_142a8c060(rbx + (sx.q(rcx) << 1), r11, arg2 + (rdi << 1), arg4)

if (rax_5 != 0)
    return (rax_5 - rbx) s>> 1

return 0xffffffff
