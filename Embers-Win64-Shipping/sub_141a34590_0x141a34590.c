// 函数: sub_141a34590
// 地址: 0x141a34590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3
bool cond:0_1

if (arg2 != 0)
    cond:0_1 = sub_140d226f0(arg2, sub_1425be5e0()) == 0
    rax_3 = arg2

if (arg2 == 0 || not(cond:0_1))
    rax_3 = nullptr

*(arg1 + 0x28) = rax_3

if (arg2 == 0)
    *arg1 = 0xffffffff
    arg1[1] = 0
    *(arg1 + 0x10) = 0
    int32_t rax_6 = arg1[9]
    int64_t arg_8 = 0
    arg1[8] = 0
    
    if (rax_6 s< 0 && rax_6 != 0)
        sub_1405947f0(&arg1[6], 0)
    
    int16_t* rax_7 = *(arg1 + 0x18)
    
    if (rax_7 != 0)
        *rax_7 = 0
    
    arg1[2] = 0
else
    void var_28
    sub_140b97b00(&arg1[4], sub_140d21d60(&var_28, arg2))
    int64_t var_20
    
    if (var_20 != 0)
        sub_140a74f90(var_20)
    
    sub_140d3a3a0(arg1, arg2)
    int32_t rax_5 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_5 = data_1439aaa30
    
    arg1[2] = rax_5

return arg1
