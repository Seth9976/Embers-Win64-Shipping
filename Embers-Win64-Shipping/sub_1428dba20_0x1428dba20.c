// 函数: sub_1428dba20
// 地址: 0x1428dba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = 0x20
__chkstk(0x20)

if ((*arg2 & 0x306) == 0)
    while (true)
        result = (*(arg2 + 0x18))()
        int64_t rdx = sx.q(*result)
        
        if (rdx.d u> 6)
            return result
        
        switch (rdx)
            case 0
                arg2 = *(result + 8)
                
                if (arg2 == 0)
                    return sub_1428db830(arg1, result) __tailcall
                
                if ((*arg2 & 0x306) != 0)
                    break
                
                continue
            case 1, 2, 6
                break
            case 3
                return result
            case 4
                void* rcx = *(result + 0x18)
                
                if (rcx != 0)
                    int64_t r8_1 = *(rcx + 0x18)
                    
                    if (r8_1 != 0)
                        jump(r8_1)
                
                break
            case 5
                return sub_1428db830(arg1, result) __tailcall

*arg1 = 0
return result
