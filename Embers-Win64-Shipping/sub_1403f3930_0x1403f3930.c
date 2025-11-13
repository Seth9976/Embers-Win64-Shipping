// 函数: sub_1403f3930
// 地址: 0x1403f3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg4)
int64_t rbx = 0

if (r8 s>= 4)
    float* r9 = arg1
    int64_t rdi_1 = r8 << 2
    int64_t i_2 = ((r8 - 4) u>> 2) + 1
    float* rax = &arg1[2 + r8 * 2]
    rbx = i_2 << 2
    int64_t i
    
    do
        *r9 = arg3 + *r9
        r9 = &r9[(r8 + 1) * 4]
        *(-4 - rdi_1 + rax) = arg3 f+ *(-4 - rdi_1 + rax)
        *rax = arg3 + *rax
        rax[r8 + 1] = arg3 + rax[r8 + 1]
        rax = &rax[(r8 + 1) * 4]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbx s< r8)
    int64_t i_3 = r8 - rbx
    void* rcx_2 = &arg1[(r8 + 1) * rbx]
    int64_t i_1
    
    do
        *rcx_2 = arg3 f+ *rcx_2
        rcx_2 += (r8 << 2) + 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*arg2 = arg3 + *arg2
