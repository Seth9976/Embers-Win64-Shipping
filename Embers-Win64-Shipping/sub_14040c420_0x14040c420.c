// 函数: sub_14040c420
// 地址: 0x14040c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_68[0xa]
int32_t (* var_a0)[0xa] = &var_68
int32_t rbx_1 = arg3 s>> 1
int32_t var_90[0xa]
int32_t (* var_98)[0xa] = &var_90
sub_14040c9e0(arg2, &var_68, &var_90, rbx_1)
int64_t rdi = sx.q(rbx_1)
int32_t var_f8 = 0x2000
int64_t r9_1 = rdi << 2
int32_t (* r14)[0xa] = &var_68
void* rax_2 = &var_68 + r9_1
int64_t var_e0 = r9_1
int32_t r8_1 = *rax_2
int64_t rdx_1 = sx.q(rbx_1 - 1)

if (rbx_1 - 1 s>= 0)
    int64_t temp3_1
    
    do
        r8_1 = r8_1 * 2 + var_68[rdx_1]
        temp3_1 = rdx_1
        rdx_1 -= 1
    while (temp3_1 - 1 s>= 0)
    r9_1 = rdi << 2

int32_t r12 = 1
int32_t r13

if (r8_1 s>= 0)
    r13 = 0
else
    r8_1 = *(&var_90 + r9_1)
    *arg1 = 0
    r14 = &var_90
    int64_t rdx_2 = sx.q(rbx_1 - 1)
    
    if (rbx_1 - 1 s>= 0)
        int64_t temp4_1
        
        do
            r8_1 = r8_1 * 2 + var_90[rdx_2]
            temp4_1 = rdx_2
            rdx_2 -= 1
        while (temp4_1 - 1 s>= 0)
        r9_1 = rdi << 2
    
    r13 = 1

int32_t rbx_3 = var_f8
int64_t rsi_1 = rdi - 1
int32_t r11 = 0
int32_t var_ec = 0
int32_t r10_1 = 0
int64_t var_c0 = rsi_1
int32_t var_f4 = 0
int64_t var_d8 = sx.q(r13)

