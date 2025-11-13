// 函数: sub_140f5ddd0
// 地址: 0x140f5ddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140ab3dc0(sub_140d44910(*(arg1 + 0x88) + 0x2a8)) != 0 && sub_140ab3dc0(arg2) == 0)
    int64_t* rcx_4 = *(arg1 - 0x4a8)
    int64_t rdx = 0
    
    if (rcx_4 != 0)
        int32_t rax_3 = rcx_4[1].d
        
        if (rax_3 != 0)
            rcx_4[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rcx_4 = nullptr
        
        if (rcx_4 != 0)
            rdx = *(arg1 - 0x4b0)
    
    int64_t var_18 = rdx
    sub_140db7a20(arg1 + 0x98, &var_18, 0, zx.o(0), arg3, 1)
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp1_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)

return sub_140f8d4f0(*(arg1 + 0x88), arg2) __tailcall
