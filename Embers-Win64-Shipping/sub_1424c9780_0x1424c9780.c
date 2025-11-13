// 函数: sub_1424c9780
// 地址: 0x1424c9780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(arg2 + 0x60)
*(arg2 + 0x58) = 0
int64_t rcx_1 = *(arg2 + 0x50)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_141f10e50(arg2 + 0x10, 0)
int64_t rcx_3 = *(arg2 + 0x30)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg2 + 0x10)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
