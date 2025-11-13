// 函数: sub_142c3b1a0
// 地址: 0x142c3b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142c3c960(arg1, arg2, (*(arg3 + 0x10)).w)

if (rax == 0)
    return rax

int32_t rcx = *(arg3 + 0x10)
uint64_t rax_1 = 0

if (rcx != 0)
    int128_t* const rcx_1
    
    if (0 u>= rcx)
        rcx_1 = &data_14369a5d0
        goto label_142c3b1ec
    
    do
        rcx_1 = *(arg3 + 8) + (rax_1 << 1)
    label_142c3b1ec:
        *(arg1 + (rax_1 << 1) + 2) = *rcx_1
        rax_1 = zx.q(rax_1.d + 1)
    while (rax_1.d u< *(arg3 + 0x10))

rax_1.b = 1
return rax_1
