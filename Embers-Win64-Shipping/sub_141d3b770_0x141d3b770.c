// 函数: sub_141d3b770
// 地址: 0x141d3b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x410)
void* const r9 = 0x10
void* const rax = 0x210

if (r8 != arg1 + 0x10)
    rax = 0x10

void* result = rax + arg1
*(arg1 + 0x410) = result

if (r8 != arg1 + 0x10)
    r9 = 0x210

*(arg1 + 0x418) = r9 + arg1
return result
