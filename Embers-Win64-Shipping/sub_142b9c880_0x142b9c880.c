// 函数: sub_142b9c880
// 地址: 0x142b9c880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rsi = 0
uint64_t rdi
rdi.b = 1
char var_1b8 = 1
int32_t* r9 = arg2
int32_t* r14 = arg1

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    rsi = 6
else
    int32_t rdx = *arg2
    int32_t rcx
    
    if (arg1[2] - rdx + 1 u<= 2)
        rcx = r9[1]
    
    if (arg1[2] - rdx + 1 u> 2 || r14[3] - rcx + 1 u> 2 || rdx - *arg3 + 1 u> 2
            || rcx - arg3[1] + 1 u> 2)
        int64_t var_148
        int64_t* r15_1 = &var_148
        var_148 = *arg3
        int64_t var_140_1 = *r9
        int64_t var_138 = *(r14 + 8)
        void* var_180_1 = &var_138:4
        int64_t* var_170_1 = &var_148
        
        while (true)
            int32_t r13_3 = *r14
            int32_t var_1a8_1 = r13_3
            int32_t rbx_1 = r13_3
            void var_58
            
            if (r15_1 u>= &var_58)
                goto label_142b9cac7
            
            int32_t r12_1 = r15_1[1].d
            int32_t rdi_2 = *r15_1 - r12_1
            int32_t rdx_4 = *(r15_1 + 0xc) - *(r15_1 + 0x14)
            int32_t r13_2 = *(r15_1 + 4) - *(r15_1 + 0xc)
            int32_t rax_13 = r15_1[2].d
            int32_t rcx_4 = r12_1 - rax_13
            int32_t r8
            
            if (rcx_4 + 1 u> 2 || rdx_4 + 1 u> 2)
                r8 = 0
            else
                r8 = 1
            
            int32_t rax_18
            
            if (rdi_2 + 1 u> 2 || r13_2 + 1 u> 2)
                rax_18 = 0
            else
                rax_18 = 1
            
            if (r8 == 0)
                int32_t rax_20
                
                if (rax_18 == 0)
                    rbx_1 = sub_142b915d0(rcx_4, rdx_4)
                    rax_20, r9 = sub_142b915d0(rdi_2, r13_2)
                else
                    rax_20, r9 = sub_142b915d0(rcx_4, rdx_4)
                    rbx_1 = rax_20
                
                var_1a8_1 = rax_20
                r13_3 = rax_20
            else
                if (rax_18 == 0)
                    int32_t rax_19
                    rax_19, r9 = sub_142b915d0(rdi_2, r13_2)
                    rbx_1 = rax_19
                
                r13_3 = rbx_1
                var_1a8_1 = rbx_1
            
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(sub_142b91560(rbx_1, r13_3))
            
            if ((temp11_1 ^ temp10_1) - temp10_1 s< 0x1e0000)
                rdi = zx.q(var_1b8)
            label_142b9cac7:
                
                if (rdi.b == 0)
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(sub_142b91560(*r14, rbx_1))
                    
                    if ((temp1_1 ^ temp0_1) - temp0_1 s> 0x78000)
                        *(r14 + 8) = r15_1[2]
                        r14[1] = rbx_1
                        r14[0xc] = 0
                        rsi = sub_142b9ea00(r14, 0)
                        r14[0xc] = r14[0xd]
                else
                    var_1b8 = 0
                    
                    if (r14[5].b == 0)
                        r14[1] = rbx_1
                        rsi = sub_142b9ea00(r14, 0)
                    else
                        rsi = sub_142b9ea70(r14, rbx_1, 0, r9.d)
                
                if (rsi != 0)
                    break
                
                int32_t var_190_1 = rsi
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(sub_142b91560(rbx_1, r13_3))
                int32_t rax_66 = (temp3_1 - temp2_1) s>> 1
                int32_t rax_67 = sub_142b91760(rax_66)
                uint32_t rax_68 = sub_142b91790(r14[0xf], rax_67)
                uint32_t rcx_17 = rax_68
                
                if (r14[0xa].b != rsi.b)
                    rcx_17 = rax_68
                    var_190_1 = sub_142b915d0(*r15_1 - r15_1[2].d, *(r15_1 + 4) - *(r15_1 + 0x14))
                
                int32_t rbx_2 = r13_3 + 0x5a0000
                int32_t i = 0
                int32_t var_1a0_1 = rbx_2
                int32_t rax_71 = rax_66 + rbx_1 - r13_3
                void* var_178
                var_178.d = 0
                int32_t var_19c_2 = rax_71
                void* rdi_3 = &r14[0x10]
                
                do
                    int32_t var_198
                    sub_142b97220(&var_198, rcx_17, rax_71 + rbx_2)
                    var_198 += r15_1[1].d
                    int32_t var_194 = var_194 + *(r15_1 + 0xc)
                    int32_t var_1b0
                    sub_142b97220(&var_1b0, r14[0xf], rbx_2)
                    int32_t rcx_23 = var_1b0 + *r15_1
                    int32_t var_1ac
                    int32_t rdx_26 = var_1ac + *(r15_1 + 4)
                    bool cond:1_1 = r14[0xa].b == 0
                    var_1b0 = rcx_23
                    var_1ac = rdx_26
                    
                    if (cond:1_1)
                        goto label_142b9cda4
                    
                    int64_t rbx_4 = *(*(rdi_3 + 8) + (zx.q(*rdi_3 - 1) << 3))
                    int32_t rax_78 = sub_142b915d0(rcx_23 - rbx_4.d, rdx_26 - (rbx_4 u>> 0x20).d)
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(sub_142b91560(var_190_1, rax_78))
                    
                    if ((temp5_1 ^ temp4_1) - temp4_1 s<= 0x5a0000)
                        rbx_2 = var_1a0_1
                    label_142b9cda4:
                        int32_t rax_101
                        rax_101, r9 = sub_142b9e2d0(rdi_3, 2)
                        rsi = rax_101
                        
                        if (rax_101 == 0)
                            uint64_t rcx_46 = zx.q(*rdi_3)
                            int64_t r8_8 = *(rdi_3 + 0x10)
                            int64_t* rdx_43 = *(rdi_3 + 8) + (rcx_46 << 3)
                            *rdx_43 = var_198.q
                            rdx_43[1] = var_1b0.q
                            *(r8_8 + rcx_46) = 0x100
                            *rdi_3 += 2
                        
                        *(rdi_3 + 0x18) = 0
                        
                        if (rsi != 0)
                            goto label_142b9ce4e
                    else
                        int32_t r13_4 = rbx_4:4.d
                        int32_t rax_84 = sub_142b915d0(r15_1[2].d - rbx_4.d, *var_180_1 - r13_4)
                        int32_t rax_85 = sub_142b915d0(*r15_1 - var_1b0, *(r15_1 + 4) - var_1ac)
                        int32_t var_168 = var_1b0 - rbx_4.d
                        int32_t var_164_1 = var_1ac - r13_4
                        int32_t rax_86 = sub_142b97240(&var_168)
                        int32_t rax_87 = sub_142b964b0(rax_78 - rax_85)
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(sub_142b964b0(rax_84 - rax_85))
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(rax_87)
                        int32_t var_188
                        sub_142b97220(&var_188, 
                            sub_142b93dd0(rax_86, (temp9_1 ^ temp8_1) - temp8_1, 
                                (temp7_1 ^ temp6_1) - temp6_1), 
                            rax_84)
                        var_188 += rbx_4.d
                        int32_t var_184 = var_184 + r13_4
                        *(rdi_3 + 0x18) = 0
                        int32_t rax_95 = sub_142b9e3b0(rdi_3, &var_188, 0)
                        rsi = rax_95
                        
                        if (rax_95 != 0)
                            goto label_142b9ce4e
                        
                        int32_t rax_96 = sub_142b9e3b0(rdi_3, &var_1b0, 0)
                        rsi = rax_96
                        
                        if (rax_96 != 0)
                            goto label_142b9ce4e
                        
                        int32_t rax_97 = sub_142b9e2d0(rdi_3, rax_96 + 2)
                        rsi = rax_97
                        
                        if (rax_97 == 0)
                            uint64_t rcx_43 = zx.q(*rdi_3)
                            int64_t r8_7 = *(rdi_3 + 0x10)
                            int64_t* rdx_41 = *(rdi_3 + 8) + (rcx_43 << 3)
                            *rdx_41 = var_198.q
                            rdx_41[1] = rbx_4
                            *(r8_7 + rcx_43) = 0x100
                            *rdi_3 += 2
                        
                        *(rdi_3 + 0x18) = 0
                        
                        if (rsi != 0)
                            goto label_142b9ce4e
                        
                        int32_t rax_100
                        rax_100, r9 = sub_142b9e3b0(rdi_3, &var_1b0, 0)
                        rsi = rax_100
                        
                        if (rax_100 != 0)
                            goto label_142b9ce4e
                        
                        r14 = arg1
                        r15_1 = var_170_1
                        rbx_2 = var_1a0_1
                        i = var_178.d
                    
                    rax_71 = var_19c_2
                    i += 1
                    rcx_17 = rax_68
                    rbx_2 -= 0xb40000
                    rdi_3 += 0x30
                    var_178.d = i
                    var_1a0_1 = rbx_2
                while (i s<= 1)
                
                r15_1 -= 0x10
                var_180_1 -= 0x10
                var_170_1 = r15_1
                *r14 = var_1a8_1
            else
                if (r14[5].b != 0)
                    *r14 = rbx_1
                
                r9 = &r15_1[2]
                r15_1[4].d = rax_13
                int32_t temp12_1
                int32_t temp13_1
                temp12_1:temp13_1 = sx.q(rax_13 + r12_1)
                var_170_1 = r9
                int32_t rax_30 = (temp13_1 - temp12_1) s>> 1
                r15_1[3].d = rax_30
                int32_t temp14_1
                int32_t temp15_1
                temp14_1:temp15_1 = sx.q(*r15_1 + r12_1)
                int32_t rax_35 = (temp15_1 - temp14_1) s>> 1
                r15_1[1].d = rax_35
                int32_t temp16_1
                int32_t temp17_1
                temp16_1:temp17_1 = sx.q(rax_35 + rax_30)
                *r9 = (temp17_1 - temp16_1) s>> 1
                int32_t rax_40 = *(r15_1 + 0x14)
                *(r15_1 + 0x24) = rax_40
                int32_t temp18_1
                int32_t temp19_1
                temp18_1:temp19_1 = sx.q(rax_40 + *(r15_1 + 0xc))
                int32_t rax_44 = (temp19_1 - temp18_1) s>> 1
                *(r15_1 + 0x1c) = rax_44
                int32_t temp20_1
                int32_t temp21_1
                temp20_1:temp21_1 = sx.q(*(r15_1 + 4) + *(r15_1 + 0xc))
                int32_t rax_49 = (temp21_1 - temp20_1) s>> 1
                *(r15_1 + 0xc) = rax_49
                int32_t temp22_1
                int32_t temp23_1
                temp22_1:temp23_1 = sx.q(rax_49 + rax_44)
                var_180_1 += 0x10
                *(r15_1 + 0x14) = (temp23_1 - temp22_1) s>> 1
                r15_1 = r9
            
            rdi = zx.q(var_1b8)
            
            if (r15_1 u< &var_148)
                *(r14 + 8) = *arg3
                break
    else
        *(r14 + 8) = *arg3

label_142b9ce4e:
__security_check_cookie(rax_1 ^ &var_1d8)
return zx.q(rsi)
