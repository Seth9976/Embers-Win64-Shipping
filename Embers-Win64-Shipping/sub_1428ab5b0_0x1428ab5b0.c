// 函数: sub_1428ab5b0
// 地址: 0x1428ab5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0x20
__chkstk(0x20)
int64_t rdi

if (arg2 == 0)
    rdi = 0
else
    rdi = *(arg2 + 0x40)

int64_t rcx = *(arg1 + 0x40)

if (rcx != rdi)
    result = sub_1428a6780(rcx)
    *(arg1 + 0x40) = rdi

if (arg2 != 0)
    *(arg2 + 0x40) = 0

return result
