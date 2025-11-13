// 函数: sub_140e860a0
// 地址: 0x140e860a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 << 4
int64_t* rbx_3 = *arg1 + 8 + r14_2
int32_t i

do
    int64_t* rcx = *rbx_3
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    rbx_3 = &rbx_3[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = arg1[1].d
int32_t rdx_1 = rax_2 - r15_1.d

if (rdx_1 != arg3)
    int64_t rcx_1 = *arg1
    memmove(rcx_1 + r14_2, (sx.q(r15_1.d + arg3) << 4) + rcx_1, (rdx_1 - arg3) << 4)
    rax_2 = arg1[1].d

arg1[1].d = rax_2 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
