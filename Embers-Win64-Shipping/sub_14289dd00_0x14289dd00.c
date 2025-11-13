// 函数: sub_14289dd00
// 地址: 0x14289dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t* r9 = *arg2
int32_t* r8 = *arg1
int32_t rcx = *r8
int32_t rdx_1 = rcx - *r9

if (rcx == *r9)
    if (rcx == 0)
        return 0
    
    if (rcx == 1)
        rdx_1 = sub_1428a3940(*(r8 + 8), *(r9 + 8))
    else if (rcx == 2)
        return sub_1428a3250(*(r8 + 8), *(r9 + 8))

return zx.q(rdx_1)
