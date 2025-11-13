// 函数: sub_142079a50
// 地址: 0x142079a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0xa0)
int64_t rcx_1 = *(arg1 + 0x90)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(arg1 + 0x68)
*(arg1 + 0x60) = 0
int64_t rcx_3 = *(arg1 + 0x58)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_142079660(arg1 + 0x18)
*(arg1 + 8) = &data_142d44d70
void* rcx_5 = data_143e1a338

if (rcx_5 != 0 && *(arg1 + 0x10) != 0)
    return sub_140bb6e00(rcx_5, arg1 + 8)

return &data_142d44d70