while (true)
    int32_t rcx_4 = 1
    int32_t var_f0_1 = 1
    int64_t r9_8
    
    while (true)
        int64_t rax_4 = sx.q(rcx_4)
        int32_t r15_1 = sx.d((&data_1436fdb10)[rax_4])
        int32_t rdx_3 = *(r9_1 + r14)
        int64_t r9_2 = rsi_1
        int32_t var_e4_1 = rdx_3
        int32_t rdi_1 = rdx_3
        int32_t rax_6 = r15_1 << 4
        
        if (rsi_1 s>= 0)
            int32_t r10_2 = sx.d(rax_6.w)
            int64_t temp6_1
            
            do
                rdi_1 = rdi_1 * (((rax_6 s>> 0xf) + 1) s>> 1) + ((zx.d(rdi_1.w) * r10_2) s>> 0x10)
                    + (rdi_1 s>> 0x10) * r10_2 + (*r14)[r9_2]
                temp6_1 = r9_2
                r9_2 -= 1
            while (temp6_1 - 1 s>= 0)
            rcx_4 = var_f0_1
            rdx_3 = var_e4_1
            r10_1 = var_f4
        
        bool cond:1_1 = r8_1 s< 0
        
        if (r8_1 s> 0)
            goto label_14040c64d
        
        int16_t result
        
        if (rdi_1 s>= r10_1)
        label_14040c668:
            int32_t rax_10
            rax_10.b = rdi_1 == 0
            int32_t rbp_1 = -0x100
            int32_t i = 0
            var_f4 = rax_10
            
            do
                int32_t rax_11 = r15_1 + rbx_3
                int64_t r10_4 = var_c0
                int32_t r11_3 = (rax_11 s>> 1) + (rax_11 & 1)
                int32_t rax_14 = r11_3 << 4
                
                if (var_c0 s>= 0)
                    int32_t rbx_4 = sx.d(rax_14.w)
                    int64_t temp14_1
                    
                    do
                        rdx_3 = rdx_3 * (((rax_14 s>> 0xf) + 1) s>> 1)
                            + ((zx.d(rdx_3.w) * rbx_4) s>> 0x10) + (rdx_3 s>> 0x10) * rbx_4
                            + (*r14)[r10_4]
                        temp14_1 = r10_4
                        r10_4 -= 1
                    while (temp14_1 - 1 s>= 0)
                    rbx_3 = var_f8
                
                bool cond:2_1 = r8_1 s< 0
                
                if (r8_1 s> 0)
                    goto label_14040c6e2
                
                if (rdx_3 s>= 0)
                    r15_1 = r11_3
                    rdi_1 = rdx_3
                else
                    cond:2_1 = r8_1 s< 0
                label_14040c6e2:
                    
                    if (cond:2_1 || rdx_3 s> 0)
                        rbx_3 = r11_3
                        var_f8 = rbx_3
                        r8_1 = rdx_3
                        rbp_1 += 0x80 u>> i.b
                    else
                        r15_1 = r11_3
                        rdi_1 = rdx_3
                
                rdx_3 = var_e4_1
                i += 1
            while (i s< 3)
            
            r12 = 1
            int32_t temp17_1
            int32_t temp18_1
            temp17_1:temp18_1 = sx.q(r8_1)
            
            if ((temp18_1 ^ temp17_1) - temp17_1 s>= 0x10000)
                rbp_1 += divs.dp.d(sx.q(r8_1), (r8_1 - rdi_1) s>> 5)
            else
                int32_t rcx_17 = r8_1 - rdi_1
                
                if (r8_1 != rdi_1)
                    rbp_1 += divs.dp.d(sx.q((rcx_17 s>> 1) + (r8_1 << 5)), rcx_17)
            
            result = 0x7fff
            int32_t rcx_21 = (var_f0_1 << 8) + rbp_1
            
            if (rcx_21 s< 0x7fff)
                result = rcx_21.w
            
            arg1[var_d8] = result
            r13 += 1
            var_d8 += 1
            
            if (r13 s< arg3)
                rsi_1 = var_c0
                rcx_4 = var_f0_1
                r10_1 = var_f4
                r11 = var_ec
                r9_1 = var_e0
                r14 = (&var_a0)[zx.q(r13) & 1]
                rbx_3 = sx.d(*((rax_4 << 1) + 0x1436fdb0e))
                var_f8 = rbx_3
                r8_1 = 0x1000 - ((r13 & 2) << 0xc)
                continue
        else
            cond:1_1 = r8_1 s< 0
        label_14040c64d:
            
            if (not(cond:1_1) && rdi_1 s<= neg.d(r10_1))
                goto label_14040c668
            
            r9_1 = var_e0
            rcx_4 += 1
            rbx_3 = r15_1
            r8_1 = rdi_1
            r10_1 = 0
            var_f4 = 0
            var_f0_1 = rcx_4
            var_f8 = rbx_3
            
            if (rcx_4 s<= 0x80)
                continue
            else
                var_ec = r11 + 1
                
                if (r11 + 1 s<= 0x1e)
                    sub_1403e8890(arg2, arg3, 0x10000 - sx.d((r11 + 1).w + 0xa) * sx.d((r11 + 1).w))
                    sub_14040c9e0(arg2, &var_68, &var_90, rbx_1)
                    rbx_3 = 0x2000
                    r8_1 = *rax_2
                    r14 = &var_68
                    var_f8 = 0x2000
                    r9_8 = rsi_1
                    break
                
                result = (divs.dp.d(0:0x8000, arg3 + 1)).w
                *arg1 = result
                
                if (arg3 s> 1)
                    void* rcx_30 = &arg1[1]
                    
                    do
                        result = r12.w + 1
                        r12 += 1
                        rcx_30 += 2
                        result *= *arg1
                        *(rcx_30 - 2) = result
                    while (r12 s< arg3)
        
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    if (rsi_1 s>= 0)
        int64_t temp15_1
        
        do
            r8_1 = r8_1 * 2 + var_68[r9_8]
            temp15_1 = r9_8
            r9_8 -= 1
        while (temp15_1 - 1 s>= 0)
    
    if (r8_1 s>= 0)
        r10_1 = var_f4
        r11 = var_ec
        r9_1 = var_e0
        r13 = 0
        var_d8 = 0
    else
        r14 = &var_90
        int64_t r9_9 = rsi_1
        *arg1 = 0
        r8_1 = *(&var_90 + var_e0)
        
        if (rsi_1 s>= 0)
            int64_t temp16_1
            
            do
                r8_1 = r8_1 * 2 + var_90[r9_9]
                temp16_1 = r9_9
                r9_9 -= 1
            while (temp16_1 - 1 s>= 0)
        
        r10_1 = var_f4
        r11 = var_ec
        r9_1 = var_e0
        r13 = 1
        var_d8 = 1
