// 函数: sub_141bc34b0
// 地址: 0x141bc34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x3a0)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x350))(rcx)

if (rcx == 0 || rax_2 == 0)
    int64_t var_58
    sub_140dc1a00(arg1, &var_58, arg3, arg4)
    void* rax_4 = *(arg1 + 0x3a0)
    int64_t* var_50
    int64_t* var_40
    void var_38
    
    if (rax_4 == 0)
    label_141bc35d8:
        *arg2 = var_58
        arg2[1] = var_50
        int64_t var_48
        arg2[2] = var_48
        arg2[3] = var_40
        arg2[4] = 0
        arg2[5].d = 0
        __builtin_memset(&var_58, 0, 0x20)
        sub_1407473e0(&arg2[4], &var_38)
        char var_28
        arg2[6].b = var_28
    else
        int32_t rax_5 = *(rax_4 + 0xc)
        void* const rax_12
        
        if (rax_5 s>= data_143e1d9b4)
            rax_12 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_5)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_7 = temp1_1 + rdx_3
            rax_12 =
                *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
        
        if (((*(rax_12 + 8) u>> 0x1c).b & 1) != 0)
            goto label_141bc35d8
        
        char arg_8 = 0
        char* var_60_1 = &arg_8
        void*** (* var_68)() = sub_140884c50
        
        if (*(sub_140a756e0(&var_68, &data_14397f5f0) + 0x20) != 0)
            goto label_141bc35d8
        
        int64_t* rcx_8 = *(arg1 + 0x3a0)
        (*(*rcx_8 + 0x388))(rcx_8, arg2, arg3, arg4, &var_58)
    
    sub_140745b20(&var_38)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp4_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp5_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
else
    int64_t* rcx_1 = *(arg1 + 0x3a0)
    (*(*rcx_1 + 0x380))(rcx_1, arg2, arg3, arg4)

return arg2
