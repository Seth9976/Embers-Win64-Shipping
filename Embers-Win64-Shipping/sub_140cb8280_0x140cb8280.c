// 函数: sub_140cb8280
// 地址: 0x140cb8280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3
char rax = sub_140b5b8a0(arg3.d, 0)
arg3.b = arg3:4.d == 0
int64_t* rdx

if ((arg3.b & rax) == 0)
    int64_t var_28 = rbx
    rdx = &var_28
else
    int64_t arg_8
    
    if (arg1 == 0)
        rdx = &arg_8
        arg_8 = 0
    else
        rdx = &arg_8
        arg_8 = *(arg1 + 0x28)

int64_t* result = (*(*(arg1 + 8) + 0x30))(arg2, rdx, zx.q(*(arg1 + 0x30)) & zx.q(arg4))
int64_t r8_2 = *result
(*(r8_2 + 0x40))(result, arg1, r8_2)
return result
