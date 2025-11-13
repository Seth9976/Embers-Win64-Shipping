// 函数: sub_141957e70
// 地址: 0x141957e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
PIXELFORMATDESCRIPTOR ppfd
ppfd.cStencilBits = 0
ppfd.iLayerType = 0
uint64_t rcx = zx.q(data_14401b1a0)
__builtin_memset(&ppfd, 0, 0x28)
ppfd.cDepthBits = 0
ppfd.nSize = 0x28
ppfd.nVersion = 1
ppfd.dwFlags = 0x25
ppfd.iPixelType = 0
ppfd.cColorBits = 0x20
TEB* gsbase

if (data_143f01c70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f01c70)
    
    if (data_143f01c70 == 0xffffffff)
        sub_140af2b60()
        data_143f01c6c = sub_140b21a10(&data_143dbb3f0, u"quad_buffer_stereo")
        _Init_thread_footer(&data_143f01c70)

if (data_143f01c6c != 0)
    ppfd.dwFlags |= 2

int32_t format
int64_t r9
format, r9 = ChoosePixelFormat(arg1, &ppfd)
BOOL result

if (format != 0)
    result, r9 = SetPixelFormat(arg1, format, &ppfd)

if (format == 0 || result == 0)
    sub_140af98a0("Unknown", 0x94, u"Failed to set pixel format for device context.", r9)
    result = sub_140afbb40()

__security_check_cookie(rax_1 ^ &var_58)
return result
