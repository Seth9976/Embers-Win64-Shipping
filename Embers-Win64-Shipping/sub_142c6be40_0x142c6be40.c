// 函数: sub_142c6be40
// 地址: 0x142c6be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t* rdi = *(rbx + 0x250)
*(rbx + 0x4bad) = 0
*(rbx + 0x4bbd) = 0
int64_t r8 = sub_142c89a90(arg1)
arg1[0xa2] = *(rbx + 0x2c0)
arg1[0xa3] = *(rbx + 0x350)

if (rdi != 0)
    int64_t* r14_1 = rdi[0x10]
    
    if (r14_1 != 0)
        data_143ccb8a0(*r14_1)
        r8 = data_143ccb8a0(r14_1)
        rdi[0x10] = 0
    
    int32_t rax_2 = *(rbx + 0x438)
    
    if (rax_2 == 3)
        *(rbx + 0xf8) = rdi[6] + rdi[5]
        r8 = sub_142c8a540(rdi)
        FILE* _Stream = rdi[9]
        
        if (_Stream != 0)
            r8 = fclose(_Stream)
            rdi[9] = 0
    else if (rax_2 == 4)
        *(rbx + 0xf8) = rdi[6] + rdi[5]
    
    if (arg2 != 0)
        return zx.q(arg2)
    
    if (arg3 == 0 && arg1[0x80].b == arg3 && *(rbx + 0x609) == arg3
            && sx.q(*(rbx + 0x108)) - sx.q(*(rbx + 0x10c)) + rdi[5] s<= 0)
        sub_142c64760(rbx, "Empty reply from server", r8, arg4)
        return 0x34

return 0
