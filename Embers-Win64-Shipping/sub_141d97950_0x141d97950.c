// 函数: sub_141d97950
// 地址: 0x141d97950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg2
int64_t var_88
sub_141d9ef80(*arg1, &var_88, &arg1[1])
char result = sub_140b16090(&var_88)

if (result != 0)
    int64_t* rcx_2 = *arg1
    int32_t r12_1 = 0
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x24)
    int64_t var_e0_1 = 0
    int32_t var_d8_1 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    int64_t var_98_1 = 0
    int64_t var_90_1 = 0
    int32_t var_d0_1 = 0xffffffff
    void* var_a8
    
    if (sub_141da1e80(rcx_2, &arg1[1], &var_118, 0) != 0)
        int64_t* rcx_3 = *arg1
        int64_t* var_128
        (*(*rcx_3 + 0x1d8))(rcx_3, &var_128, &var_88)
        int64_t* var_120
        
        if (var_128 == 0)
        label_141d97d0b:
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t temp1_1 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_120 + 8))(var_120, 1)
        else
            void* r14_1 = var_a8
            int32_t var_a0
            void* i = sx.q(var_a0) * 0x50 + r14_1
            
            if (r14_1 != i)
                int64_t* r14_2 = r14_1 + 0x48
                
                do
                    int16_t* rdx_3
                    
                    if (arg1[4].d == 0)
                        rdx_3 = &data_142d40450
                    else
                        rdx_3 = arg1[3]
                    
                    int16_t* const rcx_4
                    
                    if (r14_2[-5].d == 0)
                        rcx_4 = &data_142d40450
                    else
                        rcx_4 = r14_2[-6]
                    
                    if (sub_140a54510(rcx_4, rdx_3) == 0)
                        int64_t* rcx_5 = var_128
                        (*(*rcx_5 + 0x178))(rcx_5, *r14_2)
                        *(r13 + 8) = 0
                        int64_t rdi_1 = sx.q(*(r13 + 0x18))
                        int32_t rax_7 = (rdi_1 + 1).d
                        *(r13 + 0x18) = rax_7
                        
                        if (rax_7 s> *(r13 + 0x1c))
                            sub_1405c4fe0(r13 + 0x10)
                        
                        void*** rsi_3 = (rdi_1 << 6) + *(r13 + 0x10)
                        *rsi_3 = &data_143238800
                        rsi_3[1] = 0
                        rsi_3[2] = 0
                        __builtin_memset(&rsi_3[3], 0, 0x20)
                        sub_140597df0(&rsi_3[1], &r14_2[-8])
                        sub_140597df0(&rsi_3[3], &r14_2[-6])
                        sub_140597df0(&rsi_3[5], &r14_2[-4])
                        int64_t rbx_1 = 0
                        rsi_3[7].d = r14_2[-2].d
                        *(rsi_3 + 0x3c) = *(r14_2 - 0xc)
                        int32_t rsi_4 = r14_2[-1].d
                        int64_t var_148 = 0
                        int32_t var_13c_1 = 0
                        
                        if (rsi_4 s> 0)
                            sub_1405daba0(&var_148)
                            r12_1 = var_13c_1
                            rbx_1 = var_148
                        
                        int64_t* rcx_11 = var_128
                        (*(*rcx_11 + 0x150))(rcx_11, rbx_1, sx.q(rsi_4))
                        int32_t var_e8
                        
                        if (var_e8:3.b != 0)
                            int64_t* rcx_12 = *arg1
                            
                            if ((*(*rcx_12 + 0x1b8))(rcx_12) == 0)
                                *(r13 + 8) = 6
                                
                                if (rbx_1 != 0)
                                    sub_140a74f90(rbx_1)
                                
                                break
                            
                            int64_t* rcx_13 = *arg1
                            int32_t var_70_1 = var_d8_1
                            int64_t var_138 = 0
                            int64_t var_130_1 = 0
                            int64_t rax_15 = *rcx_13
                            int128_t var_58 = var_e0_1.o
                            int32_t var_60_1 = rsi_4
                            int128_t zmm0_1 = rbx_1.o
                            int128_t var_48 = zmm0_1
                            
                            if ((*(rax_15 + 0x1d0))(zmm0_1, &var_48, &var_138, &var_58) == 0)
                                int64_t rcx_29 = var_138
                                *(r13 + 8) = 6
                                
                                if (rcx_29 != 0)
                                    sub_140a74f90(rcx_29)
                                
                                if (rbx_1 != 0)
                                    sub_140a74f90(rbx_1)
                                
                                break
                            
                            if (rbx_1 != 0)
                                sub_140a74f90(rbx_1)
                            
                            rbx_1 = var_138
                            rsi_4 = var_130_1.d
                            r12_1 = var_130_1:4.d
                            var_138 = 0
                            int64_t var_130_2 = 0
                        
                        int64_t r13_1 = sx.q(*(r13 + 0x28))
                        int32_t rax_17 = (r13_1 + 1).d
                        *(r13 + 0x28) = rax_17
                        
                        if (rax_17 s> *(r13 + 0x2c))
                            sub_1405c4e40(r13 + 0x20)
                        
                        void*** rax_20 = (r13_1 << 5) + *(r13 + 0x20)
                        *rax_20 = &data_1432388d8
                        rax_20[2] = 0
                        rax_20[3] = 0
                        rax_20[1].d = 0
                        
                        if (&rax_20[2] == &var_148)
                            if (rbx_1 != 0)
                                sub_140a74f90(rbx_1)
                            
                            r12_1 = 0
                        else
                            int64_t rcx_16 = rax_20[2]
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            rax_20[2] = rbx_1
                            *(rax_20 + 0x1c) = r12_1
                            r12_1 = 0
                            int32_t var_140_1
                            var_140_1.q = 0
                            var_148 = 0
                            rax_20[3].d = rsi_4
                        
                        r13 = arg2
                    
                    r14_2 = &r14_2[0xa]
                while (&r14_2[-9] != i)
            
            int64_t* rbx_2 = var_120
            var_128 = nullptr
            
            if (rbx_2 != 0)
                var_120 = nullptr
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
                
                goto label_141d97d0b
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    sub_141d94e70(&var_a8)
    int64_t var_b8
    result = sub_141d94e70(&var_b8)
    int64_t rcx_25 = var_c8
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)
    
    if (var_e0_1 != 0)
        result = sub_140a74f90(var_e0_1)
    
    int64_t rcx_27 = var_108
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)
else
    *(r13 + 8) = 2

int64_t rcx_28 = var_88

if (rcx_28 == 0)
    return result

return sub_140a74f90(rcx_28)
