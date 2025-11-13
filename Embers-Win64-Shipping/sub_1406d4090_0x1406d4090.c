// 函数: sub_1406d4090
// 地址: 0x1406d4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_8 = arg1
sub_140a464c0()
char const (* r8)[0x4] = data_14399ea08

if ((*(r8 + 0x50))(&data_14399ea08, arg2, r8) != 0)
    sub_140a464c0()
    char const (* r8_1)[0x4] = data_14399ea08
    
    if ((*(r8_1 + 0x50))(&data_14399ea08, arg1, r8_1) == 0)
        sub_140a464c0()
        char const (* r9_1)[0x4] = data_14399ea08
        
        if ((*(r9_1 + 0x58))(&data_14399ea08, arg1, 0, r9_1) != 0)
            int64_t* var_68 = nullptr
            int32_t i_7 = 0
            int64_t* i_3 = nullptr
            int32_t i_6 = 0
            int16_t* var_58
            sub_1406c8ea0(&var_58, &arg_10)
            sub_140a464c0()
            int16_t* const r8_3 = &data_142d40450
            int32_t var_50
            
            if (var_50 != 0)
                r8_3 = var_58
            
            int64_t r9_2
            r9_2.b = 1
            (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_68, r8_3, r9_2, 0)
            sub_140a464c0()
            int16_t* const r8_4 = &data_142d40450
            
            if (var_50 != 0)
                r8_4 = var_58
            
            (*(data_14399ea08 + 0x78))(&data_14399ea08, &i_3, r8_4, 0, 1)
            int64_t* rdi_1 = var_68
            void* r14_3 = &rdi_1[sx.q(i_7) * 2]
            void* rsi_1
            uint64_t var_88
            int16_t* var_48
            int32_t var_40
            int16_t* var_38
            int32_t var_30
            uint64_t* arg_18
            
            if (rdi_1 == r14_3)
            label_1406d42c1:
                
                for (int64_t* i = i_3; i != &i[sx.q(i_6) * 2]; i = &i[2])
                    arg_18 = &var_88
                    int16_t* rcx_9 = nullptr
                    var_88 = 0
                    int32_t rdi_2 = i[1].d
                    int64_t r14_4 = *i
                    int32_t var_80_2 = rdi_2
                    
                    if (rdi_2 != 0)
                        sub_1405a4c70(&var_88, rdi_2, 0)
                        memcpy(var_88, r14_4, rdi_2 * 2)
                        rdi_2 = var_80_2
                        rcx_9 = var_88
                    else
                        int32_t var_7c_2 = 0
                    
                    int16_t* const rax_4 = &data_142d40450
                    
                    if (rdi_2 != 0)
                        rax_4 = rcx_9
                    
                    arg_18 = rax_4
                    sub_1406c8ef0(&var_48, &arg_8, &arg_18)
                    int16_t* const rax_5 = &data_142d40450
                    
                    if (var_80_2 != 0)
                        rax_5 = var_88
                    
                    arg_18 = rax_5
                    sub_1406c8ef0(&var_38, &arg_10, &arg_18)
                    int16_t* rdx_15 = &data_142d40450
                    
                    if (var_30 != 0)
                        rdx_15 = var_38
                    
                    int16_t* rcx_17 = &data_142d40450
                    
                    if (var_40 != 0)
                        rcx_17 = var_48
                    
                    sub_1406d4090(rcx_17, rdx_15)
                    int16_t* rcx_18 = var_38
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int16_t* rcx_19 = var_48
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    uint64_t rcx_20 = var_88
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                
                rsi_1.b = 1
            else
                while (true)
                    arg_18 = &var_88
                    int16_t* rcx_1 = nullptr
                    var_88 = 0
                    int32_t rbx_1 = rdi_1[1].d
                    rsi_1 = *rdi_1
                    int32_t var_80_1 = rbx_1
                    
                    if (rbx_1 != 0)
                        sub_1405a4c70(&var_88, rbx_1, 0)
                        memcpy(var_88, rsi_1, rbx_1 * 2)
                        rbx_1 = var_80_1
                        rcx_1 = var_88
                    else
                        int32_t var_7c_1 = 0
                    
                    int16_t* const rax_1 = &data_142d40450
                    
                    if (rbx_1 != 0)
                        rax_1 = rcx_1
                    
                    arg_18 = rax_1
                    sub_1406c8ef0(&var_38, &arg_8, &arg_18)
                    int16_t* const rax_2 = &data_142d40450
                    
                    if (var_80_1 != 0)
                        rax_2 = var_88
                    
                    arg_18 = rax_2
                    sub_1406c8ef0(&var_48, &arg_10, &arg_18)
                    sub_140a464c0()
                    int16_t* const r8_9 = &data_142d40450
                    
                    if (var_40 != 0)
                        r8_9 = var_48
                    
                    int16_t* const rdx_10 = &data_142d40450
                    
                    if (var_30 != 0)
                        rdx_10 = var_38
                    
                    if ((*(data_14399ea08 + 0x38))(&data_14399ea08, rdx_10, r8_9, 0, 0, 0, 0, 0, 0)
                            != 0)
                        int16_t* rcx_10 = var_48
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        int16_t* rcx_11 = var_38
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
                        
                        uint64_t rcx_12 = var_88
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        rsi_1.b = 0
                        break
                    
                    int16_t* rcx_6 = var_48
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    int16_t* rcx_7 = var_38
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    uint64_t rcx_8 = var_88
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    rdi_1 = &rdi_1[2]
                    
                    if (rdi_1 == r14_3)
                        goto label_1406d42c1
            int16_t* rcx_21 = var_58
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            int32_t i_4 = i_6
            int64_t* i_9 = i_3
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_22 = *i_9
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    i_9 = &i_9[2]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            int64_t* i_8 = i_3
            
            if (i_8 != 0)
                sub_140a74f90(i_8)
            
            int32_t i_5 = i_7
            int64_t* rbx_2 = var_68
            
            if (i_5 != 0)
                int32_t i_2
                
                do
                    int64_t rcx_23 = *rbx_2
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    rbx_2 = &rbx_2[2]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            int64_t* rcx_24 = var_68
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            return rsi_1.b

return 0
