// 函数: sub_140d159c0
// 地址: 0x140d159c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x12) = 1
__builtin_memset(arg1, 0, 0x12)
arg1[3] = 0
arg1[0x14] = 0
arg1[0x15].d = 0
*(arg1 + 0xac) = 8
arg1[0x26] = 0
arg1[0x27].d = 0
*(arg1 + 0x13c) = 8
arg1[0x29].b &= 0xfe
arg1[0x28] = 0
char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = sub_140884c50
void* rax = sub_140a756e0(&var_18, &data_14397f5f0)
*(rax + 0x34) += 1
arg1[0x28] = *(rax + 0x38)
*(rax + 0x38) = *arg1
int64_t rsi = sx.q(*(rax + 0x18))
int32_t rax_1 = (rsi + 1).d
*(rax + 0x18) = rax_1

if (rax_1 s> *(rax + 0x1c))
    sub_1405a4d70(rax + 0x10)

*(*(rax + 0x10) + (rsi << 3)) = arg1
return arg1
