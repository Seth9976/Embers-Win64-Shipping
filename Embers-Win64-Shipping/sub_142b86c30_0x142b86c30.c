// 函数: sub_142b86c30
// 地址: 0x142b86c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t var_18 = 0
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

void* rdx

if ((rax.b & 0x11) == 0)
    rdx = arg1 + 0xa
    
    if ((rax.b & 2) == 0)
        rdx = *(arg1 + 0x18)
else
    rdx = nullptr

sub_142b62f60(arg2, rdx, r8_1, 0, 0)
return arg2
