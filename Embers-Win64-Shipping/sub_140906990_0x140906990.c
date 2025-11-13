// 函数: sub_140906990
// 地址: 0x140906990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x30)

while (*(arg1 + 0x28) s> 0)
    result = (**(arg1 + 8))(arg1 + 8, 0)
    
    if (result == 0)
        break
    
    int64_t r9_1 = sx.q(*(arg1 + 0x28))
    void* rdi_1 = *(*(arg1 + 0x20) + (r9_1 << 3) - 8)
    *(arg1 + 0x28) = (r9_1 - 1).d
    sub_1405c53d0(arg1 + 0x20)
    *(rdi_1 + 0x18) = result
    int64_t* rcx_3 = *(rdi_1 + 0x30)
    result = (*(*rcx_3 + 0x10))(rcx_3)

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30) __tailcall
