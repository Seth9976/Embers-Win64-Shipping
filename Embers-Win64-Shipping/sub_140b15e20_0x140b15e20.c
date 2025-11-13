// 函数: sub_140b15e20
// 地址: 0x140b15e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* rcx = arg1 + 0x30

if (rax != 0)
    rcx = rax

(*(arg1 + 0x10))((*(*rcx + 8))(rcx))
int64_t result
result.b = 1
return result
