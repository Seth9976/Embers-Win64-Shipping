// 函数: sub_141d3b630
// 地址: 0x141d3b630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0xe8)
void* const r9 = 8
void* const rax = 0x78

if (r8 != arg1 + 8)
    rax = 8

void* result = rax + arg1
*(arg1 + 0xe8) = result

if (r8 != arg1 + 8)
    r9 = 0x78

*(arg1 + 0xf0) = r9 + arg1
return result
