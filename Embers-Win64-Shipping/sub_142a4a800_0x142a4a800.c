// 函数: sub_142a4a800
// 地址: 0x142a4a800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rsi = arg2
int32_t rdi_1

if (rax s< 0)
    rdi_1 = *(arg1 + 0xc)
else
    rdi_1 = sx.d(rax) s>> 5

if (sub_142a487e0(arg1, 0xffffffff, 0xffffffff, 1, 0, 0) != 0 && rdi_1 s> 0)
    if (rsi s< 0)
        rsi = 0
    else if (rsi s>= rdi_1)
        rsi = rdi_1 - 1
    
    void* rcx = arg1 + 0xa
    
    if ((*(arg1 + 8) & 2) == 0)
        rcx = *(arg1 + 0x18)
    
    *(rcx + (sx.q(rsi) << 1)) = arg3

return arg1
