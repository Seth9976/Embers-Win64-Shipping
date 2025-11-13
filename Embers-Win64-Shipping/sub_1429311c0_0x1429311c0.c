// 函数: sub_1429311c0
// 地址: 0x1429311c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
char* rbx = arg4
char var_48 = 0
char* rdi = arg2
void* rsi = arg1
int32_t r13 = 0
int64_t* result = sub_1428a7510()
int64_t* result_1 = result

if (result == 0)
    return result

int64_t rax = -1

do
    rax += 1
while (rbx[rax] != 0)

if (sub_1428a7260(result_1, sx.q(rax.d + 1)) != 0)
    while (true)
        char r8 = *rbx
        int32_t rax_3
        
        if (r8 u<= 0x7f)
            rax_3 = zx.d(*(*(rsi + 8) + (zx.q(r8) << 1))) u>> 6 & 1
        else
            rax_3 = 0
        
        int64_t r14_1 = sx.q(r13)
        
        if (rax_3 != 0)
            while (true)
                char rdx_1 = rbx[1]
                rbx = &rbx[1]
                
                if (rdx_1 u<= 0x7f && (*(*(rsi + 8) + (zx.q(rdx_1) << 1)) & 8) != 0)
                    break
                
                if (rdx_1 == r8)
                    break
                
                if (rdx_1 u<= 0x7f)
                    int64_t rcx_3 = *(rsi + 8)
                    
                    if ((*(rcx_3 + (zx.q(rdx_1) << 1)) & 0x20) != 0)
                        rdx_1 = rbx[1]
                        rbx = &rbx[1]
                        
                        if (rdx_1 u<= 0x7f && (*(rcx_3 + (zx.q(rdx_1) << 1)) & 8) != 0)
                            break
                
                r13 += 1
                *(r14_1 + result_1[1]) = rdx_1
                r14_1 += 1
        else if (r8 u> 0x7f)
        label_142931406:
            
            if (r8 != 0x24)
                r13 += 1
                rbx = &rbx[1]
                *(r14_1 + result_1[1]) = r8
                continue
            
            char rax_21 = rbx[1]
            char* r12 = nullptr
            int32_t rdx_5
            
            if (rax_21 != 0x7b)
                rdx_5 = 0
                
                if (rax_21 == 0x28)
                    rdx_5 = 0x29
            else
                rdx_5 = 0x7d
            
            char* r8_1 = &rbx[2]
            char* r9 = rdi
            
            if (rdx_5 == 0)
                r8_1 = &rbx[1]
            
            char* rdi_1 = r8_1
            
            while (true)
                char rax_22 = *rdi_1
                
                if (rax_22 u> 0x7f)
                    break
                
                if ((*(*(rsi + 8) + (zx.q(rax_22) << 1)) & 0x107) == 0)
                    break
                
                rdi_1 = &rdi_1[1]
            
            if (*rdi_1 == 0x3a && rdi_1[1] == 0x3a)
                r12 = rdi_1
                *rdi_1 = 0
                rdi_1 = &rdi_1[2]
                var_48 = 0x3a
                r9 = r8_1
                r8_1 = rdi_1
                
                while (true)
                    char rax_24 = *rdi_1
                    
                    if (rax_24 u> 0x7f)
                        break
                    
                    if ((*(*(rsi + 8) + (zx.q(rax_24) << 1)) & 0x107) == 0)
                        break
                    
                    rdi_1 = &rdi_1[1]
            
            char rbp_1 = *rdi_1
            char* r15_1 = rdi_1
            *rdi_1 = 0
            
            if (rdx_5 == 0)
                goto label_1429314c1
            
            int32_t var_58_1
            int32_t r8_4
            
            if (sx.d(rbp_1) != rdx_5)
                var_58_1 = 0x255
                r8_4 = 0x66
            else
                rdi_1 = &rdi_1[1]
            label_1429314c1:
                char* rsi_1 = sub_142931870(rsi, r9, r8_1)
                
                if (r12 != 0)
                    *r12 = var_48
                
                *r15_1 = rbp_1
                
                if (rsi_1 == 0)
                    var_58_1 = 0x269
                    r8_4 = 0x68
                else
                    void* rdx_7 = -ffffffffffffffff
                    
                    do
                        rdx_7 += 1
                    while (*(rsi_1 + rdx_7) != 0)
                    
                    result_1 = result
                    void* rdx_9 = rdx_7 + rbx - rdi_1 + *result_1
                    
                    if (rdx_9 u> 0x10000)
                        sub_1428a5670(0xe, 0x65, 0x74, "crypto\conf\conf_def.c", 0x26e)
                        break
                    
                    if (sub_1428a73a0(result_1, rdx_9) == 0)
                        sub_1428a5670(0xe, 0x65, 0x41, "crypto\conf\conf_def.c", 0x272)
                        break
                    
                    for (char i = *rsi_1; i != 0; i = *rsi_1)
                        rsi_1 = &rsi_1[1]
                        r13 += 1
                        r14_1 += 1
                        *(r14_1 + result_1[1] - 1) = i
                    
                    rsi = arg1
                    rbx = rdi_1
                    rdi = arg2
                    *r15_1 = rbp_1
                    continue
            
            sub_1428a5670(0xe, 0x65, r8_4, "crypto\conf\conf_def.c", var_58_1)
            result_1 = result
            break
        else
            if ((*(*(rsi + 8) + (zx.q(r8) << 1)) & 0x400) == 0)
                if (r8 u<= 0x7f)
                    int64_t rdx_3 = *(rsi + 8)
                    
                    if ((*(rdx_3 + (zx.q(r8) << 1)) & 0x20) != 0)
                        char rcx_7 = rbx[1]
                        rbx = &rbx[2]
                        
                        if (rcx_7 u> 0x7f || (*(rdx_3 + (zx.q(rcx_7) << 1)) & 8) == 0)
                            if (rcx_7 == 0x72)
                                r13 += 1
                                *(r14_1 + result_1[1]) = 0xd
                                continue
                            else if (rcx_7 == 0x6e)
                                r13 += 1
                                *(r14_1 + result_1[1]) = 0xa
                                continue
                            else if (rcx_7 != 0x62)
                                char rdx_4 = rcx_7
                                
                                if (rcx_7 == 0x74)
                                    rdx_4 = 9
                                
                                r13 += 1
                                *(r14_1 + result_1[1]) = rdx_4
                                continue
                            else
                                r13 += 1
                                *(r14_1 + result_1[1]) = 8
                                continue
                        
                        goto label_142931595
                    
                    if (r8 u<= 0x7f && (*(*(rsi + 8) + (zx.q(r8) << 1)) & 8) != 0)
                    label_142931595:
                        *(r14_1 + result_1[1]) = 0
                        sub_1428a6780(*arg3)
                        *arg3 = result_1[1]
                        sub_1428a6780(result_1)
                        return 1
                
                goto label_142931406
            
            while (true)
                char rdx_2 = rbx[1]
                rbx = &rbx[1]
                
                if (rdx_2 u<= 0x7f && (*(*(rsi + 8) + (zx.q(rdx_2) << 1)) & 8) != 0)
                    break
                
                if (rdx_2 == r8)
                    if (rbx[1] != r8)
                        break
                    
                    rbx = &rbx[1]
                
                r13 += 1
                *(r14_1 + result_1[1]) = *rbx
                r14_1 += 1
        
        if (*rbx == r8)
            rbx = &rbx[1]

sub_1428a71f0(result_1)
return 0
