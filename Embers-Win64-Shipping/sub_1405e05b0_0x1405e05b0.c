// 函数: sub_1405e05b0
// 地址: 0x1405e05b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg2
int64_t result

if (rdx == 0 || arg3 == 0 || arg4 == 0)
labelid_1:
    result.b = 0
else
    void* r12_1 = *(arg3 + 0x78)
    int64_t* r15_1 = *(arg4 + 0x78)
    
    if (r12_1 == 0 || r15_1 == 0)
    labelid_1:
        result.b = 0
    else
        void* rbp_1 = nullptr
        int64_t* rdi_1 = *(rdx + 0x48)
        int64_t r13_1 = sx.q(*(*(arg1 + 0x1b0) + 8))
        void* r14_1 = &rdi_1[sx.q(*(rdx + 0x50))]
        
        if (rdi_1 == r14_1)
        labelid_1:
            result.b = 0
        else
            while (true)
                void* rbx_1 = *rdi_1
                int16_t* rdx_1
                
                if (arg2[2].d == 0)
                    rdx_1 = &data_142d40450
                else
                    rdx_1 = arg2[1]
                
                int16_t* const rcx
                
                if (*(rbx_1 + 0x38) == 0)
                    rcx = &data_142d40450
                else
                    rcx = *(rbx_1 + 0x30)
                
                if (sub_140a54510(rcx, rdx_1).d == 0)
                    int16_t* rdx_2
                    
                    if (arg2[7].d == 0)
                        rdx_2 = &data_142d40450
                    else
                        rdx_2 = arg2[6]
                    
                    int16_t* const rcx_1
                    
                    if (*(rbx_1 + 0x48) == 0)
                        rcx_1 = &data_142d40450
                    else
                        rcx_1 = *(rbx_1 + 0x40)
                    
                    if (sub_140a54510(rcx_1, rdx_2).d == 0)
                        break
                
                rdi_1 = &rdi_1[1]
                
                if (rdi_1 == r14_1)
                    goto label_1405e068e_2
            
            void* rcx_2 = *rdi_1
            void* rbx_2 = *(rcx_2 + (r13_1 << 3) + 0x68)
            
            if (rbx_2 == 0)
            label_1405e068e:
                result.b = 0
            else
                void* rax_1 = *(rcx_2 + 0x50)
                
                if (rax_1 == 0)
                    result = 0
                else
                    result = *(rax_1 + 0x10)
                
                if (result != 0)
                    rbp_1 = *(result + 0x78)
                
                void* rcx_3 = *(rbx_2 + 0x28)
                
                if (rcx_3 == 0)
                label_1405e068e_1:
                    result.b = 0
                else if (sub_1419cec70(*(rcx_3 + 0x28), &data_143cd83c8, 0) == 0)
                label_1405e068e_2:
                    result.b = 0
                else
                    int32_t var_58_1 = r13_1.d
                    void* var_50_1 = r12_1
                    void* var_40_1 = rbx_2
                    char rax_2 = sub_140a80f40()
                    uint128_t zmm6
                    
                    if (rax_2 != 0)
                        sub_1405e2b30(&data_143f02b98, r13_1.d, rbx_2, rbp_1, zmm6, r12_1, r15_1)
                        result.b = 1
                    else if (data_143f138f4 != rax_2)
                    label_1405e0776:
                        void var_70
                        void** rax_4 = sub_1405e15e0(&var_70, nullptr, 0xff)
                        void* rcx_6 = *rax_4
                        *(rcx_6 + 0x10) = var_58_1.o
                        *(rcx_6 + 0x20) = r15_1.o
                        *(rcx_6 + 0x30) = rbp_1
                        void* rcx_7 = *rax_4
                        int32_t r8_1 = rax_4[2].d
                        int64_t* rdx_4 = rax_4[1]
                        int64_t* rbx_3 = *(rcx_7 + 0x40)
                        int64_t* var_78_1 = rbx_3
                        void* rdi_2 = &rbx_3[9]
                        
                        if (rbx_3 != 0)
                            *rdi_2 += 1
                            rbx_3 = var_78_1
                        
                        sub_1405e4b20(rcx_7, rdx_4, r8_1, 1)
                        
                        if (rbx_3 != 0)
                            int32_t rax_5 = *rdi_2
                            *rdi_2 -= 1
                            
                            if (rax_5 == 1)
                                sub_140a2f6e0(var_78_1)
                        
                        result.b = 1
                    else if (data_143de5480 == rax_2)
                        sub_1405e2b30(&data_143f02b98, r13_1.d, rbx_2, rbp_1, zmm6, r12_1, r15_1)
                        result.b = 1
                    else
                        uint32_t rax_3
                        rax_3.b = GetCurrentThreadId() == data_143de5470
                        
                        if (rax_3.b == 0)
                            goto label_1405e0776
                        
                        sub_1405e2b30(&data_143f02b98, r13_1.d, rbx_2, rbp_1, zmm6, r12_1, r15_1)
                        result.b = 1

return result
