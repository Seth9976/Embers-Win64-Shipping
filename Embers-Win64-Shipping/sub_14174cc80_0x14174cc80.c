// 函数: sub_14174cc80
// 地址: 0x14174cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 << 6
int64_t* rbx_3 = *arg1 + 0x18 + r14_2
int32_t i

do
    int64_t rcx = *rbx_3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    rbx_3 = &rbx_3[8]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - r15_1.d

if (rdx_1 != arg3)
    int64_t rcx_1 = *arg1
    memmove(rcx_1 + r14_2, (sx.q(r15_1.d + arg3) << 6) + rcx_1, (rdx_1 - arg3) << 6)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1407c3fe0(arg1)
