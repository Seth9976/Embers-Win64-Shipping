// 函数: sub_14106dab0
// 地址: 0x14106dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 * 0x60
void* rdi_3 = *arg1 + 0x30 + r15_2
int32_t i

do
    if (*(rdi_3 - 0x10) != 0)
        void* rax_1 = *rdi_3
        void* rcx = rdi_3 + 0x10
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (*(*rcx + 0x10))(rcx)
    
    int64_t* rbx_1 = *(rdi_3 - 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 += 0x60
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_7 = arg1[1].d
int32_t rcx_4 = rax_7 - r12_1.d

if (rcx_4 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_2, sx.q(r12_1.d + arg3) * 0x60 + r9, (rcx_4 - arg3) * 0x60)
    rax_7 = arg1[1].d

arg1[1].d = rax_7 - arg3

if (arg4 != 0)
    sub_140d3e820(arg1)
