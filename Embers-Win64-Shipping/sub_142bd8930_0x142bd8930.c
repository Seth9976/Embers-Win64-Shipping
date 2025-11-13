// 函数: sub_142bd8930
// 地址: 0x142bd8930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i_2 = *arg1

if (i_2 == 0x75)
    void* r11_1 = &arg1[1]
    int32_t rdx_1 = 0
    
    if (*r11_1 == 0x6e && arg1[2] == 0x69)
        void* rbx_1 = &arg1[3]
        int32_t i = 4
        int32_t r8_1 = 0
        
        do
            uint32_t rcx = zx.d(*rbx_1)
            int32_t rax_1 = rcx - 0x30
            
            if (rax_1 u>= 0xa)
                if (rcx - 0x41 u>= 6)
                    break
                
                rax_1 = rcx - 0x37
            
            if (rax_1 u>= 0x10)
                break
            
            i -= 1
            r8_1 = (r8_1 << 4) + rax_1
            rbx_1 += 1
        while (i s> 0)
        
        if (i == 0)
            char rax_3 = *rbx_1
            
            if (rax_3 == 0)
                return zx.q(r8_1)
            
            if (rax_3 == 0x2e)
                return zx.q(r8_1) | 0x80000000
    
    int32_t i_1
    
    for (i_1 = 6; i_1 s> 0; )
        uint32_t rcx_1 = zx.d(*r11_1)
        int32_t rax_5 = rcx_1 - 0x30
        
        if (rax_5 u>= 0xa)
            if (rcx_1 - 0x41 u>= 6)
                break
            
            rax_5 = rcx_1 - 0x37
        
        if (rax_5 u>= 0x10)
            break
        
        i_1 -= 1
        rdx_1 = (rdx_1 << 4) + rax_5
        r11_1 += 1
    
    if (i_1 s<= 2)
        char rax_7 = *r11_1
        
        if (rax_7 == 0)
            return zx.q(rdx_1)
        
        if (rax_7 == 0x2e)
            return zx.q(rdx_1) | 0x80000000

char* rdx_3 = arg1

while (i_2 != 0)
    if (i_2 == 0x2e && rdx_3 u> arg1)
        return zx.q(sub_142bd8d90(arg1, rdx_3)) | 0x80000000
    
    i_2 = rdx_3[1]
    rdx_3 = &rdx_3[1]

return sub_142bd8d90(arg1, rdx_3) __tailcall
