// 函数: sub_1405a4880
// 地址: 0x1405a4880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 << 4
int64_t* rbx_2 = *arg1 + r14_2
int32_t i

do
    if (rbx_2[1].d != 0)
        int64_t rcx = *rbx_2
        
        if (rcx != 0)
            (*(*rcx + 0x38))(rcx, 0)
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                *rbx_2 = sub_140a84c80(rcx_1, 0, 0)
            
            rbx_2[1].d = 0
    
    int64_t rcx_2 = *rbx_2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    rbx_2 = &rbx_2[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rcx_3 = arg1[1].d
int32_t rdx_2 = rcx_3 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rax_2 = *arg1
    memcpy(rax_2 + r14_2, (sx.q(rcx_3 - rdx_2) << 4) + rax_2, rdx_2 << 4)
    rcx_3 = arg1[1].d

arg1[1].d = rcx_3 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
