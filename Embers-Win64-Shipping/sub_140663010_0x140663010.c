// 函数: sub_140663010
// 地址: 0x140663010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x60)

if (rax != 0)
    void* rcx = *(rax + 0x20)
    
    if (rcx != 0)
        bool z_1
        
        if (0 == *(rcx + 0x78))
            *(rcx + 0x78) = 0
            z_1 = true
        else
            int64_t rax_1
            rax_1.b = *(rcx + 0x78)
            z_1 = false
        
        if (z_1)
            int64_t* rcx_1 = *(arg1 + 0x60)
            
            if ((*(*rcx_1 + 0x10))(rcx_1, 0) == 0)
                int64_t* rcx_2 = *(arg1 + 0x60)
                (*(*rcx_2 + 8))(rcx_2, 0)
                *(*(arg1 + 0x60) + 0x30) = 1

return sub_140cd7d40(arg1) __tailcall
