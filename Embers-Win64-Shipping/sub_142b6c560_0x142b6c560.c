// 函数: sub_142b6c560
// 地址: 0x142b6c560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* result = *(arg1 + 0x120)
int64_t rdx = arg5
int64_t var_b8 = rdx
void* r10 = arg1
void* result_2 = result

if (result != 0)
    void* r8_1 = sx.q(*(result + 0x28)) + result
    void* rcx_1 = sx.q(*(result + 0x34)) + result
    int32_t rbx_1 = 0
    void* r13_2 = sx.q(*(result + 0x3c)) + result
    int64_t r11_1 = sx.q(*(result + 0x2c))
    void* var_78_1 = r8_1
    void* var_88_1 = rcx_1
    int32_t r14_1
    
    if (arg4 != 2)
        if (*(r10 + 0xfc) != 0xdb)
            r14_1 = 1
        
        if (*(r10 + 0xfc) == 0xdb || arg4 != 0)
            r14_1 = 2
    else
        r14_1 = arg4 + 1
    
    result = nullptr
    int64_t var_70_1 = r11_1
    void* result_1 = nullptr
    int64_t r9 = r11_1
    
    if (r11_1.d s> 0)
        do
            uint64_t rax_2 = zx.q(*(r8_1 + (result << 1)))
            
            if (rax_2.d s<= r11_1.d)
                rbx_1 += 0x400
            else
                void* rax_3 = r8_1 + (rax_2 << 1)
                int64_t i = 0
                void* var_80_1 = rax_3
                int64_t i_1 = 0
                
                do
                    uint64_t rax_5 = zx.q(zx.d(*(rax_3 + (i << 1))) << 2)
                    
                    if (rax_5.d == 0)
                        rbx_1 += 0x10
                    else
                        void* rdi_1 = rcx_1 + (rax_5 << 1)
                        
                        do
                            uint64_t rax_6 = zx.q(*rdi_1)
                            rdi_1 += 2
                            int32_t rax_7 = *(r13_2 + (rax_6 << 2))
                            
                            if (rax_7 != 0)
                                uint32_t r8_3 = rax_7 u>> 0x18
                                
                                if (r8_3 != 0)
                                    bool cond:0_1
                                    
                                    if (arg3 != 0)
                                        cond:0_1 = (rax_7 & 0x20000000) != 0
                                    else
                                        cond:0_1 = (rax_7 & 0xa0000000) != 0x80000000
                                    
                                    if (not(cond:0_1))
                                        int32_t r8_5 = r8_3 & 0x1f
                                        
                                        if (r8_5 u>= r14_1)
                                            if (arg4 == 2)
                                                if (r8_5 != 3 || (rax_7 & 0xffffff) u> 0x82ffff)
                                                    rdx = var_b8
                                                else
                                                label_142b6c7d2:
                                                    arg2[1](*arg2, zx.q(rbx_1))
                                                    r10 = arg1
                                                    rdx = var_b8
                                            else if (arg4 == 3)
                                                if (r8_5 == 2
                                                        && (rax_7 & 0xffffff) - 0x8140 u<= 0x6ebc)
                                                    goto label_142b6c7d2
                                                
                                                rdx = var_b8
                                            else
                                                int16_t rdx_6
                                                
                                                if (arg4 != 4)
                                                    if (arg4 != 5)
                                                        goto label_142b6c7d2
                                                    
                                                    if (r8_5 == 2)
                                                        rdx_6 = 0x5c5d
                                                        goto label_142b6c77c
                                                    
                                                    rdx = var_b8
                                                else if (r8_5 != 2)
                                                    rdx = var_b8
                                                else
                                                    rdx_6 = 0x5d5d
                                                label_142b6c77c:
                                                    int16_t rax_8 = rax_7.w & 0xffff
                                                    
                                                    if (0x5e5f + rax_8 u> rdx_6)
                                                        rdx = var_b8
                                                    else
                                                        rax_8.b += 0x5f
                                                        
                                                        if (rax_8.b u<= 0x5d)
                                                            goto label_142b6c7d2
                                                        
                                                        rdx = var_b8
                                else
                                    int16_t var_68
                                    int32_t rcx_2
                                    
                                    if (rbx_1 u> 0xffff)
                                        var_68 = (rbx_1 s>> 0xa).w - 0x2840
                                        int16_t var_66_1 = (rbx_1.w & 0x3ff) | 0xdc00
                                        rcx_2 = 2
                                    else
                                        var_68 = rbx_1.w
                                        rcx_2 = r8_3 + 1
                                    
                                    sub_142b6b9c0(r10, result_2, arg2, arg3, r14_1, rbx_1, &var_68, 
                                        rcx_2, rax_7, rdx)
                                    r10 = arg1
                                    rdx = var_b8
                            
                            rbx_1 += 1
                        while ((rbx_1.b & 0xf) != 0)
                        
                        i = i_1
                        rcx_1 = var_88_1
                    
                    rax_3 = var_80_1
                    i += 1
                    i_1 = i
                while (i s< 0x40)
                
                r9 = var_70_1
                r8_1 = var_78_1
                r11_1 = zx.q(r9.d)
            
            result = result_1 + 1
            result_1 = result
        while (result s< r9)

__security_check_cookie(rax_1 ^ &var_108)
return result
