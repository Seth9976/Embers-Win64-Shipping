// 函数: sub_141a61af0
// 地址: 0x141a61af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r12_1 = r15_1 * 0x58
char* rbx_2 = *arg1 + 0x28 + r12_1
int32_t i

do
    char rax_2 = rbx_2[0x28]
    
    if ((rax_2 & 1) != 0)
        void* rcx = &rbx_2[8]
        
        if ((rax_2 & 2) == 0)
            rcx = *(rbx_2 + 8)
        
        rbx_2[0x28] = rax_2 & 0xfe
        (**rcx)(rcx, 0)
        
        if ((rbx_2[0x28] & 2) == 0)
            sub_140a74f90(*(rbx_2 + 8))
    
    char rax_4 = *rbx_2
    
    if ((rax_4 & 1) != 0)
        void* rcx_2 = &rbx_2[-0x20]
        
        if ((rax_4 & 2) == 0)
            rcx_2 = *(rbx_2 - 0x20)
        
        *rbx_2 = rax_4 & 0xfe
        (**rcx_2)(rcx_2, 0)
        
        if ((*rbx_2 & 2) == 0)
            sub_140a74f90(*(rbx_2 - 0x20))
    
    rbx_2 = &rbx_2[0x58]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_6 = arg1[1].d
int32_t rcx_5 = rax_6 - r15_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, sx.q(r15_1.d + arg3) * 0x58 + r9, (rcx_5 - arg3) * 0x58)
    rax_6 = arg1[1].d

arg1[1].d = rax_6 - arg3

if (arg4 != 0)
    sub_14083ac10(arg1)
