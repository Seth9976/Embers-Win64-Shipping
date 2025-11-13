// 函数: sub_140911e80
// 地址: 0x140911e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 << 4
int64_t* rdi_3 = *arg1 + 8 + r15_2
int32_t i

do
    int64_t* rbx_1 = *rdi_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 = &rdi_3[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rcx_2 = arg1[1].d
int32_t rdx_2 = rcx_2 - r12_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rax_3 = *arg1
    memcpy(rax_3 + r15_2, (sx.q(rcx_2 - rdx_2) << 4) + rax_3, rdx_2 << 4)
    rcx_2 = arg1[1].d

arg1[1].d = rcx_2 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
