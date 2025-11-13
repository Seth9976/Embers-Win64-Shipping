// 函数: sub_141abb9e0
// 地址: 0x141abb9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3

if (*(sx.q(arg3) + arg1[3]) != 0)
    int32_t arg_8
    sub_141ea4020(arg1[2], &arg_8, &arg_18)
    int64_t rdx_1 = sx.q(arg_8)
    
    if (rdx_1.d != 0xffffffff)
        if (*(rdx_1 + arg1[3]) == 0)
            sub_141a98300(arg1, rdx_1.d)
        
        sub_140ad7d70(sx.q(arg_18) * 0x30 + *arg1, arg2, rdx_1 * 0x30 + *arg1)
        return arg2
    
    arg3 = arg_18

int64_t rax_5 = *arg1
int64_t rcx_6 = sx.q(arg3) * 6
*arg2 = *(rax_5 + (rcx_6 << 3))
arg2[1] = *(rax_5 + (rcx_6 << 3) + 0x10)
arg2[2] = *(rax_5 + (rcx_6 << 3) + 0x20)
return arg2
