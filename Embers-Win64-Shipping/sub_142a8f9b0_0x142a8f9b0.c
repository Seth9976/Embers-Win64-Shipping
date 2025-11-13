// 函数: sub_142a8f9b0
// 地址: 0x142a8f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg5 s> 0)
    if (arg7 != 0)
        sub_142afcd10(arg7, arg5)
    
    if ((arg6 & 0x4000) == 0)
        if (arg5 s<= 0x7fffffff - rbx.d)
            int32_t rsi_1 = rbx.d + arg5
            
            if (rsi_1 s<= arg3)
                sub_142a8bca0(arg1 + (rbx << 1), arg4, arg5)
            
            rbx = zx.q(rsi_1)
        else
            rbx = 0xffffffff

return zx.q(rbx.d)
