// 函数: sub_141e4f940
// 地址: 0x141e4f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[5] = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[3], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405947f0(&arg1[4], 0)

int16_t* rax = arg1[4]

if (rax != 0)
    *rax = 0

arg1[2].d = 0

if (arg3 == 0)
    arg1[1].d = 0xffffffff
    *(arg1 + 0xc) = 0
    arg1[3] = 0
    int32_t rax_3 = *(arg1 + 0x2c)
    int64_t arg_10 = 0
    arg1[5].d = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405947f0(&arg1[4], 0)
    
    int16_t* rax_4 = arg1[4]
    
    if (rax_4 != 0)
        *rax_4 = 0
    
    arg1[2].d = 0
else
    void var_48
    sub_140b97b00(&arg1[3], sub_140d21d60(&var_48, arg3))
    int64_t var_40
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    sub_140d3a3a0(&arg1[1], arg3)
    int32_t rax_2 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_2 = data_1439aaa30
    
    arg1[2].d = rax_2

*(arg1 + 0x39) = arg5
arg1[6] = arg3
arg1[7].b = arg4
__builtin_memset(&arg1[8], 0, 0x20)
arg1[0xc] = -1
arg1[0xd].w = 1
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0
return arg1
