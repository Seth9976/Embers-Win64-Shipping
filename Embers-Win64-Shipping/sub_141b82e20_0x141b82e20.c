// 函数: sub_141b82e20
// 地址: 0x141b82e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04530(arg1, arg2)
*arg1 = &data_1430801b0
arg1[5] = &data_143080aa8
arg1[0x3e] = &data_143080ad8
arg1[0x87] = 0
arg1[0x88].d = 0x1f4
*(arg1 + 0x444) = 0x1f4
arg1[0x89].w = 0x100
*(arg1 + 0x44c) = 0
arg1[0x8a] = 0
*(arg1 + 0x46c) = 0x10100
*(arg1 + 0x478) = data_143dbb1e0
int128_t zmm1 = data_14399f5c0
arg1[0x93].d = 0x3f800000
*(arg1 + 0x49c) = 1
*(arg1 + 0x488) = zmm1
*(arg1 + 0x49e) = 0
__builtin_memset(&arg1[0x95], 0, 0x20)
sub_140b58260(arg1 + 0x514, u"WidgetComponentScreenLayer", 1)
*(arg1 + 0x51c) = 0xffffff9c
arg1[0xa4].b = 0
*(arg1 + 0x524) = 0x43340000
arg1[0xa5] = 0
arg1[0xa6] = 0
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 8
arg1[0xa9].b = 0
int32_t rax = data_143dbb210
int64_t var_18 = data_143dbb208
int32_t var_10 = rax
sub_141f48c80(arg1, &var_18, 0, 0, 0)
void arg_8
sub_142221760(&arg1[0x55], *sub_140b58260(&arg_8, &data_142e7aa90, 1))
TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f31878 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f31878)
    
    if (data_143f31878 == 0xffffffff)
        sub_1405aa900(&data_143f31860, /Engine/EngineMaterials/Widget3DPassThrough_Translucent", 0)
        atexit(sub_142cf65d0)
        _Init_thread_footer(&data_143f31878)

if (data_143f31898 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f31898)
    
    if (data_143f31898 == 0xffffffff)
        sub_1405aa900(&data_143f31880, 
            /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided", 0)
        atexit(sub_142cf6600)
        _Init_thread_footer(&data_143f31898)

arg1[0x9a] = data_143f31870
arg1[0x9b] = data_143f31890

if (data_143f318b8 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f318b8)
    
    if (data_143f318b8 == 0xffffffff)
        sub_1405aa900(&data_143f318a0, u"/Engine/EngineMaterials/Widget3DPassThrough_Opaque", 0)
        atexit(sub_142cf63d0)
        _Init_thread_footer(&data_143f318b8)

if (data_143f318d8 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f318d8)
    
    if (data_143f318d8 == 0xffffffff)
        sub_1405aa900(&data_143f318c0, 
            /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided", 0)
        atexit(sub_142cf6400)
        _Init_thread_footer(&data_143f318d8)

arg1[0x9c] = data_143f318b0
arg1[0x9d] = data_143f318d0

if (data_143f318f8 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f318f8)
    
    if (data_143f318f8 == 0xffffffff)
        sub_1405aa900(&data_143f318e0, u"/Engine/EngineMaterials/Widget3DPassThrough_Masked", 0)
        atexit(&data_142cf6360)
        _Init_thread_footer(&data_143f318f8)

if (data_143f31918 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f31918)
    
    if (data_143f31918 == 0xffffffff)
        sub_1405aa900(&data_143f31900, 
            /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided", 0)
        atexit(&data_142cf6390)
        _Init_thread_footer(&data_143f31918)

arg1[0x9e] = data_143f318f0
arg1[0x9f] = data_143f31910
arg1[0xa7].d = data_143dbb1f0.d
int32_t zmm1_1 = data_143dbb1f0:4.d
*(arg1 + 0x20e) &= 0xf7
*(arg1 + 0x53c) = zmm1_1
arg1[0x86].w = 0
*(arg1 + 0x464) = 0x3f000000
arg1[0x8d].d = 0x3f000000
arg1[0xa2].b = 0
return arg1
