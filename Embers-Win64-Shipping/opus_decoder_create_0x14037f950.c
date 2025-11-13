// 函数: opus_decoder_create
// 地址: 0x14037f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 != 0xbb80 && arg1 != 0x5dc0 && arg1 != 0x3e80 && arg1 != 0x2ee0 && arg1 != 0x1f40)
        || arg2 - 1 u> 1)
    if (arg3 != 0)
        *arg3 = 0xffffffff
    
    return 0

int32_t rax_8

if (arg2 - 1 u> 1)
    rax_8 = 0
else
    int32_t arg_8
    sub_1403dde70(&arg_8)
    arg_8 = (arg_8 + 7) & 0xfffffff8
    rax_8 = sub_1403f68e0(arg2) + arg_8 + 0x58

int32_t* result = malloc(sx.q(rax_8))

if (result == 0)
    if (arg3 != 0)
        *arg3 = 0xfffffff9
    
    return nullptr

int32_t rax_10 = opus_decoder_init(result, arg1, arg2)

if (arg3 != 0)
    *arg3 = rax_10

if (rax_10 == 0)
    return result

free(result)
return nullptr
