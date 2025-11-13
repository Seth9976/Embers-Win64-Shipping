// 函数: sub_140f7e500
// 地址: 0x140f7e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2

if (*(arg1 + 0x100) != 0)
    int64_t* rcx = *(arg1 + 0xf8)
    
    if (rcx != 0)
        char rax_2
        rax_2, arg2 = (*(*rcx + 0x28))(rcx)
        
        if (rax_2 != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x100) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0xf8)
            
            (*(*rcx_1 + 0x50))(rcx_1, rdi)

arg2.b = 1
return sub_140e19ef0(arg1 - 0x2a8, arg2.b) __tailcall
