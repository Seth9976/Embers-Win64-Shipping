// 函数: sub_1426bc8a0
// 地址: 0x1426bc8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_1 = r14_1 * 0x58
int64_t* rbx_3 = *arg1 + 0x30 + r15_1
int32_t i

do
    sub_140745b20(&rbx_3[3])
    int64_t rcx_1 = *rbx_3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = rbx_3[-2]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = rbx_3[-4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    rbx_3 = &rbx_3[0xb]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_5 = rax_1 - r14_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_1, sx.q(r14_1.d + arg3) * 0x58 + r9, (rcx_5 - arg3) * 0x58)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_14083ac10(arg1)
