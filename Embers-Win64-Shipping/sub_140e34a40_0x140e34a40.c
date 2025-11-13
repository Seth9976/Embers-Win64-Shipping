// 函数: sub_140e34a40
// 地址: 0x140e34a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3584) == 0)
    int32_t rax_1
    void var_28
    
    if (arg1[0x358].d == 0)
        rax_1 = __intrinsic_setjmp(arg1, &var_28)
    
    if (arg1[0x358].d != 0 || rax_1 != 0)
        return 0xffffffff
    
    sub_140e3f110(arg1)
    
    if (*(arg1 + 0x118) == 0)
        if (sub_140e3f880(arg1, arg2) == 0)
            sub_140e43530(arg1, 0xffffff10)
            noreturn
    else
        sub_140e3f4b0(arg1, arg2)
    
    *(arg1 + 0x3584) = 1

return 0
