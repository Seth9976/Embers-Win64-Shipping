// 函数: sub_142a86630
// 地址: 0x142a86630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) -= 1
int64_t rax = *(arg1 + 0x20)
int64_t result = *(arg2 + 8)

if (rax != 0)
    int64_t rcx = *(arg2 + 0x10)
    
    if (rcx != 0 && rcx != 0)
        rax(rcx)

int64_t rax_1 = *(arg1 + 0x28)

if (rax_1 != 0)
    if (result != 0 && result != 0)
        rax_1(result)
    
    result = 0

*(arg2 + 0x10) = 0
*(arg2 + 8) = 0
*arg2 = 0x80000000
return result
