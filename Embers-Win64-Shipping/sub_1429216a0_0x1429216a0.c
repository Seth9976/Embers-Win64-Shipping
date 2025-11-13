// 函数: sub_1429216a0
// 地址: 0x1429216a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a8)
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t r14 = 0
int32_t r8 = arg5
int32_t var_198 = 0

if (r8 s< 0)
    r8 = 0
else if (r8 s> 0x80)
    r8 = 0x80

int32_t rcx = r8

if (r8 s> 6)
    rcx = 6

arg5 = r8
int32_t var_194 = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8 - rcx + 3)
int32_t temp0 = divs.dp.d(sx.q(arg4), 0x10 - ((temp3 + (temp2 & 3)) s>> 2))
int64_t rbp = sx.q(0x10 - ((temp3 + (temp2 & 3)) s>> 2))
int32_t rdx_3 = temp0 + 1

if (temp0 * (0x10 - ((temp3 + (temp2 & 3)) s>> 2)) s>= arg4)
    rdx_3 = temp0

if (rdx_3 s> 0)
    int32_t r15_1 = 0
    
    while (true)
        int32_t var_1a0_1 = r15_1
        char* const var_1a8_1 = &data_1437020ab
        int32_t rdi_1 = 0
        char var_178[0x2]
        int64_t rbx_1 = sx.q(sub_1428b7080(&var_178, 0x121, "%*s%04x - ", zx.q(r8)))
        int64_t rsi_1 = 0
        
        if (rbp s> 0)
            void* r14_1 = &var_178[rbx_1]
            
            do
                int64_t rcx_4 = sx.q(rbx_1.d)
                
                if (0x121 - rcx_4 u> 3)
                    if (r15_1 + rdi_1 s< arg4)
                        int32_t rdx_4 = 0x20
                        
                        if (rdi_1 == 7)
                            rdx_4 = 0x2d
                        
                        var_1a8_1.d = rdx_4
                        sub_1428b7080(&var_178[rcx_4], 4, "%02x%c", 
                            zx.q(*(sx.q(r15_1) + rsi_1 + arg3)))
                    else
                        *r14_1 = 0x202020
                    
                    rbx_1 = zx.q(rbx_1.d + 3)
                    r14_1 += 3
                
                rdi_1 += 1
                rsi_1 += 1
            while (rsi_1 s< rbp)
            
            r14 = var_198
        
        int64_t rcx_6 = sx.q(rbx_1.d)
        
        if (0x121 - rcx_6 u> 2)
            rbx_1 = zx.q(rbx_1.d + 2)
            *(&var_178 + rcx_6) = 0x2020
            char var_176[0x12e]
            var_176[rcx_6] = 0
        
        int64_t r9_3 = 0
        
        if (rbp s> 0)
            int64_t r10_1 = sx.q(rbx_1.d)
            int32_t r11_1 = r15_1
            
            while (r11_1 s< arg4)
                if (0x121 - sx.q(rbx_1.d) u> 1)
                    char r8_1 = 0x2e
                    char rcx_8 = (sx.q(r15_1) + r9_3)[arg3]
                    
                    if (rcx_8 - 0x20 u<= 0x5e)
                        r8_1 = rcx_8
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                    var_178[r10_1] = r8_1
                    r10_1 += 1
                    
                    if (r10_1 u>= 0x121)
                        goto label_14292196c
                    
                    var_178[r10_1] = 0
                
                r11_1 += 1
                r9_3 += 1
                
                if (r9_3 s>= rbp)
                    break
        
        int64_t rdx_6 = sx.q(rbx_1.d)
        
        if (0x121 - rdx_6 u> 1)
            var_178[rdx_6] = 0xa
            rdx_6 = sx.q(rbx_1.d + 1)
            
            if (rdx_6 u>= 0x121)
            label_14292196c:
                __report_rangecheckfailure()
                noreturn
            
            var_178[rdx_6] = 0
        
        r15_1 += 0x10 - ((temp3 + (temp2 & 3)) s>> 2)
        r14 += arg1(&var_178, rdx_6, arg2)
        int32_t rax_23 = var_194 + 1
        var_198 = r14
        var_194 = rax_23
        
        if (rax_23 s>= rdx_3)
            break
        
        r8 = arg5

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(r14)
