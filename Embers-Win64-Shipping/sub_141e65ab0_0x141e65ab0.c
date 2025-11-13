// 函数: sub_141e65ab0
// 地址: 0x141e65ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140b6b610()
void* result_2 = result
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x268) s> 0)
    result = arg1 + 0x260
    int64_t r13_1 = 0
    int64_t var_108_1 = 0
    void* result_1 = result
    
    do
        int64_t r15_2 = r13_1 << 6
        int64_t* rbx_2 = *result + r15_2
        uint64_t var_a8 = 0
        int64_t rdi_1 = sx.q(rbx_2[1].d)
        int64_t rsi_1 = *rbx_2
        int32_t var_a0_1 = rdi_1.d
        
        if (rdi_1.d != 0)
            sub_140638750(&var_a8, rdi_1.d, 0)
            memcpy(var_a8, rsi_1, (rdi_1 << 2).d)
        else
            int32_t var_9c_1 = 0
        
        uint64_t var_98 = 0
        int64_t rdi_2 = sx.q(rbx_2[3].d)
        int64_t rsi_2 = rbx_2[2]
        int32_t var_90_1 = rdi_2.d
        
        if (rdi_2.d != 0)
            sub_140638750(&var_98, rdi_2.d, 0)
            memcpy(var_98, rsi_2, (rdi_2 << 2).d)
        else
            int32_t var_8c_1 = 0
        
        int64_t* rax = rbx_2[4]
        int64_t* rax_1 = rbx_2[5]
        
        if (rax_1 != 0)
            rax_1[1].d += 1
        
        int64_t* var_78 = nullptr
        int32_t var_70_1 = 0
        
        if (&rbx_2[6] != &var_78 && rbx_2[7].d != 0)
            int64_t* rcx_4 = rbx_2[6]
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x40))(rcx_4, &var_78)
        
        uint64_t j = var_98
        
        for (int64_t r14_1 = j + (sx.q(var_90_1) << 2); j != r14_1; j += 4)
            if (*j == arg2)
                int32_t rbx_4 = 0
                uint64_t k = var_98
                char r13_2 = arg3 ^ 1
                int64_t var_d8 = 0
                int32_t r12 = 0
                int32_t var_cc_1 = 0
                
                for (; k != r14_1; k += 4)
                    int32_t r15_3 = *k
                    int32_t rax_4 = (*(*result_2 + 8))(result_2, zx.q(r15_3))
                    
                    if (rax_4 == 0)
                        r13_2 = 1
                    else if (rax_4 == 1)
                        int64_t rdi_3 = sx.q(rbx_4)
                        rbx_4 = (rdi_3 + 1).d
                        
                        if (rbx_4 s> r12)
                            sub_1405a4cf0(&var_d8)
                            r12 = var_cc_1
                        
                        *(var_d8 + (rdi_3 << 2)) = r15_3
                
                if (r13_2 != 0)
                    int512_t zmm1_1 = sub_141e691f0(result_1, i_1, 1, 1)
                    i = i_1 - 1
                    r13_1 = var_108_1 - 1
                    
                    if (rax != 0)
                        sub_142386180(rax, zmm1_1)
                    
                    if (var_70_1 != 0)
                        int64_t* rcx_12 = var_78
                        
                        if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
                            int64_t* rcx_13 = nullptr
                            
                            if (var_70_1 != 0)
                                rcx_13 = var_78
                            
                            (*(*rcx_13 + 0x50))(rcx_13, 0)
                else if (rbx_4 != 0)
                    int64_t* rdi_7 = *result_1 + 0x10 + r15_2
                    
                    if (rdi_7 != &var_d8)
                        rdi_7[1].d = rbx_4
                        sub_140638750(rdi_7, rbx_4, *(rdi_7 + 0xc))
                        memcpy(*rdi_7, var_d8, rbx_4 << 2)
                    
                    r13_1 = var_108_1
                    i = i_1
                else
                    sub_141e691f0(result_1, i_1, rbx_4 + 1, 1)
                    i = i_1 - 1
                    r13_1 = var_108_1 - 1
                    
                    if (rax != 0)
                        int64_t* k_3 = nullptr
                        int32_t k_5 = 0
                        int512_t zmm1_2 = sub_14238f270(rax, &k_3)
                        
                        for (int64_t* k_1 = k_3; k_1 != &k_1[sx.q(k_5) * 3]; k_1 = &k_1[3])
                            int16_t* var_e8 = nullptr
                            int32_t var_e0_1 = 0
                            int16_t* rdi_4 = nullptr
                            int32_t rsi_3 = 0
                            sub_1405947f0(&var_e8, 2)
                            int32_t rbx_5 = var_e0_1 + 2
                            
                            if (rbx_5 s> 0)
                                sub_140594770(&var_e8)
                            
                            int16_t* r12_3 = var_e8
                            UnDecorator::getReferenceType(r12_3, &data_142d404c4, 4)
                            int16_t* var_c8
                            int32_t var_c0
                            
                            if (*k_1 != 0)
                                sub_140b63b70(k_1, &var_c8)
                            else
                                var_c8 = nullptr
                                var_c0 = 0
                            
                            int16_t* const rdx_12 = &data_142d40450
                            
                            if (rbx_5 != 0)
                                rdx_12 = r12_3
                            
                            int32_t rax_9 = sub_140a23cf0(&var_c8, rdx_12, 0, 0, 0xffffffff)
                            int16_t* rcx_22 = var_c8
                            
                            if (rax_9 s>= 0)
                                int32_t rbx_7
                                int16_t* r14_2
                                
                                if (var_c0 == 0)
                                    r14_2 = &data_142d40450
                                    rbx_7 = 0
                                else
                                    rbx_7 = var_c0 - 1
                                    r14_2 = rcx_22
                                
                                int16_t* var_100 = nullptr
                                rdi_4 = nullptr
                                int64_t var_f8_1 = 0
                                
                                if (rax_9 s< rbx_7)
                                    rbx_7 = rax_9
                                
                                rsi_3 = 0
                                int32_t rax_10 = 0
                                
                                if (r14_2 != 0 && *r14_2 != 0 && rbx_7 s> 0)
                                    if (rbx_7 + 1 s> 0)
                                        sub_1405947f0(&var_100, rbx_7 + 1)
                                        rax_10 = var_f8_1:4.d
                                        rsi_3 = var_f8_1.d
                                        rdi_4 = var_100
                                    
                                    rsi_3 = rsi_3 + 1 + rbx_7
                                    var_f8_1.d = rsi_3
                                    
                                    if (rsi_3 s> rax_10)
                                        sub_140594770(&var_100)
                                        rsi_3 = var_f8_1.d
                                        rdi_4 = var_100
                                    
                                    UnDecorator::getReferenceType(rdi_4, r14_2, rbx_7 * 2)
                                    rdi_4[sx.q(rsi_3) - 1] = 0
                                    rcx_22 = var_c8
                                
                                var_100 = nullptr
                                int64_t var_f8_2 = 0
                            
                            if (rcx_22 != 0)
                                sub_140a74f90(rcx_22)
                            
                            if (r12_3 != 0)
                                sub_140a74f90(r12_3)
                            
                            int16_t* const rdx_16 = &data_142d40450
                            
                            if (rsi_3 != 0)
                                rdx_16 = rdi_4
                            
                            int64_t var_68
                            sub_140b58260(&var_68, rdx_16, 1)
                            
                            if (rdi_4 != 0)
                                sub_140a74f90(rdi_4)
                            
                            char rax_12
                            rax_12, zmm1_2 = sub_140cc1810()
                            
                            if (rax_12 != 0)
                                zmm1_2 = sub_140ccdcd0()
                        
                        sub_1423989a0(rax, zmm1_2)
                        int32_t k_4 = k_5
                        
                        if (k_4 != 0)
                            void* rbx_9 = &k_3[1]
                            int32_t k_2
                            
                            do
                                int64_t rcx_32 = *rbx_9
                                
                                if (rcx_32 != 0)
                                    sub_140a74f90(rcx_32)
                                
                                rbx_9 += 0x18
                                k_2 = k_4
                                k_4 -= 1
                            while (k_2 != 1)
                        
                        int64_t* k_6 = k_3
                        
                        if (k_6 != 0)
                            sub_140a74f90(k_6)
                    
                    if (var_70_1 != 0)
                        int64_t* rcx_33 = var_78
                        
                        if (rcx_33 != 0 && (*(*rcx_33 + 0x28))(rcx_33) != 0)
                            int64_t* rcx_34 = nullptr
                            
                            if (var_70_1 != 0)
                                rcx_34 = var_78
                            
                            (*(*rcx_34 + 0x50))(rcx_34, 1)
                
                int64_t rax_17 = var_d8
                
                if (rax_17 != 0)
                    sub_140a74f90(rax_17)
                
                break
        
        sub_140745b20(&var_78)
        
        if (rax_1 != 0)
            rax_1[1].d -= 1
            
            if (rax_1[1].d == 1)
                (**rax_1)(rax_1)
                int32_t temp1_1 = *(rax_1 + 0xc)
                *(rax_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rax_1 + 8))(rax_1, 1)
        
        uint64_t rcx_41 = var_98
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        uint64_t rcx_42 = var_a8
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        i += 1
        r13_1 += 1
        i_1 = i
        var_108_1 = r13_1
        result = result_1
    while (i s< *(arg1 + 0x268))

return result
