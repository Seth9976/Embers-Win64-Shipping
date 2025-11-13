// 函数: sub_142bd7c60
// 地址: 0x142bd7c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)

if (arg2 u>= ((*(arg1 + 0x18) - r8) s>> 3).d)
    int32_t* rax_3 = *(arg1 + 8)
    
    if (rax_3 != 0 && *rax_3 == 0)
        *rax_3 = 0x82
    
    return 0

uint64_t rax_5 = zx.q(arg2)
int32_t* rdx = r8 + (rax_5 << 3)
int32_t rax_6 = *(r8 + (rax_5 << 3) + 4)

if (rax_6 == 1)
    int32_t rcx = *rdx
    
    if (rcx s>= 0)
        return (rcx + 0x2000) s>> 0xe
    
    return zx.q(neg.d((0x2000 - rcx) s>> 0xe))

int32_t result = *rdx

if (rax_6 != 2)
    return result

return zx.q(result << 0x10)
