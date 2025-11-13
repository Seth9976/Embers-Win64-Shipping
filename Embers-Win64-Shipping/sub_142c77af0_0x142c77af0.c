// 函数: sub_142c77af0
// 地址: 0x142c77af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int64_t var_18 = 0
var_18.b = 3
var_18:1.w = *(*(r8 + 0x250) + 0x1a)
void* rdx_1 = r8 + 0xa88
r8.b = 4
sub_142c77770(arg1, rdx_1, r8.b, 9)
void* rax_1 = *arg1
int512_t zmm0
zmm0.o = 3
*(rax_1 + 0xaac) = (zmm0.o).q
*(rax_1 + 0xab4) = 0
int64_t arg_8
int64_t* var_28 = &arg_8
int32_t result = sub_142c64d60(arg1, 0, zmm0, *arg1 + 0xa88)

if (result != 0)
    return result

int64_t rax_2 = arg_8

if (rax_2 != 0x2d)
    arg1[0xda] = 0x2d
    arg1[0xdb] = rax_2

arg1[0xd9] = 0
return 0
