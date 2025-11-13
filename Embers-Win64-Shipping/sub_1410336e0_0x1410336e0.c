// 函数: sub_1410336e0
// 地址: 0x1410336e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *(arg1 + 0x30)
void* rbx_1 = arg1
int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 << 4

if (rax_1 != 0)
    rbx_1 = rax_1

void* rbx_2 = rbx_1 + r14_2
int32_t i

do
    int64_t rcx = *rbx_2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    rbx_2 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = *(arg1 + 0x38)
int32_t rdx_1 = rax_2 - r15_1.d

if (rdx_1 != arg3)
    void* rax_3 = *(arg1 + 0x30)
    void* rcx_1 = arg1
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    memmove(rcx_1 + r14_2, (sx.q(r15_1.d + arg3) << 4) + rcx_1, (rdx_1 - arg3) << 4)
    rax_2 = *(arg1 + 0x38)

*(arg1 + 0x38) = rax_2 - arg3

if (arg4 != 0)
    sub_141034a30(arg1)
