// 函数: sub_14074bd90
// 地址: 0x14074bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2

if (result == data_143cdfaf0)
    if (arg3[0x86].b == 0)
        return sub_1406f2010(arg1, arg2, arg3, arg4)
    
    void* rax = sub_140d3c6e0(arg3)
    void* const rbx_1 = rax
    void* rax_1
    int64_t rax_2
    void* rdx
    
    if (rax != 0)
        rax_1 = sub_142591550()
        rdx = *(rbx_1 + 0x10)
        rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        rbx_1 = nullptr
    
    result = zx.q(*(arg1 + 0x68))
    
    if (result.b == 0 || rbx_1 == 0)
        return sub_1406f1b30(arg1, arg2, arg3, arg4)
    
    if (result.b == 1)
        return sub_1406efdf0(arg1, arg2, arg3, arg4)
    
    if (result.b == 2)
        return sub_1406f0c90(arg1, arg2, arg3, arg4)
else if (result == data_143cdfaf8)
    if (arg3[0x86].b == 0)
        return sub_1406f1da0(arg1, arg2, arg3, arg4)
    
    void* rax_4 = sub_140d3c6e0(arg3)
    void* const rbx_2 = rax_4
    void* rax_5
    void* rcx_6
    int64_t rdx_4
    
    if (rax_4 != 0)
        rax_5 = sub_142591550()
        rcx_6 = *(rbx_2 + 0x10)
        rdx_4 = sx.q(*(rax_5 + 0x38))
    
    if (rax_4 == 0 || rdx_4.d s> *(rcx_6 + 0x38)
            || *(*(rcx_6 + 0x30) + (rdx_4 << 3)) != rax_5 + 0x30)
        rbx_2 = nullptr
    
    result = zx.q(*(arg1 + 0x68))
    
    if (result.b == 0 || rbx_2 == 0)
        return sub_1406f13e0(arg1, arg2, arg3, arg4)
    
    if (result.b == 1)
        return sub_1406ef6a0(arg1, arg2, arg3, arg4)
    
    if (result.b == 2)
        return sub_1406f0540(arg1, arg2, arg3, arg4)
else
    void var_18
    int64_t* rcx_16
    
    if (result != data_143cdfb00)
        if (result == data_143cdfb08)
            return sub_1406eef50(arg1, arg2, arg3, arg4)
        
        void** const rax_17
        int64_t* rbx_5
        
        if (result != data_143cdfb10)
            if (result == data_143cdfb18)
                int64_t* rax_18 = sub_140a84c80(0, 0x20, 0)
                rbx_5 = rax_18
                
                if (rax_18 == 0)
                    goto label_14074c0e7
                
                rbx_5[1] = arg1
                *rbx_5 = &data_142da1ac8
                rbx_5[3] = sub_140a387b0()
                rax_17 = &data_142da1b20
                goto label_14074c0e4
            
            if (result == data_143cdfb20)
                int64_t* rax_20 = sub_140a84c80(0, 0x20, 0)
                rbx_5 = rax_20
                
                if (rax_20 == 0)
                    goto label_14074c0e7
                
                rbx_5[1] = arg1
                *rbx_5 = &data_142da1b78
                rbx_5[3] = sub_140a387b0()
                rax_17 = &data_142da1bd0
                goto label_14074c0e4
            
            if (result == data_143cdfb28)
                return sub_1406ee980(arg1, arg2, arg3, arg4)
            
            if (result == data_143cdfb30)
                return sub_1406eeb30(arg1, arg2, arg3, arg4)
            
            if (result == data_143cdfb38)
                return sub_1406ee7d0(arg1, arg2, arg3, arg4)
            
            if (result == data_143cdfb40)
                return sub_1406ee620(arg1, arg2, arg3, arg4)
        else
            int64_t* rax_15 = sub_140a84c80(0, 0x20, 0)
            rbx_5 = rax_15
            
            if (rax_15 == 0)
                goto label_14074c0e7
            
            rbx_5[1] = arg1
            *rbx_5 = &data_142da1a18
            rbx_5[3] = sub_140a387b0()
            rax_17 = &data_142da1a70
        label_14074c0e4:
            *rbx_5 = rax_17
        label_14074c0e7:
            result = &var_18
            
            if (&var_18 == arg4)
                goto label_14074c106
            
            if (rbx_5 == 0)
                goto label_14074bf71
            
            result = (*(*rbx_5 + 0x40))(rbx_5, arg4)
        label_14074c106:
            
            if (rbx_5 != 0)
                (*(*rbx_5 + 0x38))(rbx_5, 0)
                rcx_16 = rbx_5
                goto label_14074c11e
    else
        char rax_7 = sub_1407afa70(arg3)
        int64_t* rax_8 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_7 == 0)
            if (rax_8 != 0)
                rax_8[1] = arg1
                *rax_8 = &data_142da1968
                rax_8[3] = sub_140a387b0()
                *rax_8 = &data_142da19c0
        else if (rax_8 != 0)
            rax_8[1] = arg1
            *rax_8 = &data_142da18b8
            rax_8[3] = sub_140a387b0()
            *rax_8 = &data_142da1910
        
        result = &var_18
        
        if (&var_18 == arg4)
            goto label_14074bfef
        
        if (rax_8 == 0)
        label_14074bf71:
            
            if (arg4[1].d != 0)
                void* rcx_12 = *arg4
                
                if (rcx_12 != 0)
                    result = (*(*rcx_12 + 0x38))(rcx_12, 0)
                    void* rcx_13 = *arg4
                    
                    if (rcx_13 != 0)
                        result = sub_140a84c80(rcx_13, 0, 0)
                        *arg4 = result
                    
                    arg4[1].d = 0
        else
            result = (*(*rax_8 + 0x40))(rax_8, arg4)
        label_14074bfef:
            
            if (rax_8 != 0)
                (*(*rax_8 + 0x38))(rax_8, 0)
                rcx_16 = rax_8
            label_14074c11e:
                result = sub_140a84c80(rcx_16, 0, 0)
                
                if (result != 0)
                    return sub_140a74f90(result)

return result
