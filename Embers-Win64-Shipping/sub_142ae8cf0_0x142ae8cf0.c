// 函数: sub_142ae8cf0
// 地址: 0x142ae8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x48)
int16_t rax = *(r15 + 8)
int32_t rdi_1

if (rax s< 0)
    rdi_1 = *(r15 + 0xc)
else
    rdi_1 = sx.d(rax) s>> 5

if (*arg6 s> 0)
    return 0

if (arg5 s< 0)
    *arg6 = 1
else if (arg4 == 0 && arg5 s> 0)
    *arg6 = 1

if (arg2 s< 0 || arg2 s> arg3)
    *arg6 = 8
    return 0

int64_t r13 = sx.q(rdi_1)
int32_t rbp

if (arg2 s>= r13)
    rbp = rdi_1
else
    rbp = sub_142a4a130(r15, arg2.d)

if (arg3 s< r13)
    rdi_1 = sub_142a4a130(r15, arg3.d)

int32_t rdi_2 = rdi_1 - rbp

if (arg5 s<= 0 || arg4 == 0)
    *(arg1 + 0x28) = rbp
else
    int32_t rbx_1 = rdi_2
    
    if (rdi_2 s> arg5)
        rbx_1 = arg5
    
    sub_142a49120(r15, rbp, rbx_1, arg4, 0)
    *(arg1 + 0x28) = rbx_1 + rbp

sub_142a8c440(arg4, arg5, rdi_2, arg6)
return zx.q(rdi_2)
