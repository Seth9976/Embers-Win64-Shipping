// 函数: sub_142b71bb0
// 地址: 0x142b71bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = *(arg1 + 0xc)
int64_t r12 = *arg1
uint64_t r10_1 = zx.q(modu.dp.d(0:arg5, r13 - 1) + 1)
int32_t i = *(r12 + (sx.q(modu.dp.d(0:arg5, r13 - 1) + 1) << 2))

if (i != 0)
    int32_t rsi_1 = *(arg1 + 0x14)
    
    do
        if ((not.d(rsi_1) & i) == arg5 << (arg1[2].d).b)
            int32_t r8 = arg1[3].d
            int16_t* rax_4 = arg3 + (sx.q(arg4) << 1)
            bool cond:0_1 = r8 == 0
            
            if (r8 s> 0)
                int16_t* r9_2 = sx.q((rsi_1 & i) - 1) * 2 - rax_4 + arg2
                
                while (*(r9_2 + rax_4) == *rax_4)
                    rax_4 = &rax_4[1]
                    r8 -= 1
                    
                    if (r8 s<= 0)
                        break
                
                cond:0_1 = r8 == 0
            
            if (cond:0_1)
                return zx.q(r10_1.d)
        
        r10_1 = sx.q(mods.dp.d(sx.q(r10_1.d + modu.dp.d(0:arg5, r13 - 1) + 1), r13))
        i = *(r12 + (r10_1 << 2))
    while (i != 0)

return zx.q(not.d(r10_1.d))
