// 函数: sub_14067abf0
// 地址: 0x14067abf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (arg2[1].d s> 1)
    void* rsi_1 = *arg3
    void* r13_3 = (sx.q(arg3[1].d) << 4) + rsi_1
    void* var_68 = nullptr
    int64_t var_60_1 = 0
    
    if (rsi_1 != r13_3)
        do
            int32_t rdi_1 = *(rsi_1 + 8)
            uint64_t r15_1 = 0
            int64_t rbx_1 = *rsi_1
            uint64_t var_48 = 0
            uint64_t r12_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_48, rdi_1, 0)
                r15_1 = var_48
                memcpy(r15_1, rbx_1, rdi_1 * 2)
                r12_1 = r15_1
            else
                int32_t var_3c_1 = 0
                r12_1 = 0
            
            void*** rax = j_sub_140a82f30(0x20)
            void*** rbx_2 = rax
            
            if (rax == 0)
                rbx_2 = nullptr
            else
                rax[1].d = 0
                *rbx_2 = &data_142d84ab0
                rbx_2[2] = 0
                rbx_2[3].d = rdi_1
                
                if (rdi_1 != 0)
                    sub_1405a4c70(&rbx_2[2], rdi_1, 0)
                    memcpy(rbx_2[2], r12_1, rdi_1 * 2)
                    rbx_2[1].d = 2
                else
                    *(rbx_2 + 0x1c) = 0
                    rbx_2[1].d = 2
            
            void*** rax_1 = j_sub_140a82f30(0x18)
            
            if (rax_1 == 0)
                rax_1 = nullptr
            else
                rax_1[1].d = 1
                *rax_1 = &data_142d86170
                *(rax_1 + 0xc) = 1
                rax_1[2] = rbx_2
            
            int64_t rbx_3 = sx.q(var_60_1.d)
            int32_t rax_2 = (rbx_3 + 1).d
            var_60_1.d = rax_2
            
            if (rax_2 s> var_60_1:4.d)
                sub_140610660(&var_68)
            
            void**** rdx_8 = (rbx_3 << 4) + var_68
            *rdx_8 = rbx_2
            rdx_8[1] = rax_1
            int64_t var_50_2 = 0
            int64_t var_58_2 = 0
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            rsi_1 += 0x10
        while (rsi_1 != r13_3)
        
        result = arg2
    
    result = sub_140b75640(*(arg1 + 0x28), result, &var_68)
    int32_t i_1 = var_60_1.d
    
    if (i_1 != 0)
        int64_t* rdi_3 = var_68 + 8
        int32_t i
        
        do
            int64_t* rbx_4 = *rdi_3
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    result = (**rbx_4)(rbx_4)
                    int32_t temp2_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rbx_4 + 8))(rbx_4, 1)
            
            rdi_3 = &rdi_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_9 = var_68
    
    if (rcx_9 != 0)
        return sub_140a74f90(rcx_9)

return result
