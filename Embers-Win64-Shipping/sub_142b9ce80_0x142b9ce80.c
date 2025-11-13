// 函数: sub_142b9ce80
// 地址: 0x142b9ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t rsi = 0
int64_t* var_178 = arg4
char var_1e8 = 1
int32_t* r14 = arg1

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0)
    rsi = 6
else
    int32_t rdx = *arg2
    
    if (arg1[2] - rdx + 1 u> 2)
    label_142b9cf53:
        int64_t var_168
        int64_t* r15_1 = &var_168
        var_168 = *arg4
        int64_t var_150
        void* rdi_1 = &var_150:4
        int64_t var_160_1 = *arg3
        int64_t var_158_1 = *arg2
        var_150 = *(r14 + 8)
        int64_t* var_198_1 = &var_168
        void* var_1b0_1 = &var_150:4
        
        while (true)
            int32_t r13_1 = *r14
            int32_t var_1e0 = r13_1
            int32_t rbx_1 = r13_1
            int32_t var_1dc = rbx_1
            int32_t r12_1 = r13_1
            int32_t var_1e4 = r13_1
            void var_68
            
            if (r15_1 u>= &var_68)
                goto label_142b9cff3
            
            char rax_16
            rax_16, arg4 = sub_142b9dcb0(r15_1, &var_1e4, &var_1e0, &var_1dc)
            
            if (rax_16 != 0)
                r12_1 = var_1e4
                r13_1 = var_1e0
                rbx_1 = var_1dc
            label_142b9cff3:
                
                if (var_1e8 == 0)
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(sub_142b91560(*r14, r12_1))
                    
                    if ((temp1_1 ^ temp0_1) - temp0_1 s> 0x5a000)
                        *(r14 + 8) = r15_1[3]
                        r14[1] = r12_1
                        r14[0xc] = 0
                        rsi = sub_142b9ea00(r14, 0)
                        r14[0xc] = r14[0xd]
                else
                    var_1e8 = 0
                    
                    if (r14[5].b == 0)
                        r14[1] = r12_1
                        rsi = sub_142b9ea00(r14, 0)
                    else
                        rsi = sub_142b9ea70(r14, r12_1, 0, arg4.d)
                
                if (rsi != 0)
                    break
                
                int32_t var_1c0_1 = rsi
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(sub_142b91560(r12_1, r13_1))
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(sub_142b91560(r13_1, rbx_1))
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(sub_142b91560(r12_1, r13_1))
                int32_t rdx_13 = var_1dc
                var_1e0 = ((temp7_1 - temp6_1) s>> 1) + r12_1
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(sub_142b91560(r13_1, rdx_13))
                int32_t rsi_1 = ((temp9_1 - temp8_1) s>> 1) + r13_1
                int32_t rax_44 = sub_142b91760((temp3_1 - temp2_1) s>> 1)
                uint32_t rax_45 = sub_142b91790(r14[0xf], rax_44)
                int32_t rax_46 = sub_142b91760((temp5_1 - temp4_1) s>> 1)
                uint32_t rax_47 = sub_142b91790(r14[0xf], rax_46)
                
                if (r14[0xa].b != 0)
                    var_1c0_1 = sub_142b915d0(*r15_1 - r15_1[3].d, *(r15_1 + 4) - *(r15_1 + 0x1c))
                
                int32_t rbx_3 = rsi_1 + 0x5a0000
                int32_t r13_2 = var_1dc
                void* rdi_3 = &r14[0x10]
                int32_t rax_50 = var_1e0 - rsi_1
                var_1e4 = rbx_3
                int32_t i = 0
                var_1e0 = rax_50
                int32_t r13_3 = r13_2 - rsi_1
                int32_t i_1 = 0
                int32_t var_1a0_1 = r13_3
                
                do
                    int32_t var_1d0
                    sub_142b97220(&var_1d0, rax_45, rax_50 + rbx_3)
                    var_1d0 += r15_1[2].d
                    int32_t var_1cc = var_1cc + *(r15_1 + 0x14)
                    int32_t var_1c8
                    sub_142b97220(&var_1c8, rax_47, rbx_3)
                    var_1c8 += r15_1[1].d
                    int32_t var_1c4 = var_1c4 + *(r15_1 + 0xc)
                    int32_t var_1d8
                    sub_142b97220(&var_1d8, r14[0xf], rbx_3 + r13_3)
                    int32_t rcx_22 = var_1d8 + *r15_1
                    int32_t var_1d4
                    int32_t rdx_23 = var_1d4 + *(r15_1 + 4)
                    bool cond:2_1 = r14[0xa].b == 0
                    var_1d8 = rcx_22
                    var_1d4 = rdx_23
                    
                    if (cond:2_1)
                        goto label_142b9d35a
                    
                    int64_t rbx_5 = *(*(rdi_3 + 8) + (zx.q(*rdi_3 - 1) << 3))
                    int32_t rax_59 = sub_142b915d0(rcx_22 - rbx_5.d, rdx_23 - (rbx_5 u>> 0x20).d)
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(sub_142b91560(var_1c0_1, rax_59))
                    
                    if ((temp11_1 ^ temp10_1) - temp10_1 s<= 0x5a0000)
                        rbx_3 = var_1e4
                    label_142b9d35a:
                        int32_t rax_83
                        rax_83, arg4 = sub_142b9e2d0(rdi_3, 3)
                        rsi = rax_83
                        
                        if (rax_83 == 0)
                            uint64_t rcx_45 = zx.q(*rdi_3)
                            int64_t r8_12 = *(rdi_3 + 0x10)
                            int64_t* rdx_40 = *(rdi_3 + 8) + (rcx_45 << 3)
                            *rdx_40 = var_1d0.q
                            rdx_40[1] = var_1c8.q
                            rdx_40[2] = var_1d8.q
                            *(r8_12 + rcx_45) = 0x202
                            *(r8_12 + rcx_45 + 2) = 1
                            *rdi_3 += 3
                        
                        *(rdi_3 + 0x18) = 0
                        
                        if (rsi != 0)
                            goto label_142b9d412
                    else
                        int32_t r13_4 = rbx_5:4.d
                        int32_t rax_65 = sub_142b915d0(r15_1[3].d - rbx_5.d, *var_1b0_1 - r13_4)
                        int32_t rax_66 = sub_142b915d0(*r15_1 - var_1d8, *(r15_1 + 4) - var_1d4)
                        int32_t var_190 = var_1d8 - rbx_5.d
                        int32_t var_18c_1 = var_1d4 - r13_4
                        int32_t rax_67 = sub_142b97240(&var_190)
                        int32_t rax_68 = sub_142b964b0(rax_59 - rax_66)
                        int32_t temp12_1
                        int32_t temp13_1
                        temp12_1:temp13_1 = sx.q(sub_142b964b0(rax_65 - rax_66))
                        int32_t temp14_1
                        int32_t temp15_1
                        temp14_1:temp15_1 = sx.q(rax_68)
                        int32_t var_1b8
                        sub_142b97220(&var_1b8, 
                            sub_142b93dd0(rax_67, (temp15_1 ^ temp14_1) - temp14_1, 
                                (temp13_1 ^ temp12_1) - temp12_1), 
                            rax_65)
                        var_1b8 += rbx_5.d
                        int32_t var_1b4 = var_1b4 + r13_4
                        *(rdi_3 + 0x18) = 0
                        int32_t rax_76 = sub_142b9e3b0(rdi_3, &var_1b8, 0)
                        rsi = rax_76
                        
                        if (rax_76 != 0)
                            goto label_142b9d412
                        
                        int32_t rax_77 = sub_142b9e3b0(rdi_3, &var_1d8, 0)
                        rsi = rax_77
                        
                        if (rax_77 != 0)
                            goto label_142b9d412
                        
                        int32_t rax_78 = sub_142b9e2d0(rdi_3, rax_77 + 3)
                        rsi = rax_78
                        
                        if (rax_78 == 0)
                            uint64_t rcx_42 = zx.q(*rdi_3)
                            int64_t r8_11 = *(rdi_3 + 0x10)
                            int64_t* rdx_38 = *(rdi_3 + 8) + (rcx_42 << 3)
                            *rdx_38 = var_1c8.q
                            rdx_38[1] = var_1d0.q
                            rdx_38[2] = rbx_5
                            *(r8_11 + rcx_42) = 0x202
                            *(r8_11 + rcx_42 + 2) = 1
                            *rdi_3 += 3
                        
                        *(rdi_3 + 0x18) = 0
                        
                        if (rsi != 0)
                            goto label_142b9d412
                        
                        int32_t rax_82
                        rax_82, arg4 = sub_142b9e3b0(rdi_3, &var_1d8, 0)
                        rsi = rax_82
                        
                        if (rax_82 != 0)
                            goto label_142b9d412
                        
                        r14 = arg1
                        r15_1 = var_198_1
                        rbx_3 = var_1e4
                        i = i_1
                        r13_3 = var_1a0_1
                    
                    rax_50 = var_1e0
                    i += 1
                    rbx_3 -= 0xb40000
                    i_1 = i
                    rdi_3 += 0x30
                    var_1e4 = rbx_3
                while (i s<= 1)
                
                r15_1 -= 0x18
                rdi_1 = var_1b0_1 - 0x18
                *r14 = var_1dc
            else
                if (r14[5].b != rax_16)
                    *r14 = var_1e4
                
                arg4 = sub_142b9de80(r15_1)
                r15_1 = &r15_1[3]
                rdi_1 += 0x18
            
            var_1b0_1 = rdi_1
            var_198_1 = r15_1
            
            if (r15_1 u< &var_168)
                *(r14 + 8) = *var_178
                break
    else
        int32_t r8 = arg2[1]
        
        if (arg1[3] - r8 + 1 u> 2)
            goto label_142b9cf53
        
        int32_t rcx = *arg3
        
        if (rdx - rcx + 1 u> 2)
            goto label_142b9cf53
        
        int32_t rax_8 = arg3[1]
        
        if (r8 - rax_8 + 1 u> 2 || rcx - *arg4 + 1 u> 2 || rax_8 - arg4[1] + 1 u> 2)
            goto label_142b9cf53
        
        *(r14 + 8) = *arg4

label_142b9d412:
__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rsi)
