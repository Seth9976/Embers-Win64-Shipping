// 函数: sub_142b10910
// 地址: 0x142b10910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*arg2)
void* rdx = &arg2[1]

if (r8 u>= 0x30)
    while (true)
        if (r8 u< 0x40)
            if (arg3 == zx.d(*rdx))
                *(arg1 + 0x10) = rdx + 2
                *(arg1 + 0x18) = r8 - 0x31
                
                if (r8 - 0x31 s< 0)
                    uint32_t rcx_1 = zx.d(*(rdx + 2))
                    
                    if (rcx_1 u>= 0x40)
                        return zx.q(3 - (rcx_1 u>> 0xf))
                
                return 1
        else if (not(test_bit(r8, 0xf)))
            if (r8 u>= 0x4040)
                if (r8 u>= 0x7fc0)
                    rdx += 4
                else
                    rdx += 2
            
            r8 &= 0x3f
            
            if (r8 u< 0x30)
                break
            
            continue
        
        *(arg1 + 0x10) = 0
        return 0

return sub_142b10380(arg1, rdx, r8, arg3) __tailcall
