// 函数: sub_142b743d0
// 地址: 0x142b743d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg2 s> 0)
    result.b = 0
    return result

uint64_t result_1 = arg1[1]

if (result_1 != 0)
    goto label_142b744d0

void* r9_1 = arg1[0xe]
int32_t rdx = *(r9_1 + 8)

if (rdx != 0)
    int32_t rsi_1
    
    if (rdx - 1 s< 0 || rdx s<= 0 || 0 + 1 s<= 0)
        rsi_1 = 0
    else
        rsi_1 = *(*(r9_1 + 0x18) + (sx.q(rdx - 1) << 2))
    
    int32_t rax_3
    
    if (rdx - 2 s>= 0)
        rax_3 = *(r9_1 + 8)
    
    int32_t r8_1
    
    if (rdx - 2 s< 0 || rax_3 s<= 0 || rax_3 - (rdx - 2) s<= 0)
        r8_1 = 0
    else
        r8_1 = *(*(r9_1 + 0x18) + (sx.q(rdx - 2) << 2))
    
    void* rbx = *arg1 + (sx.q(r8_1) << 1)
    sub_142ae7f90(r9_1, rdx - 2)
    sub_142aa0fc0(&arg1[5], zx.d(rsi_1.w))
    uint32_t rsi_2 = rsi_1 u>> 0x10
    
    if (rsi_2 u<= 1)
        int16_t arg_10 = *rbx
        sub_142a48d70(&arg1[5], &arg_10, 0, 1)
        result_1 = rbx + 2
    label_142b744d0:
        
        if (arg1[3].d s>= 0)
        label_142b7467d:
            *(arg1 + 0x6c) = 0xffffffff
        label_142b74684:
            arg1[1] = 0
            result.b = 1
        else
            while (true)
                result = zx.q(*result_1)
                void* rbx_1 = result_1 + 2
                
                if (result.d u>= 0x40)
                    if (arg1[4].b == 0)
                        if ((result.d u>> 0xf).b != 0)
                            result = zx.q(result.d) & 0x7fff
                            
                            if (result.d u< 0x4000)
                                *(arg1 + 0x6c) = result.d
                            else if (result.d u>= 0x7fff)
                                *(arg1 + 0x6c) = (zx.q(zx.d(*rbx_1) << 0x10) | zx.q(*(rbx_1 + 2))).d
                            else
                                *(arg1 + 0x6c) = (result.d - 0x4000) << 0x10 | zx.d(*rbx_1)
                            
                            goto label_142b74684
                        
                        if (result.d u>= 0x4040)
                            uint32_t rax_20
                            uint32_t rcx_16
                            
                            if (result.d u>= 0x7fc0)
                                rcx_16 = zx.d(*(rbx_1 + 2))
                                rax_20 = zx.d(*rbx_1) << 0x10
                            else
                                rcx_16 = zx.d(*rbx_1)
                                rax_20 = ((result.d & 0x7fc0) - 0x4040) << 0xa
                            
                            result = zx.q(rax_20) | zx.q(rcx_16)
                        else
                            result = zx.q((result.d u>> 6) - 1)
                        
                        int32_t rcx_17 = arg1[0xd].d
                        *(arg1 + 0x6c) = result.d
                        
                        if (rcx_17 s> 0)
                            int16_t rax_22 = arg1[6].w
                            
                            if (rax_22 s< 0)
                                result = zx.q(*(arg1 + 0x34))
                            else
                                result = zx.q(sx.d(rax_22) s>> 5)
                            
                            if (result.d == rcx_17)
                                goto label_142b74684
                        
                        arg1[1] = result_1
                        arg1[4].b = 1
                        break
                    
                    if (result.d u>= 0x4040)
                        if (result.d u>= 0x7fc0)
                            rbx_1 += 4
                        else
                            rbx_1 += 2
                    
                    result = zx.q(result.d) & 0x3f
                    arg1[4].b = 0
                
                int32_t rdx_6 = arg1[0xd].d
                
                if (rdx_6 s> 0)
                    int16_t rcx_7 = arg1[6].w
                    int32_t rcx_9
                    
                    if (rcx_7 s< 0)
                        rcx_9 = *(arg1 + 0x34)
                    else
                        rcx_9 = sx.d(rcx_7) s>> 5
                    
                    if (rcx_9 == rdx_6)
                        goto label_142b7467d
                
                if (result.d u>= 0x30)
                    int32_t rsi_3 = (result - 0x2f).d
                    
                    if (rdx_6 s> 0)
                        int16_t rax_8 = arg1[6].w
                        int32_t rax_10
                        
                        if (rax_8 s< 0)
                            rax_10 = *(arg1 + 0x34)
                        else
                            rax_10 = sx.d(rax_8) s>> 5
                        
                        if (rax_10 + rsi_3 s> rdx_6)
                            int16_t rax_24 = arg1[6].w
                            int32_t rax_26
                            
                            if (rax_24 s< 0)
                                rax_26 = *(arg1 + 0x34)
                            else
                                rax_26 = sx.d(rax_24) s>> 5
                            
                            sub_142a48d70(&arg1[5], rbx_1, 0, rdx_6 - rax_26)
                            goto label_142b7467d
                    
                    sub_142a48d70(&arg1[5], rbx_1, 0, rsi_3)
                    result_1 = rbx_1 + (sx.q(rsi_3) << 1)
                else
                    if (result.d == 0)
                        result = zx.q(*rbx_1)
                        rbx_1 += 2
                    
                    result = sub_142b74140(arg1, rbx_1, (result + 1).d, arg2)
                    result_1 = result
                    
                    if (result == 0)
                        break
            
            result.b = 1
    else
        result = sub_142b74140(arg1, rbx, rsi_2, arg2)
        result_1 = result
        
        if (result != 0)
            goto label_142b744d0
        
        result.b = 1
else
    result.b = 0

return result
