// 函数: sub_140b58260
// 地址: 0x140b58260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = arg2
int32_t r10 = 0
int16_t* r9 = arg2

if (arg2 != 0)
    for (int16_t i = *arg2; i != 0; i = *r9)
        r9 = &r9[1]
        r10 |= zx.d(i)

bool var_c = (r10 & 0xffffff80) != 0
int32_t r9_2 = ((r9 - arg2) s>> 1).d
int32_t var_10 = r9_2
var_18.o = var_18.o

if (r9_2 == 0)
    *arg1 = 0
    return arg1

int32_t rax_3 = sub_140b57bd0(arg2, &var_10)
var_18.o = var_18.o
sub_140b60b30(arg1, &var_18, arg3, rax_3)
return arg1
