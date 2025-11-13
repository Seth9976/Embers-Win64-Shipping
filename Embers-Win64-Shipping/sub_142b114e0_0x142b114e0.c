// 函数: sub_142b114e0
// 地址: 0x142b114e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
int64_t r8 = sx.q(*arg1)
int16_t rcx = *(arg3 + 8)
int32_t rax_1

if (rcx s< 0)
    rax_1 = *(arg3 + 0xc)
else
    rax_1 = sx.d(rcx) s>> 5

int16_t rdx

if (r8.d u>= rax_1)
    rdx = -1
else
    void* rcx_1 = arg3 + 0xa
    
    if ((rcx.b & 2) == 0)
        rcx_1 = *(arg3 + 0x18)
    
    rdx = *(rcx_1 + (r8 << 1))

sub_142a4ad20(arg3, arg2, r8.d + 1, zx.d(rdx))
return arg2
