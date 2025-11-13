// 函数: sub_141187400
// 地址: 0x141187400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = zx.d(arg3) ^ 1
int32_t r9
int32_t r10

if (arg3 == 0)
    r10 = arg2[1]
    r9 = *arg4
else
    r10 = *arg2
    r9 = arg4[1]

int32_t var_24 = r10

if (arg3 != 0)
    arg2 = &arg2[1]

int32_t rax_2 = *arg2
int32_t arg_8
int32_t arg_c

if (rax_2 u<= 0x1000)
    rax_2 = (rax_1.q u>> 0x20).d + 2
    
    if ((rax_1 & 0xfffffffd) != 0)
        arg_8 = r9
        arg_c = rax_2
    else
        arg_8 = rax_2
        arg_c = r9
else if (arg3 != 0)
    arg_8 = r10 + 2
    arg_c = rax_2
else
    arg_8 = rax_2
    arg_c = r10 + 2
int64_t rax_5 = arg_8.q
*arg1 = rax_5.d
arg1[1] = (rax_5 u>> 0x20).d
return arg1
