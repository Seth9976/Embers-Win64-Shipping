// 函数: sub_141c61670
// 地址: 0x141c61670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa20) = 0
int32_t var_48 = 0x3f800000
EnterCriticalSection(arg1 + 0x978)
*(arg1 + 0x940) = 1
__builtin_memcpy(arg1 + 0x944, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\xcd\xcc\x4c\x3f\x00\x00\x00\x3f\x33\x33\x33\x3f\x00\x00\x00\x00\x"
"00\x00\x00\x00\x66\x66\x66\x3f\x66\x66\x26\x3f\x9a\x99\x99\x3e\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3f\x00"
"00\x80\x3f", 
    0x34)

if (arg1 != -0x978)
    LeaveCriticalSection(arg1 + 0x978)

char r9
int512_t zmm3
r9, zmm3 = sub_141c3b040(arg1 + 0x70, int.d(fconvert.t(*(arg2 + 0x10))))
zmm3.o = 0x3f7d70a4
void arg_8
int32_t var_80 = *sub_141f79930(&arg_8)
char var_88 = 0
void arg_10
char r9_1
int512_t zmm3_1
r9_1, zmm3_1 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, (zx.o(0)).d, r9)
zmm3_1.o = 0x3f000000
int32_t var_80_1 = *sub_141f79930(&arg_8)
char var_88_1 = 0
char r9_2
int512_t zmm3_2
r9_2, zmm3_2 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x40000000, r9_1)
zmm3_2.o = 0x3e4ccccd
int32_t var_80_2 = *sub_141f79930(&arg_8)
char var_88_2 = 0
char r9_3
int512_t zmm3_3
r9_3, zmm3_3 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x40a00000, r9_2)
zmm3_3.o = 0x3dcccccd
int32_t var_80_3 = *sub_141f79930(&arg_8)
char var_88_3 = 0
char r9_4
int512_t zmm3_4
r9_4, zmm3_4 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x41200000, r9_3)
zmm3_4.o = 0x3c23d70a
int32_t var_80_4 = *sub_141f79930(&arg_8)
char var_88_4 = 0
char r9_5
int512_t zmm3_5
r9_5, zmm3_5 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x41900000, r9_4)
zmm3_5.o = 0x3b03126f
int32_t var_80_5 = *sub_141f79930(&arg_8)
char var_88_5 = 0
char r9_6
int512_t zmm3_6
r9_6, zmm3_6 = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x41980000, r9_5)
zmm3_6.o = 0x38d1b717
int32_t var_80_6 = *sub_141f79930(&arg_8)
char var_88_6 = 0
int32_t* result = sub_141f7f6d0(arg1 + 0x9a0, &arg_10, 0x41a00000, r9_6)
*(arg1 + 0xa24) = 0
return result
