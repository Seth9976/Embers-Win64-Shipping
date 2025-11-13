// 函数: sub_142bb1420
// 地址: 0x142bb1420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *(arg1 + 0xa0)
int64_t rdi = rbp[6]
int32_t rax = sub_142b97060(rbp, arg2, arg5)
int32_t arg_8 = rax

if (rax == 0)
    int16_t rax_1 = sub_142b96f00(rbp, &arg_8)
    rax = arg_8
    
    if (rax == 0)
        uint32_t r9 = zx.d(sub_142b96f00(rbp, &arg_8))
        rax = arg_8
        *arg3 = r9
        
        if (rax == 0)
            if ((0xffc0 & rax_1) != 0)
                return 8
            
            uint32_t r12_1 = zx.d(rax_1)
            char r12_2 = r12_1.b & 0xf
            *(arg3 + 0x10) = sub_142b99a90(rdi, 4, 0, r9, 0, &arg_8)
            rax = arg_8
            
            if (rax == 0)
                int64_t rax_7
                int512_t zmm0_1
                rax_7, zmm0_1 = sub_142b99a90(rdi, 4, 0, *arg3, 0, &arg_8)
                *(arg3 + 8) = rax_7
                rax = arg_8
                
                if (rax == 0)
                    uint64_t r14_1 = 0
                    
                    if (*arg3 u> 0)
                        do
                            int32_t rbx_2 = 0
                            int32_t i = 0
                            
                            if ((r12_1 u>> 4 & 3) != 0xffffffff)
                                do
                                    char rax_8 = sub_142b96a20(rbp, &arg_8, zmm0_1)
                                    rax = arg_8
                                    
                                    if (rax != 0)
                                        return rax
                                    
                                    i += 1
                                    rbx_2 = rbx_2 << 8 | zx.d(rax_8)
                                while (i u< (r12_1 u>> 4 & 3) + 1)
                            
                            uint64_t rdx_4 = zx.q(rbx_2 u>> (r12_2 + 1))
                            int32_t rbx_4
                            int32_t* r8
                            
                            if (rdx_4.d u< *arg4)
                                r8 = r14_1 << 2
                                rbx_4 = rbx_2 & ((1 << (r12_2 + 1)) - 1)
                                *(r8 + *(arg3 + 8)) = rdx_4.d
                            
                            if (rdx_4.d u>= *arg4 || rbx_4 u>= *(*(arg4 + 8) + rdx_4 * 0x18))
                                return 8
                            
                            r14_1 = zx.q(r14_1.d + 1)
                            *(r8 + *(arg3 + 0x10)) = rbx_4
                        while (r14_1.d u< *arg3)
                        
                        return arg_8

return rax
