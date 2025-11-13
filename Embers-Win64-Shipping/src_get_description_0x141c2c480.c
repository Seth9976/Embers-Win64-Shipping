// 函数: src_get_description
// 地址: 0x141c2c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return "Band limited sinc interpolation, best quality, 144dB SNR, 96% BW."

if (arg1 == 1)
    return "Band limited sinc interpolation, medium quality, 121dB SNR, 90% BW."

if (arg1 == 2)
    return "Band limited sinc interpolation, fastest, 97dB SNR, 80% BW."

char const* const result = "Zero order hold interpolator, very fast, poor quality."

if (arg1 != 3)
    result = nullptr

if (result != 0)
    return result

if (arg1 != 4)
    return nullptr

return "Linear interpolator, very fast, poor quality."
