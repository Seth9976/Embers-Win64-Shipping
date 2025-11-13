// 函数: sub_141c7c0a0
// 地址: 0x141c7c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2098)
void var_20c8
int64_t rax_1 = __security_cookie ^ &var_20c8
int32_t rax_2 = *(arg1 + 0x110)
int32_t r9 = arg5
void* r11 = arg1
int32_t rbx = arg6
int64_t r14 = arg3
uint64_t r12 = 0
uint64_t r13 = 0
uint64_t rsi
rsi.b = 0
void* r8 = arg2
uint64_t rdx_1 = zx.q(r9 + 1) & 0xfffffffe
int32_t r10_1 = (rbx + 1) & 0xfffffffe
int32_t var_2090 = rdx_1.d
uint64_t rcx = 0
int32_t var_2088 = r10_1
int32_t var_2094 = 0
uint32_t rdi_2 = (arg4 u>> 2) - (rdx_1 << 2).d
uint32_t var_2084 = rdi_2

if (*(r11 + 0xa) u> 0)
    do
        uint32_t* r15_1 = *(r14 + (rcx << 3))
        int32_t rcx_1 = 0
        int32_t var_20a8_1 = 0
        
        if (r10_1 != 0)
            int64_t rax_4 = sx.q(rdi_2) << 2
            int64_t var_2070_1 = rax_4
            
            do
                r14.b = rcx_1 u< rbx
                int32_t i = 0
                
                if (rdx_1.d != 0)
                    int32_t rdi_4 = rcx_1 & 1
                    int32_t* var_2078_1 = r11 + 0xb0
                    int32_t var_208c_1 = rdi_4
                    void var_2052
                    void* rbx_1 = &var_2052
                    
                    do
                        if (r14.b == 0 || i u>= r9)
                            r14.b = 0
                        else
                            r14.b = 1
                        
                        if (((i.b | rcx_1.b) & 1) == 0)
                            int32_t rax_8 = sub_141c79cd0(r8, r11 + 0x10)
                            r8 = arg2
                            rsi = zx.q(rax_8)
                            r11 = arg1
                        
                        char rcx_3
                        
                        if (rdi_4 == 0)
                            rcx_3 = rsi.b
                            rsi.b u>>= 2
                            rcx_3 &= 3
                            *(rbx_1 - 6) = zx.w(rsi.b) & 3
                            rsi.b u>>= 2
                        else
                            rcx_3 = *(rbx_1 - 6)
                        
                        void* rdi_6
                        
                        if (rcx_3 != 0)
                            rdi_6 = arg2
                            
                            if (rcx_3 != 1)
                                r12 = zx.q(*(rbx_1 - 2))
                                r13 = zx.q(*rbx_1)
                            else
                                *(rbx_1 - 2) = r12.w
                                *rbx_1 = r13.w
                        else
                            rdi_6 = arg2
                            int32_t rcx_5 = sub_141c79cd0(r8, r11 + 0x60) + r12.d
                            r12 = zx.q(rcx_5 - rax_2)
                            
                            if (rcx_5 u< rax_2)
                                r12 = zx.q(rcx_5)
                            
                            *(rbx_1 - 2) = r12.w
                            int32_t rcx_7 = sub_141c79cd0(rdi_6, r11 + 0x60) + r13.d
                            r13 = zx.q(rcx_7 - rax_2)
                            
                            if (rcx_7 u< rax_2)
                                r13 = zx.q(rcx_7)
                            
                            *rbx_1 = r13.w
                        
                        uint64_t rdi_7 = zx.q(sub_141c79cd0(rdi_6, var_2078_1))
                        uint64_t rax_14 = sub_141c79cd0(arg2, var_2078_1)
                        r11 = arg1
                        
                        if (r14.b != 0)
                            int64_t r8_1 = *(r11 + 0x120)
                            int16_t* r10_2 = r8_1 + (zx.q((rax_14 * 3).d) << 1)
                            int16_t* r9_1 = r8_1 + (zx.q((rdi_7 * 3).d) << 1)
                            *r15_1 = zx.d(*(*(r11 + 0x108) + (r12 << 1))) | zx.d(*r9_1) << 0x10
                            r15_1[1] = zx.d(r9_1[2]) << 0x10 | zx.d(r9_1[1])
                            r15_1[2] = zx.d(*(*(r11 + 0x108) + (r13 << 1))) | zx.d(*r10_2) << 0x10
                            r15_1[3] = zx.d(r10_2[2]) << 0x10 | zx.d(r10_2[1])
                        
                        rdx_1 = zx.q(var_2090)
                        i += 1
                        r8 = arg2
                        rbx_1 += 8
                        rcx_1 = var_20a8_1
                        r15_1 = &r15_1[4]
                        rdi_4 = var_208c_1
                        r9 = arg5
                    while (i u< rdx_1.d)
                    
                    rax_4 = var_2070_1
                    r10_1 = var_2088
                    rbx = arg6
                
                rcx_1 += 1
                r15_1 += rax_4
                var_20a8_1 = rcx_1
            while (rcx_1 u< r10_1)
            
            rdi_2 = var_2084
            r14 = arg3
        
        rcx = zx.q(var_2094 + 1)
        var_2094 = rcx.d
    while (rcx.d u< zx.d(*(r11 + 0xa)))

uint32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_20c8)
return result
