// 函数: sub_14269b8f0
// 地址: 0x14269b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int64_t rax
void* const rbp_1

if (*(arg1 + 0xe0) == 0)
    rbp_1 = nullptr
else
    rax = sub_14269ce80()
    
    if (rax == 0)
        rbp_1 = nullptr
    else
        rbp_1 = *(arg1 + 0xe0)
        int64_t rdx = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rbp_1 + 0x38))
            rbp_1 = nullptr
        else if (*(*(rbp_1 + 0x30) + (rax << 3)) != rdx)
            rbp_1 = nullptr

if (arg2 != 0)
    rax = sub_14269ce80()
    
    if (rax != 0)
        int64_t rdx_1 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax << 3)) == rdx_1)
            rsi = arg2

if (rbp_1 != rsi)
    *(arg1 + 0xe0) = arg2
    sub_141df0440(arg1)
