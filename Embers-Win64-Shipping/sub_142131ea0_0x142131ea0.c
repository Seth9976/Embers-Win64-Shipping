// 函数: sub_142131ea0
// 地址: 0x142131ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr
void var_38
sub_140b4c620(&var_38, arg2)
int32_t var_30 = arg2[3]
char var_2c = arg2[2].b
sub_142128be0(arg1, &var_38, &arg_10, 0)

if (arg3 != 0)
    void* rdi_1 = arg_10
    
    if (rdi_1 != 0)
        int64_t i = *(rdi_1 + 0x18)
        int64_t rbx_1 = *(arg3 + 0x18)
        
        if (rbx_1 != i)
            int64_t arg_18 = rbx_1
            int32_t r9_2 = sub_140b5ead0(rbx_1.d) + arg_18:4.d
            void* rbx_2
            
            if (*(arg1 + 0x410) == *(arg1 + 0x43c))
            label_142131f97:
                rbx_2 = sub_142117fb0(arg1 + 0x408, r9_2, &arg_18)
            else
                void* rcx_3 = *(arg1 + 0x448)
                void* r8_1 = arg1 + 0x440
                
                if (rcx_3 != 0)
                    r8_1 = rcx_3
                
                int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x450)) - 1) & sx.q(r9_2)) << 2))
                
                if (rax_5 == 0xffffffff)
                label_142131f97_1:
                    rbx_2 = sub_142117fb0(arg1 + 0x408, r9_2, &arg_18)
                else
                    int64_t* rdx_6
                    
                    while (true)
                        rdx_6 = (sx.q(rax_5) << 5) + *(arg1 + 0x408)
                        
                        if (*rdx_6 == rbx_1)
                            break
                        
                        rax_5 = rdx_6[3].d
                        
                        if (rax_5 == 0xffffffff)
                            goto label_142131f97_2
                    
                    if (rax_5 == 0xffffffff || rdx_6 == 0)
                    label_142131f97_2:
                        rbx_2 = sub_142117fb0(arg1 + 0x408, r9_2, &arg_18)
                    else
                        rbx_2 = &rdx_6[1]
            
            int64_t* r9_3 = *rbx_2
            int64_t r8_4 = sx.q(*(rbx_2 + 8))
            int64_t* rdx_8 = r9_3
            void* rax_7 = &r9_3[r8_4]
            
            if (r9_3 != rax_7)
                while (*rdx_8 != i)
                    rdx_8 = &rdx_8[1]
                    
                    if (rdx_8 == rax_7)
                        goto label_142131fe1
            
            if (r9_3 == rax_7 || ((rdx_8 - r9_3) s>> 3).d == 0xffffffff)
            label_142131fe1:
                int32_t rax_8 = (r8_4 + 1).d
                *(rbx_2 + 8) = rax_8
                
                if (rax_8 s> *(rbx_2 + 0xc))
                    sub_1405a4d70(rbx_2)
                
                *((r8_4 << 3) + *rbx_2) = i

return sub_142132030(arg1, arg2, arg3)
