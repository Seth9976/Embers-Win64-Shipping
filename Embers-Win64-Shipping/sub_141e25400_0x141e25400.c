// 函数: sub_141e25400
// 地址: 0x141e25400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x33].b == 0 && arg3 == 0)
    char rax_2
    
    if (arg1[0x25].d == 0 && arg1[0x14].d != 0)
        rax_2 = (*(*arg1 + 0x278))()
    
    if (arg1[0x25].d != 0 || arg1[0x14].d == 0 || rax_2 != 0)
        void* i = arg1[0x1e]
        
        for (void* rcx_1 = i + sx.q(arg1[0x1f].d) * 0xc; i != rcx_1; i += 0xc)
            if (*(i + 8) == arg2)
                i.b = 1
                return i
        
        i.b = 0
        return i

return sub_141e43d10(arg1, arg2) __tailcall
