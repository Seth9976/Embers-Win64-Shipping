// 函数: sub_141d14aa0
// 地址: 0x141d14aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f366b8)

if (*(arg1 + 0x90) != 0)
    void*** rax_1
    int128_t zmm6
    rax_1, zmm6 = sub_140a491d0(1)
    *(arg1 + 0x80) = rax_1

int64_t result = LeaveCriticalSection(&data_143f366b8)
int64_t* rcx_1 = *(arg1 + 0x80)

if (rcx_1 == 0)
    return result

(*(*rcx_1 + 0x20))()
EnterCriticalSection(&data_143f366b8)
sub_140a4fc50(*(arg1 + 0x80))
*(arg1 + 0x80) = 0
return LeaveCriticalSection(&data_143f366b8)
