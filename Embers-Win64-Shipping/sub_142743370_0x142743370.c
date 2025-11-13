// 函数: sub_142743370
// 地址: 0x142743370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142307230(arg1, arg2)
*arg1 = &data_1434994c0
int64_t temp0 = _mm_unpacklo_ps(0xc8f42400, 0xc8f42400)
arg1[8] = &data_1434997b8
arg1[9] = &data_1434997e8
arg1[0xa] = &data_143499818
arg1[0x70].d = 0x3f800000
*(arg1 + 0x384) = 0x3dcccccd
arg1[0x71].b = 0
*(arg1 + 0x38c) = 0x3dcccccd
*(arg1 + 0x394) = 0
__builtin_memcpy(&arg1[0x73], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x20\x41\x00\x00\x80\x3f\x00\x00\x20\x41", 0x14)
*(arg1 + 0x3ac) = temp0
*(arg1 + 0x3c4) = 1
int32_t var_20 = 0xc8f42400
*(arg1 + 0x3b4) = 0xc8f42400
arg1[0x77] = _mm_unpacklo_ps(0x48f42400, 0x48f42400)
int32_t var_14 = 0x48f42400
arg1[0x78].d = 0x48f42400
__builtin_memset(&arg1[0x79], 0, 0x19)
*(arg1 + 0x3e4) = 0xffffffff
arg1[0x7d].d = 0
arg1[0x7e] = 0
arg1[0x7f] = 0
arg1[0x80].d &= 0xfffffe00
arg1[0x81] = 0
arg1[0x82] = 0
return arg1
