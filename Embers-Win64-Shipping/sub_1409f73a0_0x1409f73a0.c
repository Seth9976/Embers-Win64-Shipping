// 函数: sub_1409f73a0
// 地址: 0x1409f73a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cefa60 s> *rbx_1)
    _Init_thread_header(&data_143cefa60)
    
    if (data_143cefa60 == 0xffffffff)
        _vfprintf_p_l(&data_143cefa48, u"The operation was successful.", u"MobilePatchingUtils")
        atexit(sub_142cbaa90)
        _Init_thread_footer(&data_143cefa60)

if (data_143cefa80 s> *rbx_1)
    _Init_thread_header(&data_143cefa80)
    
    if (data_143cefa80 == 0xffffffff)
        _vfprintf_p_l(&data_143cefa68, u"Invalid installation directory", u"MobilePatchingUtils")
        atexit(sub_142cba9a0)
        _Init_thread_footer(&data_143cefa80)

if (data_143cefaa0 s> *rbx_1)
    _Init_thread_header(&data_143cefaa0)
    
    if (data_143cefaa0 == 0xffffffff)
        _vfprintf_p_l(&data_143cefa88, u"Invalid cloud URL", u"MobilePatchingUtils")
        atexit(sub_142cba950)
        _Init_thread_footer(&data_143cefaa0)

if (data_143cefac0 s> *rbx_1)
    _Init_thread_header(&data_143cefac0)
    
    if (data_143cefac0 == 0xffffffff)
        _vfprintf_p_l(&data_143cefaa8, u"Invalid manifest URL", u"MobilePatchingUtils")
        atexit(sub_142cba9f0)
        _Init_thread_footer(&data_143cefac0)

if (data_143cefae0 s> *rbx_1)
    _Init_thread_header(&data_143cefae0)
    
    if (data_143cefae0 == 0xffffffff)
        _vfprintf_p_l(&data_143cefac8, Failed to download manifest file. No response", 
            MobilePatchingUtils")
        atexit(sub_142cba8b0)
        _Init_thread_footer(&data_143cefae0)

if (data_143cefb00 s> *rbx_1)
    _Init_thread_header(&data_143cefb00)
    
    if (data_143cefb00 == 0xffffffff)
        _vfprintf_p_l(&data_143cefae8, u"Failed to download manifest file", u"MobilePatchingUtils")
        atexit(sub_142cba860)
        _Init_thread_footer(&data_143cefb00)

if (data_143cefb20 s> *rbx_1)
    _Init_thread_header(&data_143cefb20)
    
    if (data_143cefb20 == 0xffffffff)
        _vfprintf_p_l(&data_143cefb08, Failed to reconstruct downloaded manifest file", 
            MobilePatchingUtils")
        atexit(sub_142cba900)
        _Init_thread_footer(&data_143cefb20)

if (data_143cefb40 s> *rbx_1)
    _Init_thread_header(&data_143cefb40)
    
    if (data_143cefb40 == 0xffffffff)
        _vfprintf_p_l(&data_143cefb28, u"An unknown error ocurred", u"MobilePatchingUtils")
        atexit(sub_142cbaa40)
        _Init_thread_footer(&data_143cefb40)

if (rdi.d u> 6)
    return &data_143cefb28

switch (rdi)
    case 0
        return &data_143cefa48
    case 1
        return &data_143cefa68
    case 2
        return &data_143cefa88
    case 3
        return &data_143cefaa8
    case 4
        return &data_143cefac8
    case 5
        return &data_143cefae8
    case 6
        return &data_143cefb08
