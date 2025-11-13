// 函数: sub_140a6da50
// 地址: 0x140a6da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4)

if (arg4 s<= 0)
    if ((*(arg5 + 8) & 1) == 0)
        *(arg5 + 8) &= 0x1f
        return arg5
    
    *(arg5 + 8) = 2
    return arg5

void* rax = sub_142a4a0b0(arg5, (rbx + 1).d)
int64_t r14 = rbx * 2
memcpy(rax, arg2 + (sx.q(arg3) << 1), r14.d)

if (arg6 != 0)
    *(r14 + rax) = 0

return sub_142a4a600(arg5, rbx.d) __tailcall
