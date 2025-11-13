// 函数: opus_multistream_decoder_get_size
// 地址: 0x140386970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 1 || arg2 s> arg1 || arg2 s< 0)
    return 0

int32_t rax = opus_decoder_get_size(2)
return zx.q(((opus_decoder_get_size(1) + 7) & 0xfffffff8) * (arg1 - arg2) + 0x110
    + ((rax + 7) & 0xfffffff8) * arg2)
