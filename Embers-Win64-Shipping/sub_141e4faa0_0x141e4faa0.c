// 函数: sub_141e4faa0
// 地址: 0x141e4faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rax = sub_140d41340()
arg1[5] = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[3], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405947f0(&arg1[4], 0)

int16_t* rax_1 = arg1[4]

if (rax_1 != 0)
    *rax_1 = 0

arg1[2].d = 0

if (rax == 0)
    arg1[1].d = 0xffffffff
    *(arg1 + 0xc) = 0
    arg1[3] = 0
    int32_t rax_4 = *(arg1 + 0x2c)
    int64_t arg_10 = 0
    arg1[5].d = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405947f0(&arg1[4], 0)
    
    int16_t* rax_5 = arg1[4]
    
    if (rax_5 != 0)
        *rax_5 = 0
    
    arg1[2].d = 0
else
    void var_48
    sub_140b97b00(&arg1[3], sub_140d21d60(&var_48, rax))
    int64_t var_40
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    sub_140d3a3a0(&arg1[1], rax)
    int32_t rax_3 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_3 = data_1439aaa30
    
    arg1[2].d = rax_3

arg1[6] = sub_140d41340()
arg1[7].w = 0
__builtin_memset(&arg1[8], 0, 0x20)
arg1[0xc] = -1
arg1[0xd].w = 1
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0
return arg1
