// 函数: sub_140af24b0
// 地址: 0x140af24b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* var_178 = nullptr
int32_t i_5 = 0
int64_t* var_188 = nullptr
int32_t i_3 = 0
(*(rax + 0xa0))(arg1, &var_178, &var_188)
int16_t* var_138
int32_t result = (*(*arg1 + 0xb0))(arg1, &var_138)
int32_t i = i_3
int32_t arg_8 = 0

if (i s> 0)
    int64_t* r12_1 = nullptr
    int64_t r14_3
    
    do
        int32_t var_130
        int32_t rsi_1 = var_130
        uint64_t rdi_1 = 0
        int16_t* r14_1 = var_138
        int32_t rbx = rsi_1
        uint64_t var_168 = 0
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_168, rsi_1, 0)
            rdi_1 = var_168
            memcpy(rdi_1, r14_1, rsi_1 * 2)
            rsi_1 = var_130
        else
            int32_t var_15c_1 = 0
        
        int32_t r14_2 = arg1[3].d
        uint64_t var_198 = 0
        int64_t r13_1 = arg1[2]
        int32_t var_190_1 = r14_2
        
        if (r14_2 != 0)
            sub_1405a4c70(&var_198, r14_2, 0)
            memcpy(var_198, r13_1, r14_2 * 2)
            rsi_1 = var_130
        else
            int32_t var_18c_1 = 0
        
        int64_t* rdx_6 = var_188
        int32_t rax_2 = *(r12_1 + rdx_6 + 8)
        int32_t rcx_5 = rax_2 - 1
        
        if (rax_2 == 0)
            rcx_5 = 0
        
        if (rcx_5 != 0)
            int64_t* rax_3 = var_178
            
            if (*(rax_3 + r12_1 + 8) != 0)
                *(rax_3 + r12_1)
            
            int16_t* const r8_5 = &data_142d40450
            
            if (rsi_1 != 0)
                r8_5 = var_138
            
            uint64_t var_158
            sub_140a2e390(&var_158, u"%s.%s", r8_5)
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            rdi_1 = var_158
            int32_t var_150
            rbx = var_150
            int32_t var_14c
            int32_t var_15c_2 = var_14c
            int64_t* rax_5 = var_188
            var_158 = 0
            var_150.q = 0
            
            if (*(r12_1 + rax_5 + 8) != 0)
                *(r12_1 + rax_5)
            
            int16_t* const r8_6
            
            if (arg1[3].d == 0)
                r8_6 = &data_142d40450
            else
                r8_6 = arg1[2]
            
            uint64_t var_148
            sub_140a2e390(&var_148, u"%s %s", r8_6)
            uint64_t rcx_9 = var_198
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdx_6 = var_188
            var_198 = var_148
            int32_t var_140
            var_190_1 = var_140
            int32_t var_13c
            int32_t var_18c_2 = var_13c
            var_140.q = 0
            var_148 = 0
        
        r14_3 = sx.q(arg_8)
        int64_t* r13_4 = &rdx_6[r14_3 * 2]
        int64_t var_60
        int64_t* rax_10 = (*(*arg1 + 0x98))(arg1, &var_60, r13_4)
        int64_t r9_5 = *arg1
        int64_t var_70
        int64_t* rax_11 = (*(r9_5 + 0x90))(arg1, &var_70, r13_4, r9_5)
        int64_t r8_9 = *arg1
        int32_t rax_12 = (*(r8_9 + 0x80))(arg1, &var_198, r8_9)
        int64_t r9_6 = *arg1
        int64_t var_80
        int64_t* rax_13 = (*(r9_6 + 0x70))(arg1, &var_80, &var_198, r9_6)
        int64_t rdx_11 = *arg1
        int32_t rax_14 = (*(rdx_11 + 0x10))(arg1, rdx_11)
        int64_t rdx_12 = *arg1
        int32_t rax_15 = (*(rdx_12 + 8))(arg1, rdx_12)
        int64_t var_128 = 0
        int32_t var_120_1 = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&var_128, rbx, 0)
            memcpy(var_128, rdi_1, rbx * 2)
        else
            int32_t var_11c_1 = 0
        
        int64_t var_118 = 0
        int32_t var_110_1 = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&var_118, rbx, 0)
            memcpy(var_118, rdi_1, rbx * 2)
        else
            int32_t var_10c_1 = 0
        
        int64_t var_108 = 0
        uint64_t rsi_2 = var_198
        int32_t var_100_1 = var_190_1
        
        if (var_190_1 != 0)
            sub_1405a4c70(&var_108, var_190_1, 0)
            memcpy(var_108, rsi_2, var_190_1 * 2)
        else
            int32_t var_fc_1 = 0
        
        int64_t var_f8
        sub_140596d10(&var_f8, r13_4)
        int64_t var_e8
        sub_140596d10(&var_e8, rax_13)
        int64_t var_d0
        sub_140596d10(&var_d0, rax_11)
        int64_t var_c0
        sub_140596d10(&var_c0, rax_10)
        int64_t rcx_26 = var_80
        int32_t result_1 = 0
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_70
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_60
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_19 = (rbx_2 + 1).d
        arg2[1].d = rax_19
        
        if (rax_19 s> *(arg2 + 0xc))
            sub_1405c5340(arg2)
        
        int64_t* rbx_4 = rbx_2 * 0x88 + *arg2
        sub_140596d10(rbx_4, &var_128)
        sub_140596d10(&rbx_4[2], &var_118)
        sub_140596d10(&rbx_4[4], &var_108)
        sub_140596d10(&rbx_4[6], &var_f8)
        sub_140596d10(&rbx_4[8], &var_e8)
        rbx_4[0xa].d = rax_12
        sub_140596d10(&rbx_4[0xb], &var_d0)
        sub_140596d10(&rbx_4[0xd], &var_c0)
        int64_t rcx_37 = var_c0
        rbx_4[0xf].d = rax_15
        *(rbx_4 + 0x7c) = rax_14
        result = result_1
        rbx_4[0x10].d = result
        
        if (rcx_37 != 0)
            result = sub_140a74f90(rcx_37)
        
        int64_t rcx_38 = var_d0
        
        if (rcx_38 != 0)
            result = sub_140a74f90(rcx_38)
        
        int64_t rcx_39 = var_e8
        
        if (rcx_39 != 0)
            result = sub_140a74f90(rcx_39)
        
        int64_t rcx_40 = var_f8
        
        if (rcx_40 != 0)
            result = sub_140a74f90(rcx_40)
        
        int64_t rcx_41 = var_108
        
        if (rcx_41 != 0)
            result = sub_140a74f90(rcx_41)
        
        int64_t rcx_42 = var_118
        
        if (rcx_42 != 0)
            result = sub_140a74f90(rcx_42)
        
        int64_t rcx_43 = var_128
        
        if (rcx_43 != 0)
            result = sub_140a74f90(rcx_43)
        
        uint64_t rcx_44 = var_198
        
        if (rcx_44 != 0)
            result = sub_140a74f90(rcx_44)
        
        if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)
        
        i = i_3
        r12_1 = &r12_1[2]
        arg_8 = r14_3.d + 1
    while (r14_3.d + 1 s< i)

int16_t* rcx_46 = var_138

if (rcx_46 != 0)
    result = sub_140a74f90(rcx_46)
    i = i_3

int64_t* rdi_2 = var_188

if (i != 0)
    int32_t i_1
    
    do
        int64_t rcx_47 = *rdi_2
        
        if (rcx_47 != 0)
            result = sub_140a74f90(rcx_47)
        
        rdi_2 = &rdi_2[2]
        i_1 = i
        i -= 1
    while (i_1 != 1)
    rdi_2 = var_188

if (rdi_2 != 0)
    result = sub_140a74f90(rdi_2)

int32_t i_4 = i_5
int64_t* rbx_5 = var_178

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_49 = *rbx_5
        
        if (rcx_49 != 0)
            result = sub_140a74f90(rcx_49)
        
        rbx_5 = &rbx_5[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_5 = var_178

if (rbx_5 == 0)
    return result

return sub_140a74f90(rbx_5)
