// 函数: sub_140830e70
// 地址: 0x140830e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* rax_10
int64_t* var_18
int64_t (* rax_2)(void* arg1)
int64_t* rdi_1

if (rax != data_143ce39e0)
    if (rax == data_143ce39e8)
        int64_t* rax_3 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            goto label_140830fed
        
        *rax_3 = &data_142d43dd8
        rax_2 = sub_140594850
        goto label_140830fcf
    
    if (rax == data_143ce39f0)
        int64_t* rax_4 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_4
        
        if (rax_4 == 0)
            goto label_140830fed
        
        *rax_4 = &data_142d43dd8
        rax_2 = sub_1408259c0
        goto label_140830fcf
    
    if (rax == data_143ce39f8)
        int64_t* rax_5 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            goto label_140830fed
        
        *rax_5 = &data_142d43dd8
        rax_2 = sub_1408261c0
        goto label_140830fcf
    
    if (rax == data_143ce3a00)
        int64_t* rax_6 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_6
        
        if (rax_6 == 0)
            goto label_140830fed
        
        *rax_6 = &data_142d43dd8
        rax_2 = sub_140828160
        goto label_140830fcf
    
    if (rax == data_143ce3a08)
        int64_t* rax_7 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_7
        
        if (rax_7 == 0)
            goto label_140830fed
        
        *rax_7 = &data_142d43dd8
        rax_2 = sub_140827c30
        goto label_140830fcf
    
    if (rax != data_143ce3a10)
        rax.b = 0
        return rax
    
    void* rax_14 = arg1[2]
    
    if (*(rax_14 + 1) == 0 || *(rax_14 + 2) == 0 || *(rax_14 + 3) == 0)
        arg1.b = 0
    else
        arg1.b = 1
    
    char r14_1 = *(rax_14 + 4)
    char rsi_1 = *(rax_14 + 5)
    
    if (arg1.b == 0)
        int64_t** rcx_11 = &var_18
        int32_t var_10
        
        if (r14_1 == 0)
            if (rsi_1 == 0)
                sub_1407473e0(arg2, sub_140812a00(rcx_11, sub_1408270c0))
                
                if (var_10 == 0)
                label_140831375:
                    rax_10 = var_18
                label_140831379:
                    
                    if (rax_10 != 0)
                        sub_140a74f90(rax_10)
                else
                    int64_t* rcx_22 = var_18
                    
                    if (rcx_22 != 0)
                        (*(*rcx_22 + 0x38))(rcx_22, 0)
                        rax_10 = var_18
                        
                        if (rax_10 != 0)
                            rax_10 = sub_140a84c80(rax_10, 0, 0)
                            var_18 = rax_10
                        
                        goto label_14083136c
            else
                sub_1407473e0(arg2, sub_140812a00(rcx_11, sub_140816f30))
                
                if (var_10 == 0)
                    goto label_140831375
                
                int64_t* rcx_19 = var_18
                
                if (rcx_19 != 0)
                    (*(*rcx_19 + 0x38))(rcx_19, 0)
                    rax_10 = var_18
                    
                    if (rax_10 == 0)
                    label_14083136c:
                        int32_t var_10_4 = 0
                        goto label_140831379
                    
                    rax_10 = sub_140a84c80(rax_10, 0, 0)
                    var_18 = rax_10
                    int32_t var_10_3 = 0
                    goto label_140831379
        else if (rsi_1 == 0)
            sub_1407473e0(arg2, sub_140812a00(rcx_11, sub_140816520))
            
            if (var_10 == 0)
                goto label_140831375
            
            int64_t* rcx_16 = var_18
            
            if (rcx_16 != 0)
                (*(*rcx_16 + 0x38))(rcx_16, 0)
                rax_10 = var_18
                
                if (rax_10 == 0)
                    goto label_14083136c
                
                rax_10 = sub_140a84c80(rax_10, 0, 0)
                var_18 = rax_10
                int32_t var_10_2 = 0
                goto label_140831379
        else
            sub_1407473e0(arg2, sub_140812a00(rcx_11, sub_140815b10))
            
            if (var_10 == 0)
                goto label_140831375
            
            int64_t* rcx_13 = var_18
            
            if (rcx_13 != 0)
                (*(*rcx_13 + 0x38))(rcx_13, 0)
                rax_10 = var_18
                
                if (rax_10 == 0)
                    goto label_14083136c
                
                rax_10 = sub_140a84c80(rax_10, 0, 0)
                var_18 = rax_10
                int32_t var_10_1 = 0
                goto label_140831379
    else
        int64_t* rax_15 = sub_140a84c80(0, 0x20, 0)
        int64_t* rsi_2
        uint64_t (* rax_16)(void* arg1)
        
        if (r14_1 == 0)
            rsi_2 = rax_15
            
            if (rsi_1 == 0)
                if (rax_15 != 0)
                    *rax_15 = &data_142d43dd8
                    rax_16 = sub_1408150f0
                label_1408310f8:
                    rax_15[1] = rax_16
                    rax_15[3] = sub_140a387b0()
                    *rax_15 = &data_142d43e30
            else if (rax_15 != 0)
                *rax_15 = &data_142d43dd8
                rax_16 = sub_1408146e0
                goto label_1408310f8
        else
            rsi_2 = rax_15
            
            if (rsi_1 == 0)
                if (rax_15 != 0)
                    *rax_15 = &data_142d43dd8
                    rax_16 = sub_140813ce0
                    goto label_1408310f8
            else if (rax_15 != 0)
                *rax_15 = &data_142d43dd8
                rax_16 = sub_1408132f0
                goto label_1408310f8
        rax_10 = rsi_2
        
        if (&var_18 != arg2)
            if (rsi_2 != 0)
                (*(*rax_15 + 0x40))(rax_15, arg2)
                rax_10 = rsi_2
            else if (arg2[1].d != 0)
                int64_t* rcx_7 = *arg2
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x38))(rcx_7, 0)
                    int64_t rcx_8 = *arg2
                    rax_10 = rsi_2
                    
                    if (rcx_8 != 0)
                        *arg2 = sub_140a84c80(rcx_8, 0, 0)
                        rax_10 = rsi_2
                    
                    arg2[1].d = 0
        
        if (rax_10 != 0)
            (*(*rax_15 + 0x38))(rax_15, 0)
            rax_10 = sub_140a84c80(rax_15, 0, 0)
            goto label_140831379
else
    void*** rax_1 = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax_1
    
    if (rax_1 == 0)
        goto label_140830fed
    
    *rax_1 = &data_142d43dd8
    rax_2 = sub_140825570
label_140830fcf:
    rdi_1[1] = rax_2
    rdi_1[3] = sub_140a387b0()
    *rdi_1 = &data_142d43e30
label_140830fed:
    
    if (&var_18 != arg2)
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x40))(rdi_1, arg2)
        else if (arg2[1].d != 0)
            int64_t* rcx_1 = *arg2
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x38))(rcx_1, 0)
                int64_t rcx_2 = *arg2
                
                if (rcx_2 != 0)
                    *arg2 = sub_140a84c80(rcx_2, 0, 0)
                
                arg2[1].d = 0
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1, 0)
        rax_10 = sub_140a84c80(rdi_1, 0, 0)
        
        if (rax_10 != 0)
            sub_140a74f90(rax_10)
            int64_t rax_13
            rax_13.b = 1
            return rax_13
rax_10.b = 1
return rax_10
