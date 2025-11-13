// 函数: sub_141d4de90
// 地址: 0x141d4de90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
bool r10 = sub_140b5b8a0(*(arg1 + 0x28), 0) == 0
int64_t var_c8

if ((*(arg1 + 0x2c) != 0 | r10) != 0)
    var_c8 = *(arg1 + 0x28)
else
    void var_70
    
    if (arg4 == 0)
        int64_t var_b0_1 = 0
        var_c8 = 0
    else
        var_c8 = *(**arg4)(arg4, &var_70)

int64_t* rcx_3 = *(arg1 + 0x130)
int64_t rax_6
void var_68

if (rcx_3 != 0)
    rax_6 = *(*(*rcx_3 + 0x20))(rcx_3, &var_68)

if (rcx_3 != 0 && var_c8 == rax_6)
label_141d4e07a:
    *result = *(arg1 + 0x130)
    void* rax_23 = *(arg1 + 0x138)
    result[1] = rax_23
    
    if (rax_23 != 0)
        *(rax_23 + 8) += 1
else
    void var_60
    int64_t rbx_1 = *sub_140b58170(&var_60, "Media", 1)
    j_sub_140b3db50()
    int64_t* rax_8 = sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (rax_8 != 0)
        int32_t rcx_5
        rcx_5.b = sub_140b5b8a0(var_c8.d, 0) == 0
        
        if ((var_c8:4.d != 0 | rcx_5.b) == 0)
            int64_t* rcx_10 = *(arg1 + 0x130)
            
            if (rcx_10 != 0)
                void var_58
                int64_t* rax_20 = (*(*rax_8 + 0x60))(rax_8, (*(*rcx_10 + 0x20))(rcx_10, &var_58))
                
                if (rax_20 == 0)
                    goto label_141d4e0a0
                
                if ((**rax_20)(rax_20, arg3, arg4, 0, 0) == 0)
                    goto label_141d4e0a0
                
                goto label_141d4e07a
            
        label_141d4e0a0:
            int16_t* var_c0 = nullptr
            int32_t var_b8_1 = 0
            sub_1405947f0(&var_c0, 8)
            int32_t r14_1 = var_b8_1 + 8
            var_b8_1 = r14_1
            
            if (r14_1 s> 0)
                sub_140594770(&var_c0)
                r14_1 = var_b8_1
            
            int16_t* rsi_1 = var_c0
            int16_t var_d8_1 = 0x3f
            sub_1405a7220(rsi_1, 8, "Windows", 8, 0x3f)
            int64_t* rax_25 = (*(*rax_8 + 0x58))(rax_8)
            int64_t* r8_2 = rax_25
            int64_t* rax_26 = *rax_25
            int64_t rdx_10 = sx.q(r8_2[1].d)
            int64_t* var_a8_1 = rax_26
            void* rcx_17 = &rax_26[rdx_10]
            
            if (rax_26 == rcx_17)
            label_141d4e236:
                
                if (rdx_10.d s> 0)
                    int64_t* r12_2 = *r8_2
                    int64_t r15_2 = 0
                    uint64_t rcx_25 = sx.q(rdx_10.d) << 3 u>> 3
                    
                    if (r12_2 u> &r12_2[sx.q(rdx_10.d)])
                        rcx_25 = 0
                    
                    if (rcx_25 != 0)
                        do
                            int64_t* rcx_26 = *r12_2
                            int64_t* rax_42 = (*(*rcx_26 + 0x20))(rcx_26)
                            int64_t* i = *rax_42
                            
                            for (void* rdi_7 = &i[sx.q(rax_42[1].d) * 2]; i != rdi_7; i = &i[2])
                                int16_t* rdx_14 = &data_142d40450
                                
                                if (r14_1 != 0)
                                    rdx_14 = rsi_1
                                
                                int16_t* const rcx_27
                                
                                if (i[1].d == 0)
                                    rcx_27 = &data_142d40450
                                else
                                    rcx_27 = *i
                                
                                if (sub_140a54510(rcx_27, rdx_14) == 0)
                                    break
                            
                            r12_2 = &r12_2[1]
                            r15_2 += 1
                        while (r15_2 != rcx_25)
                        
                        result = arg2
                
                *result = 0
                result[1] = 0
            else
                while (true)
                    int64_t* r15_1 = *rax_26
                    int64_t* rax_28 = (*(*r15_1 + 0x20))(r15_1)
                    int64_t* rbx_4 = *rax_28
                    void* rdi_4 = &rbx_4[sx.q(rax_28[1].d) * 2]
                    
                    if (rbx_4 != rdi_4)
                        while (true)
                            int16_t* const rdx_11 = &data_142d40450
                            
                            if (r14_1 != 0)
                                rdx_11 = rsi_1
                            
                            int16_t* const rcx_19
                            
                            if (rbx_4[1].d == 0)
                                rcx_19 = &data_142d40450
                            else
                                rcx_19 = *rbx_4
                            
                            if (sub_140a54510(rcx_19, rdx_11) == 0)
                                break
                            
                            rbx_4 = &rbx_4[2]
                            
                            if (rbx_4 == rdi_4)
                                goto label_141d4e21c
                        
                        var_d8_1.q = 0
                        
                        if ((**r15_1)(r15_1, arg3, arg4, 0, 0) != 0)
                            int64_t var_a0
                            (*(*r15_1 + 8))(r15_1, &var_a0, arg1 + 0x10)
                            int64_t rax_33 = var_a0
                            int64_t* var_98
                            
                            if (rax_33 != 0)
                                *result = rax_33
                                result[1] = var_98
                                int64_t var_98_1 = 0
                                var_a0 = 0
                                break
                            
                            if (var_98 != 0)
                                var_98[1].d -= 1
                                
                                if (var_98[1].d == 1)
                                    (**var_98)(var_98)
                                    int32_t rax_36 = *(var_98 + 0xc)
                                    *(var_98 + 0xc) -= 1
                                    
                                    if (rax_36 == 1)
                                        (*(*var_98 + 8))(var_98, 1)
                                
                                rsi_1 = var_c0
                                r14_1 = var_b8_1
                    
                label_141d4e21c:
                    rax_26 = &var_a8_1[1]
                    var_a8_1 = rax_26
                    
                    if (rax_26 == rcx_17)
                        r8_2 = rax_25
                        rdx_10 = zx.q(r8_2[1].d)
                        goto label_141d4e236
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
        else
            int64_t* rax_11 = (*(*rax_8 + 0x60))(rax_8, &var_c8)
            
            if (rax_11 == 0)
                *result = 0
                result[1] = 0
            else
                int64_t var_80
                (*(*rax_11 + 8))(rax_11, &var_80, arg1 + 0x10)
                int64_t rax_13 = var_80
                int64_t* var_78
                
                if (rax_13 != 0)
                    *result = rax_13
                    result[1] = var_78
                else
                    *result = 0
                    result[1] = 0
                    
                    if (var_78 != 0)
                        var_78[1].d -= 1
                        
                        if (var_78[1].d == 1)
                            (**var_78)(var_78)
                            int32_t r12_1 = *(var_78 + 0xc)
                            *(var_78 + 0xc) -= 1
                            
                            if (r12_1 == 1)
                                (*(*var_78 + 8))(var_78, zx.q(r12_1))
    else
        *result = 0
        result[1] = 0

return result
