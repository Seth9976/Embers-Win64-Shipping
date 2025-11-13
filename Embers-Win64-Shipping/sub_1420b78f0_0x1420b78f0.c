// 函数: sub_1420b78f0
// 地址: 0x1420b78f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0
*arg1 = 0xffffffff
arg1[1] = 0
__builtin_memset(&arg1[4], 0, 0x14)
int64_t arg_8 = 0

if (arg1[9] s<= 0xffffffff)
    sub_1405947f0(&arg1[6], 0)

int16_t* rax = *(arg1 + 0x18)

if (rax != 0)
    *rax = 0

arg1[2] = 0

if (arg2 == 0)
    *arg1 = 0xffffffff
    arg1[1] = 0
    *(arg1 + 0x10) = 0
    int32_t rax_3 = arg1[9]
    int64_t arg_10 = 0
    arg1[8] = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405947f0(&arg1[6], 0)
    
    int16_t* rax_4 = *(arg1 + 0x18)
    
    if (rax_4 != 0)
        *rax_4 = 0
    
    arg1[2] = 0
else
    void var_38
    sub_140b97b00(&arg1[4], sub_140d21d60(&var_38, arg2))
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)
    
    sub_140d3a3a0(arg1, arg2)
    int32_t rax_2 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_2 = data_1439aaa30
    
    arg1[2] = rax_2

return arg1
