// 函数: sub_14095fe60
// 地址: 0x14095fe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t arg_20 = rdi
void* r14 = *arg1
int64_t rax = sx.q(arg1[1].d)
void* rbx = r14
void* rbp = r14 + rax * 0x18

if (r14 != rbp)
    do
        int64_t* rcx_1 = *(rbx + 8)
        
        if (rcx_1 != 0)
            rax = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (rcx_1 == 0 || rax.b == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        int64_t* rcx_2 = *(arg2 + 8)
        
        if (rcx_2 != 0)
            rax = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (rcx_2 == 0 || rax.b == 0)
            rax.b = 0
        else
            rax.b = 1
        
        if (rdi.b == rax.b)
            if (rdi.b != 0)
                int64_t* rcx_3 = *(rbx + 8)
                rax = (**rcx_3)(rcx_3, *(arg2 + 8))
            
            if (rdi.b == 0 || rax.b != 0)
                return (rbx - r14) s/ 0x18
        
        rbx += 0x18
    while (rbx != rbp)

return 0xffffffff
