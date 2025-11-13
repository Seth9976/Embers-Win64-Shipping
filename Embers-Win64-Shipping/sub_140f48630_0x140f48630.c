// 函数: sub_140f48630
// 地址: 0x140f48630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr

if (arg1[0x34].d != 0)
    int64_t* rcx = arg1[0x33]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x34].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x33]
        
        arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)

if (arg1[0x32].b != 0)
    if (arg1[0x5b].d != 0)
        int64_t* rcx_2 = arg1[0x5a]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (arg1[0x5b].d != 0)
                rdi = arg1[0x5a]
            
            arg1[0x59].b = (*(*rdi + 0x48))(rdi)
    
    if (arg1[0x59].b == 0)
        char rax_10 = (*(*arg1 + 0x1c8))(arg1)
        int64_t rcx_5 = arg1[0x55]
        
        if (rax_10 == 0)
            return rcx_5 + 0x1a0
        
        return rcx_5 + 0x228

return arg1[0x55] + 0x2b0
