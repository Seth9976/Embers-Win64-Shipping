// 函数: sub_142be65d0
// 地址: 0x142be65d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x18)

if (arg2 u< 0x10000)
    uint32_t rax_2 = arg2 u>> 8
    char* r8_1
    
    if (rax_2 != 0)
        uint64_t rax_4 = zx.q(rax_2 * 2)
        r8_1 = ((zx.q(*(rdx + 6 + rax_4)) << 8 | zx.q(*(rdx + 6 + rax_4 + 1))) & 0xfffffffffffffff8)
            + rdx + 0x206
        
        if (r8_1 != rdx + 0x206)
        label_142be6635:
            
            if (r8_1 != 0)
                uint32_t r9_4 = zx.d(r8_1[6]) << 8 | zx.d(r8_1[7])
                uint64_t rax_12 = zx.q(zx.d(arg2.b) - (zx.d(*r8_1) << 8 | zx.d(r8_1[1])))
                
                if (rax_12.d u< (zx.d(r8_1[2]) << 8 | zx.d(r8_1[3])) && r9_4 != 0)
                    void* r8_7 = &r8_1[6 + zx.q(r9_4 + (rax_12 << 1).d)]
                    uint32_t rcx_9 = zx.d(*r8_7) << 8 | zx.d(*(r8_7 + 1))
                    
                    if (rcx_9 != 0)
                        return zx.q((zx.w(r8_1[4]) << 8 | zx.w(r8_1[5])) + rcx_9.w)
    else
        r8_1 = rdx + 0x206
        uint64_t rcx_1 = zx.q(zx.d(arg2.b) * 2)
        
        if ((zx.w(*(rdx + 6 + rcx_1)) << 8 | zx.w(*(rdx + 6 + rcx_1 + 1))) == 0)
            goto label_142be6635

return 0
