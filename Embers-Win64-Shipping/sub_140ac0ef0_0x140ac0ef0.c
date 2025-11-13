// 函数: sub_140ac0ef0
// 地址: 0x140ac0ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x808))
uint32_t result = 0x100
uint32_t result_1 = *(arg1 + 0x80c)

if (r8.d u> 0x100)
    int32_t r9_2 = result_1 - r8.d
    
    if ((sx.q(r9_2) << 3 u>= 0x4000 || (r8 * 3).d s< result_1 * 2) && (r9_2 s> 0x40 || r8.d == 0))
        result = r8.d
        
        if (r8.d s> 0)
            int64_t rax_3 = sub_140a846a0(r8 << 3, 0)
            result_1 = *(arg1 + 0x80c)
            result = (rax_3 u>> 3).d
    else
        result = result_1

if (result == result_1)
    return result

int32_t rdx = *(arg1 + 0x808)
*(arg1 + 0x80c) = result
return sub_140ac0b90(arg1, rdx, result, 8) __tailcall
