// 函数: sub_142643800
// 地址: 0x142643800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* const rsi = arg2
*arg1 = 0
arg1[1] = 0
arg1[2].d = arg3

if (arg2 == 0)
    rsi = nullptr
else
    void* rax_1 = sub_14269ce80()
    
    if (rax_1 == 0)
        rsi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi = nullptr

arg1[3] = rsi

if (rsi != 0)
    int64_t arg_8 = *(rsi + 0x18)
    int64_t var_18
    sub_140b63b70(&arg_8, &var_18)
    
    if (arg1 != &var_18)
        int64_t rcx_2 = *arg1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *arg1 = var_18
        int32_t var_10
        arg1[1].d = var_10
        int32_t var_c
        *(arg1 + 0xc) = var_c
        return arg1
    
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else if (*arg1 != u"Invalid")
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 8)
        sub_1405947f0(arg1, 8)
        rdi = arg1[1].d
    
    arg1[1].d = rdi + 8
    
    if (rdi + 8 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    **arg1 = *u"Invalid"

return arg1
