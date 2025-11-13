// 函数: sub_142659c10
// 地址: 0x142659c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))
int32_t r9 = arg2[1].d

if (rdi.d != 0)
    int32_t rdx = r9 + rdi.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_140775c70(arg2, rdx)
        r9 = arg2[1].d
    
    memcpy(*arg2 + sx.q(r9) * 0x48, *(arg1 + 8), (rdi * 0x48).d)
    arg2[1].d += rdi.d
    r9 = arg2[1].d

int64_t result
result.b = r9 s> 0
return result
