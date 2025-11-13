// 函数: sub_140942880
// 地址: 0x140942880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r12 = arg4
int64_t* var_48 = nullptr
int32_t i_2 = 0
sub_140af2c50(data_143ddb400, arg1, arg2, &var_48, arg3)
int32_t i_1 = i_2

if (i_1 s> *(r12 + 0xc))
    sub_1405a51b0(r12, i_1)
    i_1 = i_2

int64_t* r15 = var_48
void* result = &r15[sx.q(i_1) * 2]
int64_t* var_38 = r15
void* result_1 = result

if (r15 != result)
    do
        int16_t* var_c8
        sub_140a36020(r15, &var_c8)
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x20)
        int32_t var_c0
        int32_t rbx_1
        int16_t* r14_1
        
        if (var_c0 == 0)
            r14_1 = &data_142d40450
            rbx_1 = 0
        else
            r14_1 = var_c8
            rbx_1 = var_c0 - 1
        
        int16_t* var_78 = nullptr
        int32_t rdx_3 = 0
        int32_t rax_2 = 0
        
        if (rbx_1 s> 1)
            rbx_1 = 1
        
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        int16_t* rdi_1 = nullptr
        int16_t* const rcx_7
        int32_t rsi_2
        
        if (r14_1 != 0 && *r14_1 != 0 && rbx_1 s> 0)
            if (rbx_1 + 1 s> 0)
                sub_1405947f0(&var_78, rbx_1 + 1)
                rax_2 = var_6c_1
                rdx_3 = var_70_1
                rdi_1 = var_78
            
            rsi_2 = rdx_3 + 1 + rbx_1
            
            if (rsi_2 s> rax_2)
                sub_140594770(&var_78)
                rdi_1 = var_78
            
            UnDecorator::getReferenceType(rdi_1, r14_1, rbx_1 * 2)
            rcx_7 = rdi_1
            rdi_1[sx.q(rsi_2) - 1] = 0
        
        if (r14_1 == 0 || *r14_1 == 0 || rbx_1 s<= 0 || rsi_2 == 0)
            rcx_7 = &data_142d40450
        
        rbx_1.b = sub_140a54510(rcx_7, &data_142dc30a4) == 0
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        int32_t rax_6 = var_c0
        
        if (rbx_1.b != 0)
            rbx_1 = rax_6 - 1
            
            if (rax_6 == 0)
                rbx_1 = 0
            
            if (rbx_1 s> 1)
                rbx_1 = 1
            
            if (rbx_1 != 0)
                if (rax_6 != rbx_1)
                    int16_t* rcx_11 = var_c8
                    memmove(rcx_11, &rcx_11[sx.q(rbx_1)], (rax_6 - rbx_1) * 2)
                    rax_6 = var_c0
                
                rax_6 -= rbx_1
                var_c0 = rax_6
        
        int32_t rcx_12
        int16_t* rdx_7
        
        if (rax_6 == 0)
            rcx_12 = 0
            rdx_7 = &data_142d40450
        else
            rdx_7 = var_c8
            rcx_12 = rax_6 - 1
        
        int16_t* var_68 = nullptr
        int32_t rax_7 = rcx_12
        int16_t* rsi_3 = nullptr
        
        if (rcx_12 s> 1)
            rax_7 = 1
        
        int32_t rax_9 = 0
        int32_t var_5c_1 = 0
        void* rdi_2 = &rdx_7[sx.q(rcx_12) - sx.q(rax_7)]
        int32_t rdx_8 = 0
        int32_t var_60_1 = 0
        int16_t* const rcx_18
        int32_t r14_2
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (*(rdi_2 + (rbx_2 << 1)) != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_68, rbx_2.d + 1)
                rax_9 = var_5c_1
                rdx_8 = var_60_1
                rsi_3 = var_68
            
            r14_2 = rbx_2.d + 1 + rdx_8
            
            if (r14_2 s> rax_9)
                sub_140594770(&var_68)
                rsi_3 = var_68
            
            UnDecorator::getReferenceType(rsi_3, rdi_2, (rbx_2.d + 1) * 2)
            rcx_18 = rsi_3
        
        if (rdi_2 == 0 || *rdi_2 == 0 || r14_2 == 0)
            rcx_18 = &data_142d40450
        
        rbx_1.b = sub_140a54510(rcx_18, &data_142da76f4) == 0
        
        if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
        
        if (rbx_1.b != 0)
            int32_t rax_11 = var_c0
            int32_t r10_1 = rax_11 - 1
            
            if (rax_11 == 0)
                r10_1 = 0
            
            if (r10_1 - 1 s< 0)
                r10_1 = 0
            else if (r10_1 - 1 s< r10_1)
                r10_1 -= 1
            
            int32_t rbx_3 = rax_11 - 1
            
            if (rax_11 == 0)
                rbx_3 = 0
            
            rbx_1 = rbx_3 - r10_1
            
            if (rbx_1 s> 1)
                rbx_1 = 1
            
            if (rbx_1 != 0)
                int32_t rcx_22 = rax_11 - rbx_1
                
                if (rcx_22 != r10_1)
                    int16_t* r9_1 = var_c8
                    memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rbx_1 + r10_1)], (rcx_22 - r10_1) * 2)
                    rax_11 = var_c0
                
                var_c0 = rax_11 - rbx_1
        
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        sub_1405947f0(&var_58, 2)
        int32_t rsi_4 = var_50_1 + 2
        
        if (rsi_4 s> 0)
            sub_140594770(&var_58)
        
        int16_t* rdi_3 = var_58
        UnDecorator::getReferenceType(rdi_3, &data_142e1462c, 4)
        int16_t** var_d8
        var_d8.d = 0xffffffff
        int16_t* rdx_13 = &data_142d40450
        
        if (rsi_4 != 0)
            rdx_13 = rdi_3
        
        int32_t rax_15 = sub_140a23cf0(&var_c8, rdx_13, 0, 0, 0xffffffff)
        int64_t var_90_1
        int64_t var_88
        int64_t var_80_1
        
        if (rax_15 s>= 0)
            int32_t r8_9 = var_c0
            int32_t rbx_4
            int16_t* r14_3
            
            if (r8_9 == 0)
                r14_3 = &data_142d40450
                rbx_4 = 0
            else
                r14_3 = var_c8
                rbx_4 = r8_9 - 1
            
            if (rax_15 s< rbx_4)
                rbx_4 = rax_15
            
            int64_t r15_1 = 0
            int32_t rdi_4 = 0
            int64_t var_b8 = 0
            int32_t r12_1 = 0
            int64_t var_b0_1 = 0
            
            if (r14_3 != 0 && *r14_3 != 0 && rbx_4 s> 0)
                if (rbx_4 + 1 s> 0)
                    sub_1405947f0(&var_b8, rbx_4 + 1)
                    r12_1 = var_b0_1:4.d
                    rdi_4 = var_b0_1.d
                    r15_1 = var_b8
                
                rdi_4 = rdi_4 + 1 + rbx_4
                var_b0_1.d = rdi_4
                
                if (rdi_4 s> r12_1)
                    sub_140594770(&var_b8)
                    r12_1 = var_b0_1:4.d
                    rdi_4 = var_b0_1.d
                    r15_1 = var_b8
                
                UnDecorator::getReferenceType(r15_1, r14_3, rbx_4 * 2)
                *(r15_1 + (sx.q(rdi_4) << 1) - 2) = 0
                r8_9 = var_c0
            
            int64_t rcx_33 = var_88
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
                r8_9 = var_c0
            
            var_88 = r15_1
            var_b8 = 0
            var_80_1.d = rdi_4
            var_80_1:4.d = r12_1
            int64_t var_b0_2 = 0
            int32_t rsi_5
            
            if (rsi_4 == 0)
                rsi_5 = 0
            else
                rsi_5 = rsi_4 - 1
            
            int32_t rax_17 = rsi_5 + rax_15
            int32_t rbx_5 = r8_9 - 1
            
            if (r8_9 == 0)
                rbx_5 = 0
            
            int32_t rcx_34
            
            if (rax_17 s>= 0)
                rcx_34 = rbx_5
                
                if (rax_17 s< rbx_5)
                    rcx_34 = rax_17
            else
                rcx_34 = 0
            
            int64_t r9_2 = sx.q(rcx_34)
            
            if (sx.q(rax_17) + 0x7fffffff s< r9_2)
                rbx_5 = rcx_34
            else if (sx.q(rax_17) + 0x7fffffff s< sx.q(rbx_5))
                rbx_5 = rax_17 + 0x7fffffff
            
            int64_t var_a8 = 0
            int16_t* rax_19 = &data_142d40450
            int64_t var_a0_1 = 0
            
            if (r8_9 != 0)
                rax_19 = var_c8
            
            int64_t rsi_6 = 0
            rbx_1 = rbx_5 - rcx_34
            int32_t rdi_6 = 0
            int32_t r14_4 = 0
            void* r15_2 = &rax_19[r9_2]
            
            if (r15_2 != 0 && *r15_2 != 0 && rbx_1 s> 0)
                if (rbx_1 + 1 s> 0)
                    sub_1405947f0(&var_a8, rbx_1 + 1)
                    r14_4 = var_a0_1:4.d
                    rdi_6 = var_a0_1.d
                    rsi_6 = var_a8
                
                rdi_6 = rdi_6 + 1 + rbx_1
                var_a0_1.d = rdi_6
                
                if (rdi_6 s> r14_4)
                    sub_140594770(&var_a8)
                    r14_4 = var_a0_1:4.d
                    rdi_6 = var_a0_1.d
                    rsi_6 = var_a8
                
                UnDecorator::getReferenceType(rsi_6, r15_2, rbx_1 * 2)
                *(rsi_6 + (sx.q(rdi_6) << 1) - 2) = 0
            
            int64_t rcx_38 = var_98
            var_a8 = 0
            int64_t var_a0_2 = 0
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            r15 = var_38
            rbx_1.b = 1
            r12 = arg4
            var_90_1.d = rdi_6
            rdi_3 = var_58
            var_98 = rsi_6
            var_90_1:4.d = r14_4
        else
            rbx_1.b = 0
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        if (rbx_1.b != 0)
            _DeleteExceptionPtr(&var_88)
            _DeleteExceptionPtr(&var_98)
        
        int64_t rbx_6 = sx.q(r12[1].d)
        int32_t rax_21 = (rbx_6 + 1).d
        r12[1].d = rax_21
        
        if (rax_21 s> *(r12 + 0xc))
            sub_1405c4e40(r12)
        
        int64_t rcx_45 = (rbx_6 << 5) + *r12
        *rcx_45 = 0
        *rcx_45 = var_88
        *(rcx_45 + 8) = var_80_1.d
        *(rcx_45 + 0xc) = var_80_1:4.d
        *(rcx_45 + 0x10) = 0
        *(rcx_45 + 0x10) = var_98
        __builtin_memset(&var_98, 0, 0x20)
        *(rcx_45 + 0x18) = var_90_1.d
        result = zx.q(var_90_1:4.d)
        *(rcx_45 + 0x1c) = result.d
        int64_t rcx_46 = var_98
        
        if (rcx_46 != 0)
            result = sub_140a74f90(rcx_46)
        
        int64_t rcx_47 = var_88
        
        if (rcx_47 != 0)
            result = sub_140a74f90(rcx_47)
        
        int16_t* rcx_48 = var_c8
        
        if (rcx_48 != 0)
            result = sub_140a74f90(rcx_48)
        
        r15 = &r15[2]
        var_38 = r15
    while (r15 != result_1)
    
    i_1 = i_2
    r15 = var_48

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_49 = *r15
        
        if (rcx_49 != 0)
            result = sub_140a74f90(rcx_49)
        
        r15 = &r15[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r15 = var_48

if (r15 == 0)
    return result

return sub_140a74f90(r15)
