// 函数: sub_1428cd220
// 地址: 0x1428cd220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax_1 = sub_1428f8c10(arg2, arg1, nullptr)

if (rax_1 == 0)
    return rax_1

int32_t* rbx_1

if (arg3 != 0)
    rbx_1 = *arg3

if (arg3 == 0 || rbx_1 == 0)
    int32_t* rax_2 = sub_1428c3640()
    rbx_1 = rax_2
    
    if (rax_2 == 0)
        sub_1428c3460(rax_1)
        return 0
    
    if (arg3 != 0)
        *arg3 = rax_2

int32_t* arg_20 = rbx_1
int32_t* rax_4 = rbx_1

if (*(rbx_1 + 8) != 0)
    sub_1428c3ff0(&arg_20, nullptr, 0)
    rax_4 = arg_20

*rax_4 = 0x10
*(arg_20 + 8) = rax_1
return rbx_1
