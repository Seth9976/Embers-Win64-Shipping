// 函数: sub_1408084a0
// 地址: 0x1408084a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0x78
int64_t* rbx_3 = *arg1 + 0x58 + r12_1
int32_t i

do
    void* rax_1 = *rbx_3
    
    if (rax_1 != 0)
        *(rax_1 + 8) -= 1
    
    *rbx_3 = 0
    int64_t rcx = rbx_3[-3]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    rbx_3 = &rbx_3[0xf]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = arg1[1].d
int32_t rcx_2 = rax_2 - r14_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, sx.q(r14_1.d + arg3) * 0x78 + r9, (rcx_2 - arg3) * 0x78)
    rax_2 = arg1[1].d

arg1[1].d = rax_2 - arg3

if (arg4 != 0)
    sub_1408096a0(arg1)
