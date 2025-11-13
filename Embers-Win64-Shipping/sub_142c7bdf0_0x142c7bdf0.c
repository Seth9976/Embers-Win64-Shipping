// 函数: sub_142c7bdf0
// 地址: 0x142c7bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
sub_142c65340(arg1, 0)
arg1[0xdd].d = 0x1b7740
arg1[0xdf] = sub_142c7cd40
arg1[0xde] = arg1
arg1[0xe0] = sub_142c7c200
sub_142c8f9b0(&arg1[0xe3], &data_1436b79b0)
sub_142c8ed20(&arg1[0xd3])
int32_t result = sub_142c7c2e0(arg1)

if (result == 0)
    result = sub_142c7c3a0(arg1)
    
    if (result == 0)
        arg1[0xe1].d = 1
        return sub_142c78a60(arg1, arg2, arg3)

return result
