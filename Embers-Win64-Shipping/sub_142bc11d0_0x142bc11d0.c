// 函数: sub_142bc11d0
// 地址: 0x142bc11d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
*(arg1 + 0x28) = *(arg1 + 0x20)
int32_t arg_8 = 0
char* rbx = arg2
*(arg1 + 8) = arg2
*(arg1 + 0x10) = arg3
*(arg1 + 0x18) = arg2

if (arg2 u>= arg3)
    return 0

do
    uint32_t rcx_2 = zx.d(*rbx)
    
    if (rcx_2 u< 0x1b || rcx_2 == 0x1f || rcx_2 == 0xff)
        char** rax_5 = *(arg1 + 0x28)
        int32_t i_1 = ((rax_5 - *(arg1 + 0x20)) s>> 3).d
        
        if (i_1 u>= *(arg1 + 0x30))
        label_142bc158e:
            return 6
        
        *rax_5 = rbx
        
        if (rcx_2 == 0xc)
            rbx = &rbx[1]
            
            if (rbx u>= arg3)
            label_142bc158e_1:
                return 6
            
            rcx_2 = zx.d(*rbx) | 0x100
        
        int32_t* rdi_1 = &data_143685340
        
        while (true)
            if (rdi_1[1] == (rcx_2 | *(arg1 + 0x34)))
                int64_t rdx_1 = *(arg1 + 0x38)
                int32_t rax_6 = *rdi_1
                int32_t* rsi_2 = zx.q(rdi_1[2]) + rdx_1
                
                if (rax_6 != 6 && i_1 u< 1)
                    goto label_142bc158e_2
                
                if (rax_6 - 1 u> 5)
                    int32_t rax_36 = (*(rdi_1 + 0x10))(arg1)
                    arg_8 = rax_36
                    r8 = rax_36
                    
                    if (rax_36 != 0)
                        return rax_36
                    
                    goto label_142bc1548
                
                int32_t rcx_8
                int32_t rcx_18
                
                switch (rax_6)
                    case 1, 4, 5
                        char* r10_1 = **(arg1 + 0x20)
                        char rax_10 = *r10_1
                        
                        if (rax_10 != 0x1e)
                            if (rax_10 != 0xff)
                                rcx_8 = sub_142bc0c90(r10_1, *(arg1 + 0x10))
                                goto label_142bc145b
                            
                            rcx_8 = sx.d(((((zx.d(r10_1[1]) << 8 | zx.d(r10_1[2])) << 8
                                | zx.d(r10_1[3])) + 0x80) u>> 8).w)
                        else
                            rcx_8 = sub_142bc0db0(r10_1, *(arg1 + 0x10), 0, nullptr) s>> 0x10
                        label_142bc145b:
                            r8 = arg_8
                        
                        uint32_t rdx_7 = zx.d(rdi_1[3].b)
                        
                        if (rdx_7 == 1)
                            *rsi_2 = rcx_8.b
                        else if (rdx_7 == 2)
                            *rsi_2 = rcx_8.w
                        else
                            *rsi_2 = rcx_8
                    case 2
                        int64_t rdx_4 = *(arg1 + 0x10)
                        char* rcx_17 = **(arg1 + 0x20)
                        
                        if (*rcx_17 == 0x1e)
                            rcx_8 = sub_142bc0db0(rcx_17, rdx_4, 0, nullptr)
                            goto label_142bc145b
                        
                        int32_t rax_17 = sub_142bc0c90(rcx_17, rdx_4)
                        rcx_18 = rax_17
                        
                        if (rax_17 s> 0x7fff)
                            rcx_8 = 0x7fffffff
                            goto label_142bc145b
                        
                    label_142bc1449:
                        
                        if (rcx_18 s>= 0xffff8001)
                            rcx_8 = rcx_18 << 0x10
                            goto label_142bc145b
                        
                        rcx_8 = -0x7fffffff
                        goto label_142bc145b
                    case 3
                        int64_t rdx_5 = *(arg1 + 0x10)
                        char* rcx_19 = **(arg1 + 0x20)
                        
                        if (*rcx_19 == 0x1e)
                            rcx_8 = sub_142bc0db0(rcx_19, rdx_5, 3, nullptr)
                            goto label_142bc145b
                        
                        int32_t rax_20 = sub_142bc0c90(rcx_19, rdx_5)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(rax_20)
                        
                        if ((temp1_1 ^ temp0_1) - temp0_1 s> 0x20c49b)
                            rcx_8 = -0x7fffffff
                            
                            if (rax_20 s> 0)
                                rcx_8 = 0x7fffffff
                            
                            goto label_142bc145b
                        
                        rcx_18 = rax_20 * 0x3e8
                        
                        if (rcx_18 s<= 0x7fff)
                            goto label_142bc1449
                        
                        rcx_8 = 0x7fffffff
                        goto label_142bc145b
                    case 6
                        int32_t i_2 = rdi_1[6]
                        int64_t* r12_1 = *(arg1 + 0x20)
                        
                        if (i_1 u> i_2)
                            i_1 = i_2
                        
                        int32_t rbp_1 = 0
                        zx.q(rdi_1[7])[rdx_1] = i_1.b
                        
                        if (i_1 != 0)
                            int32_t i
                            
                            do
                                char* r10_3 = *r12_1
                                char rax_24 = *r10_3
                                int32_t rax_26
                                
                                if (rax_24 == 0x1e)
                                    rax_26 =
                                        sub_142bc0db0(r10_3, *(arg1 + 0x10), 0, nullptr) s>> 0x10
                                else if (rax_24 != 0xff)
                                    rax_26 = sub_142bc0c90(r10_3, *(arg1 + 0x10))
                                else
                                    rax_26 = sx.d((((zx.d(r10_3[3])
                                        | (zx.d(r10_3[1]) << 8 | zx.d(r10_3[2])) << 8) + 0x80) u>> 8)
                                        .w)
                                
                                rbp_1 += rax_26
                                r12_1 = &r12_1[1]
                                uint32_t rax_32 = zx.d(rdi_1[3].b)
                                
                                if (rax_32 == 1)
                                    *rsi_2 = rbp_1.b
                                else if (rax_32 == 2)
                                    *rsi_2 = rbp_1.w
                                else
                                    *rsi_2 = rbp_1
                                
                                rsi_2 += zx.q(rdi_1[3].b)
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            r8 = arg_8
                
                goto label_142bc1548
            
            rdi_1 = &rdi_1[8]
            
            if (*rdi_1 == 0)
            label_142bc1548:
                
                if (*rdi_1 == 8)
                    break
                
                *(arg1 + 0x28) = *(arg1 + 0x20)
                break
    else
        char** rdx = *(arg1 + 0x28)
        
        if (((rdx - *(arg1 + 0x20)) s>> 3).d u>= *(arg1 + 0x30))
        label_142bc158e_2:
            return 6
        
        *rdx = rbx
        *(arg1 + 0x28) += 8
        
        if (rcx_2 == 0x1e)
            char rcx
            
            do
                rbx = &rbx[1]
                
                if (rbx u>= arg3)
                    return r8
                
                rcx = *rbx
                
                if ((rcx & 0xf0) == 0xf0)
                    break
            while ((rcx & 0xf) != 0xf)
        else if (rcx_2 == 0x1c)
            rbx = &rbx[2]
        else if (rcx_2 == 0x1d)
            rbx = &rbx[4]
        else if (rcx_2 u> 0xf6)
            rbx = &rbx[1]
    
    rbx = &rbx[1]
while (rbx u< arg3)

return r8
