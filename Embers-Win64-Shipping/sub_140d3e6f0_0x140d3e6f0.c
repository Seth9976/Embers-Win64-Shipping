// 函数: sub_140d3e6f0
// 地址: 0x140d3e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0x28)
void* i = *(arg1 + 8)

for (void* rdi_2 = (sx.q(*(arg1 + 0x10)) << 4) + i; i != rdi_2; i += 0x10)
    j_sub_140a74f90(*(i + 8))

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    sub_1405a5410(arg1 + 8, 0)

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
return ReleaseSRWLockExclusive(arg1 + 0x28) __tailcall
