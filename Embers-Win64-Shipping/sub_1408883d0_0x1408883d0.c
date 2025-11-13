// 函数: sub_1408883d0
// 地址: 0x1408883d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ce5bd8)
int32_t temp0 = *(arg1 + 0x44)
*(arg1 + 0x44) -= 1

if (temp0 == 1)
    if ((*(arg1 + 0x4c) & 1) != 0)
        void* rax_1 = *(arg1 + 0x28)
        sub_140888450(zx.q(*(rax_1 + 0x58)) * 0x50 + &data_143ce5c00, rax_1 + 0x80)
        *(arg1 + 0x4c) &= 0xfffffffe
    
    *(arg1 + 0x48) = 1

int64_t result = LeaveCriticalSection(&data_143ce5bd8)

if (*(arg1 + 0x48) == 0)
    return result

return sub_141997870(arg1 + 0x38) __tailcall
