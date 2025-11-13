// 函数: sub_1417a2660
// 地址: 0x1417a2660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x38)

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = 0xffffff
__builtin_memset(&arg1[0xe], 0, 0x14)
void* result = sub_140774790(&arg1[6])
arg1[4] = 0

if (arg1[5] s<= 0xffffffff)
    result = sub_1405dadb0(&arg1[2], 0)

int64_t rcx_3 = *(arg1 + 0x28)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
