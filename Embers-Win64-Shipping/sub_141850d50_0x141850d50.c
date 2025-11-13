// 函数: sub_141850d50
// 地址: 0x141850d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143efaa48 s> *rbx_1)
    _Init_thread_header(&data_143efaa48)
    
    if (data_143efaa48 == 0xffffffff)
        _vfprintf_p_l(&data_143efaa30, u"Queued", u"BuildPatchInstallProgress")
        atexit(sub_142cec2f0)
        _Init_thread_footer(&data_143efaa48)

if (data_143efaa68 s> *rbx_1)
    _Init_thread_header(&data_143efaa68)
    
    if (data_143efaa68 == 0xffffffff)
        _vfprintf_p_l(&data_143efaa50, u"Initializing", u"BuildPatchInstallProgress")
        atexit(sub_142cec160)
        _Init_thread_footer(&data_143efaa68)

if (data_143efaa88 s> *rbx_1)
    _Init_thread_header(&data_143efaa88)
    
    if (data_143efaa88 == 0xffffffff)
        _vfprintf_p_l(&data_143efaa70, u"Resuming", u"BuildPatchInstallProgress")
        atexit(sub_142cec340)
        _Init_thread_footer(&data_143efaa88)

if (data_143efaaa8 s> *rbx_1)
    _Init_thread_header(&data_143efaaa8)
    
    if (data_143efaaa8 == 0xffffffff)
        _vfprintf_p_l(&data_143efaa90, u"Downloading", u"BuildPatchInstallProgress")
        atexit(sub_142cec0c0)
        _Init_thread_footer(&data_143efaaa8)

if (data_143efaac8 s> *rbx_1)
    _Init_thread_header(&data_143efaac8)
    
    if (data_143efaac8 == 0xffffffff)
        _vfprintf_p_l(&data_143efaab0, u"Installing", u"BuildPatchInstallProgress")
        atexit(sub_142cec1b0)
        _Init_thread_footer(&data_143efaac8)

if (data_143efaae8 s> *rbx_1)
    _Init_thread_header(&data_143efaae8)
    
    if (data_143efaae8 == 0xffffffff)
        _vfprintf_p_l(&data_143efaad0, u"Verifying", u"BuildPatchInstallProgress")
        atexit(sub_142cebf60)
        _Init_thread_footer(&data_143efaae8)

if (data_143efab08 s> *rbx_1)
    _Init_thread_header(&data_143efab08)
    
    if (data_143efab08 == 0xffffffff)
        _vfprintf_p_l(&data_143efaaf0, u"Cleaning up", u"BuildPatchInstallProgress")
        atexit(sub_142cebfb0)
        _Init_thread_footer(&data_143efab08)

if (data_143efab28 s> *rbx_1)
    _Init_thread_header(&data_143efab28)
    
    if (data_143efab28 == 0xffffffff)
        _vfprintf_p_l(&data_143efab10, u"Prerequisites", u"BuildPatchInstallProgress")
        atexit(sub_142cec2a0)
        _Init_thread_footer(&data_143efab28)

if (data_143efab48 s> *rbx_1)
    _Init_thread_header(&data_143efab48)
    
    if (data_143efab48 == 0xffffffff)
        _vfprintf_p_l(&data_143efab30, u"Complete", u"BuildPatchInstallProgress")
        atexit(sub_142cec000)
        _Init_thread_footer(&data_143efab48)

if (data_143efab68 s> *rbx_1)
    _Init_thread_header(&data_143efab68)
    
    if (data_143efab68 == 0xffffffff)
        _vfprintf_p_l(&data_143efab50, u"Paused", u"BuildPatchInstallProgress")
        atexit(sub_142cec200)
        _Init_thread_footer(&data_143efab68)

if (data_143efab88 s> *rbx_1)
    _Init_thread_header(&data_143efab88)
    
    if (data_143efab88 == 0xffffffff)
        sub_1405d9400()
        data_143efab70 = data_143cd6fd8
        void* rdx_3 = data_143cd6fe0
        data_143efab78 = rdx_3
        
        if (rdx_3 != 0)
            *(rdx_3 + 8) += 1
        
        data_143efab80 = data_143cd6fe8
        atexit(sub_142cec110)
        _Init_thread_footer(&data_143efab88)

uint64_t rcx = zx.q(*arg1)

if (rcx.d u> 0xb)
    return &data_143efab70

switch (rcx)
    case 0
        return &data_143efaa30
    case 1
        return &data_143efaa50
    case 2
        return &data_143efaa70
    case 3
        return &data_143efaa90
    case 4, 5, 6
        return &data_143efaab0
    case 7
        return &data_143efaad0
    case 8
        return &data_143efaaf0
    case 9
        return &data_143efab10
    case 0xa
        return &data_143efab30
    case 0xb
        return &data_143efab50
