// 函数: sub_142896e90
// 地址: 0x142896e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
__chkstk(0x30)
int64_t* rsi = &arg_10

if (arg2 != 0)
    rsi = nullptr

if (arg1 == 0)
    goto label_142896f07

if (*(arg1 + 0x28) != 0)
    sub_142896600(arg1)

if (arg3 != arg1[1] || *(arg1 + 0x10) == 0)
    sub_1428af710(*(arg1 + 0x18))
    void* rcx_1 = *(arg1 + 0x20)
    *(arg1 + 0x18) = 0
    sub_1428af710(rcx_1)
    *(arg1 + 0x20) = 0
label_142896f07:
    void* rax_1
    
    if (arg4 == 0)
        rax_1 = sub_1428bc150(rsi, arg3)
    else
        rax_1 = sub_1428bc250(rsi, arg4, arg5)
    
    if (arg1 == 0 && rsi != 0)
        sub_1428af710(arg_10)
    
    if (rax_1 == 0)
        sub_1428a5670((rax_1 + 6).d, 0x9e, 0x9c, "crypto\evp\p_lib.c", 0xd2)
        return 0
    
    if (arg1 != 0)
        *(arg1 + 0x18) = arg_10
        *(arg1 + 0x10) = rax_1
        *arg1 = *rax_1
        arg1[1] = arg3

return 1
