// 函数: sub_1405fb390
// 地址: 0x1405fb390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int128_t zmm6
int128_t var_28 = zmm6
EnterCriticalSection(arg1 + 0x18)
int64_t* rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    int64_t* var_58 = nullptr
    
    if ((*(*rcx_1 + 0x28))(rcx_1, arg2, &var_58) s>= 0)
        int32_t arg_18 = 0
        int64_t* rcx_2 = var_58
        
        if ((*(*rcx_2 + 0x108))(rcx_2, &arg_18) s>= 0)
            int32_t arg_8 = 1
            int64_t* rcx_3 = var_58
            (*(*rcx_3 + 0x118))(rcx_3, &arg_8)
            uint64_t rax_7 = zx.q(arg_18 - 1)
            int64_t* arg_20
            int64_t* rax_16
            
            if (rax_7.d u<= 0x7e)
                switch (rax_7)
                    case 0
                        *(arg1 + 0xc4) = 1
                        
                        if (*(arg1 + 0xa0) != 0)
                            *(arg1 + 0xa0) = 0
                        
                        if (*(arg1 + 0xb8) != 0)
                            *(arg1 + 0xb8) = 0
                        
                        int64_t* rcx_7 = *(arg1 + 0xa8)
                        
                        if (rcx_7 != 0)
                            (*(*rcx_7 + 0x10))(rcx_7)
                            *(arg1 + 0xa8) = 0
                        
                        *(arg1 + 0x78) = 0
                        int64_t* rcx_8 = *(arg1 + 0x60)
                        (*(*rcx_8 + 0x60))(rcx_8)
                    case 0x64
                        if (arg_8 s< 0)
                        label_1405fb7ba:
                            
                            if (*(arg1 + 0xc4) != 4)
                                goto label_1405fb5c4
                            
                            *(arg1 + 0xc4) = 1
                            int64_t* rax_25 = j_sub_140a82f30(0x10)
                            arg_20 = rax_25
                            
                            if (rax_25 != 0)
                                *rax_25 = 0
                                rax_25[1].d = 4
                                int64_t** rcx_27 = *(arg1 + 0x50)
                                *(arg1 + 0x50) = rax_25
                                *rcx_27 = rax_25
                            
                            goto label_1405fb5c4
                        
                        if (sub_1405f90a0(var_58, arg1 + 0x48) s< 0)
                            goto label_1405fb7ba
                        
                        if (*(arg1 + 0xc4) != 4)
                            sub_1405f4d70(arg1)
                    case 0x66
                        if (arg_8 s< 0)
                            goto label_1405fb5c4
                        
                        int32_t rax_21 = *(arg1 + 0xc4)
                        
                        if (rax_21 != 2 || 0f f!= *(arg1 + 0xc0))
                            int64_t* rcx_22 = *(arg1 + 0x88)
                            
                            if (rcx_22 != 0)
                                int32_t var_64 = 0
                                (*(*rcx_22 + 0x20))(rcx_22, &var_64, arg1 + 0xc0)
                                rax_21 = *(arg1 + 0xc4)
                            else
                                *(arg1 + 0xc0) = 0x3f800000
                            
                            if (rax_21 != 3)
                                *(arg1 + 0xc4) = 3
                                
                                if (0f f!= *(arg1 + 0xc0))
                                    rax_16 = j_sub_140a82f30(0x10)
                                    arg_20 = rax_16
                                    
                                    if (rax_16 != 0)
                                        rax_16[1].d = 6
                                        *rax_16 = 0
                                        goto label_1405fb5a2
                                    
                                    sub_1405f4d70(arg1)
                                else
                                    void var_60
                                    
                                    if (&var_60 != arg1 + 0x9c)
                                        *(arg1 + 0x9c) = 0
                                        *(arg1 + 0xa0) = 1
                                    
                                    *(arg1 + 0x78) = 1
                                    sub_1405f4d70(arg1)
                            else
                                rax_16 = j_sub_140a82f30(zx.q(rax_21 + 0xd))
                                arg_20 = rax_16
                                
                                if (rax_16 != 0)
                                    rax_16[1].d = 8
                                    *rax_16 = 0
                                    goto label_1405fb5a2
                                
                                sub_1405f4d70(arg1)
                        else
                            *(arg1 + 0xc4) = 3
                            rax_16 = j_sub_140a82f30(zx.q(rax_21 + 0xe))
                            arg_20 = rax_16
                            
                            if (rax_16 != 0)
                                *rax_16 = 0
                                rax_16[1].d = 8
                                goto label_1405fb5a2
                            
                            sub_1405f4d70(arg1)
                    case 0x67
                        if (arg_8 s< 0)
                        label_1405fb5c4:
                            
                            if (*(arg1 + 0xa0) != 0)
                                *(arg1 + 0xa0) = 0
                            
                            if (*(arg1 + 0xb8) != 0)
                                *(arg1 + 0xb8) = 0
                            
                            int64_t* rcx_16 = *(arg1 + 0xa8)
                            
                            if (rcx_16 != 0)
                                (*(*rcx_16 + 0x10))(rcx_16)
                                *(arg1 + 0xa8) = 0
                            
                            *(arg1 + 0x78) = 0
                        else
                            *(arg1 + 0xc4) = 2
                        label_1405fb58a:
                            rax_16 = j_sub_140a82f30(0x10)
                            arg_20 = rax_16
                            
                            if (rax_16 == 0)
                                sub_1405f4d70(arg1)
                            else
                                *rax_16 = 0
                                rax_16[1].d = 7
                            label_1405fb5a2:
                                int64_t** rcx_14 = *(arg1 + 0x50)
                                *(arg1 + 0x50) = rax_16
                                *rcx_14 = rax_16
                                sub_1405f4d70(arg1)
                    case 0x68
                        if (arg_8 s< 0)
                            goto label_1405fb5c4
                        
                        *(arg1 + 0xc4) = 5
                        goto label_1405fb58a
                    case 0x69
                        int64_t* rcx_12 = *(arg1 + 0x68)
                        (*(*rcx_12 + 0x10))(rcx_12, &__dos_header)
                        *(arg1 + 0x14) = 0
                        *(arg1 + 0x70) = 0
                    case 0x6a
                        sub_1405f9eb0(arg1)
                    case 0x6b
                        if (arg_8 s< 0)
                            int64_t* rcx_19 = *(arg1 + 0x88)
                            
                            if (rcx_19 != 0)
                                int32_t var_68 = 0
                                (*(*rcx_19 + 0x20))(rcx_19, &var_68, arg1 + 0xc0)
                            
                            sub_1405f4d70(arg1)
                        else
                            int64_t var_40 = 0
                            int32_t var_38_1 = 0
                            int64_t var_30_1 = 0
                            int64_t* rcx_17 = var_58
                            
                            if ((*(*rcx_17 + 0x120))(rcx_17, &var_40) s< 0 || var_40.w != 4)
                                sub_1405f4d70(arg1)
                            else
                                *(arg1 + 0xc0) = var_38_1
                                sub_1405f4d70(arg1)
                    case 0x6d
                        int32_t rbx_1 = *(arg1 + 0x14)
                        int64_t* rcx_10 = var_58
                        int32_t rax_14 = (*(*rcx_10 + 0x38))(rcx_10, &data_1434cb760, &arg_20)
                        int32_t rcx_11 = arg_20.d
                        
                        if (rax_14 s< 0)
                            rcx_11 = rbx_1
                        
                        *(arg1 + 0x14) = rcx_11
                    case 0x6e
                        sub_1405f9f60(arg1, arg_8, var_58)
                    case 0x79
                        *(arg1 + 0xcc) |= 1
                        int64_t* rax_9 = j_sub_140a82f30(0x10)
                        arg_20 = rax_9
                        
                        if (rax_9 != 0)
                            *rax_9 = 0
                            rax_9[1].d = 0
                            int64_t** rcx_6 = *(arg1 + 0x50)
                            *(arg1 + 0x50) = rax_9
                            *rcx_6 = rax_9
                    case 0x7a
                        *(arg1 + 0xcc) &= 0xfffffffe
                    case 0x7d
                        *(arg1 + 0xcc) |= 2
                        int64_t* rax_12 = j_sub_140a82f30(0x10)
                        arg_20 = rax_12
                        
                        if (rax_12 != 0)
                            *rax_12 = 0
                            rax_12[1].d = 2
                            int64_t** rcx_9 = *(arg1 + 0x50)
                            *(arg1 + 0x50) = rax_12
                            *rcx_9 = rax_12
                    case 0x7e
                        *(arg1 + 0xcc) &= 0xfffffffd
            
            if (arg_18 != 0x6a && *(arg1 + 0xc4) != 1)
                int64_t* rcx_29 = *(arg1 + 0x60)
                
                if (rcx_29 != 0 && (*(*rcx_29 + 0x20))(rcx_29, arg1, 0) s< 0)
                    *(arg1 + 0x14) = 0
                    *(arg1 + 0xc4) = 1
    
    int64_t* rcx_30 = var_58
    
    if (rcx_30 != 0)
        (*(*rcx_30 + 0x10))(rcx_30)

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return 0
