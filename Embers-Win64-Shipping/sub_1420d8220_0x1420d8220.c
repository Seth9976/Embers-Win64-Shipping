// 函数: sub_1420d8220
// 地址: 0x1420d8220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"LightComponent0", 1)
void* rax_1 = sub_14249fa30()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_1420d8610(arg1)
uint64_t rcx_4 = zx.q(data_14401b1a0)
*arg1 = &data_1432c4608
TEB* gsbase

if (data_143f48480 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3))))
    _Init_thread_header(&data_143f48480)
    
    if (data_143f48480 == 0xffffffff)
        sub_140b58260(&data_143f48460, u"Lighting", 1)
        _vfprintf_p_l(&data_143f48468, u"Lighting", u"SpriteCategory")
        atexit(sub_142d02340)
        _Init_thread_footer(&data_143f48480)

int64_t* rbx_1 = arg1[0x44]
int64_t temp0 = _mm_unpacklo_ps(0xc2380000, (zx.o(0)).q)
int32_t var_10 = 0
*(rbx_1 + 0x14f) = 1
int64_t var_28 = temp0
int32_t var_20 = 0
sub_141f48c80(rbx_1, &var_28, 0, 0, 0)
int32_t var_10_1 = 0x40200000
var_28 = _mm_unpacklo_ps(0x40200000, 0x40200000)
int32_t var_20_1 = 0x40200000
sub_141f48ee0(rbx_1, &var_28)
arg1[0x26] = rbx_1
return arg1
