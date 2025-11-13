// 函数: opus_encoder_create
// 地址: 0x1403844f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 != 0xbb80 && arg1 != 0x5dc0 && arg1 != 0x3e80 && arg1 != 0x2ee0 && arg1 != 0x1f40)
        || arg2 - 1 u> 1 || ((arg3 - 0x800) & 0xfffffffc) != 0 || arg3 == 0x802)
    if (arg4 != 0)
        *arg4 = 0xffffffff
    
    return 0

int32_t rax_8

if (arg2 - 1 u> 1)
    rax_8 = 0
else
    int32_t arg_8
    sub_1403def10(&arg_8)
    arg_8 = (arg_8 + 7) & 0xfffffff8
    rax_8 = sub_1403fa2b0(arg2) + arg_8 + 0x4738

int32_t* result = malloc(sx.q(rax_8))

if (result == 0)
    if (arg4 != 0)
        *arg4 = 0xfffffff9
    
    return nullptr

int32_t rax_10 = opus_encoder_init(result, arg1, arg2, arg3)

if (arg4 != 0)
    *arg4 = rax_10

if (rax_10 == 0)
    return result

free(result)
return nullptr
