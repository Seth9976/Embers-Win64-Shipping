// 函数: sub_142aca570
// 地址: 0x142aca570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result_1 = 0
int32_t r14 = 0
int32_t var_98 = arg3
int32_t r12 = 0
int64_t rbp = 0
int32_t rdi = arg3
int32_t var_80
int32_t var_60[0x6]

while (true)
    int16_t rax_2 = *(arg2 + 8)
    int32_t rbx_1 = -1
    int32_t r15_1 = 0
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(arg2 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if (rdi s< rax_4)
        int32_t rax_5 = sub_142a486d0(arg2, rdi)
        rbx_1 = 0
        int64_t rcx_1 = 0
        int32_t* rax_7 = arg1 + 0x400
        
        while (true)
            if (rax_5 != *rax_7)
                rbx_1 += 1
                rcx_1 += 1
                rax_7 = &rax_7[1]
                
                if (rcx_1 s< 0xa)
                    continue
                
                goto label_142aca61b
            
            if (rbx_1 s< 0)
            label_142aca61b:
                int32_t rax_8 = sub_142a53ce0(rax_5)
                rbx_1 = rax_8
                
                if (rax_8 u> 9)
                    rbx_1 = -1
                    break
            
            r15_1 = sub_142a4a4f0(arg2, rdi, 1) - rdi
            break
        
        arg3 = var_98
    
    *(&var_80 + rbp) = rbx_1
    
    if (rbx_1 s< 0)
        break
    
    rdi += r15_1
    r14 += 1
    r12 += 1
    *(&var_60 + rbp) = rdi - arg3
    rbp += 4
    
    if (r12 s>= 6)
        break

uint64_t result

if (r14 != 0)
    if (r14 s> 0)
        uint64_t r11_1 = zx.q(var_80)
        
        while (true)
            int32_t rdx_3 = r14 - 1
            int32_t r8 = 0
            int32_t r9 = 0
            int32_t r10_1 = 0
            
            if (rdx_3 u<= 5)
                int64_t var_7c
                int64_t var_78
                int64_t var_74
                int64_t var_70
                
                switch (rdx_3)
                    case 0
                        r8 = r11_1.d
                    case 1
                        r8 = (var_7c + (zx.q((r11_1 * 5).d) << 1)).d
                    case 2
                        r8 = r11_1.d
                        r9 = (var_78 + (zx.q((var_7c * 5).d) << 1)).d
                    case 3
                        r8 = (var_7c + (zx.q((r11_1 * 5).d) << 1)).d
                        r9 = ((var_78 * 5).d << 1) + var_74.d
                    case 4
                        r8 = r11_1.d
                        r9 = (var_78 + (zx.q((var_7c * 5).d) << 1)).d
                        r10_1 = (var_70 + (zx.q((var_74 << 2).d + var_74.d) << 1)).d
                    case 5
                        r8 = (var_7c + (zx.q((r11_1 * 5).d) << 1)).d
                        int32_t var_6c
                        r10_1 = var_6c + ((var_70 * 5).d << 1)
                        r9 = ((var_78 * 5).d << 1) + var_74.d
                
                if (r8 s> 0x17 || r9 s> 0x3b || r10_1 s> 0x3b)
                    r14 = rdx_3
                    
                    if (rdx_3 s<= 0)
                        break
                    
                    continue
            
            result_1 = ((r8 * 0x3c + r9) * 0x3c + r10_1) * 0x3e8
            *arg4 = var_60[sx.q(r14 - 1)]
            break
    
    result = zx.q(result_1)
else
    *arg4 = 0
    result = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
