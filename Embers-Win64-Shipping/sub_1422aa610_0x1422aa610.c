// 函数: sub_1422aa610
// 地址: 0x1422aa610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rbp_1 = 2

if (*(arg1 + 0x3c) != 0)
    rbp_1 = 4

int32_t rdi_2 = rbp_1 * arg3
int32_t r10_2 = rbp_1 * arg2

if (rdi_2 != 0)
    int32_t rax_1 = *(arg1 + 0x28)
    int32_t rcx_1 = rax_1 - r10_2
    
    if (rcx_1 != rdi_2)
        void* r9_1 = *(arg1 + 0x20)
        
        if ((r9_1.b & 1) != 0)
            r9_1 = (r9_1 s>> 1) + arg1 + 0x20
        
        memmove(sx.q(r10_2) + r9_1, sx.q(r10_2 + rdi_2) + r9_1, rcx_1 - rdi_2)
        rax_1 = *(arg1 + 0x28)
    
    *(arg1 + 0x28) = rax_1 - rdi_2
    sub_1407c4260(arg1 + 0x20)

*(arg1 + 0x38) = divs.dp.d(sx.q(*(arg1 + 0x28)), rbp_1)
