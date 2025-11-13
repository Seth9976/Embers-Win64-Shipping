// 函数: sub_142a5a390
// 地址: 0x142a5a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t rdx_1

if (rax s< 0)
    rdx_1 = *(arg2 + 0xc)
else
    rdx_1 = sx.d(rax) s>> 5

sub_142a5a430(arg1, rdx_1 + 1)
int16_t rax_1 = *(arg2 + 8)
int32_t rcx_1

if (rax_1 s< 0)
    rcx_1 = *(arg2 + 0xc)
else
    rcx_1 = sx.d(rax_1) s>> 5

void* rdx_3

if ((rax_1.b & 0x11) == 0)
    rdx_3 = arg2 + 0xa
    
    if ((rax_1.b & 2) == 0)
        rdx_3 = *(arg2 + 0x18)
else
    rdx_3 = nullptr

memcpy(*arg1, rdx_3, rcx_1 * 2)
int16_t rax_2 = *(arg2 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg2 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

*(*arg1 + (sx.q(rax_4) << 1)) = 0
return arg1
