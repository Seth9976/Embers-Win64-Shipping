// 函数: sub_141f63b10
// 地址: 0x141f63b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg2 = 0
arg2[1] = 0
void* rax = *(arg1 + 0x430)

if (rax != 0 && *(rax + 0xc0) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t rbp_1 = *(rax + 0xb8)
        int32_t rax_1 = (rdi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        int64_t rax_2 = *(rbp_1 + r14_1 + 8)
        i += 1
        r14_1 += 0x28
        *(*arg2 + (rdi_1 << 3)) = rax_2
        rax = *(arg1 + 0x430)
    while (i s< *(rax + 0xc0))

return arg2
