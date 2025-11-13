// 函数: sub_1406b5f70
// 地址: 0x1406b5f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
InitializeCriticalSection(arg1 + 0x98)
SetCriticalSectionSpinCount(arg1 + 0x98, 0xfa0)
*(arg1 + 0xc0) = sub_140a491d0(0)

for (int64_t i = 0; i s< 0x10; i += 1)
    void* const rax_1 = j_sub_140a82f30(0x60)
    void* const arg_10 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        __builtin_memset(rax_1, 0, 0x2c)
        __builtin_memset(rax_1 + 0x30, 0, 0x24)
        *(rax_1 + 0x5c) = 0
    
    *(arg1 + (i << 3)) = rax_1

__builtin_memset(arg1 + 0x80, 0, 0x18)
*(arg1 + 0xc8) = 0
return arg1
