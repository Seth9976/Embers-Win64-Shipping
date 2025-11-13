// 函数: sub_142a49990
// 地址: 0x142a49990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg5
int32_t rbx = arg3

if (rdi s< 0 || (rdi s> 0 && arg4 == 0))
    return 0

int16_t r8 = *(arg1 + 8)
int32_t rax_1

if (r8 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r8) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_1)
    arg2 = rax_1

if (rbx s>= 0)
    int32_t rax_2 = rax_1 - arg2
    
    if (rbx s> rax_2)
        rbx = rax_2
else
    rbx = 0

if (rbx s<= rdi)
    void* rcx
    
    if ((r8.b & 2) == 0)
        rcx = *(arg1 + 0x18)
    else
        rcx = arg1 + 0xa
    
    sub_142a8d6e0(rcx + (sx.q(arg2) << 1), arg4, rbx)

arg5 = 0
return sub_142a8c3f0(arg4, rdi, rbx, &arg5)
