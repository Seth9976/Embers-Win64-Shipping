// 函数: sub_14269b850
// 地址: 0x14269b850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
void* const rsi

if (arg2 == 0)
    rsi = nullptr
else
    rax = sub_14269ce80()
    
    if (rax == 0)
        rsi = nullptr
    else
        int64_t rdx = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(arg2 + 0x38))
            rsi = nullptr
        else if (*(*(arg2 + 0x30) + (rax << 3)) != rdx)
            rsi = nullptr
        else
            rsi = arg2

void* const rdx_1

if (*(arg1 + 0x260) == 0)
    rdx_1 = nullptr
else
    rax = sub_14269ce80()
    
    if (rax == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg1 + 0x260)
        int64_t r8_1 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rdx_1 = nullptr
        else if (*(*(rdx_1 + 0x30) + (rax << 3)) != r8_1)
            rdx_1 = nullptr

if (rsi != rdx_1)
    *(arg1 + 0x260) = arg2
    sub_141df0410(arg1, rdx_1)
