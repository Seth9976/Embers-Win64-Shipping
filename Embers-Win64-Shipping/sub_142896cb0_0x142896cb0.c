// 函数: sub_142896cb0
// 地址: 0x142896cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* arg_8 = nullptr

if (arg1 != 0)
    if (*(arg1 + 0x28) != 0)
        sub_142896600(arg1)
    
    if (arg2 == arg1[1] && *(arg1 + 0x10) != 0)
        return 1
    
    sub_1428af710(*(arg1 + 0x18))
    void* rcx_1 = *(arg1 + 0x20)
    *(arg1 + 0x18) = 0
    sub_1428af710(rcx_1)
    *(arg1 + 0x20) = 0

void* rax_1 = sub_1428bc150(&arg_8, arg2)

if (arg1 == 0)
    sub_1428af710(arg_8)

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 6).d, 0x9e, 0x9c, "crypto\evp\p_lib.c", 0xd2)
    return 0

if (arg1 != 0)
    *(arg1 + 0x18) = arg_8
    *(arg1 + 0x10) = rax_1
    *arg1 = *rax_1
    arg1[1] = arg2

return 1
