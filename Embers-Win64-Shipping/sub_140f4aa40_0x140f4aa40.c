// 函数: sub_140f4aa40
// 地址: 0x140f4aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi

if (sub_140ab3dc0(sub_140d44910(*(arg1 + 0x540) + 0x2a8)) != 0)
    rdi = &data_1439ae51d
else
    rdi = arg1 + 0x528
    
    if (*(arg1 + 0x538) != 0)
        int64_t* rcx_3 = *(arg1 + 0x530)
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            char arg_8
            
            if (*(arg1 + 0x538) == 0)
                (*(*nullptr + 0x48))(0, &arg_8)
                *rdi = arg_8
            else
                int64_t* rcx_4 = *(arg1 + 0x530)
                (*(*rcx_4 + 0x48))(rcx_4, &arg_8)
                *rdi = arg_8

*arg2 = *rdi
return arg2
