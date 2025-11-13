// 函数: sub_141c7cb60
// 地址: 0x141c7cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2098)
void var_20c8
int64_t rax_1 = __security_cookie ^ &var_20c8
int32_t rbx = *(arg1 + 0xe0)
int32_t rdi = arg6
int32_t r9 = arg5
int64_t r14 = arg3
void* r12 = arg2
uint32_t rsi = 0
uint64_t r8 = 0
uint32_t rdx = 0
int32_t var_2098 = rbx
uint32_t var_209c = 0
int32_t rcx_1 = (r9 + 1) & 0xfffffffe
int32_t var_2088 = 0
int32_t var_2090 = rcx_1
int32_t r10_1 = (rdi + 1) & 0xfffffffe
int32_t var_2094 = r10_1
uint32_t r11_2 = (arg4 u>> 2) - rcx_1 * 2
uint32_t var_2074 = r11_2

if (*(arg1 + 0xa) u> 0)
    int64_t r15
    int64_t var_40_1 = r15
    
    do
        void* r8_1 = *(r14 + (r8 << 3))
        int32_t rax_2 = 0
        void* var_2080_1 = r8_1
        int32_t var_208c_1 = 0
        
        if (r10_1 != 0)
            int32_t r11_3 = var_2094
            int64_t r10_3 = sx.q(r11_2) << 2
            int64_t var_2068_1 = r10_3
            
            do
                r15.b = rax_2 u< rdi
                int32_t r14_1 = 0
                
                if (rcx_1 != 0)
                    int32_t rcx_3 = rax_2 & 1
                    int32_t var_2078_1 = rcx_3
                    
                    do
                        if (r15.b == 0 || r14_1 u>= r9)
                            r15.b = 0
                        else
                            r15.b = 1
                        
                        uint64_t rax_3 = zx.q(r14_1 * 2)
                        uint64_t rbp_1 = zx.q(rax_3.d)
                        uint8_t rdi_1
                        void var_2058
                        
                        if (rcx_3 == 0)
                            uint8_t rax_4 = sub_141c79cd0(r12, arg1 + 0x10)
                            uint8_t rdx_2 = rax_4 u>> 2
                            rdi_1 = (rdx_2 & 0xc) | (rax_4 & 3)
                            rdx = var_209c
                            *(&var_2058 + (rbp_1 << 3)) =
                                zx.w(((rdx_2 & 0x30) | (rax_4 & 0xc)) u>> 2)
                        else
                            rdi_1 = *(&var_2058 + (rax_3 << 3))
                        uint8_t rax_6 = rdi_1 & 3
                        int16_t var_2056[0xfff]
                        
                        if (rax_6 == 0)
                            uint32_t rcx_7 = sub_141c79cd0(r12, arg1 + 0x38) + rsi
                            rsi = rcx_7 - rbx
                            
                            if (rcx_7 u< rbx)
                                rsi = rcx_7
                            
                            var_2056[rbp_1 * 4] = rsi.w
                        else if (rax_6 == 1)
                            var_2056[rbp_1 * 4] = rsi.w
                        else if (rax_6 != 3)
                            rsi = zx.d(var_2056[rbp_1 * 4])
                        else
                            rsi = rdx
                            var_2056[rbp_1 * 4] = rdx.w
                        
                        rdi_1 u>>= 2
                        int32_t rbx_1 = *(*(arg1 + 0xd8) + (zx.q(rsi) << 2))
                        int32_t var_20a8 = rbx_1
                        int32_t rax_9 = sub_141c79cd0(r12, arg1 + 0x88)
                        
                        if (rdi_1 != 0)
                            rsi += sub_141c79cd0(arg2, arg1 + 0x38)
                            
                            if (rsi u>= var_2098)
                                rsi -= var_2098
                        
                        int64_t rbp_2 = rbp_1 | 1
                        rdx = zx.d(var_2056[rbp_2 * 4])
                        int32_t rax_13 = *(*(arg1 + 0xd8) + (zx.q(rsi) << 2))
                        var_209c = rdx
                        var_2056[rbp_2 * 4] = rsi.w
                        int32_t var_20a4 = rax_13
                        int32_t* r8_3
                        
                        if (r15.b == 0)
                            r8_3 = var_2080_1
                        else
                            uint32_t r11_6 = (zx.d(rdi_1) ^ 2) u>> 1
                            uint64_t rcx_12 = 0
                            int32_t r10_4 = 1
                            
                            while (rcx_12.d u< 3)
                                uint32_t r8_2 = zx.d(*(&var_20a8 + rcx_12))
                                uint32_t r9_1 = zx.d(*(&var_20a4 + rcx_12))
                                
                                if (r8_2 + 3 u< r9_1 || r9_1 + 4 u< r8_2)
                                    r10_4 = 0
                                
                                rcx_12 = zx.q(rcx_12.d + 1)
                                
                                if (r10_4 == 0)
                                    break
                            
                            uint64_t rdx_8 = zx.q(rbx_1.b)
                            uint32_t rcx_13 = zx.d(rax_13.b)
                            char rcx_16
                            
                            if (r10_4 == 0)
                                rcx_16 = (rcx_13 u>> 1).b | ((rdx_8.d & 0x1e) << 3).b
                            else
                                rcx_16 = ((rcx_13.b - rdx_8.b) & 7) | (rdx_8 << 3).b
                            
                            uint64_t rax_15 = zx.q(var_20a8:1.b)
                            uint32_t rcx_18 = zx.d(var_20a4:1.b)
                            uint8_t rax_16
                            uint8_t rcx_20
                            
                            if (r10_4 == 0)
                                rcx_20 = (rcx_18 u>> 1).b
                                rax_16 = ((rax_15.d & 0x1e) << 3).b
                            else
                                rax_16 = (rax_15 << 3).b
                                rcx_20 = (rcx_18.b - rax_15.b) & 7
                            
                            uint64_t rax_18 = zx.q(var_20a8:2.b)
                            uint8_t var_209f_1 = rcx_20 | rax_16
                            uint32_t rcx_22 = zx.d(var_20a4:2.b)
                            uint8_t rax_19
                            uint8_t rcx_24
                            
                            if (r10_4 == 0)
                                rcx_24 = (rcx_22 u>> 1).b
                                rax_19 = ((rax_18.d & 0x1e) << 3).b
                            else
                                rax_19 = (rax_18 << 3).b
                                rcx_24 = (rcx_22.b - rax_18.b) & 7
                            
                            r8_3 = var_2080_1
                            rdx = var_209c
                            uint8_t var_209e_1 = rcx_24 | rax_19
                            char var_209d_1 =
                                ((((var_20a8:3.b << 3 | var_20a4:3.b) * 2) | r10_4.b) * 2) | r11_6.b
                            *r8_3 = rcx_16.d
                            r8_3[1] = *(*(arg1 + 0xf0) + ((zx.q(rax_9 * 2) | zx.q(r11_6)) << 2))
                        
                        rbx = var_2098
                        r8_1 = &r8_3[2]
                        r12 = arg2
                        r14_1 += 1
                        rcx_3 = var_2078_1
                        r9 = arg5
                        var_2080_1 = r8_1
                    while (r14_1 u< var_2090)
                    
                    rax_2 = var_208c_1
                    rcx_1 = var_2090
                    r10_3 = var_2068_1
                    r11_3 = var_2094
                    rdi = arg6
                
                rax_2 += 1
                r8_1 += r10_3
                var_208c_1 = rax_2
                var_2080_1 = r8_1
            while (rax_2 u< r11_3)
            
            r10_1 = var_2094
            r11_2 = var_2074
            r14 = arg3
        
        r8 = zx.q(var_2088 + 1)
        var_2088 = r8.d
    while (r8.d u< zx.d(*(arg1 + 0xa)))

uint32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_20c8)
return result
