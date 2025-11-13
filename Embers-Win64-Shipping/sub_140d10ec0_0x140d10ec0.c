// 函数: sub_140d10ec0
// 地址: 0x140d10ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rbx = 0
int32_t var_28 = 0xffffffff
int64_t var_24
__builtin_memset(&var_24, 0, 0x18)
int64_t var_1c

if (arg3 != 0)
    void var_38
    var_1c.o = *sub_140cbceb0(&var_38, arg3)
    sub_140d3a3a0(&var_28, arg3)
    result = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        result = data_1439a9d84
    
    int64_t var_14
    rbx = var_14:4.d
    var_24:4.d = result

*arg2 = var_28.o
arg2[1].q = var_1c
*(arg2 + 0x18) = rbx
return result
