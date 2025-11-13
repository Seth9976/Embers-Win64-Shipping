// 函数: sub_141032f20
// 地址: 0x141032f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
*(arg2 + 8) = arg3
int64_t rdi_3 = (zx.q(*(arg2 + 0x10)) + 3) * 2
int64_t* result = j_sub_140a82f30(0x10)

if (result != 0)
    *result = 0
    result[1] = arg2
    void** rcx_1 = *(arg1 + (rdi_3 << 3))
    *(arg1 + (rdi_3 << 3)) = result
    *rcx_1 = result

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
