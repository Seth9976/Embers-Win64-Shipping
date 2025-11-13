// 函数: sub_142ab3ff0
// 地址: 0x142ab3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
uint64_t rsi
uint64_t var_30 = rsi
char r14 = arg4
int32_t r9 = arg3
uint64_t r15
uint64_t var_40 = r15

while (true)
    uint64_t result = zx.q(*(arg1 + 0xc))
    uint64_t r13_2 = zx.q(arg2 - result.d)
    int32_t temp0_1 = result.d
    bool cond:0_1 = temp0_1 s<= 0
    
    if (temp0_1 s>= 0)
        goto label_142ab404f
    
    if (r13_2.d s>= arg2)
        cond:0_1 = result.d s<= 0
    label_142ab404f:
        
        if (not(cond:0_1) && r13_2.d s> arg2)
            r13_2 = 0x80000000
    else
        r13_2 = 0x7fffffff
    
    char r8 = *(arg1 + 0x40)
    
    if (r8 == 0)
        if (r13_2.d u> 0xf)
            r15.b = 0
        else
            r15.b = (*(arg1 + 0x30) u>> (r13_2 << 2).b).b & 0xf
    else if (r13_2.d s< 0 || r13_2.d s>= *(arg1 + 0x10))
        r15.b = 0
    else
        result = *(arg1 + 0x30)
        r15 = zx.q(*(sx.q(r13_2.d) + result))
    
    if (r13_2.d s<= 0 && *(arg1 + 0x15) == 0 && (r14 == 0 || r15.b == 0 || r15.b == 5))
        return result
    
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    
    if (rdx.d == 0)
        return result
    
    int32_t rax_1 = (r13_2 - 1).d
    uint64_t rcx_2 = zx.q(rax_1)
    
    if (rax_1 s> r13_2.d)
        rcx_2 = 0x80000000
    
    if (r8 == 0)
        if (rcx_2.d u> 0xf)
            rsi.b = 0
        else
            rsi.b = (*(arg1 + 0x30) u>> (rcx_2 << 2).d.b).b & 0xf
    else if (rcx_2.d s< 0 || rcx_2.d s>= rdx.d)
        rsi.b = 0
    else
        rsi = zx.q(*(sx.q(rcx_2.d) + *(arg1 + 0x30)))
    
    int32_t r12_1 = 0
    char rbp_2
    int32_t r14_1
    
    if (*(arg1 + 0x15) == 0)
        if (r14 == 0 || r15.b == 2 || r15.b == 7)
            if (rsi.b s>= 5)
                if (rsi.b s<= 5)
                    rdx = zx.q((r13_2 - 2).d)
                    r14_1 = 2
                    
                    if (rdx.d s<= r13_2.d && rdx.d s>= 0)
                        rcx_2 = zx.q((rdx << 2).d)
                        uint8_t* r9_4 = sx.q(rdx.d)
                        int32_t temp1_1
                        
                        do
                            uint8_t r8_2
                            
                            if (*(arg1 + 0x40) == 0)
                                if (rdx.d u<= 0xf)
                                    r8_2 = (*(arg1 + 0x30) u>> rcx_2.b).b & 0xf
                                label_142ab44eb:
                                    
                                    if (r8_2 != 0)
                                        r14_1 = 3
                                        break
                            else if (rdx.d s>= 0 && rdx.d s< *(arg1 + 0x10))
                                r8_2 = r9_4[*(arg1 + 0x30)]
                                goto label_142ab44eb
                            rcx_2 = zx.q(rcx_2.d - 4)
                            r9_4 -= 1
                            temp1_1 = rdx.d
                            rdx = zx.q(rdx.d - 1)
                        while (temp1_1 - 1 s>= 0)
                        r9 = arg3
                else
                    r14_1 = 3
                
                rbp_2 = arg4
            else
                r14_1 = 1
                rbp_2 = arg4
        else if (r15.b s>= 2)
            rbp_2 = arg4
            r14_1 = 3
            
            if (r15.b s>= 5 && r15.b s< 7)
                r14_1 = 1
        else
            r14_1 = 1
            rbp_2 = arg4
        
        goto label_142ab4513
    
    uint64_t rbx_1 = zx.q((r13_2 - 2).d)
    
    if (rbx_1.d s> r13_2.d)
        rbx_1 = 0x80000000
    
    int64_t rbp_1 = sx.q(sub_142a92b60(0, rdx.d - 0xe))
    int64_t r8_1 = sx.q(rbx_1.d)
    
    if (rsi.b != 0)
        if (rsi.b == 4)
            if (r14 != 0 && r15.b != 2 && r15.b != 7)
                goto label_142ab439d
            
            r14_1 = 2
            
            if (rbx_1.d s>= rbp_1.d)
                rcx_2 = zx.q((rbx_1 << 2).d)
                
                while (true)
                    uint8_t rdx_4
                    
                    if (*(arg1 + 0x40) == 0)
                        if (rbx_1.d u> 0xf)
                            break
                        
                        rdx_4 = (*(arg1 + 0x30) u>> rcx_2.b).b & 0xf
                    else
                        if (rbx_1.d s< 0)
                            break
                        
                        if (rbx_1.d s>= *(arg1 + 0x10))
                            break
                        
                        rdx_4 = *(r8_1 + *(arg1 + 0x30))
                    
                    if (rdx_4 != 9)
                        break
                    
                    rbx_1 = zx.q(rbx_1.d - 1)
                    rcx_2 = zx.q(rcx_2.d - 4)
                    r8_1 -= 1
                    
                    if (r8_1 s< rbp_1)
                        goto label_142ab41b8
                
                r14_1 = 1
        else if (rsi.b != 5)
            if (rsi.b != 9 || (r14 != 0 && r15.b != 4 && r15.b != rsi.b))
                goto label_142ab439d
            
            r14_1 = -2
            
            while (rbx_1.d s>= rbp_1.d)
                char rax_8
                rax_8, rcx_2 = sub_142ab3800(arg1, zx.q(rbx_1.d))
                
                if (rax_8 != 9)
                    r14_1 = 3
                    break
                
                rbx_1 = zx.q(rbx_1.d - 1)
        else
            if (r14 != 0 && r15.b != 2 && r15.b != 7)
                goto label_142ab439d
            
            r14_1 = 2
            
            if (rbx_1.d s>= rbp_1.d)
                rcx_2 = zx.q((rbx_1 << 2).d)
                
                do
                    uint8_t rdx_6
                    
                    if (*(arg1 + 0x40) == 0)
                        if (rbx_1.d u<= 0xf)
                            rdx_6 = (*(arg1 + 0x30) u>> rcx_2.b).b & 0xf
                        label_142ab4328:
                            
                            if (rdx_6 != 0)
                                r14_1 = 3
                                break
                    else if (rbx_1.d s>= 0 && rbx_1.d s< *(arg1 + 0x10))
                        rdx_6 = *(r8_1 + *(arg1 + 0x30))
                        goto label_142ab4328
                    rbx_1 = zx.q(rbx_1.d - 1)
                    rcx_2 = zx.q(rcx_2.d - 4)
                    r8_1 -= 1
                while (r8_1 s>= rbp_1)
    else if (r14 == 0 || r15.b == 0 || r15.b == 5)
        r14_1 = -1
        
        if (rbx_1.d s>= rbp_1.d)
            rcx_2 = zx.q((rbx_1 << 2).d)
            
            while (true)
                uint8_t rdx_2
                
                if (*(arg1 + 0x40) == 0)
                    if (rbx_1.d u<= 0xf)
                        rdx_2 = (*(arg1 + 0x30) u>> rcx_2.b).b & 0xf
                    label_142ab4198:
                        
                        if (rdx_2 != 0)
                            break
                else if (rbx_1.d s>= 0 && rbx_1.d s< *(arg1 + 0x10))
                    rdx_2 = *(r8_1 + *(arg1 + 0x30))
                    goto label_142ab4198
                rbx_1 = zx.q(rbx_1.d - 1)
                rcx_2 = zx.q(rcx_2.d - 4)
                r8_1 -= 1
                
                if (r8_1 s< rbp_1)
                    goto label_142ab41b8
            
            r14_1 = 1
    else
    label_142ab439d:
        
        if (r14 == 0 || r15.b == 2 || r15.b == 7)
            r14_1 = 3
            
            if (rsi.b s< 5)
                r14_1 = 1
        else if (r15.b s>= 2)
            r14_1 = 3
            
            if (r15.b s>= 5 && r15.b s< 7)
                r14_1 = 1
        else
            r14_1 = 1
    
