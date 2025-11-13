// 函数: sub_1413c5a50
// 地址: 0x1413c5a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413c3330(arg1 + 0x168)
*(arg1 + 0x160) = 0
int64_t rcx_1 = *(arg1 + 0x158)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

bool cond:0 = *(arg1 + 0x124) == 0
*(arg1 + 0x120) = 0

if (not(cond:0))
    sub_140638cc0(arg1 + 0x118, 0)

*(arg1 + 0x148) = 0xffffffff
*(arg1 + 0x14c) = 0
void* result = sub_14059a8e0(arg1 + 0x128, 0)
int64_t rcx_4 = *(arg1 + 0x138)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x118)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
