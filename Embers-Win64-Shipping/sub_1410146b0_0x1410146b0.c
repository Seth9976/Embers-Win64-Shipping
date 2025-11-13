// 函数: sub_1410146b0
// 地址: 0x1410146b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != -0x108)
    EnterCriticalSection(arg1 + 0x108)

if (arg2 != 0)
    if (*(arg1 + 0x158) != 0)
        *arg2 = 1
        int64_t* rcx_1 = *(arg1 + 0xc0)
        (*(*rcx_1 + 0x118))(rcx_1, 1, &arg2[2])
    
    if (*arg2 != 0)
        *(arg2 + 0x50) = arg1 + 0xe8
        *(arg2 + 0x48) = *(arg1 + 0xe8)
        *(*(arg1 + 0xe8) + 8) = &arg2[0x12]
        *(arg1 + 0xe8) = &arg2[0x12]
        *(arg1 + 0xfc) += 1
    else
        *(arg2 + 0x50) = arg1 + 0xd8
        *(arg2 + 0x48) = *(arg1 + 0xd8)
        *(*(arg1 + 0xd8) + 8) = &arg2[0x12]
        *(arg1 + 0xd8) = &arg2[0x12]
        *(arg1 + 0xf8) += 1
        *(arg1 + 0x100) += *(arg2 + 0x10)

if (arg1 != -0x108)
    LeaveCriticalSection(arg1 + 0x108)
