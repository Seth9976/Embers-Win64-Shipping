// 函数: sub_141911b70
// 地址: 0x141911b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419583e0(*(arg1 + 0x15bb8))
*(arg1 + 0x15bb8)
*(arg1 + 0x8c1) = 1
int64_t result = EnterCriticalSection(arg1 + 0x15cf8)
int64_t* rcx_3 = *(arg1 + 0x15d20)

if (rcx_3 != 0)
    result = (*(*rcx_3 + 0x28))(rcx_3)

if (arg1 == -0x15cf8)
    return result

return LeaveCriticalSection(arg1 + 0x15cf8)
