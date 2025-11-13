// 函数: sub_141f43e60
// 地址: 0x141f43e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg1 + 0xa54)
void* const r10 = 0xa78

if (r9 == 0)
    r10 = 0xa58

void* const r8 = 0xa38

if (r9 == 0)
    r8 = 0xa18

void* const rax = 0xa28

if (r9 == 0)
    rax = 0xa08

sub_141f44140(arg1, *(arg1 + 0xa00), *(arg1 + 0x9f0), *(arg1 + 0xa55), rax + arg1, r8 + arg1, 
    arg1 + 0xa48, r10 + arg1)
int64_t result = sub_141f43f40(arg1, arg1 + 0x9f0)

if (*(arg1 + 0xa55) != 0 || *(arg1 + 0xa54) != 0)
    int64_t* rcx_2 = *(arg1 + 0x9f0)
    
    if (rcx_2 != 0)
        return sub_141e0fdc0(rcx_2, arg1 + 0x9f0)
    
    rcx_2 = *(arg1 + 0x9f8)
    
    if (rcx_2 != 0)
        return sub_141e0fdc0(rcx_2, arg1 + 0x9f0)

return result