label_142ab41b8:
    rdx = zx.q(rax_1)
    r9 = arg3
    rcx_2.b = r9 u> 3
    
    if (rdx.d s> r13_2.d)
        rdx = 0x80000000
    
    result = zx.q(*(arg1 + 0x10) - 0xe)
    
    if (rdx.d s>= result.d)
        if (rcx_2.b == 0)
            if (r14_1 s>= 0)
            label_142ab41f9:
                rbp_2 = arg4
                *(arg1 + 0x15) = 0
                *(arg1 + 0x18) = 0
                *(arg1 + 0x20) = 0
                
                if (r13_2.d s<= 0 && (rbp_2 == 0 || r15.b == 0 || r15.b == 5))
                    return result
                
                if (r14_1 != 0xffffffff)
                    if (r14_1 == 0xfffffffe)
                        r14_1 = 3
                    
                    goto label_142ab4513
                
                r14_1 = 1
            label_142ab4513:
                
                if (rbp_2 == 0)
                    rcx_2.b = not.b(r15.b)
                    rcx_2.b &= 1
                else if ((r15 - 2).b u> 5)
                    rcx_2.b = 1
                else if (r15.b != 2)
                    if (r15.b != 7 || r14_1 != 3)
                        rcx_2.b = 0
                    else
                        rcx_2.b = 1
                else if (r14_1 == 3)
                    rcx_2.b = 0
                else
                    rcx_2.b = 1
                
                rdx.b = (data_143ccaf50 & *(arg1 + 0x14)) != 0
                result = sub_142ab3920(rcx_2.b, rdx.b, r14_1, r9, arg5)
                char rsi_2 = result.b
                
                if (*arg5 s<= 0)
                    if (r13_2.d s< *(arg1 + 0x10))
                        sub_142ab4d40(arg1, r13_2.d)
                    else
                        if (*(arg1 + 0x40) != 0)
                            sub_142a7dcd0(*(arg1 + 0x30))
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x40) = 0
                        
                        *(arg1 + 0xc) = arg_10
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x10) = 0
                        *(arg1 + 0x15) = 0
                        *(arg1 + 0x18) = 0
                        *(arg1 + 0x20) = 0
                    
                    if (rbp_2 == 0)
                        if (rsi_2 != 0)
                            return sub_142ab3280(arg1)
                        
                        if (r15.b == 9)
                            goto label_142ab463a
                        
                    label_142ab4684:
                        char rcx_12 = *(arg1 + 0x40)
                        int32_t* rbx_2
                        
                        if (rcx_12 == 0)
                            rbx_2.b = *(arg1 + 0x30) & 0xf
                        else if (*(arg1 + 0x10) s> 0)
                            rbx_2 = zx.q(**(arg1 + 0x30))
                        else
                            rbx_2.b = 0
                        
                        rbx_2.b += 1
                        
                        if (rcx_12 == 0)
                            *(arg1 + 0x30) = (*(arg1 + 0x30) & 0xfffffffffffffff0) | sx.q(rbx_2.b)
                        else
                            sub_142ab3600(arg1, 1)
                            **(arg1 + 0x30) = rbx_2.b
                        
                        *(arg1 + 0x10) += 1
                        return sub_142ab3280(arg1)
                    
                    if (r15.b s>= 5)
                        if (rsi_2 == 0)
                            sub_142ab4740(arg1, 0, 9)
                        label_142ab463a:
                            char* r8_6 = nullptr
                            int32_t rcx_10 = 0
                            
                            while (true)
                                uint8_t rdx_10
                                
                                if (*(arg1 + 0x40) == 0)
                                    if (rcx_10 u> 0x3c)
                                        break
                                    
                                    rdx_10 = (*(arg1 + 0x30) u>> rcx_10.b).b & 0xf
                                else
                                    if (rcx_10 s< 0)
                                        break
                                    
                                    if (r12_1 s>= *(arg1 + 0x10))
                                        break
                                    
                                    rdx_10 = r8_6[*(arg1 + 0x30)]
                                
                                if (rdx_10 != 9)
                                    break
                                
                                r12_1 += 1
                                rcx_10 += 4
                                r8_6 = &r8_6[1]
                            
                            sub_142ab4d40(arg1, r12_1)
                            goto label_142ab4684
                    else if (rsi_2 != 0)
                        sub_142ab4740(arg1, 0, 0)
                        return sub_142ab3280(arg1)
                    
                    if (*(arg1 + 0x40) == 0)
                        result = (*(arg1 + 0x30) & 0xfffffffffffffff5) | 5
                        *(arg1 + 0x30) = result
                    else
                        sub_142ab3600(arg1, 1)
                        result = *(arg1 + 0x30)
                        *result = 5
                
                return result
        else if (r14_1 != 2)
            goto label_142ab41f9
    
    sub_142ab33e0(arg1)
    arg2 = arg_10
    r9 = arg3
    r14 = arg4
