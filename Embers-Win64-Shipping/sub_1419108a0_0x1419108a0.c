// 函数: sub_1419108a0
// 地址: 0x1419108a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = data_143eff600

if (rdi == 0)
    return 

EnterCriticalSection(rdi + 0x15bd0)
int32_t i = 0
*(rdi + 0x30c) = 0

if (*(rdi + 0x15bc8) s> 0)
    int64_t r8_1 = 0
    
    do
        r8_1 += 8
        i += 1
        *(*(r8_1 + *(rdi + 0x15bc0) - 8) + 0x3d) = 1
    while (i s< *(rdi + 0x15bc8))

if (rdi != -0x15bd0)
    LeaveCriticalSection(rdi + 0x15bd0)
