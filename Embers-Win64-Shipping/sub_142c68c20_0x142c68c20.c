// 函数: sub_142c68c20
// 地址: 0x142c68c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
*arg2 = 0

if (*(rdi + 0x5e9) == 0 || (*(arg1[0x87] + 0x7c) & 0x40003) != 0)
    int64_t rax_2 = sx.q(*(rdi + 0x108))
    char rax_3 = rax_2.b + (*(rdi + 0xf8)).b
    
    if (rax_2 == neg.q(*(rdi + 0xf8)) && *(arg1 + 0x3f2) != rax_3
            && (*(rdi + 0x5e8) == rax_3 || (*(arg1[0x87] + 0x7c) & 3) != 0)
            && *(rdi + 0x804) != 0xb)
        sub_142c64850(*arg1, "Connection died, retrying a fresh connect\n", arg3, arg4)
        int64_t rax_5 = data_143ccb8b0(*(*arg1 + 0x880))
        *arg2 = rax_5
        
        if (rax_5 == 0)
            return 0x1b
        
        sub_142c65340(arg1, 1)
        arg1[0x80].b = 1
        
        if ((*(arg1[0x87] + 0x7c) & 3) != 0 && *(*(rdi + 0x250) + 0x30) != 0)
            return sub_142c687e0(arg1) __tailcall

return 0
