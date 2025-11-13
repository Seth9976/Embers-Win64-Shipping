// 函数: sub_142aa25b0
// 地址: 0x142aa25b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int16_t rax_1 = *(arg3 + 8)
int32_t r9_1

if (rax_1 s< 0)
    r9_1 = *(arg3 + 0xc)
else
    r9_1 = sx.d(rax_1) s>> 5

void* rcx = nullptr
void* r10

if ((rax_1.b & 0x11) == 0)
    r10 = arg3 + 0xa
    
    if ((rax_1.b & 2) == 0)
        r10 = *(arg3 + 0x18)
else
    r10 = nullptr

int16_t rax_2 = *(arg2 + 8)
int32_t r8_1

if (rax_2 s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax_2) s>> 5

if ((rax_2.b & 0x11) == 0)
    rcx = arg2 + 0xa
    
    if ((rax_2.b & 2) == 0)
        rcx = *(arg2 + 0x18)

return sub_142aa3550(arg1, rcx, r8_1, r10, r9_1, arg4)
