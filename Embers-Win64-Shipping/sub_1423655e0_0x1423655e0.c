// 函数: sub_1423655e0
// 地址: 0x1423655e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t rdi = sx.q(arg3)
int64_t r9 = sx.q(*(arg1 + 0x188))
int128_t zmm6 = arg2

if (rdi.d s< r9.d)
    int64_t r11_1 = *(arg1 + 0x180)
    int64_t var_68_1 = r11_1
    int32_t r10_1 = (rdi + 1).d
    int64_t r8 = rdi
    int64_t* rbx_1 = r11_1 + rdi * 0x18
    
    do
        arg2 = rbx_1[2].d
        int64_t r13_1 = sx.q(mods.dp.d(sx.q(r10_1), r9.d)) * 3
        
        if (not(zmm6.d f< arg2.d))
            int64_t zmm0 = *(r11_1 + (r13_1 << 3) + 0x10)
            
            if (zmm6.d f< zmm0.d)
                zmm6.d = zmm6.d f- arg2.d
                int32_t i = 0
                zmm0.d = zmm0.d f- arg2.d
                zmm6.d = zmm6.d f/ zmm0.d
                
                if (*(arg1 + 0x178) s> 0)
                    int64_t* r12_1 = nullptr
                    int128_t* r14_1 = nullptr
                    
                    do
                        int64_t rcx = *(r11_1 + (r13_1 << 3))
                        int64_t r15_1 = sx.q(arg4[1].d)
                        int32_t* rax_7 = *rbx_1
                        int32_t var_60_1 = (*(r12_1 + *(arg1 + 0x170))).d
                        arg2.d = (*(r14_1 + rcx)).d f- *(rax_7 + r14_1)
                        zmm0.d = (*(r14_1 + rcx + 4)).d f- *(rax_7 + r14_1 + 4)
                        arg2.d = arg2.d f* zmm6.d
                        zmm0.d = zmm0.d f* zmm6.d
                        arg2.d = arg2.d f+ *(rax_7 + r14_1)
                        zmm0.d = zmm0.d f+ *(rax_7 + r14_1 + 4)
                        int32_t rax_8 = (r15_1 + 1).d
                        arg4[1].d = rax_8
                        int32_t var_5c_1 = arg2.d
                        
                        if (rax_8 s> *(arg4 + 0xc))
                            sub_14083a7e0(arg4)
                            r11_1 = var_68_1
                        
                        int64_t rcx_2 = *arg4
                        int64_t rdx_4 = r15_1 * 3
                        i += 1
                        r12_1 += 4
                        r14_1 += 8
                        *(rcx_2 + (rdx_4 << 2)) = var_60_1.q
                        *(rcx_2 + (rdx_4 << 2) + 8) = zmm0.d
                    while (i s< *(arg1 + 0x178))
                    
                    rdi = zx.q(arg_18)
                
                sub_141ed1330(*arg4, arg4[1].d, arg_18.b)
                return zx.q(rdi.d)
        
        rdi = zx.q(rdi.d + 1)
        r10_1 += 1
        r8 += 1
        arg_18 = rdi.d
        rbx_1 = &rbx_1[3]
    while (r8 s< r9)

return 0xffffffff
