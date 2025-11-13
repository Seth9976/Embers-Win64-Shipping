// 函数: sub_142934620
// 地址: 0x142934620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    arg2 = (&arg1[6]).d
label_142934635:
    
    if (arg3 u< 0x80)
        if (arg1 != 0)
            *arg1 = arg3.b
        
        return 1
    
    if (arg3 u>= 0x800)
        if (arg3 u>= 0x10000)
            if (arg3 u>= 0x200000)
                if (arg3 u>= 0x4000000)
                    if (arg2 s>= 6)
                        if (arg1 != 0)
                            *arg1 = ((arg3 u>> 0x1e).b & 1) | 0xfc
                            arg1[1] = ((arg3 u>> 0x18).b & 0x3f) | 0x80
                            arg1[2] = ((arg3 u>> 0x12).b & 0x3f) | 0x80
                            arg1[3] = ((arg3 u>> 0xc).b & 0x3f) | 0x80
                            uint8_t rcx_1 = (arg3 u>> 6).b
                            arg3.b &= 0x3f
                            arg3.b |= 0x80
                            arg1[4] = (rcx_1 & 0x3f) | 0x80
                            arg1[5] = arg3.b
                        
                        return 6
                else if (arg2 s>= 5)
                    if (arg1 != 0)
                        *arg1 = ((arg3 u>> 0x18).b & 3) | 0xf8
                        arg1[1] = ((arg3 u>> 0x12).b & 0x3f) | 0x80
                        arg1[2] = ((arg3 u>> 0xc).b & 0x3f) | 0x80
                        uint8_t rax_24 = (arg3 u>> 6).b
                        arg3.b &= 0x3f
                        arg3.b |= 0x80
                        arg1[3] = (rax_24 & 0x3f) | 0x80
                        arg1[4] = arg3.b
                    
                    return 5
            else if (arg2 s>= 4)
                if (arg1 != 0)
                    *arg1 = ((arg3 u>> 0x12).b & 7) | 0xf0
                    arg1[1] = ((arg3 u>> 0xc).b & 0x3f) | 0x80
                    uint8_t rax_15 = (arg3 u>> 6).b
                    arg3.b &= 0x3f
                    arg3.b |= 0x80
                    arg1[2] = (rax_15 & 0x3f) | 0x80
                    arg1[3] = arg3.b
                
                return 4
        else if (arg2 s>= 3)
            if (arg1 != 0)
                *arg1 = ((arg3 u>> 0xc).b & 0xf) | 0xe0
                uint8_t rax_8 = (arg3 u>> 6).b
                arg3.b &= 0x3f
                arg3.b |= 0x80
                arg1[1] = (rax_8 & 0x3f) | 0x80
                arg1[2] = arg3.b
            
            return 3
    else if (arg2 s>= 2)
        if (arg1 != 0)
            int32_t rax_2 = arg3
            arg3.b &= 0x3f
            arg3.b |= 0x80
            *arg1 = ((rax_2 u>> 6).b & 0x1f) | 0xc0
            arg1[1] = arg3.b
        
        return 2
else if (arg2 s> 0)
    goto label_142934635

return 0xffffffff
