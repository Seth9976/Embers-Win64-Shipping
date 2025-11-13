// 函数: sub_142b5e540
// 地址: 0x142b5e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

if (sub_142a57090(arg1, arg2) != 0 && sub_142b74b40(arg1 + 0x228, arg2 + 0x228) != 0
        && sub_142a45d30(arg1 + 0x148, arg2 + 0x148) != 0)
    void* rdx_2 = *(arg1 + 0x2e8)
    int32_t rbx = 0
    int32_t rcx_2
    rcx_2.b = *(arg2 + 0x2e8) == 0
    int32_t rax_2
    rax_2.b = rdx_2 == 0
    
    if (rax_2 != rcx_2)
        rax_2.b = 0
        return 0
    
    if (rdx_2 == 0)
        rax_2.b = 1
        return 1
    
    int32_t rax_3 = sub_1405f8990(rdx_2)
    uint64_t rax_4 = sub_1405f8990(*(arg2 + 0x2e8))
    int32_t r12 = rax_4.d
    
    if (rax_3 == rax_4.d)
        int32_t arg_8 = 0xffffffff
        int32_t arg_10 = 0xffffffff
        
        if (rax_3 s<= 0)
        label_142b5e6a0:
            rax_4.b = 1
        else
            while (true)
                if (rbx s>= r12)
                    goto label_142b5e6a0
                
                void* rax_5 = sub_142a86e70(*(arg1 + 0x2e8), &arg_8)
                rax_4 = sub_142a86e70(*(arg2 + 0x2e8), &arg_10)
                int32_t rdx_5 = *(rax_5 + 0x10)
                
                if (rdx_5 == *(rax_4 + 0x10))
                    int64_t* rax_6 = sub_142a86d40(*(arg1 + 0x2e0), rdx_5)
                    int64_t rax_7 = sub_142a86d40(*(arg2 + 0x2e0), *(rax_4 + 0x10))
                    int64_t r8_1 = *rax_6
                    
                    if ((*(r8_1 + 0x10))(rax_6, rax_7, r8_1).b != 0)
                        rbx += 1
                        
                        if (rbx s>= rax_3)
                            goto label_142b5e6a0
                        
                        continue
                
                rax_4.b = 0
                break
    else
        rax_4.b = 0
    
    return rax_4

return 0
