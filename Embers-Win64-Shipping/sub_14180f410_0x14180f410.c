// 函数: sub_14180f410
// 地址: 0x14180f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x100)
int64_t r8 = *(arg1 + 0xf0)
void* rdx_2 = sx.q(*(arg1 + 0xf8)) * 0x30 + r8
int32_t rdx_3

if (rdx_2 == r8)
label_14180f462:
    rdx_3 = -1
else
    while (true)
        int32_t rax_1 = *(rdx_2 - 8)
        rdx_2 -= 0x30
        
        if (((rax_1 u>> 1).b & 1) != 0)
            rdx_3 = ((rdx_2 - r8) s/ 0x30).d
            break
        
        if (rdx_2 == r8)
            goto label_14180f462

if (arg1 != -0x100)
    LeaveCriticalSection(arg1 + 0x100)

return sx.q(rdx_3) * 0x30 + r8 + 0x10
