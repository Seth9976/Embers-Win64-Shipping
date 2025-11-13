// 函数: sub_141a41190
// 地址: 0x141a41190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == 0)
    return 

if ((arg3[3] | arg3[2] | arg3[1] | *arg3) == 0)
    sub_141a41060(arg1, arg2)
    return 

void* i_1
sub_141a4a790(arg4, &i_1, arg3, &arg3[4])
void* i = i_1
int32_t var_40

for (void* r13_1 = i + (sx.q(var_40) << 3); i != r13_1; i += 8)
    int64_t arg_8 = *i
    int64_t rax = sub_140d3c6e0(&arg_8)
    
    if (rax != 0)
        void** j = *arg1
        
        for (void* rbp_2 = sx.q(arg1[1].d) * 0x88 + j; j != rbp_2; j = &j[0x11])
            char rax_6 = j[0x10].b
            void** j_1 = j
            int64_t var_38 = rax
            rax_6 &= 2
            
            if (rax_6 == 0)
                j_1 = *j
            
            int64_t rcx_3 = j_1[1]
            void** j_2 = j
            int64_t var_30_1 = rcx_3
            
            if (rax_6 == 0)
                j_2 = *j
            
            uint32_t r8_1 = (rax u>> 4).d
            int32_t r9_2 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
            int32_t rdx_3 = neg.d(r9_2 + r8_1) ^ r9_2 u>> 0xd
            int32_t r8_4 = (r8_1 - r9_2 - rdx_3) ^ rdx_3 u>> 0xc
            int32_t r9_5 = (r9_2 - rdx_3 - r8_4) ^ r8_4 << 0x10
            int32_t rdx_6 = (rdx_3 - r9_5 - r8_4) ^ r9_5 u>> 5
            int32_t r8_7 = (r8_4 - r9_5 - rdx_6) ^ rdx_6 u>> 3
            int32_t r9_8 = (r9_5 - rdx_6 - r8_7) ^ r8_7 << 0xa
            int32_t r10_4 =
                ((rcx_3 u>> 0x20).d * 0x17 + rcx_3.d) ^ (rdx_6 - r9_8 - r8_7) ^ r9_8 u>> 0xf
            void* rax_26
            
            if (arg2[1].d == *(arg2 + 0x34))
            label_141a41368:
                rax_26 = sub_141a2a300(arg2, r10_4, &var_38)
            else
                void* rdx_9 = arg2[8]
                void* r9_10 = &arg2[7]
                
                if (rdx_9 != 0)
                    r9_10 = rdx_9
                
                int32_t rax_25 = *(r9_10 + (((sx.q(arg2[9].d) - 1) & sx.q(r10_4)) << 2))
                
                if (rax_25 == 0xffffffff)
                label_141a41368_1:
                    rax_26 = sub_141a2a300(arg2, r10_4, &var_38)
                else
                    int64_t* rdx_12
                    
                    while (true)
                        rdx_12 = (sx.q(rax_25) << 6) + *arg2
                        
                        if (*rdx_12 == rax && rdx_12[1] == rcx_3)
                            break
                        
                        rax_25 = rdx_12[7].d
                        
                        if (rax_25 == 0xffffffff)
                            goto label_141a41368_2
                    
                    if (rax_25 == 0xffffffff || rdx_12 == 0)
                    label_141a41368_2:
                        rax_26 = sub_141a2a300(arg2, r10_4, &var_38)
                    else
                        rax_26 = &rdx_12[2]
            
            void* r8_13 = *j_2
            (*(r8_13 + 8))(j_2, rax_26, r8_13)
