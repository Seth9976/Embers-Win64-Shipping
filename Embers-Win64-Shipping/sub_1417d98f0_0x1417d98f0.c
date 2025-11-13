// 函数: sub_1417d98f0
// 地址: 0x1417d98f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x30)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x10) = &data_142fcd2e8
int64_t rcx_1 = *(arg1 + 0x20)

if (rcx_1 == 0)
    return &data_142fcd2e8

return sub_140a74f90(rcx_1) __tailcall
