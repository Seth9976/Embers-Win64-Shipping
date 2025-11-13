// 函数: sub_140f91fb0
// 地址: 0x140f91fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14098dd50(arg1 + 0x10, arg2 + 0x10)
sub_14098dd50(arg1 + 0x60, arg2 + 0x60)
sub_140780c40(arg1 + 0xb0, arg2 + 0xb0)

if (arg2 + 0xc0 != arg1 + 0xc0)
    int64_t* i = *(arg1 + 0xc0)
    
    for (void* rsi_3 = &i[sx.q(*(arg1 + 0xc8)) * 2]; i != rsi_3; i = &i[2])
        if (i[1].d != 0)
            int64_t* rcx_3 = *i
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x38))(rcx_3, 0)
                int64_t rcx_4 = *i
                
                if (rcx_4 != 0)
                    *i = sub_140a84c80(rcx_4, 0, 0)
                
                i[1].d = 0
    
    sub_140599630(arg1 + 0xc0, 0)
    int64_t* i_1 = *(arg2 + 0xc0)
    
    for (void* rbp_3 = &i_1[sx.q(*(arg2 + 0xc8)) * 2]; i_1 != rbp_3; i_1 = &i_1[2])
        if (i_1[1].d != 0)
            int64_t* rcx_6 = *i_1
            
            if (rcx_6 != 0)
                int64_t rax_3 = *rcx_6
                int64_t* var_38 = nullptr
                int32_t var_30_1 = 0
                (*(rax_3 + 0x40))(rcx_6, &var_38)
                sub_140599630(arg1 + 0xc0, 1)
                
                if (var_30_1 != 0)
                    int64_t* rcx_8 = var_38
                    void arg_8
                    
                    if (rcx_8 != 0)
                        (*(*rcx_8 + 0x30))(rcx_8, &arg_8)
                
                int64_t rsi_4 = sx.q(*(arg1 + 0xc8))
                int32_t rax_5 = (rsi_4 + 1).d
                *(arg1 + 0xc8) = rax_5
                
                if (rax_5 s> *(arg1 + 0xcc))
                    sub_1405a4f90(arg1 + 0xc0)
                
                int64_t** rcx_12 = (rsi_4 << 4) + *(arg1 + 0xc0)
                *rcx_12 = nullptr
                *rcx_12 = var_38
                var_38 = nullptr
                rcx_12[1].d = var_30_1
                int64_t* rcx_13 = var_38
                int32_t var_30_2 = 0
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)

*(arg1 + 0xd8) = *(arg2 + 0xd8)
return arg1
