// 函数: sub_141ec21c0
// 地址: 0x141ec21c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)
int64_t* rdi = arg2
void* rbp = arg1
int32_t r15 = (result - 1).d
int64_t r14 = sx.q(r15)

if (r15 s>= 0)
    int64_t temp0_1
    
    do
        int32_t rbx_1 = r15 - 1
        int32_t* r13_1 = *rdi + r14 * 0x48
        
        if (rbx_1 s>= 0)
            int32_t rbp_1 = rbx_1 + 1
            int64_t rsi_2 = sx.q(rbx_1) * 0x48
            int32_t temp1_1
            
            do
                int64_t r12_1 = *rdi
                int32_t rcx
                rcx.b = sub_140b5b8a0(*r13_1, 0) == 0
                
                if ((r13_1[1] != 0 | rcx.b) != 0 && *r13_1 == *(rsi_2 + r12_1))
                    int64_t r12_2 = sx.q(rbx_1) * 0x48
                    int64_t rcx_2 = *(r12_2 + *rdi + 0x38)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int32_t rcx_5 = rdi[1].d
                    int32_t rax_7 = rcx_5 - rbx_1
                    
                    if (rax_7 != 1)
                        int64_t r9 = *rdi
                        memmove(r12_2 + r9, r9 + sx.q(rbp_1) * 0x48, (rax_7 - 1) * 0x48)
                        rcx_5 = rdi[1].d
                    
                    rdi[1].d = rcx_5 - 1
                    sub_141d264e0(rdi)
                    r15 -= 1
                    r14 -= 1
                    rbx_1 -= 1
                    rbp_1 -= 1
                    rsi_2 -= 0x48
                
                rbp_1 -= 1
                rsi_2 -= 0x48
                temp1_1 = rbx_1
                rbx_1 -= 1
            while (temp1_1 - 1 s>= 0)
        
        r15 -= 1
        temp0_1 = r14
        r14 -= 1
    while (temp0_1 - 1 s>= 0)
    result = zx.q(rdi[1].d)
    rbp = arg1

int32_t i = 0

if (result.d s> 0)
    int32_t r12_3 = 1
    int64_t r13_2 = 0
    
    do
        uint64_t* rsi_4 = *rdi + r13_2
        int32_t rcx_7
        rcx_7.b = sub_140b5b8a0(*(rsi_4 + 0x2c), 0).b == 0
        result.b = rsi_4[6].d != 0
        result.b |= rcx_7.b
        
        if (result.b == 0)
            goto label_141ec23e8
        
        result = sub_141eca540(rbp, rsi_4 + 0x2c)
        
        if (result.d == 0xffffffff || result.d s>= 0x21)
        label_141ec2364:
            int64_t rbx_2 = sx.q(i) * 0x48
            int64_t rcx_11 = *(rbx_2 + *rdi + 0x38)
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int32_t rcx_14 = rdi[1].d
            int32_t rax_15 = rcx_14 - i
            
            if (rax_15 != 1)
                int64_t r9_2 = *rdi
                memmove(rbx_2 + r9_2, r9_2 + sx.q(r12_3) * 0x48, (rax_15 - 1) * 0x48)
                rcx_14 = rdi[1].d
            
            rdi[1].d = rcx_14 - 1
            result = sub_141d264e0(rdi)
            i -= 1
            r12_3 -= 1
            r13_2 -= 0x48
        else
            int32_t* rdx_3 = *(rbp + 0x138)
            int32_t r8_2 = 0
            void* r9_1 = &rdx_3[sx.q(*(rbp + 0x140))]
            
            if (rdx_3 == r9_1)
                goto label_141ec2364
            
            while (*rdx_3 != result.d)
                r8_2 += 1
                rdx_3 = &rdx_3[1]
                
                if (rdx_3 == r9_1)
                    goto label_141ec2364
            
            if (r8_2 == 0x20)
                goto label_141ec2364
            
            *(rsi_4 + 9) = result.b
        label_141ec23e8:
            int32_t j = 0
            *(rsi_4 + 0xb) = data_143f3a640
            *(rsi_4 + 0x1b) = data_143f3a650
            
            for (; j s>= 0; j += 1)
                if (j s>= rsi_4[8].d)
                    break
                
                int64_t* rbp_2 = rsi_4[7] + sx.q(j) * 0xc
                result = sub_141eca540(arg1, rbp_2)
                
                if (result.d != 0xffffffff)
                    int64_t rcx_18 = sx.q(result.d)
                    result = zx.q(rbp_2[1].b)
                    *(rcx_18 + rsi_4 + 0xb) = result.b
            
            rdi = arg2
            
            for (int32_t j_1 = 0; j_1 s>= 0; j_1 += 1)
                if (j_1 s>= arg4[1].d)
                    break
                
                int64_t r8_5 = *arg4
                int64_t rcx_19 = sx.q(j_1) * 3
                result = *rsi_4
                
                if (*(r8_5 + (rcx_19 << 3)) == result)
                    void* r14_1 = (rcx_19 << 3) + r8_5
                    
                    for (int32_t k = 0; k s>= 0; k += 1)
                        if (k s>= *(r14_1 + 0x10))
                            break
                        
                        int64_t* rbp_4 = *(r14_1 + 8) + sx.q(k) * 0xc
                        result = sub_141eca540(arg1, rbp_4)
                        
                        if (result.d != 0xffffffff)
                            int64_t rcx_23 = sx.q(result.d)
                            result = zx.q(rbp_4[1].b)
                            *(rcx_23 + rsi_4 + 0xb) = result.b
                    
                    rdi = arg2
                    break
            
            rbp = arg1
        
        i += 1
        r12_3 += 1
        r13_2 += 0x48
    while (i s< rdi[1].d)

return result
