// 函数: sub_140f52500
// 地址: 0x140f52500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x390) != 0 || *(arg1 + 0x3b8) == 0)
    sub_140dc12f0(arg1, arg2, arg3, arg4)
else if (sub_140d6df00(sub_140f46790(arg1 + 0x398)) == 0)
    sub_140dc12f0(arg1, arg2, arg3, arg4)
else
    int64_t var_68 = data_143e1e020
    int64_t var_60_1 = data_143e1e028
    void* rax_5 = data_143e1e030
    void* var_58_1 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    if (sub_140f4a520(arg4, &var_68) == 0)
        sub_140dc12f0(arg1, arg2, arg3, arg4)
    else
        var_68 = data_143e202b8
        int64_t var_60_2 = data_143e202c0
        int64_t* rax_9 = data_143e202c8
        
        if (rax_9 != 0)
            rax_9[1].d += 1
        
        int32_t var_50
        int32_t var_50_1 = var_50 & 0xfffffff0
        void var_48
        sub_140f60ba0(arg1, sub_140f1a8d0(&var_48, &var_68))
        
        if (rax_9 != 0)
            rax_9[1].d -= 1
            
            if (rax_9[1].d == 1)
                (**rax_9)(rax_9)
                int32_t temp1_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rax_9 + 8))(rax_9, 1)
        
        sub_140e194c0(arg2)

return arg2
