// 函数: sub_141c8bf50
// 地址: 0x141c8bf50
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
        int32_t rax = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax == 1 && rcx != 0)
            (*(*rcx + 8))(rcx, 1)
    
    rbx_3 = &rbx_3[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rcx_1 = arg1[1].d
int32_t rdx_2 = rcx_1 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rax_2 = *arg1
    memcpy(rax_2 + r14_2, (sx.q(rcx_1 - rdx_2) << 4) + rax_2, rdx_2 << 4)
    rcx_1 = arg1[1].d

arg1[1].d = rcx_1 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
