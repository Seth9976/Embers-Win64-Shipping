// 函数: sub_140dbad60
// 地址: 0x140dbad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 0x640)
void* rbx_1 = arg1
int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_2 = r14_1 << 5

if (r10_1 != 0)
    rbx_1 = r10_1

void* rbx_3 = rbx_1 + 8 + r15_2
int32_t i

do
    int64_t* rcx = *rbx_3
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    rbx_3 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = *(arg1 + 0x648)
int32_t rdx_1 = rax_2 - r14_1.d

if (rdx_1 != arg3)
    void* rax_3 = *(arg1 + 0x640)
    void* rcx_1 = arg1
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    memmove(rcx_1 + r15_2, (sx.q(r14_1.d + arg3) << 5) + rcx_1, (rdx_1 - arg3) << 5)
    rax_2 = *(arg1 + 0x648)

*(arg1 + 0x648) = rax_2 - arg3

if (arg4 != 0)
    sub_140dbd010(arg1)
