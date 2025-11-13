// 函数: sub_142b6b010
// 地址: 0x142b6b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 2 u> 3)
    return 1

int32_t arg_10 = 0
int64_t* rcx_2

if (arg2 == 2)
    rcx_2 = sub_142b68ce0(&arg_10)
else if (arg2 == 3)
    char rax_8
    
    if (data_144016ee0 != 2)
        rax_8 = sub_142a85f00(&data_144016ee0)
    
    if (data_144016ee0 == 2 || rax_8 == 0)
        int32_t rax_10 = data_144016ee4
        int32_t rcx_4 = arg_10
        
        if (rax_10 s> 0)
            rcx_4 = rax_10
        
        arg_10 = rcx_4
    else
        sub_142b6ae40("nfkc", &arg_10)
        data_144016ee4 = arg_10
        sub_142a85e80(&data_144016ee0)
    
    void* rax_11 = data_144016ed8
    rcx_2 = rax_11 + 0x20
    
    if (rax_11 == 0)
        rcx_2 = nullptr
else if (arg2 == 4)
    rcx_2 = sub_142b68cc0(&arg_10)
else if (arg2 == 5)
    char rax_3
    
    if (data_144016ee0 != 2)
        rax_3 = sub_142a85f00(&data_144016ee0)
    
    if (data_144016ee0 == 2 || rax_3 == 0)
        int32_t rax_5 = data_144016ee4
        int32_t rcx_1 = arg_10
        
        if (rax_5 s> 0)
            rcx_1 = rax_5
        
        arg_10 = rcx_1
    else
        sub_142b6ae40("nfkc", &arg_10)
        data_144016ee4 = arg_10
        sub_142a85e80(&data_144016ee0)
    
    void* rax_6 = data_144016ed8
    rcx_2 = rax_6 + 8
    
    if (rax_6 == 0)
        rcx_2 = nullptr
else
    int32_t* rcx = &arg_10
    int64_t* rax_1
    
    if (arg2 == 6)
        rax_1 = sub_142b68bf0(rcx)
    else
        rax_1 = sub_142b68d00(rcx)
    
    rcx_2 = rax_1

if (arg_10 s> 0)
    return 2

return (*(*rcx_2 + 0xa0))(rcx_2, zx.q(arg1))
