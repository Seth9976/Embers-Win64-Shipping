// 函数: sub_14265e020
// 地址: 0x14265e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_3 = ((*(arg1 + 0x3d4) + 0x1f) u>> 5)
    + ((*(arg1 + 0x30c) + ((*(arg1 + 0x3a4) + *(arg1 + 0x354)) << 1)) << 2)
    + ((*(arg1 + 0x374) + 0x1f) u>> 5)
int64_t* rcx_1 = *(arg1 + 0x2e0)
int32_t rbx_3 = (rdx_3 + *(arg1 + 0x3b4) * 6 + *(arg1 + 0x3f0) + *(arg1 + 0x390)) << 2

if (rcx_1 != 0)
    int64_t rdx_4 = *rcx_1
    (*(rdx_4 + 0x50))(rcx_1, rdx_4)

return zx.q(rbx_3)
