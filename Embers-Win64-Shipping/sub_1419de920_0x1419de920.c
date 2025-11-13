// 函数: sub_1419de920
// 地址: 0x1419de920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143010418
arg1[5] = 0
arg1[6] = 0
*(arg1 + 0x44) = 0
arg1[9].d = 0
__builtin_memcpy(&arg1[0xa], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff", 
    0x18)
arg1[0xd].d &= 0xfffffffe
arg1[0xe].d &= 0xfffffffe
*(arg1 + 0x6c) = 0x3f000000
*(arg1 + 0x74) &= 0xfffffffe
arg1[0xf].d = 0x3f000000
*(arg1 + 0x7c) &= 0xfffffffe
arg1[0x10].d &= 0xfffffffe
*(arg1 + 0x84) = 0x3f000000
arg1[0x11].d &= 0xfffffffe
*(arg1 + 0x8c) &= 0xfffffffe
arg1[0x12].d = 0x3f000000
*(arg1 + 0x94) &= 0xfffffffe
*(arg1 + 0xa4) = 0x7f7fffff
arg1[0x15].d = 0xff7fffff
*(arg1 + 0xbc) = 0x7f7fffff
arg1[0x18].d = 0xff7fffff
arg1[0x1a] = 0
*(arg1 + 0xc4) = 0x7f7fffff
arg1[0x19].d = 0xff7fffff
arg1[0x1b] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
*(arg1 + 0xfc) = 0
arg1[0x28].d = 0x7fffffff
*(arg1 + 0x144) = 0x80000000
sub_14220ad50(&arg1[0x2b])
*(arg1 + 0x289) = (*(arg1 + 0x289) & 0xf9) | 1
*(arg1 + 0x2cc) = 0x7f7fffff
arg1[0x5a].d = 0xff7fffff
sub_141f7a080(&arg1[0x5b])
arg1[0x6d] = 0
arg1[0x6e] = 0
*(arg1 + 0xac) |= 1
*(arg1 + 0xb4) |= 1
*(arg1 + 0x104) &= 0xfffffffe
int64_t temp0 = _mm_unpacklo_ps(0x3f666666, 0x3f666666)
int32_t var_20
__builtin_strncpy(&var_20, "fff?", 4)
arg1[0x21] = temp0
__builtin_strncpy(&arg1[0x22], "fff?", 4)
arg1[0x6f].d = 0
*(arg1 + 0x37c) = 1
arg1[7].d = 0x42c80000
*(arg1 + 0x3c) = 0x3f800000
*(arg1 + 0x4c) = 0
__builtin_memcpy(&arg1[0xa], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x18)
arg1[0x16].d = 0
arg1[0x17] = 0
arg1[0x18].d = 0x42340000
*(arg1 + 0xc4) = 0xc8800000
arg1[0x19].d = 0x48800000
*(arg1 + 0xa4) = 0
arg1[0x28] = 0
arg1[0x1c].d = 0x3f000000
int32_t rax_1 = arg1[0x29].d
*(arg1 + 0x154) &= 0xfffffffe
*(arg1 + 0x13c) = 0
arg1[0x29].d = (rax_1 & 0xfffffe33) | 0x33
*(arg1 + 0x294) = 0
*(arg1 + 0x14c) = 8
char r9
int512_t zmm3
r9, zmm3 = sub_142221760(&arg1[0x2b], data_143f3a590)
*(arg1 + 0x2bc) = 0
arg1[0x59].d = 0
*(arg1 + 0x2cc) = 0x3f800000
arg1[0x5a].d = 0x40400000
arg1[0x6c].d = 0
__builtin_memcpy(&arg1[0x53], 
    "\x00\x00\xc8\x42\x00\x00\xc8\x42\x03\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x48\x42\x00\x00\x16\x43\x"
"03\x00\x00\x00", 
    0x1c)
arg1[0x58].d = 0
*(arg1 + 0x2c4) = 0x41200000
void* rax_4 = sub_141f8b8d0(&arg1[0x5b])
zmm3.o = zx.o(0)
void arg_8
int32_t var_30 = *sub_141f79930(&arg_8)
char var_38 = 0
void arg_18
char r9_1
int512_t zmm3_1
r9_1, zmm3_1 = sub_141f7f6d0(rax_4, &arg_18, (zx.o(0)).d, r9)
zmm3_1.o = 0x3f800000
int32_t var_30_1 = *sub_141f79930(&arg_8)
char var_38_1 = 0
sub_141f7f6d0(rax_4, &arg_18, 0x3f800000, r9_1)
void var_28
int128_t zmm0_1 = *sub_140b214c0(&var_28)
*(arg1 + 0x364) &= 0xffff7fff
*(arg1 + 0x28) = zmm0_1
return arg1
