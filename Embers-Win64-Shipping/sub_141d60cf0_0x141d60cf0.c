// 函数: sub_141d60cf0
// 地址: 0x141d60cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
void** var_3d8
sub_141e4f3c0(&var_3d8)
char var_327
char var_327_1 = var_327 & 0xf0
var_3d8 = &data_143209430
char var_328 = 0x83
char var_326 = 0
int32_t var_324 = 0
int64_t var_320
__builtin_memcpy(&var_320, 
    "\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x48\x43\x00\x80\x3b\x45\x00\x80\xbb\x45", 0x14)
void** var_308
sub_141f7a080(&var_308)
void** var_280
sub_141f7a080(&var_280)
int128_t var_1f8
__builtin_memcpy(&var_1f8, 
    "\x00\x40\x9c\x46\x00\x40\x9c\x46\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf0\x41\x00\x00\x70\x42\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
"00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\x9a\x99\x99\x3e", 
    0x48)
int32_t var_3c4
int128_t zmm1 = var_3c4
int32_t var_1ac = zmm1.d
int32_t var_3b4
zmm1.d = zmm1.d f+ var_3b4
int32_t var_1b0
__builtin_strncpy(&var_1b0, "33s?", 4)
int32_t var_1a4 = 0
int32_t var_1a8 = zmm1.d
void** var_1a0
sub_141f7a080(&var_1a0)
zmm1 = var_3c4
int32_t var_100 = zmm1.d
zmm1.d = zmm1.d f+ var_3b4
int64_t var_118 = 0
int64_t var_110 = 0
int32_t var_108 = 0x3f800000
int32_t var_104 = 0x3f800000
int32_t var_fc = zmm1.d
int32_t var_f8 = 0x3f800000
void** var_f0
sub_141f7a080(&var_f0)
int64_t var_68
__builtin_memset(&var_68, 0, 0x30)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_3d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_3d8)

void*** rax_3 = *(arg2 + 0x38)
void*** rdx_2 = &var_3d8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
*arg3 = sub_141d53770(arg1, rdx_2)
int64_t result = sub_141c51350(&var_3d8)
__security_check_cookie(rax_1 ^ &var_3f8)
return result
