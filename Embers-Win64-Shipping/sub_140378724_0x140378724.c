// 函数: sub_140378724
// 地址: 0x140378724
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t arg_20 = arg4
int32_t rbx = 0

if (arg2 == 0 || arg2 u> 0x7fffffff)
    rbx = -0x7ff8ffa9

if (rbx s>= 0)
    rbx = 0
    int32_t rax_1 = sub_1428bcab0(arg1, arg2 - 1, arg3, &arg_20)
    int64_t rax_2
    
    if (rax_1 s>= 0)
        rax_2 = sx.q(rax_1)
    
    if (rax_1 s< 0 || rax_2 u> arg2 - 1)
        arg1[arg2 - 1] = 0
        rbx = -0x7ff8ff86
    else if (rax_2 == arg2 - 1)
        arg1[arg2 - 1] = 0

return zx.q(rbx)
