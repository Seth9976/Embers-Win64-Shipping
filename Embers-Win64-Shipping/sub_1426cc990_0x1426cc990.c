// 函数: sub_1426cc990
// 地址: 0x1426cc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg3[9].b

if ((rax & 1) == 0)
    if (*arg3 == 0xffffffff)
        arg3[9].b = rax & 0xfd
        int64_t* rax_3 = sub_140d3c6e0(&arg3[7])
        
        if (rax_3 != 0)
            int64_t rdx_1 = *rax_3
            (*(rdx_1 + 0x280))(rax_3, rdx_1)
    else
        void* rax_1 = *(arg2 + 0xc0)
        
        if (rax_1 != 0)
            int64_t* rcx = *(rax_1 + 0x2d8)
            
            if (rcx != 0)
                (*(*rcx + 0x418))(rcx, arg1, 0x10, zx.q(*arg3), 0)

return sub_1405bd210() __tailcall
