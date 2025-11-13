// 函数: sub_141bbc8a0
// 地址: 0x141bbc8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140f4a730(arg1) == 0)
    sub_140e78f50(data_143e29f28, &arg1[0x7f], 0)
    
    if (arg1[0x8e].d != 0)
        int64_t* rcx_7 = arg1[0x8d]
        
        if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
            int64_t* rcx_8
            
            if (arg1[0x8e].d == 0)
                rcx_8 = nullptr
            else
                rcx_8 = arg1[0x8d]
            
            (*(*rcx_8 + 0x50))(rcx_8)
else
    int64_t* rcx_1 = arg1[0x89] + 0x4f8
    int64_t* var_18
    (*(*rcx_1 + 0xc8))(rcx_1, &var_18)
    int32_t var_10
    
    if (var_10 s> 0)
        int64_t rdi_1 = *var_18
        
        if (rdi_1 != arg1[0x88])
            sub_140e78f50(data_143e29f28, &arg1[0x82], 0)
            arg1[0x88] = rdi_1
            sub_140efc720(&arg1[0x86], rdi_1, 3)
        
        int64_t r8_1
        r8_1.b = 1
        (*(*arg1 + 0x248))(arg1, 0, r8_1, 0)
    
    int64_t* rcx_5 = var_18
    
    if (rcx_5 != 0)
        arg3 = sub_140a74f90(rcx_5)

sub_140f09b10(arg1, arg2, arg3)
return arg2
