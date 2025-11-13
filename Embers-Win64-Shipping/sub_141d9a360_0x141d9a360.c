// 函数: sub_141d9a360
// 地址: 0x141d9a360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
sub_141d9ef80(*arg1, &var_48, &arg1[1])
char result = sub_140b16090(&var_48)

if (result != 0)
    int64_t* rcx_2 = *arg1
    int64_t var_d8 = 0
    int32_t var_d0_1 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x24)
    int64_t var_a0_1 = 0
    int32_t var_98_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int64_t var_58_1 = 0
    int64_t var_50_1 = 0
    int32_t var_90_1 = 0xffffffff
    void* i_1
    
    if (sub_141da1e80(rcx_2, &arg1[1], &var_d8, 0) != 0)
        int64_t* rcx_3 = *arg1
        int64_t* var_f8
        (*(*rcx_3 + 0x1d8))(rcx_3, &var_f8, &var_48)
        int64_t* var_f0
        
        if (var_f8 == 0)
        label_141d9a602:
            
            if (var_f0 != 0)
                var_f0[1].d -= 1
                
                if (var_f0[1].d == 1)
                    (**var_f0)(var_f0)
                    int32_t temp1_1 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
        else
            void* i = i_1
            int32_t var_60
            
            for (void* rdi_3 = sx.q(var_60) * 0x50 + i; i != rdi_3; i += 0x50)
                int16_t* rdx_3
                
                if (arg1[4].d == 0)
                    rdx_3 = &data_142d40450
                else
                    rdx_3 = arg1[3]
                
                int16_t* const rcx_4
                
                if (*(i + 0x10) == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *(i + 8)
                
                if (sub_140a54510(rcx_4, rdx_3) == 0)
                    int64_t* rcx_5 = var_f8
                    (*(*rcx_5 + 0x178))(rcx_5, *(i + 0x48))
                    int32_t r14_1 = *(i + 0x40)
                    int64_t rdi_4 = 0
                    int64_t var_108 = 0
                    int32_t r15_1 = 0
                    int32_t var_fc_1 = 0
                    
                    if (r14_1 s> 0)
                        sub_1405daba0(&var_108)
                        r15_1 = var_fc_1
                        rdi_4 = var_108
                    
                    int64_t* rcx_7 = var_f8
                    (*(*rcx_7 + 0x150))(rcx_7, rdi_4, sx.q(r14_1))
                    int32_t var_a8
                    
                    if (var_a8:3.b == 0)
                    label_141d9a6cb:
                        *(arg2 + 8) = 0
                        
                        if (arg2 + 0x10 == &var_108)
                            goto label_141d9a5a2
                        
                        int64_t rcx_24 = *(arg2 + 0x10)
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        *(arg2 + 0x10) = rdi_4
                        *(arg2 + 0x18) = r14_1
                        *(arg2 + 0x1c) = r15_1
                    else
                        int64_t* rcx_8 = *arg1
                        
                        if ((*(*rcx_8 + 0x1b8))(rcx_8) == 0)
                            *(arg2 + 8) = 6
                        else
                            int64_t* rcx_9 = *arg1
                            int64_t var_e8 = var_a0_1
                            int32_t var_e0_1 = var_98_1
                            int128_t zmm0_1 = var_e8.o
                            var_e8 = rdi_4
                            int32_t var_e0_2 = r14_1
                            var_108 = 0
                            int32_t var_100_1
                            var_100_1.q = 0
                            int64_t rax_10 = *rcx_9
                            int128_t var_38 = zmm0_1
                            zmm0_1 = var_e8.o
                            var_e8.o = zmm0_1
                            
                            if ((*(rax_10 + 0x1d0))(zmm0_1, &var_e8, &var_108, &var_38, var_108, 
                                    var_100_1) != 0)
                                if (rdi_4 != 0)
                                    sub_140a74f90(rdi_4)
                                
                                rdi_4 = var_108
                                r14_1 = var_100_1
                                r15_1 = var_fc_1
                                goto label_141d9a6cb
                            
                            int64_t rcx_10 = var_108
                            *(arg2 + 8) = 6
                            
                            if (rcx_10 != 0)
                                sub_140a74f90(rcx_10)
                        
                    label_141d9a5a2:
                        
                        if (rdi_4 != 0)
                            sub_140a74f90(rdi_4)
                    
                    break
            
            int64_t* rbx_1 = var_f0
            var_f8 = nullptr
            
            if (rbx_1 != 0)
                var_f0 = nullptr
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                goto label_141d9a602
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_141d94e70(&i_1)
    int64_t var_78
    result = sub_141d94e70(&var_78)
    int64_t rcx_19 = var_88
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    if (var_a0_1 != 0)
        result = sub_140a74f90(var_a0_1)
    
    int64_t rcx_21 = var_c8
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
else
    *(arg2 + 8) = 2

int64_t rcx_22 = var_48

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
