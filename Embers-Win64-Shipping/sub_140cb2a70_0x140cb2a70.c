// 函数: sub_140cb2a70
// 地址: 0x140cb2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int32_t* rbx_1 = arg2 + 0x1c
void* rbp_2 = arg3 - arg2
int64_t i_1 = sx.q(arg4)
int64_t i

do
    *(rbx_1 - 0x1c) = *(rbx_1 + rbp_2 - 0x1c)
    *(rbx_1 - 0x14) = *(rbx_1 + rbp_2 - 0x14)
    void* rax = rbp_2 - 0xc + rbx_1
    
    if (&rbx_1[-3] != rax)
        int64_t rdi_1 = sx.q(*(rbx_1 + rbp_2 - 4))
        int64_t r15_1 = *rax
        int32_t r8 = *rbx_1
        rbx_1[-1] = rdi_1.d
        
        if (rdi_1.d != 0 || r8 != 0)
            sub_1405c4a00(&rbx_1[-3], rdi_1.d, r8)
            memcpy(*(rbx_1 - 0xc), r15_1, (rdi_1 << 3).d)
        else
            *rbx_1 = 0
    
    rbx_1 = &rbx_1[8]
    i = i_1
    i_1 -= 1
while (i != 1)
