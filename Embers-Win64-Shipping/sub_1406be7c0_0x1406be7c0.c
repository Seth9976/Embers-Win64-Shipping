// 函数: sub_1406be7c0
// 地址: 0x1406be7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x98)

if (*(arg1 + 0x88) s>= *(arg1 + 0x8c))
    while (*(*(arg1 + 0xc8) + 0x20) == 0)
        LeaveCriticalSection(arg1 + 0x98)
        int64_t* rcx_2 = *(arg1 + 0xc0)
        (*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0)
        EnterCriticalSection(arg1 + 0x98)
        
        if (*(arg1 + 0x88) s< *(arg1 + 0x8c))
            break

LeaveCriticalSection(arg1 + 0x98)

if (*(*(arg1 + 0xc8) + 0x20) == 0)
    return *(arg1 + (sx.q(*(arg1 + 0x84)) << 3))

return 0
