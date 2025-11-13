// 函数: sub_141c7cf40
// 地址: 0x141c7cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20a0)
void var_20d8
int64_t rax_1 = __security_cookie ^ &var_20d8
int32_t rax_2 = *(arg1 + 0xe0)
int64_t r15 = arg3
int32_t r10 = arg5
int32_t rbp = arg6
uint64_t r9 = 0
void* rbx = arg2
int32_t rax_3 = *(arg1 + 0x110)
uint64_t r8_1 = zx.q(r10 + 1) & 0xfffffffe
uint32_t rcx = 0
int32_t r11_1 = (rbp + 1) & 0xfffffffe
int32_t var_209c = r8_1.d
uint32_t rdx = 0
int32_t var_20a4 = r11_1
uint32_t var_20ac = 0
uint32_t rdi_2 = (arg4 u>> 2) - (r8_1 << 2).d
uint32_t var_20a8 = 0
uint32_t rsi = 0
uint32_t var_2070 = rdi_2
uint32_t r14 = 0
int32_t var_2094 = 0

if (*(arg1 + 0xa) u> 0)
    int64_t r12
    int64_t var_40_1 = r12
    
    do
        void* r9_1 = *(r15 + (r9 << 3))
        int32_t rax_4 = 0
        void* var_2088_1 = r9_1
        int32_t var_2098_1 = 0
        
        if (r11_1 != 0)
            int32_t rdi_3 = var_20a4
            int64_t r11_3 = sx.q(rdi_2) << 2
            int64_t var_2068_1 = r11_3
            
            do
                r12.b = rax_4 u< rbp
                int32_t r15_1 = 0
                
                if (r8_1.d != 0)
                    int32_t r8_3 = rax_4 & 1
                    int32_t var_2074_1 = r8_3
                    
                    do
                        if (r12.b == 0 || r15_1 u>= r10)
                            r12.b = 0
                        else
                            r12.b = 1
                        
                        uint64_t rax_5 = zx.q(r15_1 * 2)
                        uint64_t rbp_1 = zx.q(rax_5.d)
                        uint8_t rdi_4
                        void var_2058
                        
                        if (r8_3 == 0)
                            uint8_t rax_6 = sub_141c79cd0(rbx, arg1 + 0x10)
                            uint8_t rdx_2 = rax_6 u>> 2
                            rdi_4 = (rdx_2 & 0xc) | (rax_6 & 3)
                            rcx = var_20ac
                            rdx = var_20a8
                            *(&var_2058 + (rbp_1 << 3)) =
                                zx.w(((rdx_2 & 0x30) | (rax_6 & 0xc)) u>> 2)
                        else
                            rdi_4 = *(&var_2058 + (rax_5 << 3))
                        uint8_t rax_8 = rdi_4 & 3
                        int16_t var_2056[0xfff]
                        var_2054
                        
                        if (rax_8 == 0)
                            uint32_t rcx_4 = sub_141c79cd0(rbx, arg1 + 0x38) + rsi
                            rsi = rcx_4 - rax_2
                            
                            if (rcx_4 u< rax_2)
                                rsi = rcx_4
                            
                            int32_t rax_10 = sub_141c79cd0(rbx, arg1 + 0x60)
                            var_2056[rbp_1 * 4] = rsi.w
                            uint32_t rcx_6 = rax_10 + r14
                            r14 = rcx_6 - rax_3
                            
                            if (rcx_6 u< rax_3)
                                r14 = rcx_6
                            
                            *(&var_2054 + (rbp_1 << 3)) = r14.w
                        else if (rax_8 == 1)
                            var_2056[rbp_1 * 4] = rsi.w
                            *(&var_2054 + (rbp_1 << 3)) = r14.w
                        else if (rax_8 != 3)
                            rsi = zx.d(var_2056[rbp_1 * 4])
                            r14 = zx.d(*(&var_2054 + (rbp_1 << 3)))
                        else
                            rsi = rcx
                            var_2056[rbp_1 * 4] = rcx.w
                            r14 = rdx
                            *(&var_2054 + (rbp_1 << 3)) = rdx.w
                        
                        rdi_4 u>>= 2
                        int32_t rbx_1 = *(*(arg1 + 0xd8) + (zx.q(rsi) << 2))
                        int32_t var_20b8 = rbx_1
                        int32_t rax_12 = sub_141c79cd0(arg2, arg1 + 0x88)
                        int32_t rax_13 = sub_141c79cd0(arg2, arg1 + 0xb0)
                        
                        if (rdi_4 != 0)
                            rsi += sub_141c79cd0(arg2, arg1 + 0x38)
                            
                            if (rsi u>= rax_2)
                                rsi -= rax_2
                        
                        int64_t rbp_2 = rbp_1 | 1
                        rdx = zx.d(*(&var_2054 + (rbp_2 << 3)))
                        int32_t rax_17 = *(*(arg1 + 0xd8) + (zx.q(rsi) << 2))
                        rcx = zx.d(var_2056[rbp_2 * 4])
                        var_2056[rbp_2 * 4] = rsi.w
                        var_20ac = rcx
                        *(&var_2054 + (rbp_2 << 3)) = r14.w
                        int32_t var_20b4 = rax_17
                        var_20a8 = rdx
                        uint32_t* r9_3
                        
                        if (r12.b == 0)
                            r9_3 = var_2088_1
                        else
                            uint32_t r11_6 = (zx.d(rdi_4) ^ 2) u>> 1
                            uint64_t rcx_12 = 0
                            int32_t r10_1 = 1
                            
                            while (rcx_12.d u< 3)
                                uint32_t r8_4 = zx.d(*(&var_20b8 + rcx_12))
                                uint32_t r9_2 = zx.d(*(&var_20b4 + rcx_12))
                                
                                if (r8_4 + 3 u< r9_2 || r9_2 + 4 u< r8_4)
                                    r10_1 = 0
                                
                                rcx_12 = zx.q(rcx_12.d + 1)
                                
                                if (r10_1 == 0)
                                    break
                            
                            uint64_t rdx_10 = zx.q(rbx_1.b)
                            uint32_t rcx_13 = zx.d(rax_17.b)
                            char rcx_16
                            
                            if (r10_1 == 0)
                                rcx_16 = (rcx_13 u>> 1).b | ((rdx_10.d & 0x1e) << 3).b
                            else
                                rcx_16 = ((rcx_13.b - rdx_10.b) & 7) | (rdx_10 << 3).b
                            
                            uint64_t rax_19 = zx.q(var_20b8:1.b)
                            uint32_t rcx_18 = zx.d(var_20b4:1.b)
                            uint8_t rax_20
                            uint8_t rcx_20
                            
                            if (r10_1 == 0)
                                rcx_20 = (rcx_18 u>> 1).b
                                rax_20 = ((rax_19.d & 0x1e) << 3).b
                            else
                                rax_20 = (rax_19 << 3).b
                                rcx_20 = (rcx_18.b - rax_19.b) & 7
                            
                            uint64_t rax_22 = zx.q(var_20b8:2.b)
                            uint8_t var_20af_1 = rcx_20 | rax_20
                            uint32_t rcx_22 = zx.d(var_20b4:2.b)
                            uint32_t rax_23
                            uint32_t rcx_24
                            
                            if (r10_1 == 0)
                                rcx_24 = rcx_22 u>> 1
                                rax_23 = (rax_22.d & 0x1e) << 3
                            else
                                rax_23 = (rax_22 << 3).d
                                rcx_24 = (rcx_22 - rax_22.d) & 7
                            
                            r9_3 = var_2088_1
                            uint32_t rcx_25 = rcx_24 | rax_23
                            char var_20ae_1 = rcx_25.b
                            char var_20ad_1 =
                                ((((var_20b8:3.b << 3 | var_20b4:3.b) * 2) | r10_1.b) * 2) | r11_6.b
                            int16_t* r8_5 = *(arg1 + 0x120)
                                + (zx.q((sbb.d(rcx_25, rcx_25, r11_6 != 0) & 3) + rax_13 * 6) << 1)
                            *r9_3 =
                                zx.d(*(*(arg1 + 0x108) + (zx.q(r14) << 1))) | zx.d(*r8_5) << 0x10
                            rdx = var_20a8
                            r9_3[1] = zx.d(r8_5[2]) << 0x10 | zx.d(r8_5[1])
                            r9_3[2] = rcx_16.d
                            r9_3[3] = *(*(arg1 + 0xf0) + ((zx.q(rax_12 * 2) | zx.q(r11_6)) << 2))
                            rcx = var_20ac
                        
                        rbx = arg2
                        r9_1 = &r9_3[4]
                        r8_3 = var_2074_1
                        r15_1 += 1
                        r10 = arg5
                        var_2088_1 = r9_1
                    while (r15_1 u< var_209c)
                    
                    rax_4 = var_2098_1
                    r8_1 = zx.q(var_209c)
                    r11_3 = var_2068_1
                    rdi_3 = var_20a4
                    rbp = arg6
                
                rax_4 += 1
                r9_1 += r11_3
                var_2098_1 = rax_4
                var_2088_1 = r9_1
            while (rax_4 u< rdi_3)
            
            r11_1 = var_20a4
            rdi_2 = var_2070
            r15 = arg3
        
        r9 = zx.q(var_2094 + 1)
        var_2094 = r9.d
    while (r9.d u< zx.d(*(arg1 + 0xa)))

uint32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_20d8)
return result
