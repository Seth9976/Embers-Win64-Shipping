// 函数: sub_142c77dd0
// 地址: 0x142c77dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t var_28
__builtin_memset(&var_28, 0, 0x1a)
int64_t r8 = *(r9 + 0x178)
var_28:7.d = r8.d
var_28:5.w = *(*(r9 + 0x250) + 0x1a)
int64_t var_18
var_18:5.d = (r8 s>> 0x20).d
int32_t r8_1
r8_1.b = 0x2e
var_28.w = 0xff0c
int64_t var_20
var_20:3.d = 0x80008000
sub_142c77770(arg1, r9 + 0xa88, r8_1.b, 0x1b)
void* rcx = *arg1
int512_t zmm0
zmm0.o = var_28.o
*(rcx + 0xaac) = zmm0.o
*(rcx + 0xabc) = var_18
*(rcx + 0xac4) = 0
*(rcx + 0xac6) = 0
int64_t arg_8
int64_t* var_38 = &arg_8
int32_t result = sub_142c64d60(arg1, 0, zmm0, *arg1 + 0xa88)

if (result != 0)
    return result

int64_t rax_1 = arg_8

if (rax_1 != 0x3f)
    arg1[0xda] = 0x3f
    arg1[0xdb] = rax_1

arg1[0xd9] = 0
return 0
