// 函数: sub_141fbdf70
// 地址: 0x141fbdf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x11] != 0)
    void arg_8
    arg3 = sub_140d3a3a0(&arg_8, arg2)
    void* rbp_1 = arg1[0x11]
    int64_t* rax_1 = sub_141fb2e20(rbp_1, &arg_8)
    
    if (rax_1 != 0)
        int64_t arg_18
        arg3 = sub_140d3a3a0(&arg_18, arg2)
        sub_141f96420(rbp_1 + 0x1370, arg_18)
        int64_t* rcx_4 = *(rbp_1 + 0x13c0)
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x268))(rcx_4, arg2)
        
        rax_1[0xe] = 0
        sub_141f83fe0(rax_1, 0, 2)

return sub_14216f0d0(arg1, arg2, arg3) __tailcall
