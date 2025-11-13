// 函数: sub_140b9b470
// 地址: 0x140b9b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int32_t result = sub_1406daa50(arg1 + 0x40, arg2)

if (result == 0xffffffff)
    int64_t rsi_1 = sx.q(arg1->__offset(0x48).d)
    int32_t rax = (rsi_1 + 1).d
    arg1->__offset(0x48).d = rax
    
    if (rax s> arg1->__offset(0x4c).d)
        sub_1405a4f90(arg1 + 0x40)
    
    result = sub_140596d10((rsi_1 << 4) + arg1->__offset(0x40).q, arg2)

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1) __tailcall
