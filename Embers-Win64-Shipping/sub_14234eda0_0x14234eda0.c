// 函数: sub_14234eda0
// 地址: 0x14234eda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"LightComponent0", 1)
void* rax_1 = sub_1425aaaf0()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_1420d8610(arg1)
uint64_t rcx_4 = zx.q(data_14401b1a0)
*arg1 = &data_1432c3fd8
TEB* gsbase

if (data_143f597a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3))))
    _Init_thread_header(&data_143f597a0)
    
    if (data_143f597a0 == 0xffffffff)
        sub_140b58260(&data_143f59780, u"Lighting", 1)
        _vfprintf_p_l(&data_143f59788, u"Lighting", u"SpriteCategory")
        atexit(sub_142d0de30)
        _Init_thread_footer(&data_143f597a0)

void* rax_4 = arg1[0x44]
arg1[0x46] = rax_4
int64_t temp0 = _mm_unpacklo_ps(0xc2b40000, (zx.o(0)).q)
*(rax_4 + 0x14f) = 1
int64_t* rcx_6 = arg1[0x46]
int32_t var_10 = 0
int32_t var_20 = 0
int64_t var_28 = temp0
sub_141f48c80(rcx_6, &var_28, 0, 0, 0)
arg1[0x26] = arg1[0x46]
return arg1
