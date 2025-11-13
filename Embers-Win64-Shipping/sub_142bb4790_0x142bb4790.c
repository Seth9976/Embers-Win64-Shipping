// 函数: sub_142bb4790
// 地址: 0x142bb4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r14 = zx.d(arg2)
__builtin_memset(&arg4[1], 0, 0x38)
*arg4 = arg1
int32_t arg_10
arg4[2] = sub_142b99a90(arg1, 8, 0, r14, 0, &arg_10)

if (arg_10 == 0)
    arg4[3] = sub_142b99a90(arg1, 8, 0, r14, 0, &arg_10)
    
    if (arg_10 == 0)
        arg4[4] = sub_142b99a90(arg1, 8, 0, r14, 0, &arg_10)
        
        if (arg_10 == 0)
            arg4[5] = sub_142b99a90(arg1, 1, 0, r14, 0, &arg_10)
            
            if (arg_10 == 0)
                arg4[6] = sub_142b99a90(arg1, 2, 0, sx.d(arg3), 0, &arg_10)
                int32_t rax_5 = arg_10
                
                if (rax_5 == 0)
                    arg4[1].w = r14.w
                    *(arg4 + 0xa) = arg3
                    return rax_5

sub_142bb4700(arg4)
return arg_10
