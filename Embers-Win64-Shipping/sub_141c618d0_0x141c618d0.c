// 函数: sub_141c618d0
// 地址: 0x141c618d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58
sub_141c30d00(&var_58)
int32_t var_4c
__builtin_strncpy(&var_4c, "fff?333?", 8)
var_58 = 0x3f800000
int32_t var_50 = 0x3f4ccccd
int32_t var_54 = 0
int128_t var_44
__builtin_memcpy(&var_44, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x71\x3d\x0a\x3f\x9a\x99\x19\x3f\x33\x33\xb3\x3e\x9a\x99\x19\x3e\x"
"9a\x99\x59\x3f", 
    0x1c)
char r9 = EnterCriticalSection(arg1 + 0xb0)
*(arg1 + 0x78) = 1
*(arg1 + 0x7c) = var_58.o
int128_t zmm0 = var_44
int32_t var_48
*(arg1 + 0x8c) = var_48.o
*(arg1 + 0x9c) = zmm0
int32_t var_28
*(arg1 + 0xac) = var_28

if (arg1 != -0xb0)
    r9 = LeaveCriticalSection(arg1 + 0xb0)

int512_t zmm3
zmm3.o = 0x3f7d70a4
void arg_8
int32_t var_60 = *sub_141f79930(&arg_8)
char var_68 = 0
void arg_18
char r9_1
int512_t zmm3_1
r9_1, zmm3_1 = sub_141f7f6d0(arg1 + 0x128, &arg_18, (zx.o(0)).d, r9)
zmm3_1.o = 0x3ee66666
int32_t var_60_1 = *sub_141f79930(&arg_8)
char var_68_1 = 0
char r9_2
int512_t zmm3_2
r9_2, zmm3_2 = sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x40000000, r9_1)
zmm3_2.o = 0x3e19999a
int32_t var_60_2 = *sub_141f79930(&arg_8)
char var_68_2 = 0
char r9_3
int512_t zmm3_3
r9_3, zmm3_3 = sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x40a00000, r9_2)
zmm3_3.o = 0x3dcccccd
int32_t var_60_3 = *sub_141f79930(&arg_8)
char var_68_3 = 0
char r9_4
int512_t zmm3_4
r9_4, zmm3_4 = sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x41200000, r9_3)
zmm3_4.o = 0x3c23d70a
int32_t var_60_4 = *sub_141f79930(&arg_8)
char var_68_4 = 0
char r9_5
int512_t zmm3_5
r9_5, zmm3_5 = sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x41900000, r9_4)
zmm3_5.o = 0x3b03126f
int32_t var_60_5 = *sub_141f79930(&arg_8)
char var_68_5 = 0
char r9_6
int512_t zmm3_6
r9_6, zmm3_6 = sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x41980000, r9_5)
zmm3_6.o = 0x38d1b717
int32_t var_60_6 = *sub_141f79930(&arg_8)
char var_68_6 = 0
sub_141f7f6d0(arg1 + 0x128, &arg_18, 0x41a00000, r9_6)
int32_t* rax_9 = j_sub_140a82f30(0x5d0)
int32_t* rbx_2

if (rax_9 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_141c30b20(rax_9, *(arg2 + 0x10), 0x200, &var_58)

void* result = &arg_8

if (arg1 + 0x70 != &arg_8)
    int32_t* rsi_1 = *(arg1 + 0x70)
    *(arg1 + 0x70) = rbx_2
    
    if (rsi_1 != 0)
        sub_141c32620(rsi_1)
        result = j_sub_140a74f90(rsi_1)
else if (rbx_2 != 0)
    sub_141c32620(rbx_2)
    result = j_sub_140a74f90(rbx_2)

sub_141c37650(*(arg1 + 0x70), 0)
sub_141c37660(*(arg1 + 0x70), 1)
return result
