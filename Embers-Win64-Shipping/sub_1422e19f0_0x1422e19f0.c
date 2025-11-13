// 函数: sub_1422e19f0
// 地址: 0x1422e19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    *(rcx + 8) = *(arg1 + 0x18)

int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    *rcx_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int64_t* rcx_2 = *(arg1 + 8)

if (rcx_2 != 0)
    (**rcx_2)(rcx_2)
    *(arg1 + 8) = 0
