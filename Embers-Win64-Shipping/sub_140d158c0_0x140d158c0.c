// 函数: sub_140d158c0
// 地址: 0x140d158c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x11) = arg5
arg1[3] = arg6
*arg1 = arg2
arg1[1] = arg3
arg1[2].b = arg4
*(arg1 + 0x12) = 1
arg1[0x14] = 0
arg1[0x15].d = 0
*(arg1 + 0xac) = 8
arg1[0x26] = 0
arg1[0x27].d = 0
*(arg1 + 0x13c) = 8
arg1[0x29].b &= 0xfe
arg1[0x28] = 0
arg5 = 0
char* var_10 = &arg5
void*** (* var_18)() = sub_140884c50
void* rax_2 = sub_140a756e0(&var_18, &data_14397f5f0)
*(rax_2 + 0x34) += 1
arg1[0x28] = *(rax_2 + 0x38)
*(rax_2 + 0x38) = *arg1
int64_t rsi = sx.q(*(rax_2 + 0x18))
int32_t rax_3 = (rsi + 1).d
*(rax_2 + 0x18) = rax_3

if (rax_3 s> *(rax_2 + 0x1c))
    sub_1405a4d70(rax_2 + 0x10)

*(*(rax_2 + 0x10) + (rsi << 3)) = arg1
void* rcx_4 = *arg1

if (rcx_4 != 0)
    int64_t* rcx_5 = *(rcx_4 + 0x10)
    (*(*rcx_5 + 0x320))(rcx_5, arg1)

return arg1
