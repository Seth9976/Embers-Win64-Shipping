// 函数: sub_142c68d40
// 地址: 0x142c68d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rcx = -1
int64_t rax

if (arg2 != 0xffffffff)
    rax = arg1[sx.q(arg2) + 0x47]
else
    rax = -1

arg1[0x8a] = rax
int64_t rax_2 = sx.q(arg7)

if (rax_2.d != 0xffffffff)
    rcx = arg1[rax_2 + 0x47]

arg1[0x8b] = rcx
*(rbx + 0xe0) = arg6
void* result = arg8
*(rbx + 0xf0) = result
*(rbx + 0x24a) = arg4
*(rbx + 0xd8) = arg3

if (arg4 == 0)
    *(rbx + 0x130) = arg4
    
    if (arg3 s> 0)
        sub_142c6f180(rbx, arg3)

if (*(rbx + 0x24a) != 0 || *(rbx + 0x5e8) == 0)
    if (arg1[0x8a] != -1)
        *(rbx + 0x220) |= 1
    
    if (arg1[0x8b] != -1)
        char rcx_2 = *(rbx + 0x4e28)
        
        if (rcx_2 != 0)
            result = arg1[0x87]
            
            if ((*(result + 0x7c) & 3) != 0)
                result = *(rbx + 0x250)
                
                if (*(result + 0x78) == 2)
                    *(rbx + 0x198) = 1
                    uint64_t var_18[0x2]
                    *(rbx + 0x188) = *sub_142c59600(&var_18)
                    return sub_142c52ab0(rbx, sx.q(*(rbx + 0x854)), 0, arg5) __tailcall
            
            if (rcx_2 != 0)
                *(rbx + 0x198) = 2
        
        *(rbx + 0x220) |= 2

return result
