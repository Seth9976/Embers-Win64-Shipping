// 函数: sub_1413a3550
// 地址: 0x1413a3550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 0x18)
void* rbx_1 = arg1
int64_t r14_1 = sx.q(arg2)

if (r10_1 != 0)
    rbx_1 = r10_1

int32_t i_1 = arg3
int64_t r12_1 = r14_1 << 3
void* rbx_2 = rbx_1 + r12_1
int32_t i

do
    int64_t* rcx = *rbx_2
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx)
    
    rbx_2 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = *(arg1 + 0x20)
int32_t rcx_2 = rax_2 - r14_1.d

if (rcx_2 != arg3)
    void* rax_3 = *(arg1 + 0x18)
    void* r9 = arg1
    
    if (rax_3 != 0)
        r9 = rax_3
    
    memmove(r9 + r12_1, r9 + (sx.q(r14_1.d + arg3) << 3), (rcx_2 - arg3) << 3)
    rax_2 = *(arg1 + 0x20)

*(arg1 + 0x20) = rax_2 - arg3

if (arg4 != 0)
    sub_1413a88e0(arg1)
