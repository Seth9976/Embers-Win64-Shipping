// 函数: sub_1408d7c40
// 地址: 0x1408d7c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t* result = sub_14243ade0(arg1)

if (result.b != 0)
    void** var_28
    
    if (data_143cebe58 == 0)
    label_1408d7ca2:
        int64_t* rax_2 = sub_1408d8ff0()
        void* rcx_2 = rax_2[0x23]
        
        if (rcx_2 == 0)
            int64_t rdx_2 = *rax_2
            (*(rdx_2 + 0x390))(rax_2, rdx_2)
            rcx_2 = rax_2[0x23]
        
        int64_t* rax_3 = sub_140d30800(rcx_2 + 0x108, &var_28)
        int16_t* rbx_2
        
        if (rax_3[1].d == 0)
            rbx_2 = &data_142d40450
        else
            rbx_2 = *rax_3
        
        result = sub_140d2f240(sub_1408d8ff0(), 0, rbx_2, 0, 0, 0)
        void** rcx_6 = var_28
        data_143cebe58 = result
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
            result = data_143cebe58
        
        if (result != 0)
            goto label_1408d7d2f
    else
        void* rax = sub_1408d8ff0()
        
        if (rax == 0)
            goto label_1408d7ca2
        
        int64_t rcx = sx.q(*(rax + 0x38))
        void* rax_1 = data_143cebe58
        
        if (rcx.d s> *(rax_1 + 0x38) || *(*(rax_1 + 0x30) + (rcx << 3)) != rax + 0x30 || rax_1 == 0)
            goto label_1408d7ca2
        
    label_1408d7d2f:
        result = sub_1408d8ff0()
        
        if (result != 0)
            int64_t rcx_7 = sx.q(result[0xe])
            result = data_143cebe58
            
            if (rcx_7.d s<= result[0xe] && *(*(result + 0x30) + (rcx_7 << 3)) == &result[0xc]
                    && result != 0)
                void* rax_5 = sub_1408d8ff0()
                int64_t* rcx_9 = data_143cebe58
                int64_t* rbx_3
                
                if (rax_5 == 0)
                    rbx_3 = nullptr
                else
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> rcx_9[7].d)
                        rbx_3 = nullptr
                    else
                        rbx_3 = rcx_9
                        
                        if (*(rcx_9[6] + (rax_6 << 3)) != rax_5 + 0x30)
                            rbx_3 = nullptr
                
                result = rbx_3[0x23]
                
                if (result == 0)
                    (*(*rbx_3 + 0x390))(rbx_3)
                    result = rbx_3[0x23]
                    rcx_9 = data_143cebe58
                
                char rdx_6 = (result[0xa]).b
                
                if ((rdx_6 & 2) != 0 || (rdx_6 & 1) != 0)
                    uint64_t arg_18 = 0
                    int64_t* rdi_1
                    
                    if (rcx_9 == 0)
                        rdi_1 = nullptr
                    else
                        void* rax_9 = sub_1408d8ff0()
                        
                        if (rax_9 == 0)
                            rdi_1 = nullptr
                        else
                            rdi_1 = data_143cebe58
                            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                            
                            if (rax_10.d s> rdi_1[7].d
                                    || *(rdi_1[6] + (rax_10 << 3)) != rax_9 + 0x30)
                                rdi_1 = nullptr
                    
                    void* rsi_1 = arg_8
                    char rax_12 = sub_140b5b8a0(0, 0)
                    uint64_t rbx_4 = arg_18
                    uint32_t rcx_13
                    rcx_13.b = (rbx_4 u>> 0x20).d == 0
                    
                    if ((rcx_13.b & rax_12) != 0)
                        sub_140d19010(rsi_1, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    void* arg_20 = sub_140d2dfc0(rdi_1, rsi_1, rbx_4, 0, 0, 0, 0, 0, 0)
                    var_28 = &arg_8
                    void** var_20_1 = &arg_20
                    return sub_1408d5f10(&data_143984e60, &arg_18, &var_28, nullptr)

return result
