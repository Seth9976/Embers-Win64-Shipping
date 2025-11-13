// 函数: sub_142ada3a0
// 地址: 0x142ada3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg3 + 8)
int64_t r10 = sx.q(arg2)
int32_t arg_18 = 0
int32_t arg_8 = 0
int32_t arg_10 = 0
int32_t r9_1

if (rax s< 0)
    r9_1 = *(arg3 + 0xc)
else
    r9_1 = sx.d(rax) s>> 5

void* r8

if ((rax.b & 0x11) != 0)
    r8 = nullptr
else if ((rax.b & 2) == 0)
    r8 = *(arg3 + 0x18)
else
    r8 = arg3 + 0xa

int16_t rax_1 = *(arg1 + 8)
int32_t rdx_1

if (rax_1 s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax_1) s>> 5

void* rcx

if ((rax_1.b & 0x11) != 0)
    rcx = nullptr
else if ((rax_1.b & 2) == 0)
    rcx = *(arg1 + 0x18)
else
    rcx = arg1 + 0xa

j_sub_142a8f0d0(rcx + (r10 << 1), rdx_1 - r10.d, r8, r9_1, 0, &arg_8, &arg_10, &arg_18)
int16_t rcx_2 = *(arg3 + 8)
int32_t rax_3

if (rcx_2 s< 0)
    rax_3 = *(arg3 + 0xc)
else
    rax_3 = sx.d(rcx_2) s>> 5

int32_t r8_1 = arg_10

if (r8_1 != rax_3)
    int32_t rax_5
    
    if (rcx_2 s< 0)
        rax_5 = *(arg3 + 0xc)
    else
        rax_5 = sx.d(rcx_2) s>> 5
    
    int32_t rax_7
    
    if (rcx_2 s< 0)
        rax_7 = *(arg3 + 0xc)
    else
        rax_7 = sx.d(rcx_2) s>> 5
    
    if (rax_5 - 1 u>= rax_7)
        return 0
    
    void* rdx_3 = arg3 + 0xa
    
    if ((rcx_2.b & 2) == 0)
        rdx_3 = *(arg3 + 0x18)
    
    if (*(rdx_3 + (sx.q(rax_5 - 1) << 1)) != 0x2e)
        return 0
    
    int32_t rax_10
    
    if (rcx_2 s< 0)
        rax_10 = *(arg3 + 0xc)
    else
        rax_10 = sx.d(rcx_2) s>> 5
    
    if (r8_1 != rax_10 - 1)
        return 0

return zx.q(arg_8)
