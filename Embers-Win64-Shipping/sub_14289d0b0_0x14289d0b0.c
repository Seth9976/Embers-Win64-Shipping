// 函数: sub_14289d0b0
// 地址: 0x14289d0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *(arg1 + 8)

if (rax == 0)
    return 0xffffffff

int64_t r10 = *(rax + 0x28)

if (r10 == 0)
    return 1

jump(r10)
