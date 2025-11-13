// 函数: sub_142c53e10
// 地址: 0x142c53e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4e29) == 0)
    void** rcx = *(arg1 + 0x10)
    
    if (rcx != 0)
        if (*(arg1 + 0x48) - 3 u<= 0xd)
            *rcx = arg1
        
        switch (*(arg1 + 0x48) - 3)
            case 0
                *(arg1 + 0x10)
                return sub_140592360() __tailcall
            case 1
                void* r10_3 = *(arg1 + 0x10)
                int32_t rax_11 = 0
                int32_t rcx_9 = 0
                
                if (arg3 != 0)
                    if (*(r10_3 + 0x164) == 2 && *(r10_3 + 0x411) == 0)
                        return sub_142c5b730(r10_3, arg2, arg3) __tailcall
                    
                    int64_t r9_3 = *(r10_3 + 0x248)
                    int64_t r8_2 = 0
                    
                    if (r9_3 != -1)
                        r8_2 = 1
                        *arg2 = r9_3
                        rax_11 = 1
                        rcx_9 = 0x10000
                    
                    int64_t r9_4 = *(r10_3 + 0x250)
                    
                    if (r9_4 != -1)
                        arg2[r8_2] = r9_4
                        rcx_9 |= 1 << ((rax_11 + 0x10) u% 0x20)
                    
                    return zx.q(rcx_9)
            case 2
                void* rcx_8 = *(arg1 + 0x10)
                
                if (arg3 == 0)
                    return 0
                
                *arg2 = *(rcx_8 + 0x238)
                
                if (*(rcx_8 + 0x798) != 0)
                    return 1
                
                return 0x10000
            case 3, 4
                return sub_142c5d360(*(arg1 + 0x10)) __tailcall
            case 6, 7
                return sub_142c5cb40(*(arg1 + 0x10)) __tailcall
            case 8
                void* rcx_11 = *(arg1 + 0x10)
                
                if (rcx_11 != 0)
                    int64_t r9_5 = *(*(rcx_11 + 0x438) + 0x50)
                    
                    if (r9_5 != 0)
                        jump(r9_5)
            case 9, 0xa, 0xb
                return sub_142c68e80(*(arg1 + 0x10), arg2, arg3) __tailcall

return 0
