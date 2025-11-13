// 函数: sub_142a8d410
// 地址: 0x142a8d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t arg_10
int32_t rbx

if (arg2 u> 0x7f)
    int32_t rbx_1
    
    if (arg2 u> 0x7ff)
        int32_t rbx_2
        
        if (arg2 u> 0xffff)
            rbx_2 = 2
            arg_10 = (arg2 u>> 0x12).b | 0xf0
            uint8_t arg_11 = ((arg2 u>> 0xc).b & 0x3f) | 0x80
        else
            rbx_2 = 1
            arg_10 = (arg2 u>> 0xc).b | 0xe0
        
        (&arg_10)[zx.q(rbx_2)] = ((arg2 u>> 6).b & 0x3f) | 0x80
        rbx_1 = rbx_2 + 1
    else
        rbx_1 = 1
        arg_10 = (arg2 u>> 6).b | 0xc0
    
    arg2.b &= 0x3f
    arg2.b |= 0x80
    rbx = rbx_1 + 1
    (&arg_10)[zx.q(rbx_1)] = arg2.b
else
    arg_10 = arg2.b
    rbx = 1

if (arg4 != 0)
    sub_142afcad0(arg4, arg1, rbx)

return (*(*arg3 + 8))(arg3, &arg_10, zx.q(rbx))
