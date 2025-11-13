// 函数: sub_1403bf1b0
// 地址: 0x1403bf1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int32_t rdi = 0

if (arg2 != 0)
    if (arg3 == 0)
        goto label_1403bf382
    
    goto label_1403bf1d9

png_warning(rsi, "Image width is zero in IHDR")
rdi = 1

if (arg3 == 0)
label_1403bf382:
    png_warning(rsi, "Image height is zero in IHDR")
    rdi = 1
    
    if (arg2 u<= 0xf4240 && *(rsi + 0x45c) u>= arg2)
        goto label_1403bf1f1
    
    goto label_1403bf3a2

label_1403bf1d9:

if (arg2 u<= 0xf4240 && *(rsi + 0x45c) u>= arg2)
label_1403bf1f1:
    
    if (arg3 u> 0xf4240 || *(rsi + 0x460) u< arg3)
        goto label_1403bf3c2
    
    goto label_1403bf209

label_1403bf3a2:
png_warning(rsi, "Image width exceeds user limit in IHDR")
rdi = 1

if (arg3 u<= 0xf4240 && *(rsi + 0x460) u>= arg3)
label_1403bf209:
    
    if (arg2 s< 0)
        goto label_1403bf3de
    
    goto label_1403bf211

label_1403bf3c2:
png_warning(rsi, "Image height exceeds user limit in IHDR")
rdi = 1

if (arg2 s< 0)
label_1403bf3de:
    png_warning(rsi, "Invalid image width in IHDR")
    rdi = 1
    
    if (arg3 s>= 0)
        goto label_1403bf219
    
    goto label_1403bf3fa

label_1403bf211:

if (arg3 s< 0)
label_1403bf3fa:
    png_warning(rsi, "Invalid image height in IHDR")
    rdi = 1
    
    if (arg2 u>= 0x1fffff8f)
        png_warning(rsi, "Width is too large for libpng to process pixels")
else
label_1403bf219:
    
    if (arg2 u>= 0x1fffff8f)
        png_warning(rsi, "Width is too large for libpng to process pixels")

int32_t result

if (arg4 u> 0x10 || not(test_bit(0x10116, arg4)))
    result, arg1 = png_warning(rsi, "Invalid bit depth in IHDR")
    rdi = 1

int32_t rbx_2 = arg5 | 4

if (arg5 u> 6 || rbx_2 == 5)
    result, arg1 = png_warning(rsi, "Invalid color type in IHDR")
    rdi = 1

if (arg4 s< 9 || arg5 != 3)
    result.b = arg5 == 4
    arg1.b = rbx_2 == 6
    
    if (arg4 s<= 7)
        result.b |= arg1.b
        
        if (result.b != 0)
            result = png_warning(rsi, "Invalid color type/bit depth combination in IHDR")
            rdi = 1
else
    result = png_warning(rsi, "Invalid color type/bit depth combination in IHDR")
    rdi = 1

if (arg6 s>= 2)
    result = png_warning(rsi, "Unknown interlace method in IHDR")
    rdi = 1

if (arg7 != 0)
    result = png_warning(rsi, "Unknown compression method in IHDR")
    rdi = 1

if ((*(rsi + 0x155) & 0x10) != 0 && *(rsi + 0x418) != 0)
    result = png_warning(rsi, "MNG features are not allowed in a PNG datastream")

if (arg8 != 0 && arg8 == 0x40 && (*(rsi + 0x418) & 4) != 0 && rbx_2 == 6)
    result = 0x1000 & *(rsi + 0x154)

if (arg8 != 0 && (arg8 != 0x40 || (*(rsi + 0x418) & 4) == 0 || rbx_2 != 6 || result != 0))
    png_warning(rsi, "Unknown filter method in IHDR")
    
    if ((*(rsi + 0x155) & 0x10) != 0)
        png_warning(rsi, "Invalid filter method in IHDR")
else if (rdi == 0)
    return result

png_error(rsi, "Invalid IHDR data")
noreturn
