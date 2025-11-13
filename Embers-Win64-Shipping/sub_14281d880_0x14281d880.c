// 函数: sub_14281d880
// 地址: 0x14281d880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = *(arg1 + 0x20)

if (i_2 != 0)
    int64_t i
    
    do
        i = i_2 - 1
        *(arg1 + 0x20) = i
        i_2 = i
    while (i != 0)
    
    *(arg1 + 0x18) &= i

int64_t i_1 = *(arg1 + 0x10)

while (i_1 != 0)
    i_1 -= 1
    void* rcx = *(*(arg1 + 8) + (i_1 << 3))
    
    if (rcx != 0)
        sub_14058ba50(rcx, 0x10)

void* rcx_1 = *(arg1 + 8)

if (rcx_1 != 0)
    sub_14058ba50(rcx_1, *(arg1 + 0x10) << 3)

*(arg1 + 0x10) = 0
*(arg1 + 8) = 0
