// 函数: sub_14201e590
// 地址: 0x14201e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = 0
uint32_t count = 0

if (sub_14203bb50(arg1) != 0)
    int64_t var_98
    sub_140596d10(&var_98, arg2)
    int64_t* var_80 = nullptr
    int32_t var_78_1 = 0
    
    if (arg4 != &var_80 && arg4[1].d != 0)
        int64_t* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &var_80)
    
    int64_t var_70 = 0
    int32_t var_64
    
    if (count != 0)
        sub_1405da9e0(&var_70, count, 0)
        memcpy(var_70, var_60, count)
    else
        var_64 = 0
    
    void*** rax_2 = sub_140a82f30(0x40, 8)
    *rax_2 = &data_1432a4cd8
    sub_140596d10(&rax_2[1], &var_98)
    rax_2[3].d = arg3
    rax_2[4] = 0
    rax_2[5].d = 0
    
    if (&var_80 != &rax_2[4] && var_78_1 != 0)
        int64_t* rcx_6 = var_80
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x40))(rcx_6)
    
    rax_2[6] = 0
    rax_2[6] = var_70
    var_70 = 0
    rax_2[7].d = count
    *(rax_2 + 0x3c) = var_64
    uint32_t var_68_1
    var_68_1.q = 0
    *rax_2 = &data_1432a4cf8
    int64_t (* var_48)(int64_t* arg1)
    int64_t (* rax_7)(int64_t* arg1) = var_48
    
    if (rax_2 != -8)
        rax_7 = j_sub_14201afb0
    
    void*** var_38_1 = rax_2
    var_48 = rax_7
    sub_140a20e40(0x4ff, &var_48)
    int64_t rcx_7 = var_70
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140745b20(&var_80)
    int64_t rcx_9 = var_98
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
else if (arg4[1].d != 0)
    int64_t* rcx_10 = *arg4
    
    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
        sub_1420264c0(arg4, arg2, arg3, 0)

if (var_60 != 0)
    sub_140a74f90(var_60)

return sub_140745b20(arg4)
