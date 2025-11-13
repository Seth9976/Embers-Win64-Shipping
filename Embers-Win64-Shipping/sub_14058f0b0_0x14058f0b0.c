// 函数: sub_14058f0b0
// 地址: 0x14058f0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    if (arg2 == 0)
        return avcodec_find_encoder(0x1b) __tailcall
    
    return avcodec_find_encoder_by_name("nvenc_h264") __tailcall

if (arg1 != 1)
    char const* const exceptionObject = "Invalid codec ID"
    _CxxThrowException(&exceptionObject, &data_143948b28)
    noreturn

if (arg2 == 0)
    return avcodec_find_encoder(0xad) __tailcall

return avcodec_find_encoder_by_name("nvenc_hevc") __tailcall
