// 函数: sub_141f92a60
// 地址: 0x141f92a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg6
int64_t* r14 = arg7
int32_t* i = arg3
*r14 = 0
rdi[0x15]
int64_t result

if (rdi[0x14] == rdi[0x15])
    result.b = 0
else if (((*(*(arg1 + 0x28) + 0xa4) u>> 1).b & 1) == 0)
    int64_t r9_2 = *rdi
    arg7.d = 0
    (*(r9_2 + 0x160))(rdi, &arg7, zx.q(arg3[0xa] + 1 + *i), r9_2)
    char rcx_7 = *(rdi + 0x29)
    
    if ((rcx_7 & 1) != 0)
        result.b = 0
    else
        int32_t r8_5 = arg7.d
        
        if (r8_5 s<= *i + i[0xa])
            int64_t rax_9
            
            while (true)
                int32_t rdx_7 = *i
                
                if (r8_5 s>= rdx_7 && r8_5 s< i[0xa] + rdx_7)
                    rax_9 = (sx.q(r8_5 - rdx_7) << 5) + *(i + 0x20)
                    break
                
                i = *(i + 8)
                
                if (i == 0)
                    rax_9 = 0
                    break
            
            *r14 = rax_9
        label_141f92c5e:
            arg6.d = 0
            (*(*rdi + 0x168))(rdi, &arg6)
            
            if ((*(rdi + 0x29) & 1) != 0)
                result.b = 0
            else
                sub_140b550b0(arg8, rdi, zx.q(arg6.d), arg5)
                
                if ((*(rdi + 0x29) & 1) != 0)
                    result.b = 0
                else
                    result.b = 1
        else
            *(rdi + 0x29) = rcx_7 | 1
            result.b = 0
else if (arg4 != 0)
    int32_t rax_1 = *(arg4 + 0x20)
    int64_t r9 = *rdi
    uint64_t r8 = 2
    arg7.d = 0
    
    if (rax_1 s>= 2)
        r8 = zx.q(rax_1)
    
    (*(r9 + 0x160))(rdi, &arg7, r8, r9)
    char rdx_1 = *(rdi + 0x29)
    
    if ((rdx_1 & 1) != 0)
        result.b = 0
    else
        result = sx.q(arg7.d)
        
        if (result.d s>= *(arg4 + 0x20))
            *(rdi + 0x29) = rdx_1 | 1
            result.b = 0
        else
            void* rcx_3 = result * 5
            result = *(arg4 + 0x18)
            int64_t r9_1 = sx.q(*(result + (rcx_3 << 2) + 4))
            void* r10_1 = result + (rcx_3 << 2)
            
            if (r9_1.d != 0)
                int64_t rax_2 = 0
                
                for (; i != 0; i = *(i + 8))
                    if (i[0x22] == i[0x2d])
                    labelid_10:
                        rax_2 = 0
                    else
                        void* r8_1 = &i[0x2e]
                        void* rcx_4 = *(r8_1 + 8)
                        
                        if (rcx_4 != 0)
                            r8_1 = rcx_4
                        
                        int32_t rax_4 = *(r8_1 + (((sx.q(i[0x32]) - 1) & r9_1) << 2))
                        
                        if (rax_4 == 0xffffffff)
                        label_141f92b97:
                            rax_2 = 0
                        else
                            int64_t r8_2 = *(i + 0x80)
                            int64_t rdx_5
                            
                            while (true)
                                rdx_5 = sx.q(rax_4)
                                int64_t rcx_5 = rdx_5 * 3
                                
                                if (*(r8_2 + (rcx_5 << 3)) == r9_1.d)
                                    break
                                
                                rax_4 = *(r8_2 + (rcx_5 << 3) + 0x10)
                                
                                if (rax_4 == 0xffffffff)
                                    goto label_141f92b97_2
                            
                            if (rax_4 == 0xffffffff)
                            label_141f92b97_1:
                                rax_2 = 0
                            else
                                void* rax_6 = r8_2 + rdx_5 * 0x18
                                
                                if (rax_6 == 0)
                                label_141f92b97_2:
                                    rax_2 = 0
                                else
                                    rax_2 = *(rax_6 + 8)
                                    
                                    if (rax_2 != 0)
                                        break
                
                *r14 = rax_2
                
                if (rax_2 == 0 && *(r10_1 + 0x12) == 0)
                    *(r10_1 + 0x12) = 1
                
                goto label_141f92c5e
            
            *(rdi + 0x29) = rdx_1 | 1
            result.b = 0
else
    *(rdi + 0x29) |= 1
    result.b = 0

return result
