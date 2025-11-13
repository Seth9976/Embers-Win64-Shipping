// 函数: sub_140b73350
// 地址: 0x140b73350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    return 

uint32_t nNumberOfBytesToRead = *(arg1 + 0x38)
*(arg1 + 0x48) = arg2
*(arg1 + 0x71) = 1
uint32_t numberOfBytesRead = 0

if (ReadFile(*(arg1 + 8), *(arg1 + (sx.q(arg2) << 3) + 0x28), nNumberOfBytesToRead, 
        &numberOfBytesRead, arg1 + 0x50) != 0)
    *(arg1 + 0x20) += zx.q(numberOfBytesRead)
    int64_t rax = *(arg1 + 0x20)
    *(arg1 + 0x71) = 0
    *(arg1 + 0x60) = rax.d
    *(arg1 + 0x64) = (rax u>> 0x20).d
    
    if (rax u>= *(arg1 + 0x10))
        *(arg1 + 0x70) = 1
else if (GetLastError().d != 0x3e5)
    *(arg1 + 0x70) = 1
