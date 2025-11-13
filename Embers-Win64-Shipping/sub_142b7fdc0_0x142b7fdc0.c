// 函数: sub_142b7fdc0
// 地址: 0x142b7fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x330)
int16_t rax = *(rcx + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(rcx + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rdx = *(arg1 + 0x338)

if (rdx == rax_2)
    return 0xffffffff

int32_t result = sub_142a486d0(rcx, rdx)
int32_t rcx_1
rcx_1.b = result u> 0xffff
*(arg1 + 0x338) += rcx_1 + 1
return result
