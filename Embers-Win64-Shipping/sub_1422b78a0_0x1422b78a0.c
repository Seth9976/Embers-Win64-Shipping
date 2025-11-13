// 函数: sub_1422b78a0
// 地址: 0x1422b78a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
sub_141ff4780(&arg_8, arg1, 0, 0x10d)

if ((arg1[5].b & 1) != 0)
    sub_1422b8e40(arg2)

if ((arg_8 & 2) == 0 || *(arg1 + 0x2a) s< 0)
    int64_t* rcx_2 = *(arg2 + 0x30)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x30))(rcx_2, arg1)
        int64_t* rcx_3 = *(arg2 + 0x30)
        int32_t rax_3 = (*(*rcx_3 + 0x20))(rcx_3)
        *(arg2 + 0x44) = rax_3
        int64_t rax_5
        
        if (rax_3 == 0)
            rax_5 = 0
        else
            int64_t* rcx_4 = *(arg2 + 0x30)
            rax_5 = (*(*rcx_4 + 0x18))(rcx_4)
        
        int64_t* rcx_5 = *(arg2 + 0x30)
        *(arg2 + 0x38) = rax_5
        *(arg2 + 0x40) = (*(*rcx_5 + 0x10))(rcx_5)
    
    sub_1422b7690(arg1, arg2 + 0x20, arg3)

return arg1
