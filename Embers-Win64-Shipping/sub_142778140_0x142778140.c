// 函数: sub_142778140
// 地址: 0x142778140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x80)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x70)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x60) = 0
int64_t rcx_2 = *(arg1 + 0x58)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* result = sub_1409aaf90(arg1 + 0x18)
int64_t* rcx_4 = *(arg1 + 0x10)

if (rcx_4 == 0)
    return result

return (**rcx_4)(rcx_4, 1)
