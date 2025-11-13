// 函数: sub_1425f1720
// 地址: 0x1425f1720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t* r8 = *(arg1 + 0x30)
int64_t rdx = sx.q(*(arg1 + 0x38))
int64_t* rax = r8
void* rcx_1 = &r8[rdx]
int64_t result

if (r8 != rcx_1)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1425f1780
    
    result = (rax - r8) s>> 3

if (r8 == rcx_1 || result.d == 0xffffffff)
label_1425f1780:
    int32_t rax_2 = (rdx + 1).d
    *(arg1 + 0x38) = rax_2
    
    if (rax_2 s> *(arg1 + 0x3c))
        sub_1405a4d70(arg1 + 0x30)
    
    result = *(arg1 + 0x30)
    *((rdx << 3) + result) = arg2

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
