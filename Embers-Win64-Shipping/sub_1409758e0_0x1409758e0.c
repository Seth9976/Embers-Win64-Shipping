// 函数: sub_1409758e0
// 地址: 0x1409758e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rbx = 0

if (*(arg1 + 0x48) s<= 0)
    return 0

int64_t rdi = 0
int64_t rsi
int64_t arg_8 = rsi

while (r14.b == 0)
    int64_t r12_1 = *(arg1 + 0x40)
    int64_t* rcx = *(rdi + r12_1 + 0x30)
    char rax
    
    if (rcx != 0)
        rax = (*(*rcx + 0x28))(rcx)
    
    if (rcx == 0 || rax == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    int64_t* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        rax = (*(*rcx_1 + 0x28))(rcx_1)
    
    if (rcx_1 == 0 || rax == 0)
        rax = 0
    else
        rax = 1
    
    if (rsi.b == rax)
        if (rsi.b != 0)
            int64_t* rcx_2 = *(rdi + r12_1 + 0x30)
            rax = (**rcx_2)(rcx_2, *(arg2 + 8))
        
        if (rsi.b == 0 || rax != 0)
            *(arg1 + 0x30) -= 1
            r14.b = 1
            sub_140974ce0(arg1 + 0x40, rbx, 1, 1)
            rbx -= 1
            rdi -= 0x78
    
    rbx += 1
    rdi += 0x78
    
    if (rbx s>= *(arg1 + 0x48))
        break

return zx.q(r14.b)
