// 函数: sub_140a48000
// 地址: 0x140a48000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = 0
int64_t var_d0 = 0
sub_140af2b60()
void* result = sub_140b2acc0(&data_143dbb3f0, u"logcategoryfiles=", &var_d8, 1)

if (result.b != 0)
    int16_t* var_88
    int64_t* rax = sub_140a35da0(&var_d8, &var_88, nullptr)
    
    if (&var_d8 != rax)
        int64_t rcx_1 = var_d8
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        var_d8 = *rax
        *rax = 0
        var_d0.d = rax[1].d
        var_d0:4.d = *(rax + 0xc)
        rax[1] = 0
    
    int16_t* rcx_3 = var_88
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* var_98 = nullptr
    int32_t var_90_1 = 0
    sub_140a2ccb0(&var_d8, &var_98, U",", 1)
    int64_t* r13_1 = var_98
    int64_t rbx_2 = sx.q(var_90_1)
    int64_t* arg_18 = r13_1
    result = &r13_1[rbx_2 * 2]
    void* result_1 = result
    
    if (r13_1 != result)
        do
            int32_t rbx_3 = r13_1[1].d
            int64_t rdi_1 = *r13_1
            int64_t var_78 = 0
            int32_t var_70_1 = rbx_3
            
            if (rbx_3 != 0)
                sub_1405a4c70(&var_78, rbx_3, 0)
                memcpy(var_78, rdi_1, rbx_3 * 2)
            else
                int32_t var_6c_1 = 0
            
            int16_t* arg_10 = nullptr
            int64_t var_a8 = 0
            int16_t* rsi_1 = nullptr
            int64_t var_a0_1 = 0
            int32_t r12_1 = 0
            int32_t* var_c8 = nullptr
            int32_t var_c0_1 = 0
            sub_1405947f0(&var_c8, 2)
            int32_t rbx_4 = var_c0_1 + 2
            
            if (rbx_4 s> 0)
                sub_140594770(&var_c8)
            
            int32_t* rdi_2 = var_c8
            *rdi_2 = 0x3d
            int64_t var_60
            void** rax_5 = sub_140a36020(&var_78, &var_60)
            int16_t* rdx_7 = &data_142d40450
            
            if (rbx_4 != 0)
                rdx_7 = rdi_2
            
            result = sub_140a23cf0(rax_5, rdx_7, 1, 0, 0xffffffff)
            int32_t r15_1 = result.d
            
            if (result.d s>= 0)
                int32_t rax_6 = rax_5[1].d
                void* rsi_2
                
                if (rax_6 == 0)
                    rsi_2 = &data_142d40450
                else
                    rsi_2 = *rax_5
                
                int32_t rdi_3 = rax_6 - 1
                int32_t var_e0_1 = 0
                int16_t* rcx_11 = nullptr
                int32_t rax_7 = 0
                
                if (rax_6 == 0)
                    rdi_3 = 0
                
                arg_10 = nullptr
                int16_t* var_e8 = nullptr
                r12_1 = 0
                int32_t var_dc_1 = 0
                
                if (r15_1 s< rdi_3)
                    rdi_3 = r15_1
                
                if (rsi_2 != 0 && *rsi_2 != 0 && rdi_3 s> 0)
                    if (rdi_3 + 1 s> 0)
                        sub_1405947f0(&var_e8, rdi_3 + 1)
                        rcx_11 = var_e8
                        rax_7 = var_dc_1
                        r12_1 = var_e0_1
                        arg_10 = rcx_11
                    
                    r12_1 += rdi_3 + 1
                    
                    if (r12_1 s> rax_7)
                        sub_140594770(&var_e8)
                        rcx_11 = var_e8
                        arg_10 = rcx_11
                    
                    memcpy(rcx_11, rsi_2, rdi_3 * 2)
                    arg_10[sx.q(r12_1) - 1] = 0
                
                var_e8 = nullptr
                var_e0_1.q = 0
                int32_t rbx_5
                
                if (rbx_4 == 0)
                    rbx_5 = 0
                else
                    rbx_5 = rbx_4 - 1
                
                int32_t r8_5 = rax_5[1].d
                int32_t rax_9 = rbx_5 + r15_1
                int32_t rbx_6 = r8_5 - 1
                
                if (r8_5 == 0)
                    rbx_6 = 0
                
                int32_t rcx_15
                
                if (rax_9 s>= 0)
                    rcx_15 = rbx_6
                    
                    if (rax_9 s< rbx_6)
                        rcx_15 = rax_9
                else
                    rcx_15 = 0
                
                int64_t r9_2 = sx.q(rcx_15)
                
                if (sx.q(rax_9) + 0x7fffffff s< r9_2)
                    rbx_6 = rcx_15
                else if (sx.q(rax_9) + 0x7fffffff s< sx.q(rbx_6))
                    rbx_6 = rax_9 + 0x7fffffff
                
                if (r8_5 == 0)
                    result = &data_142d40450
                else
                    result = *rax_5
                
                void* r15_2 = result + (r9_2 << 1)
                int64_t var_f8 = 0
                rbx_4 = rbx_6 - rcx_15
                int64_t var_f0_1 = 0
                int64_t rsi_3 = 0
                int32_t result_2 = 0
                int32_t r14_2 = 0
                
                if (r15_2 != 0 && *r15_2 != 0 && rbx_4 s> 0)
                    if (rbx_4 + 1 s> 0)
                        sub_1405947f0(&var_f8, rbx_4 + 1)
                        r14_2 = var_f0_1:4.d
                        result_2 = var_f0_1.d
                        rsi_3 = var_f8
                    
                    result_2 += rbx_4 + 1
                    var_f0_1.d = result_2
                    
                    if (result_2 s> r14_2)
                        sub_140594770(&var_f8)
                        r14_2 = var_f0_1:4.d
                        result_2 = var_f0_1.d
                        rsi_3 = var_f8
                    
                    memcpy(rsi_3, r15_2, rbx_4 * 2)
                    result = sx.q(result_2)
                    *(rsi_3 + (result << 1) - 2) = 0
                
                int64_t rcx_19 = var_a8
                var_f8 = 0
                int64_t var_f0_2 = 0
                
                if (rcx_19 != 0)
                    result = sub_140a74f90(rcx_19)
                
                var_a8 = rsi_3
                rbx_4.b = 1
                rsi_1 = arg_10
                var_a0_1.d = result_2
                rdi_2 = var_c8
                var_a0_1:4.d = r14_2
            else
                rbx_4.b = 0
            
            int64_t rcx_20 = var_60
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
            
            if (rdi_2 != 0)
                result = sub_140a74f90(rdi_2)
            
            if (rbx_4.b != 0)
                void*** rax_11 = j_sub_140a82f30(0x838)
                void*** r12_3
                
                if (rax_11 == 0)
                    r12_3 = nullptr
                else
                    int16_t* const rdx_16 = &data_142d40450
                    
                    if (r12_1 != 0)
                        rdx_16 = rsi_1
                    
                    r12_3 = sub_140b0b0f0(rax_11, rdx_16, 0, 0)
                
                void* var_b8 = nullptr
                int32_t i_3 = 0
                sub_140a2ccb0(&var_a8, &var_b8, &data_142e5c1c0, 1)
                void* rbx_7 = var_b8
                void* r14_5 = (sx.q(i_3) << 4) + rbx_7
                
                if (rbx_7 != r14_5)
                    do
                        int32_t rsi_4 = *(rbx_7 + 8)
                        int16_t* rdi_5 = nullptr
                        int64_t r15_3 = *rbx_7
                        var_88 = nullptr
                        
                        if (rsi_4 != 0)
                            sub_1405a4c70(&var_88, rsi_4, 0)
                            rdi_5 = var_88
                            memcpy(rdi_5, r15_3, rsi_4 * 2)
                        else
                            int32_t var_7c_1 = 0
                        
                        int16_t* rdx_20 = &data_142d40450
                        
                        if (rsi_4 != 0)
                            rdx_20 = rdi_5
                        
                        void var_68
                        sub_140b1bda0(r12_3, sub_140b58260(&var_68, rdx_20, 1))
                        
                        if (rdi_5 != 0)
                            sub_140a74f90(rdi_5)
                        
                        rbx_7 += 0x10
                    while (rbx_7 != r14_5)
                    
                    r13_1 = arg_18
                
                int64_t rbx_8 = sx.q(arg1[1].d)
                int32_t rax_14 = (rbx_8 + 1).d
                arg1[1].d = rax_14
                
                if (rax_14 s> *(arg1 + 0xc))
                    sub_1405a4d70(arg1)
                
                result = *arg1
                *(result + (rbx_8 << 3)) = r12_3
                int32_t i_2 = i_3
                void* rbx_9 = var_b8
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_30 = *rbx_9
                        
                        if (rcx_30 != 0)
                            result = sub_140a74f90(rcx_30)
                        
                        rbx_9 += 0x10
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rbx_9 = var_b8
                
                if (rbx_9 != 0)
                    result = sub_140a74f90(rbx_9)
            
            int64_t rcx_32 = var_a8
            
            if (rcx_32 != 0)
                result = sub_140a74f90(rcx_32)
            
            if (arg_10 != 0)
                result = sub_140a74f90(arg_10)
            
            int64_t rcx_34 = var_78
            
            if (rcx_34 != 0)
                result = sub_140a74f90(rcx_34)
            
            r13_1 = &r13_1[2]
            arg_18 = r13_1
        while (r13_1 != result_1)
        
        rbx_2 = zx.q(var_90_1)
        r13_1 = var_98
    
    if (rbx_2.d != 0)
        int32_t i_1
        
        do
            int64_t rcx_35 = *r13_1
            
            if (rcx_35 != 0)
                result = sub_140a74f90(rcx_35)
            
            r13_1 = &r13_1[2]
            i_1 = rbx_2.d
            rbx_2 = zx.q(rbx_2.d - 1)
        while (i_1 != 1)
        r13_1 = var_98
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)

int64_t rcx_37 = var_d8

if (rcx_37 == 0)
    return result

return sub_140a74f90(rcx_37)
