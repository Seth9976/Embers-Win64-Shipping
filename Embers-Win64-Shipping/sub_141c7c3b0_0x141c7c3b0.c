// 函数: sub_141c7c3b0
// 地址: 0x141c7c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2090)
void var_20b8
int64_t rax_1 = __security_cookie ^ &var_20b8
int32_t rax_2 = *(arg1 + 0xe0)
int32_t r11 = arg6
uint64_t r10 = 0
int64_t rdi = arg3
void* r8 = arg2
int32_t rdx = arg5
int32_t r9_1 = (r11 + 1) & 0xfffffffe
uint64_t rbp = 0
int32_t var_207c = r9_1
uint64_t rsi
rsi.b = 0
int32_t var_2098 = 0
int32_t rcx_1 = (rdx + 1) & 0xfffffffe
int32_t var_2080 = rcx_1
uint32_t rbx_2 = (arg4 u>> 2) - rcx_1 * 2
uint32_t var_2078 = rbx_2

if (*(arg1 + 0xa) u> 0)
    int64_t r14
    int64_t var_38_1 = r14
    
    do
        int32_t* r15_1 = *(rdi + (r10 << 3))
        int32_t r12_1 = 0
        
        if (r9_1 != 0)
            int64_t rax_4 = sx.q(rbx_2) << 2
            int64_t var_2070_1 = rax_4
            
            do
                r14.b = r12_1 u< r11
                int32_t rdi_1 = 0
                
                if (rcx_1 != 0)
                    void var_2056
                    void* rbx_3 = &var_2056
                    
                    do
                        if (r14.b == 0 || rdi_1 u>= rdx)
                            r14.b = 0
                        else
                            r14.b = 1
                        
                        if (((rdi_1.b | r12_1.b) & 1) == 0)
                            int32_t rax_9 = sub_141c79cd0(r8, arg1 + 0x10)
                            r8 = arg2
                            rsi = zx.q(rax_9)
                        
                        char rcx_3
                        
                        if ((r12_1 & 1) == 0)
                            rcx_3 = rsi.b
                            rsi.b u>>= 2
                            rcx_3 &= 3
                            *(rbx_3 - 2) = zx.w(rsi.b) & 3
                            rsi.b u>>= 2
                        else
                            rcx_3 = *(rbx_3 - 2)
                        
                        if (rcx_3 == 0)
                            int32_t rcx_5 = sub_141c79cd0(r8, arg1 + 0x38) + rbp.d
                            rbp = zx.q(rcx_5 - rax_2)
                            
                            if (rcx_5 u< rax_2)
                                rbp = zx.q(rcx_5)
                            
                            *rbx_3 = rbp.w
                        else if (rcx_3 != 1)
                            rbp = zx.q(*rbx_3)
                        else
                            *rbx_3 = rbp.w
                        
                        int32_t rax_13 = sub_141c79cd0(arg2, arg1 + 0x88)
                        
                        if (r14.b != 0)
                            *r15_1 = *(*(arg1 + 0xd8) + (rbp << 2))
                            r15_1[1] = *(*(arg1 + 0xf0) + (zx.q(rax_13) << 2))
                        
                        rcx_1 = var_2080
                        rdi_1 += 1
                        r8 = arg2
                        rbx_3 += 8
                        rdx = arg5
                        r15_1 = &r15_1[2]
                    while (rdi_1 u< rcx_1)
                    
                    rax_4 = var_2070_1
                    r9_1 = var_207c
                    r11 = arg6
                
                r12_1 += 1
                r15_1 += rax_4
            while (r12_1 u< r9_1)
            
            r10 = zx.q(var_2098)
            rbx_2 = var_2078
            rdi = arg3
        
        r10 = zx.q(r10.d + 1)
        var_2098 = r10.d
    while (r10.d u< zx.d(*(arg1 + 0xa)))

uint32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_20b8)
return result
