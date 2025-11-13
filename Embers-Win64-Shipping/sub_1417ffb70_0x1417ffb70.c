// 函数: sub_1417ffb70
// 地址: 0x1417ffb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int64_t* result = (*(*arg1 + 0xa8))()

if (result[1].d != 0)
    int64_t* rcx = *result
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* var_68
            result = (*(*r15 + 0xc0))(r15, &var_68)
            
            if (var_68 != 0)
                int64_t* rbx_1 = r15[2]
                int64_t arg_18 = 0
                
                if (rbx_1 != 0)
                    int32_t rax_3 = rbx_1[1].d
                    
                    if (rax_3 != 0)
                        rbx_1[1].d = rax_3 + 1
                        rax_3.b = 1
                    
                    if (rax_3.b == 0)
                        rbx_1 = nullptr
                    
                    if (rbx_1 != 0)
                        arg_18 = r15[1]
                        int32_t rax_5 = rbx_1[1].d
                        rbx_1[1].d = rax_5
                        
                        if (rax_5 == 0)
                            (**rbx_1)(rbx_1)
                            int32_t temp3_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        int32_t rax_8 = rbx_1[1].d
                        rbx_1[1].d = rax_8
                        
                        if (rax_8 == 0)
                            (**rbx_1)(rbx_1)
                            int32_t temp5_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                
                int64_t* rcx_6 = var_68
                int64_t* var_78
                result = (*(*rcx_6 + 0x18))(rcx_6, &var_78)
                int64_t* rsi_1 = var_78
                int32_t i_2
                int32_t i_1 = i_2
                void* r12_3 = &rsi_1[sx.q(i_1) * 2]
                void* arg_20 = r12_3
                
                if (rsi_1 != r12_3)
                    do
                        int64_t var_98
                        __builtin_memset(&var_98, 0, 0x20)
                        int16_t* var_a8 = nullptr
                        int32_t var_a0_1 = 0
                        sub_1405947f0(&var_a8, 2)
                        int32_t rdi_1 = var_a0_1 + 2
                        
                        if (rdi_1 s> 0)
                            sub_140594770(&var_a8)
                        
                        int16_t* r14_1 = var_a8
                        UnDecorator::getReferenceType(r14_1, &data_142d84ee0, 4)
                        int16_t* const rdx_4 = &data_142d40450
                        
                        if (rdi_1 != 0)
                            rdx_4 = r14_1
                        
                        result = sub_140a23cf0(rsi_1, rdx_4, 1, 0, 0xffffffff)
                        int32_t rcx_11 = result.d
                        int64_t var_88
                        
                        if (result.d s>= 0)
                            int32_t rax_12 = rsi_1[1].d
                            int16_t* r12_4
                            
                            if (rax_12 == 0)
                                r12_4 = &data_142d40450
                            else
                                r12_4 = *rsi_1
                            
                            int32_t r15_1 = rax_12 - 1
                            int32_t rax_13 = 0
                            
                            if (rax_12 == 0)
                                r15_1 = 0
                            
                            int64_t var_c8 = 0
                            int64_t var_c0_1 = 0
                            int64_t r13_1 = 0
                            int32_t r14_2 = 0
                            
                            if (rcx_11 s< r15_1)
                                r15_1 = rcx_11
                            
                            if (r12_4 != 0 && *r12_4 != 0 && r15_1 s> 0)
                                if (r15_1 + 1 s> 0)
                                    sub_1405947f0(&var_c8, r15_1 + 1)
                                    rax_13 = var_c0_1:4.d
                                    r14_2 = var_c0_1.d
                                    r13_1 = var_c8
                                
                                r14_2 = r14_2 + 1 + r15_1
                                var_c0_1.d = r14_2
                                
                                if (r14_2 s> rax_13)
                                    sub_140594770(&var_c8)
                                    r14_2 = var_c0_1.d
                                    r13_1 = var_c8
                                
                                UnDecorator::getReferenceType(r13_1, r12_4, r15_1 * 2)
                                *(r13_1 + (sx.q(r14_2) << 1) - 2) = 0
                            
                            int64_t rcx_15 = var_88
                            
                            if (rcx_15 != 0)
                                sub_140a74f90(rcx_15)
                            
                            var_88 = r13_1
                            var_c8 = 0
                            int64_t var_80_1
                            var_80_1.d = r14_2
                            var_80_1:4.d = var_c0_1:4.d
                            int64_t var_c0_2 = 0
                            int32_t rdi_2
                            
                            if (rdi_1 == 0)
                                rdi_2 = 0
                            else
                                rdi_2 = rdi_1 - 1
                            
                            int32_t r8_3 = rsi_1[1].d
                            int32_t rax_17 = result.d + rdi_2
                            int32_t rdi_3 = r8_3 - 1
                            
                            if (r8_3 == 0)
                                rdi_3 = 0
                            
                            int32_t rcx_16
                            
                            if (rax_17 s>= 0)
                                rcx_16 = rdi_3
                                
                                if (rax_17 s< rdi_3)
                                    rcx_16 = rax_17
                            else
                                rcx_16 = 0
                            
                            int64_t r9_1 = sx.q(rcx_16)
                            
                            if (sx.q(rax_17) + 0x7fffffff s< r9_1)
                                rdi_3 = rcx_16
                            else if (sx.q(rax_17) + 0x7fffffff s< sx.q(rdi_3))
                                rdi_3 = rax_17 + 0x7fffffff
                            
                            if (r8_3 == 0)
                                result = &data_142d40450
                            else
                                result = *rsi_1
                            
                            void* r13_2 = result + (r9_1 << 1)
                            int64_t var_b8 = 0
                            rdi_1 = rdi_3 - rcx_16
                            int64_t var_b0_1 = 0
                            int64_t r15_2 = 0
                            int32_t result_2 = 0
                            int32_t r12_5 = 0
                            
                            if (r13_2 != 0 && *r13_2 != 0 && rdi_1 s> 0)
                                if (rdi_1 + 1 s> 0)
                                    sub_1405947f0(&var_b8, rdi_1 + 1)
                                    r12_5 = var_b0_1:4.d
                                    result_2 = var_b0_1.d
                                    r15_2 = var_b8
                                
                                result_2 = result_2 + 1 + rdi_1
                                var_b0_1.d = result_2
                                
                                if (result_2 s> r12_5)
                                    sub_140594770(&var_b8)
                                    r12_5 = var_b0_1:4.d
                                    result_2 = var_b0_1.d
                                    r15_2 = var_b8
                                
                                UnDecorator::getReferenceType(r15_2, r13_2, rdi_1 * 2)
                                result = sx.q(result_2)
                                *(r15_2 + (result << 1) - 2) = 0
                            
                            int64_t rcx_20 = var_98
                            var_b8 = 0
                            int64_t var_b0_2 = 0
                            
                            if (rcx_20 != 0)
                                result = sub_140a74f90(rcx_20)
                            
                            var_98 = r15_2
                            rdi_1.b = 1
                            r15 = arg1
                            int64_t var_90_1
                            var_90_1.d = result_2
                            r14_1 = var_a8
                            var_90_1:4.d = r12_5
                            r12_3 = arg_20
                        else
                            rdi_1.b = 0
                        
                        if (r14_1 != 0)
                            result = sub_140a74f90(r14_1)
                        
                        if (rdi_1.b != 0)
                            sub_140a360c0(&var_98)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            result = (*(*r15 + 0xa8))(r15)
                            int64_t* result_1 = result
                            
                            if (result[1].d != 0)
                                int64_t* rcx_24 = *result
                                
                                if (rcx_24 != 0)
                                    int64_t rdx_13 = *rcx_24
                                    result = (*(rdx_13 + 0x28))(rcx_24, rdx_13)
                                    
                                    if (result.b != 0)
                                        int64_t* rcx_25
                                        
                                        if (result_1[1].d == 0)
                                            rcx_25 = nullptr
                                        else
                                            rcx_25 = *result_1
                                        
                                        int64_t var_58 = arg_18
                                        int64_t* var_50_1 = rbx_1
                                        
                                        if (rbx_1 != 0)
                                            rbx_1[1].d += 1
                                        
                                        result =
                                            (*(*rcx_25 + 0x50))(rcx_25, &var_58, &var_88, &var_98)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    result = (**rbx_1)(rbx_1)
                                    int32_t temp7_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        result = (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        int64_t rcx_28 = var_98
                        
                        if (rcx_28 != 0)
                            result = sub_140a74f90(rcx_28)
                        
                        int64_t rcx_29 = var_88
                        
                        if (rcx_29 != 0)
                            result = sub_140a74f90(rcx_29)
                        
                        rsi_1 = &rsi_1[2]
                    while (rsi_1 != r12_3)
                    
                    i_1 = i_2
                    rsi_1 = var_78
                
                if (i_1 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_30 = *rsi_1
                        
                        if (rcx_30 != 0)
                            result = sub_140a74f90(rcx_30)
                        
                        rsi_1 = &rsi_1[2]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    rsi_1 = var_78
                
                if (rsi_1 != 0)
                    result = sub_140a74f90(rsi_1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* var_60
            
            if (var_60 != 0)
                result = zx.q(var_60[1].d)
                var_60[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_60)(var_60)
                    int32_t r13_3 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (r13_3 == 1)
                        return (*(*var_60 + 8))(var_60, zx.q(r13_3))

return result
