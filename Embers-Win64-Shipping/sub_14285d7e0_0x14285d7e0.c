// 函数: sub_14285d7e0
// 地址: 0x14285d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i_1 = *(arg1 + 0x818)

if (i_1 == 0)
    *(arg1 + 0x818) = 0
else
    void* rdi_1 = arg1 + (i_1 + 0x34) * 0x28
    int64_t i
    
    do
        sub_1428a6780(*rdi_1)
        *rdi_1 = 0
        rdi_1 -= 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(arg1 + 0x818) = 0

return 1
