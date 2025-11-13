// 函数: sub_142bf8c10
// 地址: 0x142bf8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9_2 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
int32_t r8 = 0
int32_t r9_3 = r9_2 - 1
void* rdx_1

if (r9_2 - 1 s< 0)
label_142bf8cc0:
    rdx_1 = &data_14369a5d0
else
    uint32_t r10_3 = (zx.d((arg2 u>> 8).b) << 8) + zx.d(arg2.b)
    
    while (true)
        uint64_t rax_3 = zx.q((r9_3 + r8) u>> 1)
        uint64_t rdx = zx.q(rax_3.d)
        int32_t rax_7 =
            (neg.d(zx.d(*(arg1 + (rax_3 << 3) + 4))) << 8) - zx.d(*(arg1 + (rdx << 3) + 5))
        int32_t rax_8 = rax_7 + r10_3
        uint32_t rax_12
        uint32_t rcx_3
        
        if (rax_7 == neg.d(r10_3))
            rax_12 = ((zx.d((arg3 u>> 8).b) - zx.d(*(arg1 + (rdx << 3) + 6))) << 8)
                - zx.d(*(arg1 + (rdx << 3) + 7))
            rcx_3 = zx.d(arg3.b)
            rax_8 = rax_12 + rcx_3
        
        if (rax_7 != neg.d(r10_3) || rax_12 != neg.d(rcx_3))
            if (rax_8 s< 0)
                r9_3 = (rdx - 1).d
            label_142bf8cbb:
                
                if (r8 s> r9_3)
                    goto label_142bf8cc0
                
                continue
            else if (rax_8 s> 0)
                r8 = (rdx + 1).d
                goto label_142bf8cbb
        
        rdx_1 = arg1 + 4 + (rdx << 3)
        break

if ((zx.d(*(rdx_1 + 5)) << 0x10) + (zx.d(*(rdx_1 + 6)) << 8) + (zx.d(*(rdx_1 + 4)) << 0x18)
        == neg.d(zx.d(*(rdx_1 + 7))))
    return 0

uint64_t r9_4 = zx.q(*(rdx_1 + 6))
uint32_t r10_4 = zx.d(*(rdx_1 + 4))
uint64_t r8_1 = zx.q(*(rdx_1 + 5))
uint64_t r11_1 = zx.q(*(rdx_1 + 7))

if ((r10_4 << 0x18) + (r9_4.d << 8) + (r8_1.d << 0x10) == neg.d(r11_1.d))
    return &data_14369a5d0

return (((((zx.q(r10_4) << 8) + r8_1) << 8) + r9_4) << 8) + arg1 + r11_1
