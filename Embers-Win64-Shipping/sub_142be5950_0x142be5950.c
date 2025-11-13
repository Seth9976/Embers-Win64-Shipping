// 函数: sub_142be5950
// 地址: 0x142be5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *arg2 + 1

if (i u>= 0x100)
    *arg2 = 0
    return 0

char* rdx_2 = *(arg1 + 0x18) + 6 + zx.q(i)
uint32_t rcx_1

do
    rcx_1 = zx.d(*rdx_2)
    
    if (rcx_1 != 0)
        *arg2 = i
        return zx.q(rcx_1)
    
    i += 1
    rdx_2 = &rdx_2[1]
while (i u< 0x100)

*arg2 = 0
return zx.q(rcx_1)
