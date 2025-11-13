// 函数: sub_140d72a30
// 地址: 0x140d72a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ebf330

if (arg1[3].d != 0)
    int64_t* rcx = arg1[2]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0 && arg1[3].d != 0)
        int64_t* rcx_1 = arg1[2]
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = arg1[2]
            
            if (rcx_2 != 0)
                arg1[2] = sub_140a84c80(rcx_2, 0, 0)
            
            arg1[3].d = 0

return sub_140745b20(&arg1[2]) __tailcall
