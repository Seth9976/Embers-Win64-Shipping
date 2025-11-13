// 函数: sub_142bd1340
// 地址: 0x142bd1340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bd1440(arg1)

if (arg1[3].d s>= 1)
    return 0

int64_t r8 = *arg1
int64_t rdx = arg1[2]

while (true)
    char* rcx = *arg1
    
    if (rcx u>= rdx)
        arg1[3].d = 3
    else
        uint32_t rax_2 = zx.d(*rcx)
        *arg1 = &rcx[1]
        
        if (rax_2 != 0x20 && rax_2 != 9)
            if (rax_2 == 0xd || rax_2 == 0xa)
                arg1[3].d = 2
                return r8 - 1
            
            if (rax_2 == 0x3b)
                break
            
            if (rax_2 != 0xffffffff && rax_2 != 0x1a)
                continue
            
            arg1[3].d = 3
    
    return r8 - 1

arg1[3].d = 1
return r8 - 1
