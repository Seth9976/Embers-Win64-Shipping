// 函数: sub_1406be880
// 地址: 0x1406be880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x84) += 1
int32_t rax = *(arg1 + 0x84)
int32_t rdx = rax

if (rax == *(arg1 + 0x8c))
    rdx = 0

*(arg1 + 0x84) = rdx
EnterCriticalSection(arg1 + 0x98)
*(arg1 + 0x88) += 1
int64_t* rcx_1 = *(arg1 + 0xc0)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

return LeaveCriticalSection(arg1 + 0x98) __tailcall
