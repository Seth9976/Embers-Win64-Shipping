// 函数: sub_14106aea0
// 地址: 0x14106aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg1 + 0x10)
void* const rsi

if (rcx == 0)
    rsi = nullptr
else
    rsi = (*(*rcx + 8))(rcx)

void* const var_a8 = rsi
int64_t* rcx_56

if (rsi == 0)
    void* rax_41 = arg1[4]
    void* rcx_57 = &arg1[6]
    int64_t* var_b0 = nullptr
    
    if (rax_41 != 0)
        rcx_57 = rax_41
    
    arg1[2]((*(*rcx_57 + 8))(rcx_57), &var_b0)
    rcx_56 = var_b0
label_14106b57e:
    
    if (rcx_56 != 0)
        (**rcx_56)(rcx_56, 1)
else
    *(rsi + 8) += 1
    int32_t rcx_1 = *(rsi + 0x3c)
    int32_t r12_1 = *(rsi + 0x60)
    int32_t r13_1 = *(rsi + 0x64)
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = r12_1
    int32_t var_bc_1 = r13_1
    int32_t var_e8
    int32_t arg_8
    int32_t arg_c
    int64_t* rcx_53
    
    if (rcx_1 == 1)
        int32_t rax_27 = r13_1 * r12_1
        int32_t rcx_36 = 0
        int32_t var_dc_2 = 0x467a0000
        var_e8 = 6
        int32_t var_e4_1 = 3
        int16_t var_d8_2 = 0
        char var_e0_2 = 0
        int64_t* var_f8 = nullptr
        int32_t var_f0_1 = 0
        int32_t var_ec_1 = 0
        
        if (rax_27 s> 0)
            var_f0_1 = rax_27
            sub_140610660(&var_f8)
        else if (rax_27 s< 0)
            int32_t rbx_8 = neg.d(rax_27)
            
            if (rbx_8 != 0)
                int32_t rdx_14 = neg.d(rbx_8 + rax_27)
                
                if (rdx_14 != 0)
                    memmove(sx.q(rax_27) << 4, nullptr, rdx_14 << 4)
                    rcx_36 = var_f0_1
                
                var_f0_1 = rcx_36 - rbx_8
                sub_1405a5010(&var_f8)
        
        int32_t rbx_9 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_9)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg3, arg4)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_17
        rdx_17.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_9)
        int64_t* rcx_45 = data_143f0f180
        int32_t var_68_1 = var_d8_2.d
        int128_t var_78 = var_e8.o
        int128_t zmm0_2 = var_c8_1.o
        var_e8.o = zmm0_2
        (*(*rcx_45 + 0x2f0))(zmm0_2, rsi, &var_e8, &var_f8, &var_78)
        int64_t* rsi_3 = var_f8
        int64_t r14_2 = sx.q(var_f0_1)
        var_f8 = nullptr
        var_f0_1.q = 0
        arg_8 = r12_1
        arg_c = r13_1
        int64_t* rax_30 = j_sub_140a82f30(0x40)
        int64_t* rbx_10 = rax_30
        
        if (rax_30 == 0)
            rbx_10 = nullptr
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
        else
            rbx_10[1] = arg_8.q
            rbx_10[2].d = 2
            *(rbx_10 + 0x14) = 0x2000
            *(rbx_10 + 0x16) = 4
            rbx_10[3] = 0
            rbx_10[4] = 0
            *rbx_10 = &data_142f04400
            rbx_10[5] = rsi_3
            rbx_10[7] = sx.q(var_ec_1)
            rbx_10[6] = r14_2
        
        if (sub_14106d530(rbx_10) == 0)
            if (rbx_10 != 0)
                (**rbx_10)(rbx_10, 1)
            
            rcx_53 = var_f8
        label_14106b524:
            
            if (rcx_53 == 0)
                goto label_14106b52e
            
            sub_140a74f90(rcx_53)
        label_14106b52e:
            void* rax_38 = arg1[4]
            void* rcx_54 = &arg1[6]
            int64_t* var_b8 = nullptr
            
            if (rax_38 != 0)
                rcx_54 = rax_38
            
            arg1[2]((*(*rcx_54 + 8))(rcx_54), &var_b8)
            rcx_56 = var_b8
            goto label_14106b57e
        
        void* rax_33 = arg1[4]
        void* rcx_48 = &arg1[6]
        int64_t* arg_20 = rbx_10
        
        if (rax_33 != 0)
            rcx_48 = rax_33
        
        arg1[2]((*(*rcx_48 + 8))(rcx_48), &arg_20)
        int64_t* rcx_50 = arg_20
        
        if (rcx_50 != 0)
            (**rcx_50)(rcx_50, 1)
        
        int64_t* rcx_51 = var_f8
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
    else if (rcx_1 == 2)
    label_14106af3e:
        int32_t rax_4 = r13_1 * r12_1
        int32_t rcx_5 = 0
        int32_t var_dc_1 = 0x467a0000
        var_e8.q = 6
        int16_t var_d8_1 = 0
        char var_e0_1 = 0
        int64_t* var_108 = nullptr
        int32_t var_100_1 = 0
        int32_t var_fc_1 = 0
        
        if (rax_4 s> 0)
            var_100_1 = rax_4
            sub_1406105e0(&var_108)
        else if (rax_4 s< 0)
            int32_t rbx_4 = neg.d(rax_4)
            
            if (rbx_4 != 0)
                int32_t rdx_5 = neg.d(rbx_4 + rax_4)
                
                if (rdx_5 != 0)
                    memmove(sx.q(rax_4) << 2, nullptr, rdx_5 << 2)
                    rcx_5 = var_100_1
                
                var_100_1 = rcx_5 - rbx_4
                sub_1405dac90(&var_108)
        
        int32_t rbx_5 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_5)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg3, arg4)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_8
        rdx_8.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_5)
        int64_t* rcx_28 = data_143f0f180
        int32_t var_88_1 = var_d8_1.d
        int128_t var_98 = var_e8.o
        int128_t zmm0_1 = var_c8_1.o
        int64_t rax_17 = *rcx_28
        int128_t var_48 = zmm0_1
        (*(rax_17 + 0x2f8))(zmm0_1, rsi, &var_48, &var_108, &var_98)
        int64_t* rsi_2 = var_108
        int64_t r14_1 = sx.q(var_100_1)
        var_108 = nullptr
        var_100_1.q = 0
        arg_8 = r12_1
        arg_c = r13_1
        int64_t* rax_18 = j_sub_140a82f30(0x40)
        int64_t* rbx_6 = rax_18
        
        if (rax_18 == 0)
            rbx_6 = nullptr
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
        else
            rbx_6[1] = arg_8.q
            rbx_6[2].d = 0
            *(rbx_6 + 0x14) = 0x801
            *(rbx_6 + 0x16) = 4
            rbx_6[3] = 0
            rbx_6[4] = 0
            *rbx_6 = &data_142d56fd0
            rbx_6[5] = rsi_2
            rbx_6[7] = sx.q(var_fc_1)
            rbx_6[6] = r14_1
        
        if (sub_14106d530(rbx_6) == 0)
            if (rbx_6 != 0)
                (**rbx_6)(rbx_6, 1)
            
            rcx_53 = var_108
            goto label_14106b524
        
        void* rax_21 = arg1[4]
        void* rcx_31 = &arg1[6]
        int64_t* arg_18 = rbx_6
        
        if (rax_21 != 0)
            rcx_31 = rax_21
        
        arg1[2]((*(*rcx_31 + 8))(rcx_31), &arg_18)
        int64_t* rcx_33 = arg_18
        
        if (rcx_33 != 0)
            (**rcx_33)(rcx_33, 1)
        
        int64_t* rcx_34 = var_108
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
    else
        if (rcx_1 != 0xa)
            if (rcx_1 != 0x25)
                goto label_14106b52e
            
            goto label_14106af3e
        
        int64_t* var_118 = nullptr
        int32_t i_1 = r13_1 * r12_1
        int32_t i_3 = 0
        int32_t i_2 = 0
        int32_t var_10c_1 = 0
        
        if (i_1 s> 0)
            i_2 = i_1
            sub_1405a4d70(&var_118)
            int64_t* rax_5 = var_118
            
            if (i_1 != 0)
                int32_t i
                
                do
                    *rax_5 = 0
                    rax_5 = &rax_5[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else if (i_1 s< 0)
            int32_t r15_2 = neg.d(i_1)
            
            if (r15_2 != 0)
                int32_t rcx_9 = neg.d(r15_2 + i_1)
                
                if (rcx_9 != 0)
                    memmove(sx.q(i_1) << 3, nullptr, rcx_9 << 3)
                    i_3 = i_2
                
                i_2 = i_3 - r15_2
                sub_1405c53d0(&var_118)
        
        int128_t zmm0 = var_c8_1.o
        int64_t rax_7 = *data_143f0f180
        int128_t var_58 = zmm0
        (*(rax_7 + 0x650))(zmm0, arg2, rsi, &var_58, &var_118, 0, 0, 0)
        int64_t* rsi_1 = var_118
        int64_t i_4 = sx.q(i_2)
        var_118 = nullptr
        i_2.q = 0
        arg_8 = r12_1
        arg_c = r13_1
        int64_t* rax_8 = j_sub_140a82f30(0x40)
        int64_t* rbx_2 = rax_8
        
        if (rax_8 == 0)
            rbx_2 = nullptr
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
        else
            rbx_2[1] = arg_8.q
            rbx_2[2].d = 1
            *(rbx_2 + 0x14) = 0x1000
            *(rbx_2 + 0x16) = 4
            rbx_2[3] = 0
            rbx_2[4] = 0
            *rbx_2 = &data_142d56ff0
            rbx_2[5] = rsi_1
            rbx_2[7] = sx.q(var_10c_1)
            rbx_2[6] = i_4
        
        if (sub_14106d530(rbx_2) == 0)
            if (rbx_2 != 0)
                (**rbx_2)(rbx_2, 1)
            
            rcx_53 = var_118
            goto label_14106b524
        
        void* rax_11 = arg1[4]
        void* rcx_16 = &arg1[6]
        arg_8.q = rbx_2
        
        if (rax_11 != 0)
            rcx_16 = rax_11
        
        arg1[2]((*(*rcx_16 + 8))(rcx_16), &arg_8)
        int64_t* rcx_18 = arg_8.q
        
        if (rcx_18 != 0)
            (**rcx_18)(rcx_18, 1)
        
        int64_t* rcx_19 = var_118
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
return sub_1405d1550(&var_a8)
