// 函数: sub_1406d1280
// 地址: 0x1406d1280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t var_28 = 0
int64_t* arg_10 = arg1
*arg1 = 0
int32_t rdi = arg2[1].d
int64_t r14 = *arg2
arg1[1].d = rdi

if (rdi != 0)
    sub_1405a4c70(arg1, rdi, 0)
    memcpy(*arg1, r14, rdi * 2)
else
    *(arg1 + 0xc) = 0

int32_t var_28_1 = 1
*arg5 = sub_140a2f8e0(arg1, arg3, zx.d(arg4) ^ 1)
return arg1
