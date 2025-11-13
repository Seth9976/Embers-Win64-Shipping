// 函数: sub_140ba29f0
// 地址: 0x140ba29f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 8)
*(arg1 + 0x110) = 3
int64_t result = *rdx - rdx[2]
*(arg1 + 0xd8) += result
__builtin_memset(rdx, 0, 0x18)
int64_t rcx = *(arg1 + 0xc8)

if (rcx != 0)
    result = sub_140a74f90(rcx)

*(arg1 + 0xc8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
return result
