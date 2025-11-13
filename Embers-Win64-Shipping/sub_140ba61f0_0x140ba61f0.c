// 函数: sub_140ba61f0
// 地址: 0x140ba61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t* result = sx.q(arg2) * 0x38 + *(*(arg1 + 0x50) + 8)

if (result[4] == 0 && *(result + 0x35) == 0)
    int32_t rdx = result[1].d
    *(result + 0x35) = 1
    
    if (rdx != 0)
        void* rax_4 = sub_140ba61f0(arg1, zx.q(not.d(rdx)))
        
        if (*(rax_4 + 0x20) == 0)
            rbx = arg1
        else
            int64_t r14_1 = 0
            int32_t var_78_2 = 0
            void* rax_6 = sub_140d2f0c0(sub_140d41340(), *(rax_4 + 0x20), *result, 0, 1, 0)
            result[4] = rax_6
            
            if (rax_6 == 0)
                rbx = arg1
            else
                int64_t rdx_3 = *(result + 0x14)
                int64_t arg_20 = rdx_3
                int64_t rcx_2 = *(*(rax_6 + 0x10) + 0x18)
                int64_t arg_18 = rcx_2
                
                if (rcx_2 == rdx_3)
                    rbx = arg1
                else
                    TEB* gsbase
                    int32_t* rbx_3 =
                        *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
                    
                    if (data_143e1a7d8 s> *rbx_3)
                        _Init_thread_header(&data_143e1a7d8)
                        
                        if (data_143e1a7d8 == 0xffffffff)
                            sub_140b58170(&data_143e1a7d0, "BlueprintGeneratedClass", 1)
                            _Init_thread_footer(&data_143e1a7d8)
                    
                    if (data_143e1a7e8 s> *rbx_3)
                        _Init_thread_header(&data_143e1a7e8)
                        
                        if (data_143e1a7e8 == 0xffffffff)
                            sub_140b58170(&data_143e1a7e0, "DynamicClass", 1)
                            _Init_thread_footer(&data_143e1a7e8)
                    
                    if (data_143e1a7f8 s> *rbx_3)
                        _Init_thread_header(&data_143e1a7f8)
                        
                        if (data_143e1a7f8 == 0xffffffff)
                            sub_140b58170(&data_143e1a7f0, "Function", 1)
                            _Init_thread_footer(&data_143e1a7f8)
                    
                    if (data_143e1a808 s> *rbx_3)
                        _Init_thread_header(&data_143e1a808)
                        
                        if (data_143e1a808 == 0xffffffff)
                            sub_140b58170(&data_143e1a800, "DelegateFunction", 1)
                            _Init_thread_footer(&data_143e1a808)
                    
                    if ((arg_20 != data_143e1a7d0 || arg_18 != data_143e1a7e0)
                            && (arg_20 != data_143e1a7f0 || arg_18 != data_143e1a800))
                        int64_t var_68
                        int64_t* rax_17 = sub_140b63b70(&arg_18, &var_68)
                        int16_t* const r12_1 = &data_142d40450
                        int16_t* r15_1
                        
                        if (rax_17[1].d == 0)
                            r15_1 = &data_142d40450
                        else
                            r15_1 = *rax_17
                        
                        int64_t var_58 = 0
                        int32_t rdx_5 = 0
                        int32_t var_50_1 = 0
                        int32_t rcx_5 = 0
                        int32_t var_4c_1 = 0
                        int64_t rsi_1 = -1
                        
                        if (r15_1 != 0 && *r15_1 != 0)
                            int64_t rbx_4 = -1
                            
                            do
                                rbx_4 += 1
                            while (r15_1[rbx_4] != 0)
                            
                            if (rbx_4.d + 1 s> 0)
                                sub_1405947f0(&var_58, rbx_4.d + 1)
                                rcx_5 = var_4c_1
                                rdx_5 = var_50_1
                            
                            int32_t rax_18 = rdx_5 + rbx_4.d + 1
                            int32_t var_50_2 = rax_18
                            
                            if (rax_18 s> rcx_5)
                                sub_140594770(&var_58)
                            
                            UnDecorator::getReferenceType(var_58, r15_1, (rbx_4.d + 1) * 2)
                        
                        int64_t rcx_9 = var_68
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        int64_t var_48
                        int64_t* rax_19 = sub_140b63b70(&arg_20, &var_48)
                        int16_t* r15_2
                        
                        if (rax_19[1].d == 0)
                            r15_2 = &data_142d40450
                        else
                            r15_2 = *rax_19
                        
                        var_68 = 0
                        int32_t rdx_9 = 0
                        int32_t var_60_1 = 0
                        int32_t rcx_11 = 0
                        int32_t var_5c_1 = 0
                        int64_t r13_1 = 0
                        
                        if (r15_2 != 0 && *r15_2 != 0)
                            int64_t rbx_6 = -1
                            
                            do
                                rbx_6 += 1
                            while (r15_2[rbx_6] != 0)
                            
                            if (rbx_6.d + 1 s> 0)
                                sub_1405947f0(&var_68, rbx_6.d + 1)
                                rcx_11 = var_5c_1
                                rdx_9 = var_60_1
                                r13_1 = var_68
                            
                            int32_t rax_20 = rdx_9 + rbx_6.d + 1
                            int32_t var_60_2 = rax_20
                            
                            if (rax_20 s> rcx_11)
                                sub_140594770(&var_68)
                                r13_1 = var_68
                            
                            UnDecorator::getReferenceType(r13_1, r15_2, (rbx_6.d + 1) * 2)
                        
                        int64_t rcx_15 = var_48
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        rbx = arg1
                        int64_t* rax_21 = sub_140b63b70(rbx + 0x14, &var_48)
                        
                        if (rax_21[1].d != 0)
                            r12_1 = *rax_21
                        
                        var_68 = 0
                        int32_t rdx_13 = 0
                        int32_t var_60_3 = 0
                        int32_t rcx_17 = 0
                        int32_t var_5c_2 = 0
                        
                        if (r12_1 != 0 && *r12_1 != 0)
                            do
                                rsi_1 += 1
                            while (r12_1[rsi_1] != 0)
                            
                            if (rsi_1.d + 1 s> 0)
                                sub_1405947f0(&var_68, rsi_1.d + 1)
                                rcx_17 = var_5c_2
                                rdx_13 = var_60_3
                                r14_1 = var_68
                            
                            int32_t rax_22 = rsi_1.d + 1 + rdx_13
                            int32_t var_60_4 = rax_22
                            
                            if (rax_22 s> rcx_17)
                                sub_140594770(&var_68)
                                r14_1 = var_68
                            
                            UnDecorator::getReferenceType(r14_1, r12_1, (rsi_1.d + 1) * 2)
                        
                        int64_t rcx_21 = var_48
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        if (r14_1 != 0)
                            sub_140a74f90(r14_1)
                        
                        if (r13_1 != 0)
                            sub_140a74f90(r13_1)
                        
                        int64_t rax_23 = var_58
                        
                        if (rax_23 != 0)
                            sub_140a74f90(rax_23)
                    else
                        rbx = arg1
    else
        void* rax_2
        int64_t r9_1
        rax_2, r9_1 = sub_140cddea0()
        int32_t var_78_1 = 0
        r9_1.b = 1
        result[4] = sub_140d2f0c0(rax_2, 0, *result, r9_1, 0, 0)
    
    void* rdx_16 = result[4]
    
    if (rdx_16 != 0)
        sub_140b9aae0(rbx, rdx_16)

return result
