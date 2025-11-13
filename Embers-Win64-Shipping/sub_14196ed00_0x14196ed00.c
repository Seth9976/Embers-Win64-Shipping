// 函数: sub_14196ed00
// 地址: 0x14196ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
*(r8 + 0x20) = *(arg2 + 0x20)
int64_t result = *(arg2 + 0x28)
*(r8 + 0x28) = result
char* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return result

sub_1419628c0(rbx)
return sub_140a74f90(rbx) __tailcall
