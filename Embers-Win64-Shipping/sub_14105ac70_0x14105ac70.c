// 函数: sub_14105ac70
// 地址: 0x14105ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg2 + 0x108)
*(arg1 + 0x10) = arg2
*(arg1 + 0x48) = rax_1
void* r8 = *(arg2 + 0x28)
void* rdx = r8 + 0x28

if (r8 == 0)
    rdx = arg2 + 0x30

*(arg1 + 0x18) = rdx
return arg2 + 0x30
