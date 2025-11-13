// 函数: sub_141d4a0e0
// 地址: 0x141d4a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0xa0)
int64_t rdx = sx.q(*(arg1 + 0xa8))
int64_t* rax = r8
void* rcx = &r8[rdx]
int64_t result

if (r8 != rcx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx)
            goto label_141d4a130
    
    result = (rax - r8) s>> 3

if (r8 == rcx || result.d == 0xffffffff)
label_141d4a130:
    int32_t rax_2 = (rdx + 1).d
    *(arg1 + 0xa8) = rax_2
    
    if (rax_2 s> *(arg1 + 0xac))
        sub_1405a4d70(arg1 + 0xa0)
    
    result = *(arg1 + 0xa0)
    *((rdx << 3) + result) = arg2

return result
