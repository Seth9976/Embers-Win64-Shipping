// 函数: sub_1418e37c0
// 地址: 0x1418e37c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2d8) == 0)
    return 

EnterCriticalSection(arg1 + 0x230)

if (data_143de5480 != 0)
    GetCurrentThreadId()

*(arg1 + 0x278) += *(arg2 + 0x4ac)
*(arg1 + 0x27c) += 1
void** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    *rax_2 = arg2
    rax_2[1] = 0
    rax_2[2] = 0
    int64_t rax_3 = *(arg1 + 0x260)
    
    if (rax_3 == 0)
        *(arg1 + 0x268) = rax_2
    else
        rax_2[1] = rax_3
        *(*(arg1 + 0x260) + 0x10) = rax_2
    
    *(arg1 + 0x260) = rax_2
    (*(*(arg1 + 0x258) + 8))(arg1 + 0x258, zx.q(*(arg1 + 0x270) + 1))

*(arg2 + 0x4a0) = *(arg1 + 0x260)
*(arg2 + 0x4a8) = data_14399fa54

if (arg1 != -0x230)
    LeaveCriticalSection(arg1 + 0x230)
