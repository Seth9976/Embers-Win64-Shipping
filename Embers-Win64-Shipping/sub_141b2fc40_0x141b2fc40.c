// 函数: sub_141b2fc40
// 地址: 0x141b2fc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x78)
int64_t rax = sx.q(arg2)
int64_t rbp = *(r9 + (rax << 3))
int32_t r8 = *(arg1 + 0x80)
int64_t rsi = *(arg1 + 0x58)
int32_t rax_2 = r8 - arg2

if (rax_2 != 1)
    memmove(r9 + (rax << 3), r9 + (sx.q(arg2 + 1) << 3), (rax_2 - 1) << 3)
    r8 = *(arg1 + 0x80)

*(arg1 + 0x80) = r8 - 1
int64_t result = sub_1405c53d0(arg1 + 0x78)

if (rsi == rbp)
    int64_t rcx_2
    
    if (*(arg1 + 0x80) s<= 0)
        rcx_2 = 0
    else
        result = *(arg1 + 0x78)
        rcx_2 = *result
    
    *(arg1 + 0x58) = rcx_2

return result
