// 函数: sub_1421bcac0
// 地址: 0x1421bcac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x28)
char* rdi = nullptr

if (arg2 == 1)
    int64_t rdx = *(r14 + 0x58)
    
    if (rdx != 0)
        char* rax = sub_1421b7c40(arg1, rdx)
        rdi = rax
        
        if (rax != 0 && (*rax & 2) == 0)
            rdi = nullptr

int32_t rcx = *(arg1 + 0x118)
int64_t rsi = sx.q(rcx - 1)

if (rcx - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t rdx_4 = *(arg1 + 0xf8)
        int16_t rbp_1 = *(rdx_4 + (rsi << 1))
        
        if (rdi != 0)
            int64_t* rcx_2 = *(r14 + 0x58)
            (*(*rcx_2 + 0x350))(rcx_2, arg1, rdi, 
                sx.q(*(arg1 + 0x114) * zx.d(rbp_1)) + *(arg1 + 0xf0))
            rdx_4 = *(arg1 + 0xf8)
        
        *(rdx_4 + (rsi << 1)) = *(rdx_4 + (sx.q(*(arg1 + 0x118)) << 1) - 2)
        *(*(arg1 + 0xf8) + (sx.q(*(arg1 + 0x118)) << 1) - 2) = rbp_1
        *(arg1 + 0x118) -= 1
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x11c) = 0
