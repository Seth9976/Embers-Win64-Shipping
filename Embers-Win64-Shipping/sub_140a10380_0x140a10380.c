// 函数: sub_140a10380
// 地址: 0x140a10380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x58)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        sub_1405a6220(sub_140a242a0(), arg1 + 0x58)

uint32_t rax_4

if (data_143de5480 != 0)
    rax_4.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_4.b != 0)
    rax_4 = sub_1419a21e0(0)

if (*(arg1 + 0x69) == 0)
    *(arg1 + 0x68) = 0
    return rax_4

uint64_t rax_5 = sub_1429d9fc0(arg1)
*(arg1 + 0x68) = 0
return rax_5
