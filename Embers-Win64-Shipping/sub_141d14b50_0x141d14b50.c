// 函数: sub_141d14b50
// 地址: 0x141d14b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f366b8)

if (*(arg1 + 0xb4) != 0)
    void*** rax_1
    int128_t zmm6
    rax_1, zmm6 = sub_140a491d0(1)
    *(arg1 + 0x98) = rax_1

int64_t result = LeaveCriticalSection(&data_143f366b8)
int64_t* rcx_1 = *(arg1 + 0x98)

if (rcx_1 == 0)
    return result

(*(*rcx_1 + 0x20))()
EnterCriticalSection(&data_143f366b8)
sub_140a4fc50(*(arg1 + 0x98))
*(arg1 + 0x98) = 0
return LeaveCriticalSection(&data_143f366b8)
