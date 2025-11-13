// 函数: sub_14060e800
// 地址: 0x14060e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = *arg1
uint32_t rcx = zx.d(*r9)

if (rcx u< 0x80)
    *arg1 = &r9[1]
    return zx.q(rcx)

if (rcx u< 0xc0)
    *arg1 = &r9[1]
    return 0x3f

if (rcx u>= 0xe0)
    if (rcx u>= 0xf0)
        void* rdx_1
        
        if (rcx u>= 0xf8)
            if (rcx u>= 0xfc)
                if (arg2 u>= 6)
                    rdx_1 = &r9[1]
                    
                    if ((r9[1] & 0xc0) == 0x80 && (*(rdx_1 + 1) & 0xc0) == 0x80
                            && (*(rdx_1 + 2) & 0xc0) == 0x80 && (*(rdx_1 + 3) & 0xc0) == 0x80
                            && (*(rdx_1 + 4) & 0xc0) == 0x80)
                        *arg1 = &r9[6]
                        return 0x3f
                    
                    *arg1 = rdx_1
                    return 0x3f
            else if (arg2 u>= 5)
                rdx_1 = &r9[1]
                
                if ((r9[1] & 0xc0) == 0x80 && (*(rdx_1 + 1) & 0xc0) == 0x80
                        && (*(rdx_1 + 2) & 0xc0) == 0x80 && (*(rdx_1 + 3) & 0xc0) == 0x80)
                    *arg1 = &r9[5]
                    return 0x3f
                
                *arg1 = rdx_1
                return 0x3f
        else if (arg2 u>= 4)
            uint32_t rdi_1 = zx.d(r9[1])
            rdx_1 = &r9[1]
            
            if ((rdi_1.b & 0xc0) == 0x80)
                uint32_t r11_2 = zx.d(*(rdx_1 + 1))
                
                if ((r11_2.b & 0xc0) == 0x80)
                    uint32_t rbx_2 = zx.d(*(rdx_1 + 2))
                    
                    if ((rbx_2.b & 0xc0) == 0x80)
                        int32_t r10_9 =
                            (((rcx - 0xf0) << 6 | (rdi_1 - 0x80)) << 6 | (r11_2 - 0x80)) << 6
                            | (rbx_2 - 0x80)
                        
                        if (r10_9 - 0x10000 u<= 0xfffff)
                            *arg1 = &r9[4]
                            return zx.q(r10_9)
            
            *arg1 = rdx_1
            return 0x3f
    else if (arg2 u>= 3)
        uint32_t rbx_1 = zx.d(r9[1])
        
        if ((rbx_1.b & 0xc0) != 0x80)
            *arg1 = &r9[1]
            return 0x3f
        
        uint32_t r11_1 = zx.d(r9[2])
        
        if ((r11_1.b & 0xc0) != 0x80)
            *arg1 = &r9[1]
            return 0x3f
        
        int32_t rdx_6 = ((rcx - 0xe0) << 6 | (rbx_1 - 0x80)) << 6 | (r11_1 - 0x80)
        
        if (rdx_6 - 0xd800 u<= 0x3ff || rdx_6 - 0xdc00 u<= 0x3ff)
            *arg1 = &r9[1]
            return 0x3f
        
        if (rdx_6 - 0x800 u<= 0xf7fd)
            *arg1 = &r9[3]
            return zx.q(rdx_6)
        
        *arg1 = &r9[1]
        return 0x3f
else if (arg2 u>= 2)
    uint32_t r10_1 = zx.d(r9[1])
    
    if ((r10_1.b & 0xc0) == 0x80)
        int32_t result = (rcx - 0xc0) << 6 | (r10_1 - 0x80)
        
        if (result - 0x80 u<= 0x77f)
            *arg1 = &r9[2]
            return result
    
    *arg1 = &r9[1]
    return 0x3f

*arg1 = &r9[zx.q(arg2)]
return 0x3f
