// 函数: sub_141dea200
// 地址: 0x141dea200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x28)
int64_t r8 = 0

for (void* rdi = &i[sx.q(*(arg1 + 0x30))]; i != rdi; i = &i[1])
    int64_t* rcx = *i
    
    if (rcx != 0)
        int64_t rax_2 = (*(*rcx + 0x260))(rcx, arg2)
        r8 = rax_2
        
        if (rax_2 != 0)
            return rax_2

return r8
