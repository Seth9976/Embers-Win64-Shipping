// 函数: sub_141ca13e0
// 地址: 0x141ca13e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
sub_141cb6cc0(arg1 - 0x28)
*(arg1 + 0x3ac)
int64_t rbx

if (*(arg1 + 0x380) == *(arg1 + 0x3ac))
label_141ca1467:
    rbx.b = 0
else
    int32_t rax_3 = sub_140b5ead0(arg2.d) + arg_10:4.d
    void* r8 = arg1 + 0x3b0
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0x3c0)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141ca1467_1:
        rbx.b = 0
    else
        int64_t r8_1 = *(arg1 + 0x378)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_5) * 3
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                break
            
            rax_5 = *(r8_1 + (rdx_3 << 3) + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_141ca1467_2
        
        if (rax_5 == 0xffffffff)
        label_141ca1467_2:
            rbx.b = 0
        else
            int64_t* i = &arg_10
            int32_t rbp_1 = 0
            
            while (i != 0)
                int64_t rbx_1 = *i
                *(arg1 + 0x3ac)
                void* const rcx_9
                
                if (*(arg1 + 0x380) == *(arg1 + 0x3ac))
                label_141ca1530:
                    rcx_9 = nullptr
                else
                    int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                    void* r8_2 = arg1 + 0x3b0
                    void* rcx_7 = *(r8_2 + 8)
                    
                    if (rcx_7 != 0)
                        r8_2 = rcx_7
                    
                    int32_t rax_12 = *(r8_2 + (((sx.q(*(arg1 + 0x3c0)) - 1) & sx.q(rax_10)) << 2))
                    
                    if (rax_12 == 0xffffffff)
                    label_141ca1530_1:
                        rcx_9 = nullptr
                    else
                        int64_t r8_3 = *(arg1 + 0x378)
                        
                        while (true)
                            int64_t rdx_7 = sx.q(rax_12) * 3
                            rcx_9 = r8_3 + (rdx_7 << 3)
                            
                            if (*(r8_3 + (rdx_7 << 3)) == rbx_1)
                                break
                            
                            rax_12 = *(rcx_9 + 0x10)
                            
                            if (rax_12 == 0xffffffff)
                                goto label_141ca1530_2
                        
                        if (rax_12 == 0xffffffff)
                        label_141ca1530_2:
                            rcx_9 = nullptr
                
                i = rcx_9 + 8
                
                if (rcx_9 == 0)
                    i = nullptr
                
                if (i != 0)
                    int32_t rcx_10
                    rcx_10.b = *(i + 4) == 0
                    
                    if ((rcx_10.b & sub_140b5b8a0(*i, 0)) == 0)
                        int64_t rbx_3 = sx.q(arg3[1].d)
                        int32_t rax_14 = (rbx_3 + 1).d
                        arg3[1].d = rax_14
                        
                        if (rax_14 s> *(arg3 + 0xc))
                            sub_1405a4d70(arg3)
                        
                        *(*arg3 + (rbx_3 << 3)) = *i
                    else
                        i = nullptr
                
                rbp_1 += 1
                
                if (rbp_1 u>= 0x10000)
                    break
            
            rbx = 1
            
            if (rbp_1 == 0x10000)
                rbx = 0

if (*(arg1 + 0x418) == 0)
    sub_141c9c3e0(arg1 + 0x378, 0)
    sub_141c9c500(arg1 + 0x3c8, 0)

return zx.q(rbx.b)
