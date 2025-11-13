// 函数: sub_142bd1440
// 地址: 0x142bd1440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].d s>= 1)
    return 0x3b

int64_t r8 = arg1[2]
uint32_t rcx

while (true)
    char* rax_2 = *arg1
    
    if (rax_2 u>= r8)
        rcx = -1
    else
        rcx = zx.d(*rax_2)
        *arg1 = &rax_2[1]
        
        if (rcx == 0x20)
            continue
        else if (rcx == 9)
            continue
        else
            if (rcx == 0xd || rcx == 0xa)
                arg1[3].d = 2
                return zx.q(rcx)
            
            if (rcx == 0x3b)
                arg1[3].d = 1
                return zx.q(rcx)
            
            if (rcx != 0xffffffff)
                if (rcx != 0x1a)
                    break
                
                arg1[3].d = 3
                return zx.q(rcx)
    
    arg1[3].d = 3
    break

return zx.q(rcx)
