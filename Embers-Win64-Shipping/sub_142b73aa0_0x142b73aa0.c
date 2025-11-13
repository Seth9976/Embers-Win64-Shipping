// 函数: sub_142b73aa0
// 地址: 0x142b73aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0xc)
int64_t r14 = *arg1
uint64_t r9 = zx.q(modu.dp.d(0:arg4, rbp - 1) + 1)
int32_t i = *(r14 + (sx.q(modu.dp.d(0:arg4, rbp - 1) + 1) << 2))

if (i != 0)
    int32_t rdi_1 = *(arg1 + 0x14)
    
    do
        if ((not.d(rdi_1) & i) == arg4 << (arg1[2].d).b)
            int32_t* rax_8 = arg2 + (sx.q((rdi_1 & i) - 1) << 2)
            void* rdx_1 = &rax_8[sx.q(arg1[3].d)]
            bool cond:0_1 = rax_8 == rdx_1
            
            if (rax_8 u< rdx_1)
                while (*rax_8 == arg3)
                    rax_8 = &rax_8[1]
                    
                    if (rax_8 u>= rdx_1)
                        break
                
                cond:0_1 = rax_8 == rdx_1
            
            if (cond:0_1)
                return zx.q(r9.d)
        
        r9 = sx.q(mods.dp.d(sx.q(r9.d + modu.dp.d(0:arg4, rbp - 1) + 1), rbp))
        i = *(r14 + (r9 << 2))
    while (i != 0)

return zx.q(not.d(r9.d))
