// 函数: sub_142116650
// 地址: 0x142116650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0xe] == 0)
    int64_t var_18
    int64_t* rax_1
    rax_1, arg3 = sub_142110630(arg1, &var_18)
    
    if (&arg1[6] != rax_1)
        int64_t rcx = arg1[6]
        
        if (rcx != 0)
            arg3 = sub_140a74f90(rcx)
        
        arg1[6] = *rax_1
        *rax_1 = 0
        arg1[7].d = rax_1[1].d
        *(arg1 + 0x3c) = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        arg3 = sub_140a74f90(rcx_2)

return sub_140a1d9d0(arg2, &arg1[6], arg3) __tailcall
