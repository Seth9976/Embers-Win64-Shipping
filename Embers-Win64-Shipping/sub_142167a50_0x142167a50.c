// 函数: sub_142167a50
// 地址: 0x142167a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg1[1].d u>> 4).b & 1) == 0)
    if (data_143f5b298 != 0 && arg1[0xe0].d != 0)
        arg1[0xe0].d = 0
        sub_142161350(data_143f5b298, arg1[0x28], arg1, 0)
    
    int64_t* rcx_1 = arg1[0x11]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x2d8))(rcx_1)
    
    while (arg1[0x13].d != 0)
        int64_t* rcx_2 = *arg1[0x12]
        (*(*rcx_2 + 0x2d8))(rcx_2)
    
    (*(*arg1 + 0x2b8))(arg1)
    void var_18
    
    if (&arg1[0x2a] != &var_18)
        arg1[0x2a] = 0
        int64_t* rdi_1 = arg1[0x2b]
        
        if (rdi_1 != 0)
            arg1[0x2b] = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    sub_1405c2d80(&data_143a30728, arg1[0xd8])
    sub_1405c2d80(&data_143a30710, arg1[0xd9])
    sub_140d21f60()
    sub_1405c2d80(&data_1439aad48, arg1[0xdc])

return sub_140cdba30(arg1) __tailcall
