// 函数: sub_140cfa690
// 地址: 0x140cfa690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdi = arg1[0x14].d
int64_t zmm1 = arg1[0x13]
int128_t zmm0 = *(arg1 + 0x88)
int64_t var_a8 = arg1[0xf]
int64_t var_a0 = arg1[0x10]
int64_t var_80 = zmm1
char var_78 = rdi.b
int64_t* var_c8 = arg1
int128_t var_90 = zmm0
int32_t r12 = arg3[1].d
int32_t i

if ((not.b(rdi.b) & 1) != 0)
    i = r12 - *(arg3 + 0x34)
else
    i = r12 - *(arg3 + 0x24)

int32_t r8 = arg2[1].d
char result = not.b(rdi.b)
int32_t r8_1

if ((result & 1) != 0)
    r8_1 = r8 - *(arg2 + 0x34)
else
    r8_1 = r8 - *(arg2 + 0x24)

if (r8_1 != 0)
    sub_140cfaf40(&var_a8, 0, r8_1)
label_140cfa744:
    int32_t i_1 = i
    int64_t* var_c0 = &var_a8
    result = sub_140ceec60(&var_a8, &var_c0)
    
    if (i != 0)
        int64_t* rcx_2 = arg2
        rdi.b = not.b(rdi.b)
        int32_t rbx_1 = 0
        int32_t r13_1 = 0
        int32_t r15_1 = 1
        rdi.b &= 1
        int32_t var_b0_1 = rdi
        
        do
            void* rdx_1
            
            if (rdi.b != 0)
                if (rbx_1 s>= 0 && rbx_1 s< arg3[5].d)
                    void* rax_6 = arg3[4]
                    rdx_1 = &arg3[2]
                    
                    if (rax_6 != 0)
                        rdx_1 = rax_6
                    
                label_140cfa7ed:
                    int32_t rax_7 = rbx_1
                    
                    if (rbx_1 s< 0)
                        rax_7 = rbx_1 + 0x1f
                    
                    if ((*(rdx_1 + (sx.q(rax_7 s>> 5) << 2)) & r15_1) != 0)
                        int64_t* rdx_3 = &var_80
                        int32_t rax_11
                        
                        if ((not.b(var_78) & 1) != 0)
                            rax_11 = sub_140cf1c20(rcx_2, rdx_3)
                        else
                            rax_11 = sub_140cf1af0(rcx_2, rdx_3)
                        
                        sub_140cf59a0(&var_a8, rax_11)
                        void* rdi_2
                        
                        if (rdi.b != 0)
                            rdi_2 = sx.q(r13_1) + *arg3
                        else
                            void* rax_12 = *arg3
                            
                            if ((rax_12.b & 1) != 0)
                                rax_12 = (rax_12 s>> 1) + arg3
                            
                            rdi_2 = sx.q(r13_1) + rax_12
                        
                        rcx_2 = arg2
                        void* rsi_3
                        
                        if ((not.b(var_78) & 1) != 0)
                            rsi_3 = sx.q(var_80:4.d * rax_11) + *rcx_2
                        else
                            void* rdx_5 = *rcx_2
                            
                            if ((rdx_5.b & 1) != 0)
                                rdx_5 = (rdx_5 s>> 1) + rcx_2
                            
                            rsi_3 = sx.q(var_80:4.d * rax_11) + rdx_5
                        
                        int64_t* r10_2 = var_c8[0xf]
                        int64_t rax_19 = sx.q(*(r10_2 + 0x4c))
                        void* rdx_7 = rax_19 + rdi_2
                        void* r11_1 = rax_19 + rsi_3
                        
                        if (r11_1 != rdx_7)
                            if (not(test_bit(zx.q(r10_2[8].d), 0x1e)))
                                (*(*r10_2 + 0xb0))(r10_2, r11_1, rdx_7, zx.q(r10_2[7].d))
                            else
                                memcpy(r11_1, rdx_7, *(r10_2 + 0x3c) * r10_2[7].d)
                            
                            rcx_2 = arg2
                        
                        int64_t* r10_3 = var_c8[0x10]
                        int64_t rax_25 = sx.q(*(r10_3 + 0x4c))
                        void* rdx_9 = rax_25 + rdi_2
                        void* r11_2 = rax_25 + rsi_3
                        
                        if (r11_2 != rdx_9)
                            if (not(test_bit(zx.q(r10_3[8].d), 0x1e)))
                                (*(*r10_3 + 0xb0))(r10_3, r11_2, rdx_9, zx.q(r10_3[7].d))
                            else
                                memcpy(r11_2, rdx_9, *(r10_3 + 0x3c) * r10_3[7].d)
                            
                            rcx_2 = arg2
                        
                        rdi = var_b0_1
                        i -= 1
            else if (rbx_1 s>= 0 && rbx_1 s< arg3[3].d)
                rdx_1 = arg3[2]
                
                if ((rdx_1.b & 1) != 0)
                    rdx_1 = (rdx_1 s>> 1) + &arg3[2]
                
                goto label_140cfa7ed
            r13_1 += zmm1:4.d
            rbx_1 += 1
            r15_1 = rol.d(r15_1, 1)
        while (i != 0)
        
        int64_t* r8_6 = &var_c0
        int32_t* rdx_11 = &var_90:4
        var_c8 = &var_a8
        
        if ((not.b(var_78) & 1) != 0)
            var_c0 = sub_140cf2f70
            i_1.q = &var_c8
            result = sub_140d0c0d0(rcx_2, rdx_11, r8_6)
        else
            var_c0 = sub_140cf2f70
            i_1.q = &var_c8
            result = sub_140d0bee0(rcx_2, rdx_11, r8_6)
else if (i != 0)
    goto label_140cfa744

__security_check_cookie(rax_1 ^ &var_e8)
return result
