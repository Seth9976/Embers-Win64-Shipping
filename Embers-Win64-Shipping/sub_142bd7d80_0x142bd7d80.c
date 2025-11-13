// 函数: sub_142bd7d80
// 地址: 0x142bd7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_8 = *(arg1 + 0x18)

if (rax_8 == *(arg1 + 0x10))
    int32_t* rax = *(arg1 + 8)
    
    if (rax != 0 && *rax == 0)
        *rax = 0xa1
    
    return 0

*(arg1 + 0x18) = rax_8 - 8
int32_t rdx = *(rax_8 - 4)

if (rdx == 1)
    int32_t rcx = *(rax_8 - 8)
    
    if (rcx s>= 0)
        return (rcx + 0x2000) s>> 0xe
    
    return zx.q(neg.d((0x2000 - rcx) s>> 0xe))

int32_t result = *(rax_8 - 8)

if (rdx != 2)
    return result

return zx.q(result << 0x10)
