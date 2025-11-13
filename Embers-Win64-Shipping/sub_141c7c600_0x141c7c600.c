// 函数: sub_141c7c600
// 地址: 0x141c7c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2088)
void var_20b8
int64_t rax_1 = __security_cookie ^ &var_20b8
int32_t rax_2 = *(arg1 + 0xe0)
int32_t rcx = *(arg1 + 0x110)
int32_t r9 = arg5
int64_t rsi = arg3
int32_t r11 = arg6
uint64_t r15 = 0
uint64_t r12 = 0
uint64_t rdi
rdi.b = 0
void* r8 = arg2
uint64_t rdx_1 = zx.q(r9 + 1) & 0xfffffffe
uint64_t rcx_1 = 0
int32_t var_2074 = rdx_1.d
int32_t var_2088 = 0
int32_t r10_1 = (r11 + 1) & 0xfffffffe
int32_t var_2070 = r10_1
uint32_t rbx_2 = (arg4 u>> 2) - (rdx_1 << 2).d
uint32_t var_206c = rbx_2

if (*(arg1 + 0xa) u> 0)
    int64_t rbp
    int64_t var_38_1 = rbp
    
    do
        uint32_t* r14_1 = *(rsi + (rcx_1 << 3))
        int32_t rcx_2 = 0
        int32_t var_2098_1 = 0
        
        if (r10_1 != 0)
            int64_t rax_4 = sx.q(rbx_2) << 2
            int64_t var_2068_1 = rax_4
            
            do
                rbp.b = rcx_2 u< r11
                int32_t i = 0
                
                if (rdx_1.d != 0)
                    void var_2054
                    void* rbx_3 = &var_2054
                    int32_t rax_6 = rcx_2 & 1
                    
                    do
                        if (rbp.b == 0 || i u>= r9)
                            rbp.b = 0
                        else
                            rbp.b = 1
                        
                        if (((i.b | rcx_2.b) & 1) == 0)
                            int32_t rax_9 = sub_141c79cd0(r8, arg1 + 0x10)
                            r8 = arg2
                            rdi = zx.q(rax_9)
                        
                        char rcx_4
                        
                        if (rax_6 == 0)
                            rcx_4 = rdi.b
                            rdi.b u>>= 2
                            rcx_4 &= 3
                            *(rbx_3 - 4) = zx.w(rdi.b) & 3
                            rdi.b u>>= 2
                        else
                            rcx_4 = *(rbx_3 - 4)
                        
                        if (rcx_4 == 0)
                            int32_t rcx_6 = sub_141c79cd0(r8, arg1 + 0x38) + r15.d
                            r15 = zx.q(rcx_6 - rax_2)
                            
                            if (rcx_6 u< rax_2)
                                r15 = zx.q(rcx_6)
                            
                            *(rbx_3 - 2) = r15.w
                            int32_t rcx_8 = sub_141c79cd0(arg2, arg1 + 0x60) + r12.d
                            r12 = zx.q(rcx_8 - rcx)
                            
                            if (rcx_8 u< rcx)
                                r12 = zx.q(rcx_8)
                            
                            *rbx_3 = r12.w
                        else if (rcx_4 != 1)
                            r15 = zx.q(*(rbx_3 - 2))
                            r12 = zx.q(*rbx_3)
                        else
                            *(rbx_3 - 2) = r15.w
                            *rbx_3 = r12.w
                        
                        int32_t rax_14 = sub_141c79cd0(arg2, arg1 + 0x88)
                        uint64_t rax_15 = sub_141c79cd0(arg2, arg1 + 0xb0)
                        
                        if (rbp.b != 0)
                            int64_t rcx_11 = *(arg1 + 0x120)
                            uint64_t rdx_7 = zx.q((rax_15 * 3).d)
                            void* r9_1 = rcx_11 + (rdx_7 << 1)
                            *r14_1 = zx.d(*(*(arg1 + 0x108) + (r12 << 1)))
                                | zx.d(*(rcx_11 + (rdx_7 << 1))) << 0x10
                            r14_1[1] = zx.d(*(r9_1 + 4)) << 0x10 | zx.d(*(r9_1 + 2))
                            r14_1[2] = *(*(arg1 + 0xd8) + (r15 << 2))
                            r14_1[3] = *(*(arg1 + 0xf0) + (zx.q(rax_14) << 2))
                        
                        rdx_1 = zx.q(var_2074)
                        i += 1
                        r8 = arg2
                        rbx_3 += 8
                        rcx_2 = var_2098_1
                        r14_1 = &r14_1[4]
                        r9 = arg5
                    while (i u< rdx_1.d)
                    
                    rax_4 = var_2068_1
                    r10_1 = var_2070
                    r11 = arg6
                
                rcx_2 += 1
                r14_1 += rax_4
                var_2098_1 = rcx_2
            while (rcx_2 u< r10_1)
            
            rbx_2 = var_206c
            rsi = arg3
        
        rcx_1 = zx.q(var_2088 + 1)
        var_2088 = rcx_1.d
    while (rcx_1.d u< zx.d(*(arg1 + 0xa)))

uint32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_20b8)
return result
