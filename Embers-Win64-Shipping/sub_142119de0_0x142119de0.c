// 函数: sub_142119de0
// 地址: 0x142119de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432d5bc8
arg1[5] = &data_1432d6038
arg1[6] = &data_1432d6050
arg1[8] = 0
*(arg1 + 0x5c) &= 0xe0
arg1[0xa].d = 0x3f800000
*(arg1 + 0x54) = 0x3f800000
arg1[0xb].d = 0x3f800000
__builtin_memset(&arg1[0xc], 0, 0x20)

if (((arg1[1].d u>> 4).b & 1) == 0)
    int64_t var_18
    sub_142112bc0(&var_18, 0)
    int64_t rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    if (data_14399fa4c == 0 || data_143de5452 == 0)
        sub_142111bd0()
    
    if (data_143f4a130 == 0)
        data_143f4a130 = sub_1424a6150()

return arg1
