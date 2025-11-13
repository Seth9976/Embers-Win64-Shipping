// 函数: sub_142b71c90
// 地址: 0x142b71c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0xc)
int64_t r14 = *arg1
uint64_t r9 = zx.q(modu.dp.d(0:arg5, rbp - 1) + 1)
int32_t i = *(r14 + (sx.q(modu.dp.d(0:arg5, rbp - 1) + 1) << 2))

if (i != 0)
    int32_t rdi_1 = *(arg1 + 0x14)
    
    do
        if ((not.d(rdi_1) & i) == arg5 << (arg1[2].d).b)
            int32_t rax_4 = arg1[3].d
            int32_t* rdx_1 = arg3 + (sx.q(arg4) << 2)
            int16_t* r8_1 = (sx.q((rdi_1 & i) - 1) << 1) + arg2
            bool cond:0_1 = rax_4 == 0
            
            if (rax_4 s> 0)
                while (zx.d(*r8_1) == *rdx_1)
                    r8_1 = &r8_1[1]
                    rdx_1 = &rdx_1[1]
                    rax_4 -= 1
                    
                    if (rax_4 s<= 0)
                        break
                
                cond:0_1 = rax_4 == 0
            
            if (cond:0_1)
                return zx.q(r9.d)
        
        r9 = sx.q(mods.dp.d(sx.q(r9.d + modu.dp.d(0:arg5, rbp - 1) + 1), rbp))
        i = *(r14 + (r9 << 2))
    while (i != 0)

return zx.q(not.d(r9.d))
