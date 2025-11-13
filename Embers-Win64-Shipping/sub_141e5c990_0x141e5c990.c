// 函数: sub_141e5c990
// 地址: 0x141e5c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
char* rbp = arg2
*arg2 = 0
int32_t* r15 = arg1
int64_t result = sub_140b5b8a0(*arg1, 0)

if ((arg1[1] == 0 & result.b) == 0 && *(r15 + 0x18) != 0)
    *(r15 + 0xc) = 0
    r15[2] = 0xffffffff
    uint64_t rax = sub_140d3c6e0(&r15[2])
    uint64_t rbx_1 = rax
    
    if (rax != 0)
    label_141e5ca70:
        void* rax_4 = sub_140bdf2e0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rbx_1 = 0
        else
            void* rax_7 = sub_140d41340()
            
            if (rax_7 == 0)
                rbx_1 = 0
            else
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_8.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                    rbx_1 = 0
    else if (*(r15 + 0x18) == 0)
        rbx_1 = 0
    else
        if (rax.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax = zx.q(data_1439aaa30)
        
        if (rax.d != r15[4] || r15[2] != 0xffffffff)
            void* rax_1 = sub_140d2bce0(&r15[6])
            sub_140d3a3a0(&r15[2], rax_1)
            
            if (rax_1 != 0 || data_143e1d7b4 == 0)
                int32_t rax_2 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_2 = data_1439aaa30
                
                r15[4] = rax_2
            
            uint64_t rax_3 = sub_140d3c6e0(&r15[2])
            rbx_1 = rax_3
            
            if (rax_3 != 0)
                goto label_141e5ca70
            
            rbx_1 = 0
        else
            rbx_1 = 0
    
    *(r15 + 0x30) = rbx_1
    int64_t result_3
    
    if (rbx_1 == 0)
        *arg3 = 1
        result = sub_1408d4dd0(&r15[2])
        result_3 = result
        
        if (result == 0)
            result_3 = 0
        else
            void* rax_10 = sub_140bdf2e0()
            void* rdx_3 = *(result_3 + 0x10)
            result = sx.q(*(rax_10 + 0x38))
            
            if (result.d s> *(rdx_3 + 0x38))
                result_3 = 0
            else
                int64_t result_1 = result
                result = *(rdx_3 + 0x30)
                
                if (*(result + (result_1 << 3)) != rax_10 + 0x30)
                    result_3 = 0
                else
                    result = sub_140d41340()
                    
                    if (result == 0)
                        result_3 = 0
                    else
                        int64_t rdx_4 = result + 0x30
                        result = sx.q(*(result + 0x38))
                        
                        if (result.d s> *(result_3 + 0x38))
                            result_3 = 0
                        else
                            int64_t result_2 = result
                            result = *(result_3 + 0x30)
                            
                            if (*(result + (result_2 << 3)) != rdx_4)
                                result_3 = 0
        
        *(r15 + 0x30) = result_3
    
    if (rbx_1 != 0 || result_3 != 0)
        int64_t* i = *(r15 + 0x50)
        result = sx.q(r15[0x16])
        
        for (void* rdi_1 = &i[result * 3]; i != rdi_1; i = &i[3])
            if (*i != 0)
                int64_t var_48
                result = sub_1406d9ce0(&r15[0x1c], sub_140d30800(i, &var_48))
                int64_t rcx_11 = var_48
                
                if (rcx_11 != 0)
                    result = sub_140a74f90(rcx_11)
        
        int64_t* r14_1 = *(r15 + 0x40)
        void* rsi_3 = &r14_1[sx.q(r15[0x12]) * 2]
        void* arg_18 = rsi_3
        
        if (r14_1 != rsi_3)
            do
                if (r14_1[1].d s> 1)
                    if (sub_140a237d0(r14_1, &data_142d5a024, 1) == 0)
                        result = sub_1406daa50(&r15[0x1c], r14_1)
                        
                        if (result.d == 0xffffffff)
                            int64_t rdi_3 = sx.q(r15[0x1e])
                            int32_t rax_19 = (rdi_3 + 1).d
                            r15[0x1e] = rax_19
                            
                            if (rax_19 s> r15[0x1f])
                                sub_1405a4f90(&r15[0x1c])
                            
                            result = sub_140596d10((rdi_3 << 4) + *(r15 + 0x70), r14_1)
                    else
                        int32_t rax_13 = r14_1[1].d
                        int32_t rbx_3 = rax_13 - 1
                        
                        if (rax_13 == 0)
                            rbx_3 = 0
                        
                        int16_t* rbp_1
                        
                        if (rax_13 == 0)
                            rbp_1 = &data_142d40450
                        else
                            rbp_1 = *r14_1
                        
                        int32_t rbx_4 = 0
                        
                        if (rbx_3 - 1 s>= 0)
                            rbx_4 = rbx_3 - 1
                        
                        int16_t* var_58 = nullptr
                        int16_t* rdi_2 = nullptr
                        int64_t var_50_1 = 0
                        int32_t rsi_4 = 0
                        int32_t r12_1 = 0
                        
                        if (rbp_1 != 0 && *rbp_1 != 0 && rbx_4 s> 0)
                            if (rbx_4 + 1 s> 0)
                                sub_1405947f0(&var_58, rbx_4 + 1)
                                r12_1 = var_50_1:4.d
                                rsi_4 = var_50_1.d
                                rdi_2 = var_58
                            
                            rsi_4 = rsi_4 + 1 + rbx_4
                            var_50_1.d = rsi_4
                            
                            if (rsi_4 s> r12_1)
                                sub_140594770(&var_58)
                                r12_1 = var_50_1:4.d
                                rsi_4 = var_50_1.d
                                rdi_2 = var_58
                            
                            UnDecorator::getReferenceType(rdi_2, rbp_1, rbx_4 * 2)
                            rdi_2[sx.q(rsi_4) - 1] = 0
                        
                        int64_t* r13_1 = *(r15 + 0x70)
                        int64_t* rbx_5 = r13_1
                        void* rbp_4 = &r13_1[sx.q(r15[0x1e]) * 2]
                        
                        if (r13_1 != rbp_4)
                            while (true)
                                int16_t* rdx_10 = &data_142d40450
                                
                                if (rsi_4 != 0)
                                    rdx_10 = rdi_2
                                
                                int16_t* const rcx_16
                                
                                if (rbx_5[1].d == 0)
                                    rcx_16 = &data_142d40450
                                else
                                    rcx_16 = *rbx_5
                                
                                result = sub_140a54510(rcx_16, rdx_10)
                                
                                if (result.d == 0)
                                    break
                                
                                rbx_5 = &rbx_5[2]
                                
                                if (rbx_5 == rbp_4)
                                    goto label_141e5ccd1
                        
                        if (r13_1 == rbp_4 || ((rbx_5 - r13_1) s>> 4).d == 0xffffffff)
                        label_141e5ccd1:
                            int64_t rbx_6 = sx.q(r15[0x1e])
                            int32_t rax_16 = (rbx_6 + 1).d
                            r15[0x1e] = rax_16
                            
                            if (rax_16 s> r15[0x1f])
                                sub_1405a4f90(&r15[0x1c])
                            
                            result = (rbx_6 << 4) + *(r15 + 0x70)
                            var_58 = nullptr
                            int64_t var_50_2 = 0
                            *result = rdi_2
                            *(result + 8) = rsi_4
                            *(result + 0xc) = r12_1
                        else if (rdi_2 != 0)
                            result = sub_140a74f90(rdi_2)
                        
                        r15 = arg1
                        rsi_3 = arg_18
                
                r14_1 = &r14_1[2]
            while (r14_1 != rsi_3)
            
            rbp = arg2
        
        if (r15[0x1e] != 0)
            *rbp = 1
    else
        *arg3 = 0

return result
