// 函数: sub_142082a60
// 地址: 0x142082a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140758d90(arg1 + 0x50, arg2)
int64_t result_1 = sx.q(result)

if (result_1.d == 0xffffffff)
    return result

int32_t rax = *(arg1 + 0x58)
int32_t rcx_2 = rax - result_1.d

if (rcx_2 != 1)
    memmove((result_1 << 4) + *(arg1 + 0x50), (sx.q((result_1 + 1).d) << 4) + *(arg1 + 0x50), 
        (rcx_2 - 1) << 4)
    rax = *(arg1 + 0x58)

*(arg1 + 0x58) = rax - 1
return sub_1405a5010(arg1 + 0x50) __tailcall
