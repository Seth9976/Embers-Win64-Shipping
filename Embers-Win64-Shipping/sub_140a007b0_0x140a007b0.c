// 函数: sub_140a007b0
// 地址: 0x140a007b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
int32_t rsi
rsi.b = sub_140d23dc0(arg1, 0x30) != 0

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(sub_142480e50(), arg1, 0, rsi, 0, 0, 0, 0, 0)
void var_18
int64_t* rax_3
char rdx_1
rax_3, rdx_1 = sub_140b214c0(&var_18)
int128_t zmm0 = *rax_3
*(result + 0x89) &= 0xbf
*(result + 0x89) |= 8
*(result + 0xc0) = zmm0
*(result + 0x8c) = sbb.b(rdx_1, rdx_1, *(arg1 + 0x438) != 0) & 3
return result
