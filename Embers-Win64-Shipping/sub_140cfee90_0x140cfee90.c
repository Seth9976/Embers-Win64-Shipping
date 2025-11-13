// 函数: sub_140cfee90
// 地址: 0x140cfee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x24))
    return 0xffffffff

int64_t rax_1 = *arg5
int64_t var_28 = rax_1

if (rax_1 != 0)
    int64_t var_20_1 = arg5[1]

int64_t rax_3 = *arg4
int64_t arg_8
int64_t rcx

if (rax_3 == 0)
    rcx = arg_8
else
    rcx = arg4[1]

arg_8 = arg2
int64_t (* var_18)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2eb0
int64_t* var_10 = &var_28
return sub_140cfe9c0(arg1, arg2, arg3 + 4, rax_3(rcx, &arg_8), &var_18)
