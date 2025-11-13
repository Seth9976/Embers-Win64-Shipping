// 函数: sub_142b0e050
// 地址: 0x142b0e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*arg2)
void* rdx = &arg2[1]

if (r8 u>= 0x10)
    while (true)
        if (r8 u< 0x20)
            if (arg3 == zx.d(*rdx))
                *(arg1 + 0x10) = rdx + 1
                *(arg1 + 0x18) = r8 - 0x11
                
                if (r8 - 0x11 s< 0)
                    uint32_t rcx_1 = zx.d(*(rdx + 1))
                    
                    if (rcx_1 u>= 0x20)
                        return zx.q(3 - (rcx_1 & 1))
                
                return 1
        else if ((r8.b & 1) == 0)
            if (r8 u>= 0xa2)
                if (r8 u< 0xd8)
                    rdx += 1
                else if (r8 u>= 0xfc)
                    rdx += zx.q((r8 u>> 1 & 1) + 3)
                else
                    rdx += 2
            
            r8 = zx.d(*rdx)
            rdx += 1
            
            if (r8 u< 0x10)
                break
            
            continue
        
        *(arg1 + 0x10) = 0
        return 0

return sub_142b0dd40(arg1, rdx, r8, arg3) __tailcall
