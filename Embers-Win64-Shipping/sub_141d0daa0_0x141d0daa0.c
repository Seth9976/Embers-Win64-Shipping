// 函数: sub_141d0daa0
// 地址: 0x141d0daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 * 0x98
int64_t* rdi_3 = *arg1 + 0x90 + r13_1
int32_t i

do
    int64_t* rbx_1 = *rdi_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 = &rdi_3[0x13]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_5 = arg1[1].d
int32_t rcx_3 = rax_5 - r15_1.d

if (rcx_3 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r13_1, sx.q(r15_1.d + arg3) * 0x98 + r9, (rcx_3 - arg3) * 0x98)
    rax_5 = arg1[1].d

arg1[1].d = rax_5 - arg3

if (arg4 != 0)
    sub_141750450(arg1)
