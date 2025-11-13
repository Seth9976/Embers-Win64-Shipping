// 函数: sub_1427b9cd0
// 地址: 0x1427b9cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x25].b = 0

if ((*(*arg1 + 0x2c0))(arg4, arg3) == 0)
    arg2[1].d = 2
    *arg2 = nullptr
else
    char rax_5
    
    if (arg1[0x1c] != 0)
        void* rax_2 = arg1[0x1e]
        void* rcx = &arg1[0x20]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        rax_5 = arg1[0x1c]((*(*rcx + 8))(rcx), arg3)
    
    if (arg1[0x1c] != 0 && rax_5 == 0)
        arg2[1].d = 2
        *arg2 = nullptr
    else
        int64_t rbx_1 = *arg1[0x24]
        void var_38
        int64_t rax_8 = (*(*arg1 + 0x2e8))(arg1, &var_38, arg3)
        
        if ((*(rbx_1 + 0x18))(arg1[0x24], rax_8) == 0)
            arg2[1].d = 2
            *arg2 = nullptr
        else
            arg2[1].d = 1
            *arg2 = arg1

arg2[3] = 0
arg2[2].d = 0x7f7fffff
*(arg2 + 0xc) = 0x63
return arg2
