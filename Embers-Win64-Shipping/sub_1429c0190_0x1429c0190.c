// 函数: sub_1429c0190
// 地址: 0x1429c0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg3
int64_t i_1 = (arg2 - arg1) s>> 2
int32_t* rbp = arg2
int32_t* rdi = arg1

if (i_1 s<= 0x20)
label_1429c0240:
    
    if (i_1 s>= 2 && rdi != rbp)
        void* r14_2 = &rdi[1]
        
        if (&rdi[1] != rbp)
            int64_t r15_2 = 4
            
            do
                int64_t rax_7 = *arg4
                void* r9_2 = r14_2
                int64_t rsi_1 = sx.q(*r14_2)
                int64_t rcx_8 = sx.q(*rdi)
                int32_t zmm0 = *(rax_7 + (rsi_1 << 2))
                int32_t zmm1 = *(rax_7 + (rcx_8 << 2))
                
                if (zmm1 f> zmm0)
                    i_1 = memmove(&rdi[1], rdi, r15_2.d)
                    *rdi = rsi_1.d
                else if (zmm0 f> zmm1)
                label_1429c02b8:
                    void* rdx_3 = r14_2
                    
                    while (true)
                        i_1 = *arg4
                        rdx_3 -= 4
                        int64_t rcx_9 = sx.q(*rdx_3)
                        zmm0 = *(i_1 + (rsi_1 << 2))
                        zmm1 = *(i_1 + (rcx_9 << 2))
                        
                        if (not(zmm1 f> zmm0))
                            if (zmm0 f> zmm1)
                                break
                            
                            i_1 = arg4[1]
                            zmm0 = *(i_1 + (rsi_1 << 2))
                            zmm1 = *(i_1 + (rcx_9 << 2))
                            
                            if (not(zmm1 f> zmm0))
                                if (zmm0 f> zmm1)
                                    break
                                
                                if (rsi_1.d s>= rcx_9.d)
                                    break
                        
                        *r9_2 = rcx_9.d
                        r9_2 = rdx_3
                    
                    *r9_2 = rsi_1.d
                else
                    int64_t rax_8 = arg4[1]
                    zmm0 = *(rax_8 + (rsi_1 << 2))
                    zmm1 = *(rax_8 + (rcx_8 << 2))
                    
                    if (not(zmm1 f> zmm0) && (zmm0 f> zmm1 || rsi_1.d s>= rcx_8.d))
                        goto label_1429c02b8
                    
                    i_1 = memmove(&rdi[1], rdi, r15_2.d)
                    *rdi = rsi_1.d
                
                r14_2 += 4
                r15_2 += 4
            while (r14_2 != rbp)
else
    while (i s> 0)
        int32_t* var_38
        sub_1429bfca0(&var_38, rdi, rbp, arg4)
        int32_t* r15_1 = var_38
        i = (i s>> 1) + (i s>> 2)
        int32_t* var_30
        
        if (((r15_1 - rdi) & 0xfffffffffffffffc) s>= ((rbp - var_30) & 0xfffffffffffffffc))
            sub_1429c0190(var_30, rbp, i, arg4)
            rbp = r15_1
        else
            sub_1429c0190(rdi, r15_1, i, arg4)
            rdi = var_30
        
        i_1 = (rbp - rdi) s>> 2
        
        if (i_1 s<= 0x20)
            goto label_1429c0240
    
    if (i_1 s<= 0x20)
        goto label_1429c0240
    
    sub_1429bfa30(rdi, rbp, arg4)
    i_1 = (rbp - rdi) s>> 2
    
    if (i_1 s>= 2)
        void* rsi_2 = &rbp[-1]
        
        if (i_1 s< 2)
            goto label_1429c036d
        
        do
            int32_t arg_8 = *rsi_2
            *rsi_2 = *rdi
            sub_1429c0050(rdi, 0, (rsi_2 - rdi) s>> 2, &arg_8, arg4)
        label_1429c036d:
            rsi_2 -= 4
            i_1 = (4 - rdi + rsi_2) s>> 2
        while (i_1 s>= 2)

return i_1
