// 函数: sub_141a35b10
// 地址: 0x141a35b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t arg_8
void arg_10
void arg_20

if (rax.b != 2)
    int32_t* rax_2
    
    if (rax.b != 1)
        arg_8.d = rax:4.d
        arg_8:4.d = 0
        rax_2 = sub_141a352a0(&arg_20, arg_8, arg3)
        arg_8.b = 0
    else
        arg_8.d = (rax u>> 0x20).d
        arg_8:4.d = 0
        rax_2 = sub_141a352a0(&arg_10, arg_8, arg3)
        arg_8.b = 1
    
    arg_8:4.d = *rax_2
else
    arg_8.b = rax.b
    arg_8:4.d = 0

int64_t rax_5 = arg2[1]
int64_t rbx = arg_8

if (rax_5.b != 2)
    int32_t* rax_7
    
    if (rax_5.b != 1)
        arg_8.d = rax_5:4.d
        arg_8:4.d = 0
        rax_7 = sub_141a352a0(&arg_20, arg_8, arg3)
        arg_8.b = 0
    else
        arg_8.d = (rax_5 u>> 0x20).d
        arg_8:4.d = 0
        rax_7 = sub_141a352a0(&arg_10, arg_8, arg3)
        arg_8.b = 1
    
    arg_8:4.d = *rax_7
else
    arg_8.b = rax_5.b
    arg_8:4.d = 0

arg1[1] = arg_8
*arg1 = rbx
return arg1
