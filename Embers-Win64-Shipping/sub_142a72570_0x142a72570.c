// 函数: sub_142a72570
// 地址: 0x142a72570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a48100(arg1 + 0x20, arg2)
char rax = (*(arg1 + 0x28)).b
void* rdx

if ((rax & 0x11) == 0)
    rdx = arg1 + 0x2a
    
    if ((rax & 2) == 0)
        rdx = *(arg1 + 0x38)
else
    rdx = nullptr

int16_t rax_1 = *(arg1 + 0x28)

if (rax_1 s< 0)
    return sub_142a72230(arg1, rdx, *(arg1 + 0x2c)) __tailcall

return sub_142a72230(arg1, rdx, sx.d(rax_1) s>> 5) __tailcall
