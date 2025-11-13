// 函数: sub_140846170
// 地址: 0x140846170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x1c0)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x1c8)

if (i_1 != 0)
    void* lpCriticalSection = rbx + 0x48
    int32_t i
    
    do
        DeleteCriticalSection(lpCriticalSection)
        lpCriticalSection += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x1c0)

if (rcx != 0)
    sub_140a74f90(rcx)
