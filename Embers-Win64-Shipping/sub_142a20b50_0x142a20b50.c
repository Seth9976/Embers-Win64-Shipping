// 函数: sub_142a20b50
// 地址: 0x142a20b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1

if (*(arg2 + 0xf60) == 0)
    rax_1 = *(arg1 + 0x1e90)
else
    int32_t rcx = sx.d(*(zx.q(*(*(arg2 + 0xf00) + 0xb)) + arg2 + 0xf67))
    
    if (*(arg2 + 0xf63) != 1)
        rcx += *(arg1 + 0x1e90)
    
    if (rcx s< 0)
        rax_1 = 0
    else
        rax_1 = 0x7f
        
        if (rcx s<= 0x7f)
            rax_1 = rcx

*(arg2 + 0x800) = 1
int64_t rcx_1 = sx.q(rax_1)
*(arg2 + 0x7e0) = *(arg1 + 0x12c0 + (rcx_1 << 2) + 0x160)
*(arg2 + 0x820) = *(arg1 + 0x12c0 + (rcx_1 << 2) + 0x360)
void* rdx_1 = arg1 + 0x12c0 + (rcx_1 << 2)
*(arg2 + 0x840) = *(arg1 + 0x12c0 + (rcx_1 << 2) + 0x560)
void* result = arg2 + 0x802
int64_t i_1 = 0xf
int64_t i

do
    int16_t rcx_2 = *(rdx_1 + 0x162)
    *(result - 0x20) = rcx_2
    *result = rcx_2
    result += 2
    *(result + 0x1e) = *(rdx_1 + 0x362)
    *(result + 0x3e) = *(rdx_1 + 0x562)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
