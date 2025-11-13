// 函数: sub_142921980
// 地址: 0x142921980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = sx.q(arg5)
int32_t rsi = 0

if (rax.d s>= 1)
    if (rax - 1 s> 0)
        void* i = nullptr
        
        do
            if (i != 0 && rsi == 0)
                sub_1428b6f70(arg1, "%*s", zx.q(arg2))
            
            int64_t r8_2 = sub_1428b6f70(arg1, "%02X:", zx.q(*(i + arg4)))
            int32_t temp1_1 = mods.dp.d(sx.q(rsi + 1), arg3)
            rsi = temp1_1
            
            if (temp1_1 == 0)
                sub_1428b6f70(arg1, &data_14370209c, r8_2)
            
            i += 1
        while (i s< rax - 1)
        
        if ((rax - 1).d != 0 && rsi == 0)
            sub_1428b6f70(arg1, "%*s", zx.q(arg2))
    
    sub_1428b6f70(arg1, "%02X", zx.q(*(arg4 + rax - 1)))

return 1
