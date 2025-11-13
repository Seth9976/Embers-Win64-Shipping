// 函数: sub_140972bc0
// 地址: 0x140972bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) == 0)
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 0xf)
    int32_t rax_1 = var_40_1 + 0xf
    var_40_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"Default Device", 0x1e)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "Voice", 1)
    j_sub_140b3db50()
    int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rsi_1 = *rax_3
    int32_t rax_4 = sub_1424378b0()
    void var_38
    int64_t* rax_6 = (*(rsi_1 + 0x40))(rax_3, &var_38, &var_48, zx.q(sub_1424378d0()), rax_4)
    
    if (arg1 + 0xa8 != rax_6)
        *(arg1 + 0xa8) = *rax_6
        *rax_6 = 0
        int64_t rcx_6 = rax_6[1]
        int64_t* rbx_3 = *(arg1 + 0xb0)
        
        if (rcx_6 != rbx_3)
            rax_6[1] = 0
            *(arg1 + 0xb0) = rcx_6
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((*(arg1 + 0xa8) == 0 && *(arg1 + 0xa8) == 0) || *(arg1 + 0xc8) != 0xffffffff)
    return 0xffffffff

*(arg1 + 0xc8) = arg2
return 0
