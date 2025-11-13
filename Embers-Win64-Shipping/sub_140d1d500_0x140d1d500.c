// 函数: sub_140d1d500
// 地址: 0x140d1d500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 0xd)) == 0)
    int32_t rcx_10
    rcx_10.b = *(arg2 + 0xc) == 0
    
    if ((rcx_10.b & sub_140b5b8a0(*(arg2 + 8), 6)) == 0)
        return 0
    
    int64_t arg_10 = 0
    int64_t* rcx_11 = *(*rbx + 8)
    (*(*rcx_11 + 0x140))(rcx_11, &arg_10, arg3)
    void var_30
    sub_140aae2b0(&var_30, &arg_10)
    int32_t var_20
    int32_t var_20_1 = var_20 | 4
    sub_14065da90(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4, &var_30)
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t rbx_2 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_28 + 8))(var_28, zx.q(rbx_2))
else
    void* rcx_1 = *rbx
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    sub_140a1d9d0(*(rcx_1 + 8), &var_58, arg5)
    int64_t* var_48
    sub_140aae420(&var_48, &var_58)
    int64_t* rcx_4 = var_48
    (*(*rcx_4 + 0x38))(rcx_4)
    int32_t var_38
    int32_t var_38_1 = var_38 | 4
    sub_14065da90(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4, &var_48)
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rbx_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_40 + 8))(var_40, zx.q(rbx_1))
    
    int64_t rcx_9 = var_58
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return 2
