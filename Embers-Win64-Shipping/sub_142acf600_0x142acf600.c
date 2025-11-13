// 函数: sub_142acf600
// 地址: 0x142acf600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a4afe0(arg5)
int16_t rax = *(arg5 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg5 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

sub_142a49390(arg5, 0, r8_1, &data_1436568d8, 0, 0xffffffff)

if (arg1 != 0 || arg2 != 0)
    int16_t rax_1 = 0x2d
    
    if (arg4 == 0)
        rax_1 = 0x2b
    
    int16_t arg_8 = rax_1
    sub_142a48d70(arg5, &arg_8, 0, 1)
    uint32_t rbx_1 = zx.d(arg1)
    arg_8 = (rbx_1 u% 0x64 s/ 0xa).w + 0x30
    sub_142a48d70(arg5, &arg_8, 0, 1)
    arg_8 = rbx_1.w - (zx.q(rbx_1 u/ 0xa) * 5).w * 2 + 0x30
    sub_142a48d70(arg5, &arg_8, 0, 1)
    arg_8 = 0x3a
    sub_142a48d70(arg5, &arg_8, 0, 1)
    uint32_t rbx_3 = zx.d(arg2)
    arg_8 = (rbx_3 u% 0x64 s/ 0xa).w + 0x30
    sub_142a48d70(arg5, &arg_8, 0, 1)
    arg_8 = rbx_3.w - (zx.q(rbx_3 u/ 0xa) * 5).w * 2 + 0x30
    sub_142a48d70(arg5, &arg_8, 0, 1)
    
    if (arg3 != 0)
        arg_8 = 0x3a
        sub_142a48d70(arg5, &arg_8, 0, 1)
        uint32_t rbx_5 = zx.d(arg3)
        arg_8 = (rbx_5 u% 0x64 s/ 0xa).w + 0x30
        sub_142a48d70(arg5, &arg_8, 0, 1)
        arg_8 = rbx_5.w - (zx.q(rbx_5 u/ 0xa) * 5).w * 2 + 0x30
        sub_142a48d70(arg5, &arg_8, 0, 1)

return arg5
