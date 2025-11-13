// 函数: sub_140b9df20
// 地址: 0x140b9df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[1])
void* i = arg1[8]

for (void* rbp_2 = (sx.q(arg1[9].d) << 5) + i; i != rbp_2; i += 0x20)
    CRITICAL_SECTION* lpCriticalSection = *(i + 0x10)
    EnterCriticalSection(lpCriticalSection)
    sub_140b9dfd0(lpCriticalSection)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

int64_t result = sub_140b9e310(arg1)

if (arg1 == -8)
    return result

return LeaveCriticalSection(&arg1[1]) __tailcall
