// 函数: sub_142b77510
// 地址: 0x142b77510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x18)).b
int64_t r8 = sx.q(arg2)
void* rbx

if ((rax & 0x11) == 0)
    rbx = arg1 + 0x1a
    
    if ((rax & 2) == 0)
        rbx = *(arg1 + 0x28)
else
    rbx = nullptr

int16_t rax_1 = *(arg1 + 0x18)
int32_t rdx_1

if (rax_1 s< 0)
    rdx_1 = *(arg1 + 0x1c)
else
    rdx_1 = sx.d(rax_1) s>> 5

return (sub_142b138d0(rbx + (r8 << 1), rdx_1 - r8.d) - rbx) s>> 1
