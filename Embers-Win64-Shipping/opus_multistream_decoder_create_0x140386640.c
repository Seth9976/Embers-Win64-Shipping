// 函数: opus_multistream_decoder_create
// 地址: 0x140386640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 1 u> 0xfe || arg4 s> arg3 || arg3 + arg4 s> 0xff || arg3 s< 1 || arg4 s< 0)
    if (arg6 != 0)
        *arg6 = 0xffffffff
    
    return nullptr

int32_t* result = malloc(sx.q(opus_multistream_decoder_get_size(arg3, arg4)))

if (result == 0)
    if (arg6 != 0)
        *arg6 = 0xfffffff9
    
    return nullptr

int32_t rax_6 = opus_multistream_decoder_init(result, arg1, arg2, arg3, arg4, arg5)

if (arg6 != 0)
    *arg6 = rax_6

if (rax_6 == 0)
    return result

free(result)
return nullptr
