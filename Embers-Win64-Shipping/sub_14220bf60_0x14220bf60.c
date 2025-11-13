// 函数: sub_14220bf60
// 地址: 0x14220bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    int64_t* rcx
    
    if (arg2[1].d != 0)
        rcx = *arg2
    
    if (arg2[1].d != 0 && rcx != 0)
        (*(*rcx + 0x40))(rcx, arg1)
    else if (arg1[1].d != 0)
        int64_t* rcx_1 = *arg1
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *arg1
            
            if (rcx_2 != 0)
                *arg1 = sub_140a84c80(rcx_2, 0, 0)
            
            arg1[1].d = 0

if (&arg2[2] == &arg1[2])
    return arg1

int64_t* i = arg1[2]

for (void* rsi_2 = &i[sx.q(arg1[3].d) * 2]; i != rsi_2; i = &i[2])
    if (i[1].d != 0)
        int64_t* rcx_3 = *i
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *i
            
            if (rcx_4 != 0)
                *i = sub_140a84c80(rcx_4, 0, 0)
            
            i[1].d = 0

sub_140599630(&arg1[2], 0)
int64_t* i_1 = arg2[2]

for (void* rbp_2 = &i_1[sx.q(arg2[3].d) * 2]; i_1 != rbp_2; i_1 = &i_1[2])
    if (i_1[1].d != 0)
        int64_t* rcx_6 = *i_1
        
        if (rcx_6 != 0)
            int64_t rax_6 = *rcx_6
            int64_t* var_38 = nullptr
            int32_t var_30_1 = 0
            (*(rax_6 + 0x40))(rcx_6, &var_38)
            sub_140599630(&arg1[2], 1)
            
            if (var_30_1 != 0)
                int64_t* rcx_8 = var_38
                void arg_8
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x30))(rcx_8, &arg_8)
            
            int64_t rsi_3 = sx.q(arg1[3].d)
            int32_t rax_8 = (rsi_3 + 1).d
            arg1[3].d = rax_8
            
            if (rax_8 s> *(arg1 + 0x1c))
                sub_1405a4f90(&arg1[2])
            
            int64_t** rcx_12 = (rsi_3 << 4) + arg1[2]
            *rcx_12 = nullptr
            *rcx_12 = var_38
            var_38 = nullptr
            rcx_12[1].d = var_30_1
            int64_t* rcx_13 = var_38
            int32_t var_30_2 = 0
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)

return arg1
