// 函数: sub_142a65390
// 地址: 0x142a65390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a4afe0(arg5)
int16_t rax = *(arg5 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg5 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

sub_142a49390(arg5, 0, r8_1, &data_14363e010, 0, 3)

if ((arg1 | arg2 | arg3) != 0)
    int16_t rax_4 = 0x2d
    
    if (arg4 == 0)
        rax_4 = 0x2b
    
    int16_t arg_8 = rax_4
    sub_142a48d70(arg5, &arg_8, 0, 1)
    
    if (arg1 s>= 0xa)
        arg_8 = (arg1 s/ 0xa).w + 0x30
    else
        arg_8 = 0x30
    
    sub_142a48d70(arg5, &arg_8, 0, 1)
    int32_t r14
    r14.w = (arg1 s% 0xa).w
    r14.w += 0x30
    arg_8 = r14.w
    sub_142a48d70(arg5, &arg_8, 0, 1)
    arg_8 = 0x3a
    sub_142a48d70(arg5, &arg_8, 0, 1)
    
    if (arg2 s>= 0xa)
        arg_8 = (arg2 s/ 0xa).w + 0x30
    else
        arg_8 = 0x30
    
    sub_142a48d70(arg5, &arg_8, 0, 1)
    int32_t rsi
    rsi.w = (arg2 s% 0xa).w
    rsi.w += 0x30
    arg_8 = rsi.w
    sub_142a48d70(arg5, &arg_8, 0, 1)
    
    if (arg3 != 0)
        arg_8 = 0x3a
        sub_142a48d70(arg5, &arg_8, 0, 1)
        
        if (arg3 s>= 0xa)
            arg_8 = (arg3 s/ 0xa).w + 0x30
        else
            arg_8 = 0x30
        
        sub_142a48d70(arg5, &arg_8, 0, 1)
        int32_t rdi
        rdi.w = (arg3 s% 0xa).w
        rdi.w += 0x30
        arg_8 = rdi.w
        sub_142a48d70(arg5, &arg_8, 0, 1)

return arg5
