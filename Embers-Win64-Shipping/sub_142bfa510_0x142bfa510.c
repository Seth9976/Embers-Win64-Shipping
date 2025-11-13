// 函数: sub_142bfa510
// 地址: 0x142bfa510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 0xe)

if (rax == 0)
    return rax

uint32_t rax_3

if (sub_142bf7510(arg2, arg1, (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))) != 0)
    rax_3.b = ((zx.q((zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7))) << 2) + 0x10).d
        u<= (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
else
    void* rbp_2 = *(arg2 + 0x10) - arg1
    
    if (rbp_2 u> 0xffff)
        rbp_2.w = 0xffff
    
    if (sub_142bf99e0(arg2, arg1 + 2, 2).b == 0)
        rax_3.b = 0
    else
        uint16_t rcx_3 = rbp_2.w
        *(arg1 + 3) = rcx_3.b
        *(arg1 + 2) = (rcx_3 u>> 8).b
        rax_3.b = ((zx.q((zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7))) << 2) + 0x10).d
            u<= (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))

return rax_3
