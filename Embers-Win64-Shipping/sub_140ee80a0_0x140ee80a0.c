// 函数: sub_140ee80a0
// 地址: 0x140ee80a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = data_143e29f28

if (r14 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int128_t var_48
    void var_28
    int32_t var_18[0x4]
    
    if (*arg1 == 0)
        var_48 = *(*(*r14 + 0xd8))(r14, &var_18)
    else
        int64_t* rdx = arg1[1]
        
        if (rdx == 0)
            var_48 = *(*(*r14 + 0xd8))(r14, &var_18)
        else
            int32_t rax_1 = rdx[1].d
            
            if (rax_1 s<= 0)
                var_48 = *(*(*r14 + 0xd8))(r14, &var_18)
            else
                void* rcx = nullptr
                
                if (rax_1 != 0)
                    rdx[1].d = rax_1 + 1
                    rax_1.b = 1
                    r14 = data_143e29f28
                
                int64_t* rbx_1 = nullptr
                
                if (rax_1.b != 0)
                    rbx_1 = rdx
                
                if (rbx_1 != 0)
                    rcx = *arg1
                
                var_48 = *sub_140e69d90(r14, &var_18, sub_140e15ab0(rcx, &var_28))
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
    int64_t* var_38
    sub_140efaf40(arg1, &var_38, &var_48)
    int64_t* rcx_6 = var_38
    int64_t* rax_9 = (*(*rcx_6 + 0x240))(rcx_6, &var_28, arg3)
    *arg2 = *rax_9
    void* rcx_8 = rax_9[1]
    arg2[1] = rcx_8
    
    if (rcx_8 != 0)
        *(rcx_8 + 8) += 1
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp2_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp3_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

return arg2
