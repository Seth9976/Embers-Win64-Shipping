// 函数: sub_140960f10
// 地址: 0x140960f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x60) s<= 0)
    return 0xffffffff

int64_t rbx
int64_t arg_8 = rbx
void* rsi = nullptr

do
    int64_t rax_2 = *(arg1 + 0x58)
    int64_t* rcx = *(rsi + rax_2 + 0x10)
    void* r14_1 = rsi + rax_2
    
    if (rcx != 0)
        rax_2 = (*(*rcx + 0x28))(rcx)
    
    if (rcx == 0 || rax_2.b == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    int64_t* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        rax_2 = (*(*rcx_1 + 0x28))(rcx_1)
    
    if (rcx_1 == 0 || rax_2.b == 0)
        rax_2.b = 0
    else
        rax_2.b = 1
    
    if (rbx.b == rax_2.b)
        char rax_5
        
        if (rbx.b != 0)
            int64_t* rcx_2 = *(r14_1 + 0x10)
            rax_5 = (**rcx_2)(rcx_2, *(arg2 + 8))
        
        if (rbx.b == 0 || rax_5 != 0)
            return zx.q(i)
    
    i += 1
    rsi += 0x50
while (i s< *(arg1 + 0x60))

return 0xffffffff
