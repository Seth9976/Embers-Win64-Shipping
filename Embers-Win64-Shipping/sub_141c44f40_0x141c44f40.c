// 函数: sub_141c44f40
// 地址: 0x141c44f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 * 0x18
int64_t* rdi_2 = *arg1 + r13_1
int32_t i

do
    int64_t rax = *rdi_2
    
    if (rax != 0)
        *(rax + 0x3c) -= 1
    
    int64_t* rbx_1 = rdi_2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            rax = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_2 = &rdi_2[3]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rcx_2 = arg1[1].d
int32_t rdx_2 = rcx_2 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t r9 = *arg1
    memcpy(r9 + r13_1, r9 + sx.q(rcx_2 - rdx_2) * 0x18, rdx_2 * 0x18)
    rcx_2 = arg1[1].d

arg1[1].d = rcx_2 - arg3

if (arg4 != 0)
    sub_1405fde90(arg1)
