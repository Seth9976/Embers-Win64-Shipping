// 函数: sub_142aa5460
// 地址: 0x142aa5460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
uint64_t rax_1 = (*(*arg1 + 0xb8))(arg1, zx.q(r15.d), arg4)

if (*arg4 s<= 0)
    if (arg3 == rax_1.d)
        int32_t rax_3 = arg1[0x21].d | 1 << (r15.d u% 0x20)
        arg1[0x21].d = rax_3
        return rax_3
    
    void* r14_1 = *(arg1[3] + 0x20)
    
    if (arg1[2] != r14_1 || arg3 != 0xffffffff)
        rax_1 = sub_142aa1030(&arg1[2])
        uint64_t rbp_1 = rax_1
        
        if (rax_1 == 0)
            *arg4 = 7
        else
            int32_t rdx_1
            
            if (r15.d u> 7)
                *arg4 = 1
            else
                switch (r15)
                    case 0
                        rdx_1 = 0x800
                    label_142aa55a4:
                        rax_1 = sub_142b27350(rbp_1, rdx_1, arg3, *(r14_1 + 0x18), arg4)
                        goto label_142aa55a9
                    case 1
                        rax_1 = sub_142b272c0(rbp_1, arg3, *(r14_1 + 0x18), arg4)
                    label_142aa55a9:
                        
                        if (*arg4 s<= 0)
                            *(rbp_1 + 0x50) = sub_142b21a80(arg1[1], rbp_1, rbp_1 + 0x54, 0x180)
                            int32_t rax_7 = arg1[0x21].d
                            
                            if (arg3 != 0xffffffff)
                                rax_1 = zx.q(rax_7) | zx.q(1 << (r15.d u% 0x20))
                                arg1[0x21].d = rax_1.d
                            else
                                rax_1 = zx.q(rax_7) & zx.q(not.d(1 << (r15.d u% 0x20)))
                                arg1[0x21].d = rax_1.d
                    case 2
                        rax_1 = sub_142b27300(rbp_1, arg3, *(r14_1 + 0x18), arg4)
                        goto label_142aa55a9
                    case 3
                        rdx_1 = 0x400
                        goto label_142aa55a4
                    case 4
                        rdx_1 = 1
                        goto label_142aa55a4
                    case 5
                        rax_1 = sub_142b27740(rbp_1, arg3, *(r14_1 + 0x18), arg4)
                        goto label_142aa55a9
                    case 6
                        rax_1 = zx.q(arg3 - 0x10)
                        
                        if (rax_1.d u<= 1 || arg3 == 0xffffffff)
                            goto label_142aa55a9
                        
                        *arg4 = 1
                    case 7
                        rdx_1 = 2
                        goto label_142aa55a4
    else
        rax_1 = zx.q(arg1[0x21].d) & zx.q(not.d(1 << (r15.d u% 0x20)))
        arg1[0x21].d = rax_1.d

return rax_1
