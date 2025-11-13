// 函数: sub_14209edc0
// 地址: 0x14209edc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 * 0x60
int64_t* rdi_3 = *arg1 + 0x18 + r15_2
int32_t i

do
    sub_141b84450(&rdi_3[2])
    int64_t* rbx_1 = *rdi_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 = &rdi_3[0xc]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rcx_4 = rax_3 - r12_1.d

if (rcx_4 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_2, sx.q(r12_1.d + arg3) * 0x60 + r9, (rcx_4 - arg3) * 0x60)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_140d3e820(arg1)
