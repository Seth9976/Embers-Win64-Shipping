// 函数: sub_14202aad0
// 地址: 0x14202aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t arg_20 = rdi
int64_t* i = *(arg1 + 0x238)

for (void* rbp = &i[sx.q(*(arg1 + 0x240))]; i != rbp; i = &i[1])
    void* result = *i
    
    if (result != 0)
        int64_t* rcx = *(result + 0x258)
        int64_t rax
        
        if (rcx != 0)
            rax = (*(*rcx + 0x28))(rcx)
        
        if (rcx == 0 || rax.b == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        int64_t* rcx_1 = *(arg2 + 8)
        
        if (rcx_1 != 0)
            rax = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (rcx_1 == 0 || rax.b == 0)
            rax.b = 0
        else
            rax.b = 1
        
        if (rdi.b == rax.b)
            if (rdi.b != 0)
                int64_t* rcx_2 = *(result + 0x258)
                rax = (**rcx_2)(rcx_2, *(arg2 + 8))
            
            if (rdi.b == 0 || rax.b != 0)
                return result

return nullptr
