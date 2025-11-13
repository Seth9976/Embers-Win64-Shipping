// 函数: sub_142749410
// 地址: 0x142749410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1] = 0x3dcccccd
arg1[2].b = 0
*(arg1 + 0xc) = 0x3dcccccd
arg1[5].b = 0
__builtin_memcpy(&arg1[6], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x20\x41\x00\x00\x80\x3f\x00\x00\x20\x41", 0x14)
arg1[0x11].b = 1
*(arg1 + 0x2c) = _mm_unpacklo_ps(0xc8f42400, 0xc8f42400)
int32_t var_20 = 0xc8f42400
arg1[0xd] = 0xc8f42400
*(arg1 + 0x38) = _mm_unpacklo_ps(0x48f42400, 0x48f42400)
int32_t var_14 = 0x48f42400
arg1[0x10] = 0x48f42400
__builtin_memset(&arg1[0x12], 0, 0x19)
arg1[0x19] = 0xffffffff
arg1[0x1a] = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
arg1[0x20] &= 0xfffffe00
return arg1
