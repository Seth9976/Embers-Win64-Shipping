// 函数: sub_140cfa570
// 地址: 0x140cfa570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int32_t* rbx_1 = arg2 + 0xc
void* r14_2 = arg3 - arg2
int64_t i_1 = sx.q(arg4)
int64_t i

do
    int64_t* rax = r14_2 - 0xc + rbx_1
    
    if (&rbx_1[-3] != rax)
        int32_t rdi_1 = *(rbx_1 + r14_2 - 4)
        int64_t r15_1 = *rax
        int32_t r8 = *rbx_1
        rbx_1[-1] = rdi_1
        
        if (rdi_1 != 0 || r8 != 0)
            sub_1405a4c70(&rbx_1[-3], rdi_1, r8)
            memcpy(*(rbx_1 - 0xc), r15_1, rdi_1 * 2)
        else
            *rbx_1 = 0
    
    rbx_1 = &rbx_1[4]
    i = i_1
    i_1 -= 1
while (i != 1)
