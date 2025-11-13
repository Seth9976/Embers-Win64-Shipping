// 函数: sub_14279ce60
// 地址: 0x14279ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_1434b9110
arg1[5] = 0
arg1[6] = 0
arg1[7] = 2
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 2
arg1[0x12] = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
__builtin_memset(&arg1[0x10], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x94) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x11], 0)

int16_t* rax = arg1[0x11]

if (rax != 0)
    *rax = 0

arg1[0xf].d = 0
arg1[0xb] = 0
arg1[0xc] = 0
void* rax_1 = sub_1427bfc60()

if (rax_1 == 0)
    arg1[0xe].d = 0xffffffff
    *(arg1 + 0x74) = 0
    arg1[0x10] = 0
    int32_t rax_4 = *(arg1 + 0x94)
    int64_t arg_10 = 0
    arg1[0x12].d = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405947f0(&arg1[0x11], 0)
    
    int16_t* rax_5 = arg1[0x11]
    
    if (rax_5 != 0)
        *rax_5 = 0
    
    arg1[0xf].d = 0
else
    void var_38
    sub_140b97b00(&arg1[0x10], sub_140d21d60(&var_38, rax_1))
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)
    
    sub_140d3a3a0(&arg1[0xe], rax_1)
    int32_t rax_3 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_3 = data_1439aaa30
    
    arg1[0xf].d = rax_3

return arg1
