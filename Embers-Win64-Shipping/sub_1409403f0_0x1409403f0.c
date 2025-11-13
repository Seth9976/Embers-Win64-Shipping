// 函数: sub_1409403f0
// 地址: 0x1409403f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
uint64_t rsi
rsi.b = 0
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"BLOCK")

if (rax == 0)
    r8.b = 1
    char rax_15
    int64_t r8_3
    rax_15, r8_3 = sub_140b0f6c0(&arg_18, u"QUERYRECENT")
    int64_t* rdi_6
    
    if (rax_15 == 0)
        r8_3.b = 1
        char rax_27
        int64_t r8_6
        rax_27, r8_6 = sub_140b0f6c0(&arg_18, u"DUMPRECENT")
        
        if (rax_27 == 0)
            r8_6.b = 1
            
            if (sub_140b0f6c0(&arg_18, u"DUMPBLOCKED") != 0)
                int64_t* var_18
                (*(*arg1 + 0x28))(arg1, &var_18)
                int64_t* rcx_33 = var_18
                
                if (rcx_33 != 0)
                    (*(*rcx_33 + 0x280))(rcx_33)
                
                rsi.b = 1
                int64_t* var_10
                
                if (var_10 != 0)
                    var_10[1].d -= 1
                    
                    if (var_10[1].d == 1)
                        int64_t rdx_15 = *var_10
                        (*rdx_15)(var_10, rdx_15)
                        int32_t rbx_4 = *(var_10 + 0xc)
                        *(var_10 + 0xc) -= 1
                        
                        if (rbx_4 == 1)
                            int64_t r8_7 = *var_10
                            (*(r8_7 + 8))(var_10, zx.q(rbx_4), r8_7)
        else
            int64_t* var_28
            (*(*arg1 + 0x28))(arg1, &var_28)
            int64_t* rcx_28 = var_28
            
            if (rcx_28 != 0)
                (*(*rcx_28 + 0x238))(rcx_28)
            
            int64_t* var_20
            rdi_6 = var_20
            rsi.b = 1
            
            if (rdi_6 != 0)
                goto label_140940722
    else
        int64_t* var_98
        (*(*arg1 + 0x80))(arg1, &var_98)
        
        if (var_98 != 0)
            rsi = 0
            int16_t* _String_3
            sub_140b294d0(&_String_3, &arg_18, 0)
            int32_t var_a0
            
            if (var_a0 s> 1)
                int16_t* const _String_1 = &data_142d40450
                
                if (var_a0 != 0)
                    _String_1 = _String_3
                
                rsi = zx.q(_wtoi(_String_1))
            
            int64_t var_38
            sub_140b294d0(&var_38, &arg_18, 0)
            int64_t* rcx_18 = var_98
            int64_t r9_1 = *rcx_18
            int64_t var_48
            (*(r9_1 + 0xf0))(rcx_18, &var_48, zx.q(rsi.d), r9_1)
            int64_t* var_58
            (*(*arg1 + 0x28))(arg1, &var_58)
            int64_t* rcx_20 = var_58
            
            if (rcx_20 != 0)
                (*(*rcx_20 + 0x1e8))(rcx_20, var_48, &var_38)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t rax_23 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp2_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            int64_t rcx_25 = var_38
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int16_t* _String_5 = _String_3
            
            if (_String_5 != 0)
                sub_140a74f90(_String_5)
        
        int64_t* var_90
        rdi_6 = var_90
        rsi.b = 1
        
        if (rdi_6 != 0)
        label_140940722:
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t rbx_3 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*rdi_6 + 8))(rdi_6, zx.q(rbx_3))
else
    int16_t* _String_2
    sub_140b294d0(&_String_2, &arg_18, 0)
    int16_t* const _String = &data_142d40450
    int32_t var_b0
    
    if (var_b0 != 0)
        _String = _String_2
    
    int32_t rax_1 = _wtoi(_String)
    int64_t var_c8
    sub_140b294d0(&var_c8, &arg_18, 0)
    int32_t var_c0
    
    if (var_c0 s> 1 && rax_1 u<= 4)
        int64_t* var_68
        (*(*arg1 + 0x80))(arg1, &var_68)
        int64_t* rcx_4 = var_68
        
        if (rcx_4 != 0)
            int64_t var_78
            (*(*rcx_4 + 0x100))(rcx_4, &var_78, &var_c8)
            int64_t* var_88
            (*(*arg1 + 0x28))(arg1, &var_88)
            int64_t* rcx_6 = var_88
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x260))(rcx_6, 0, var_78)
            
            int64_t* var_80
            
            if (var_80 != 0)
                var_80[1].d -= 1
                
                if (var_80[1].d == 1)
                    (**var_80)(var_80)
                    int32_t rax_8 = *(var_80 + 0xc)
                    *(var_80 + 0xc) -= 1
                    
                    if (rax_8 == 1)
                        (*(*var_80 + 8))(var_80, 1)
            
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp4_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rbx_2 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_60 + 8))(var_60, zx.q(rbx_2))
    
    int64_t rcx_13 = var_c8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* _String_4 = _String_2
    
    if (_String_4 != 0)
        sub_140a74f90(_String_4)

return zx.q(rsi.b)
