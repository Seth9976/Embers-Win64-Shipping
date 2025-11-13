// 函数: sub_1429bbf10
// 地址: 0x1429bbf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg7
int32_t r15 = arg4
int64_t r12 = sx.q(arg6)
int64_t r9 = arg2
int64_t r10 = 0
int16_t* arg_18 = rbx
int32_t i = 0
int64_t rsi = arg1
int16_t* r14 = rbx
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r15 + 7)
void* rdi = &rbx[r12]
arg7 = rdi
int32_t rdx_2 = arg5
uint64_t result = zx.q((temp1 + (temp0 & 7)) s>> 3)
void* rbp_1 = &arg3[sx.q(result.d)]

if (arg3 u< rbp_1)
    do
        result = zx.q(*arg3)
        i += 8
        arg3 = &arg3[1]
        r10 = r10 << 8 | result
        
        while (i s>= 0xe)
            int128_t zmm0 = *(r9 + (zx.q((r10 u>> (i.b - 0xe)).d) & 0x3fff) * 0x10)
            int32_t r15_1 = zmm0.d
            
            if (r15_1.b == 0)
                result = zmm0:8.q
                
                if (result == 0)
                label_1429bc2e6:
                    sub_1429bcb00()
                    noreturn
                
                int32_t r12_1 = 0
                int64_t r13_2 = sx.q(r15_1) s>> 8
                int64_t r9_2 = 0
                
                if (r13_2 s> 0)
                    do
                        int64_t rax_9 = sx.q(*(result + (r9_2 << 2)))
                        int32_t rdi_4 = *(rsi + (rax_9 << 3)) & 0x3f
                        
                        if (i s>= rdi_4)
                        label_1429bc0cc:
                            int32_t i_2 = i - rdi_4
                            
                            if (*(rsi + (rax_9 << 3)) u>> 6
                                    == (r10 u>> i_2.b & ((1 << rdi_4.b) - 1)))
                                i = i_2
                                result = zx.q(*(zmm0:8.q + (r9_2 << 2)))
                                
                                if (result.d != arg5)
                                    if (rbx u>= arg7)
                                        goto label_1429bc2e0
                                    
                                    *rbx = result.w
                                    rbx = &rbx[1]
                                    goto label_1429bc19b
                                
                                if (i_2 s< 8)
                                    uint64_t rax_16 = zx.q(*arg3)
                                    arg3 = &arg3[1]
                                    r10 = r10 << 8 | rax_16
                                    i += 8
                                
                                i -= 8
                                uint8_t rdx_9 = (r10 u>> i.b).b
                                uint64_t r9_3 = zx.q(rdx_9)
                                
                                if (&rbx[r9_3] u> arg7)
                                    goto label_1429bc2e0
                                
                                r14 = arg_18
                                result = &rbx[-1]
                                
                                if (result u< r14)
                                    goto label_1429bc2da
                                
                                if (rdx_9 != 0)
                                    result = zx.q(*result)
                                    int16_t* rdi_5 = rbx
                                    rbx = &rbx[r9_3]
                                    int64_t rcx_8
                                    int64_t rdi_6
                                    rdi_6, rcx_8 = __memfill_u16(rdi_5, result.w, zx.q(r9_3.d))
                                
                                goto label_1429bc1a7
                            
                            rsi = arg1
                        else
                            while (arg3 u< rbp_1)
                                uint64_t rax_10 = zx.q(*arg3)
                                i += 8
                                arg3 = &arg3[1]
                                r10 = r10 << 8 | rax_10
                                
                                if (i s>= rdi_4)
                                    goto label_1429bc0cc
                            
                            if (i s>= rdi_4)
                                goto label_1429bc0cc
                        
                        result = zmm0:8.q
                        r12_1 += 1
                        r9_2 += 1
                    while (r9_2 s< r13_2)
                    
                label_1429bc19b:
                    r14 = arg_18
                
            label_1429bc1a7:
                
                if (r12_1 == r15_1 s>> 8)
                    goto label_1429bc2e6
                
                rsi = arg1
                r9 = arg2
            else
                result = zx.q(sx.d(r15_1.b))
                i -= result.d
                int32_t r15_2 = r15_1 s>> 8
                
                if (r15_2 != rdx_2)
                    if (rbx u>= rdi)
                    label_1429bc2e0:
                        sub_1429bce10()
                        noreturn
                    
                    *rbx = r15_2.w
                    rbx = &rbx[1]
                else
                    if (i s< 8)
                        uint64_t rax_7 = zx.q(*arg3)
                        arg3 = &arg3[1]
                        r10 = r10 << 8 | rax_7
                        i += 8
                    
                    i -= 8
                    uint8_t rdx_4 = (r10 u>> i.b).b
                    uint64_t r9_1 = zx.q(rdx_4)
                    
                    if (&rbx[r9_1] u> rdi)
                        goto label_1429bc2e0
                    
                    result = &rbx[-1]
                    
                    if (result u< r14)
                        goto label_1429bc2da
                    
                    if (rdx_4 != 0)
                        result = zx.q(*result)
                        int16_t* rdi_1 = rbx
                        rbx = &rbx[r9_1]
                        int64_t rcx_3
                        int64_t rdi_2
                        rdi_2, rcx_3 = __memfill_u16(rdi_1, result.w, zx.q(r9_1.d))
                    
                    r9 = arg2
            
            rdi = arg7
            rdx_2 = arg5
    while (arg3 u< rbp_1)
    
    r15 = arg4
    r12 = sx.q(arg6)

int32_t r15_5 = neg.d(r15) & 7
int32_t i_1 = i - r15_5
uint64_t r10_5 = r10 u>> r15_5.b

while (i_1 s> 0)
    int32_t rcx_11 = *(r9 + (zx.q((r10_5 << (0xe - i_1.b)).d) & 0x3fff) * 0x10)
    
    if (rcx_11.b == 0)
        goto label_1429bc2e6
    
    result = zx.q(sx.d(rcx_11.b))
    i_1 -= result.d
    int32_t rcx_12 = rcx_11 s>> 8
    
    if (rcx_12 != rdx_2)
        if (rbx u>= rdi)
            goto label_1429bc2e0
        
        *rbx = rcx_12.w
        rbx = &rbx[1]
    else
        if (i_1 s< 8)
            uint64_t rax_22 = zx.q(*arg3)
            arg3 = &arg3[1]
            r10_5 = r10_5 << 8 | rax_22
            i_1 += 8
        
        i_1 -= 8
        uint8_t rdx_11 = (r10_5 u>> i_1.b).b
        uint64_t r9_4 = zx.q(rdx_11)
        
        if (&rbx[r9_4] u> rdi)
            goto label_1429bc2e0
        
        result = &rbx[-1]
        
        if (result u< r14)
            goto label_1429bc2da
        
        rdx_2 = arg5
        
        if (rdx_11 != 0)
            result = zx.q(*result)
            int16_t* rdi_7 = rbx
            rbx = &rbx[r9_4]
            int64_t rcx_15
            int64_t rdi_8
            rdi_8, rcx_15 = __memfill_u16(rdi_7, result.w, zx.q(r9_4.d))
            rdi = arg7
        
        r9 = arg2

if ((rbx - r14) s>> 1 == r12)
    return result

label_1429bc2da:
sub_1429bcc00()
noreturn
