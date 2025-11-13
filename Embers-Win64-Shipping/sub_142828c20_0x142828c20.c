// 函数: sub_142828c20
// 地址: 0x142828c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x20)

while (i != 0)
    sub_1428272a0(*(*(arg1 + 8) + (((i + *(arg1 + 0x18) - 1) & (*(arg1 + 0x10) - 1)) << 3)))
    int64_t rcx_3 = *(arg1 + 0x20)
    i = rcx_3 - 1
    *(arg1 + 0x20) = i
    
    if (rcx_3 == 1)
        *(arg1 + 0x18) = 0

int64_t i_1 = *(arg1 + 0x10)

while (i_1 != 0)
    i_1 -= 1
    void* rcx_4 = *(*(arg1 + 8) + (i_1 << 3))
    
    if (rcx_4 != 0)
        sub_14058ba50(rcx_4, 0x58)

void* rcx_5 = *(arg1 + 8)

if (rcx_5 != 0)
    sub_14058ba50(rcx_5, *(arg1 + 0x10) << 3)

*(arg1 + 0x10) = 0
*(arg1 + 8) = 0
