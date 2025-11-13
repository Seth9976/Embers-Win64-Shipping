// 函数: sub_142882770
// 地址: 0x142882770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t rdi
rdi.b = 0x41
char var_78 = 0x41
int32_t rsi = 0
int32_t var_74 = 0
int64_t r12 = arg2
int64_t* rax_2 = sub_142891ee0()
int64_t* rax_3 = sub_142891ee0()
int32_t var_80_1
int32_t r9_1

if (rax_2 == 0 || rax_3 == 0)
    var_80_1 = 0x22
    r9_1 = 0x41
label_1428829f8:
    sub_142856580(arg1, 0x50, 0xee, r9_1, "ssl\s3_enc.c", var_80_1)
else
    sub_1428915a0(rax_2, 8)
    int32_t r15_1 = 0
    void var_68
    
    if (arg3 s> 0)
        while (true)
            rsi += 1
            
            if (rsi u> 0x10)
                var_80_1 = 0x2b
                r9_1 = 0x44
                goto label_1428829f8
            
            uint64_t rbx_1 = zx.q(rsi)
            void var_50
            
            if (rsi != 0)
                int64_t rcx_2
                int64_t rdi_1
                rdi_1, rcx_2 = __memfill_u8(&var_50, rdi.b, zx.q(rbx_1.d))
                rdi = zx.q(var_78)
            
            rdi.b += 1
            var_78 = rdi.b
            
            if (sub_1428919c0(rax_3, &data_1434e9110, nullptr) != 0
                    && sub_142891c10(rax_3, &var_50, rbx_1) != 0)
                void* r8_1 = *(arg1 + 0x508)
                
                if (sub_142891c10(rax_3, r8_1 + 0x50, *(r8_1 + 8)) != 0
                        && sub_142891c10(rax_3, *(arg1 + 0xa8) + 0x98, 0x20) != 0
                        && sub_142891c10(rax_3, *(arg1 + 0xa8) + 0xb8, 0x20) != 0
                        && sub_1428918e0(rax_3, &var_68, nullptr) != 0
                        && sub_1428919c0(rax_2, &data_143505b10, nullptr) != 0)
                    void* r8_3 = *(arg1 + 0x508)
                    
                    if (sub_142891c10(rax_2, r8_3 + 0x50, *(r8_3 + 8)) != 0
                            && sub_142891c10(rax_2, &var_68, 0x14) != 0)
                        int32_t rdi_2 = r15_1 + 0x10
                        
                        if (rdi_2 s<= arg3)
                            if (sub_1428918e0(rax_2, r12, nullptr) == 0)
                                var_80_1 = 0x4b
                                r9_1 = 0x44
                                goto label_1428829f8
                        else
                            if (sub_1428918e0(rax_2, &var_68, nullptr) == 0)
                                var_80_1 = 0x44
                                r9_1 = 0x44
                                goto label_1428829f8
                            
                            memcpy(r12, &var_68, arg3 - r15_1)
                        
                        r12 += 0x10
                        r15_1 = rdi_2
                        
                        if (rdi_2 s>= arg3)
                            break
                        
                        rdi = zx.q(var_78)
                        continue
            
            var_80_1 = 0x3e
            r9_1 = 0x44
            goto label_1428829f8
    
    sub_1428b8960(&var_68, 0x14)
    var_74 = 1
sub_142891ea0(rax_2)
sub_142891ea0(rax_3)
__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(var_74)
