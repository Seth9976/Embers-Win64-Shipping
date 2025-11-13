// 函数: sub_140a13620
// 地址: 0x140a13620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x88)
int64_t var_78 = 0
void var_68
void* rax_1 = sub_142a3a590(sub_142a35a00(&var_68), rbx, &var_78, arg2)
int64_t result
int512_t zmm1
result, zmm1 = sub_142a35f30(&var_68)
int64_t var_70

if (rax_1 == 0 && sub_142a37090(*(arg1 + 0x88), var_78, &var_70, zmm1) == 0)
    void* rbx_2 = *(arg1 + 0x90)
    int64_t rax_2 = var_70
    
    if (rbx_2 != rax_2)
        *(arg1 + 0x90) = rax_2
        
        if (rbx_2 != 0)
            sub_142a35fa0(rbx_2)
            zmm1 = j_sub_140a74f90(rbx_2)
    
    if (sub_142a39020(*(arg1 + 0x90), zmm1).d s>= 0)
        void* rax_3 = TPI1::cbTotal(*(arg1 + 0x90))
        result = sub_142a38730(rax_3)
        int32_t r15_1 = result.d
        
        if (result.d != 0)
            int32_t r14_1 = 0
            
            if (result.d s> 0)
                do
                    void* rax_4 = sub_142a38710(rax_3, r14_1)
                    int64_t rdi_1
                    
                    if (sub_1405f75a0(rax_4) != 1)
                        if (sub_1405f75a0(rax_4).d == 2)
                            char* rax_8 = sub_141b25240(rax_4)
                            
                            for (int64_t i = 0; i != 7; )
                                char rdx_5 = rax_8[i]
                                i += 1
                                
                                if (rdx_5 != *(i + &data_142e4d110:7))
                                    if (strcmp(sub_141b25240(rax_4), "A_VORBIS").d != 0)
                                        goto label_140a13839
                                    
                                    goto label_140a13800
                            
                        label_140a13800:
                            rdi_1 = sx.q(*(arg1 + 0x80))
                            int32_t rax_10 = (rdi_1 + 1).d
                            *(arg1 + 0x80) = rax_10
                            
                            if (rax_10 s> *(arg1 + 0x84))
                                sub_1405a4d70(arg1 + 0x78)
                            
                            *(*(arg1 + 0x78) + (rdi_1 << 3)) = rax_4
                    else
                        char* rax_6 = sub_141b25240(rax_4)
                        
                        for (int64_t i_1 = 0; i_1 != 6; )
                            char rcx_12 = rax_6[i_1]
                            i_1 += 1
                            
                            if (rcx_12 != *(i_1 + 0x142e4d4c3))
                                result = sub_141b25240(rax_4)
                                
                                for (int64_t j = 0; j != 6; )
                                    char rcx_14 = *(result + j)
                                    j += 1
                                    
                                    if (rcx_14 != *(j + 0x142e4d4cb))
                                        goto label_140a13839
                                
                                break
                        
                        rdi_1 = sx.q(*(arg1 + 0x70))
                        int32_t rax_7 = (rdi_1 + 1).d
                        *(arg1 + 0x70) = rax_7
                        
                        if (rax_7 s> *(arg1 + 0x74))
                            sub_1405a4d70(arg1 + 0x68)
                        
                        *(*(arg1 + 0x68) + (rdi_1 << 3)) = rax_4
                label_140a13839:
                    r14_1 += 1
                while (r14_1 s< r15_1)
            
            if (*(arg1 + 0x70) != 0 && *(arg1 + 0x80) != 0)
                result.b = 1
                return result

result.b = 0
return result
