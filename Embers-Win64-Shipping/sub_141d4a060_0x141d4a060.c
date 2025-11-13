// 函数: sub_141d4a060
// 地址: 0x141d4a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 8)
int64_t* rax = r8
int64_t rdx = sx.q(*(arg1 + 0x10))
void* rcx = &r8[rdx]
int64_t result

if (r8 != rcx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx)
            goto label_141d4a0ae
    
    result = (rax - r8) s>> 3

if (r8 == rcx || result.d == 0xffffffff)
label_141d4a0ae:
    int32_t rax_2 = (rdx + 1).d
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 s> *(arg1 + 0x14))
        sub_1405a4d70(arg1 + 8)
    
    result = *(arg1 + 8)
    *((rdx << 3) + result) = arg2

return result
