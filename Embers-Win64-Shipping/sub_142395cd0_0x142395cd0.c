// 函数: sub_142395cd0
// 地址: 0x142395cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x580)
int64_t rsi = sx.q(*(arg2 + 0x34))
int64_t rcx_1

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x260))
    rcx_1 = rsi
label_142395d2e:
    
    if (rsi.d s>= 0 && rsi.d s< *(arg1 + 0x18))
        int64_t rax_2 = *(arg1 + 0x10)
        int64_t* rcx_2 = rcx_1 * 0xd8
        
        if (*(rcx_2 + rax_2) == arg2)
            *(rcx_2 + rax_2) = 0
            int64_t r15_1 = sx.q(*(arg1 + 0x280))
            int32_t rax_3 = (r15_1 + 1).d
            *(arg1 + 0x280) = rax_3
            
            if (rax_3 s> *(arg1 + 0x284))
                sub_1405a4cf0(arg1 + 0x278)
            
            *(*(arg1 + 0x278) + (r15_1 << 2)) = rsi.d
            sub_1409740e0(arg1 + 0x288, arg2)
            sub_14090a370(arg1 + 0x2d8, rsi.d)
else
    int64_t rax_1 = *(arg1 + 0x258)
    rcx_1 = rsi
    
    if (*(rax_1 + (rsi << 3)) != arg2)
        goto label_142395d2e
    
    *(rax_1 + (rsi << 3)) = 0
*(arg2 + 0x3d) &= 0xef
*(arg2 + 0x34) = 0xffffffff
uint64_t result = sub_1409740e0(arg1 + 0x20, arg2)

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580) __tailcall
