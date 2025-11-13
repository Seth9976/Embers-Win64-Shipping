// 函数: sub_140e86170
// 地址: 0x140e86170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 << 4
int64_t* rbx_2 = *arg1 + r14_2
int32_t i

do
    int64_t rax = zx.q(rbx_2[1].d)
    int64_t rcx
    int64_t r8
    
    if (rax.d == 0)
        r8 = *rbx_2
        rcx = 0
    else
        rcx = *rbx_2
        r8 = rcx
    
    int64_t rax_1
    
    if (rcx != 0)
        rax_1 = *rcx
    label_140e861e7:
        (*(rax_1 + 0x38))(rcx, 0)
        int64_t rcx_1 = *rbx_2
        
        if (rcx_1 != 0)
            *rbx_2 = sub_140a84c80(rcx_1, 0, 0)
        
        rbx_2[1].d = 0
    else if (rax.d != 0 && r8 != 0)
        rax_1 = *r8
        rcx = r8
        goto label_140e861e7
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
