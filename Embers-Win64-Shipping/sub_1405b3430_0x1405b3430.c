// 函数: sub_1405b3430
// 地址: 0x1405b3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x70)
int64_t* rax = r8
int64_t rdx = sx.q(*(arg1 + 0x78))
void* rcx = &r8[rdx]
int64_t result

if (r8 != rcx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx)
            goto label_1405b347e
    
    result = (rax - r8) s>> 3

if (r8 == rcx || result.d == 0xffffffff)
label_1405b347e:
    int32_t rax_2 = (rdx + 1).d
    *(arg1 + 0x78) = rax_2
    
    if (rax_2 s> *(arg1 + 0x7c))
        sub_1405a4d70(arg1 + 0x70)
    
    result = *(arg1 + 0x70)
    *((rdx << 3) + result) = arg2

return result
