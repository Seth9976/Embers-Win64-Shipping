// 函数: sub_14232fd50
// 地址: 0x14232fd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 8) - *arg2

if (result s> 0)
    result = *(arg2 + 0xc) - *(arg2 + 4)
    
    if (result s> 0)
        *(arg1 + 0x3c) = 1
        int64_t* rsi_1 = *(arg1 + 0x10)
        int64_t r15_1 = *(arg1 + 8)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        void* var_b8 = arg1
        int64_t var_b0_1 = r15_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int128_t zmm0 = *arg2
        int128_t var_a0_1 = zmm0
        
        if (sub_140a80f40() == 0)
            uint32_t rax_7
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_7.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_7.b == 0))
                void var_58
                void** rax_12 = sub_1423319b0(&var_58, nullptr, 0xff)
                void* rcx_9 = *rax_12
                *(rcx_9 + 0x10) = arg1
                *(rcx_9 + 0x18) = r15_1
                *(rcx_9 + 0x20) = rsi_1
                *(rcx_9 + 0x28) = zmm0
                void* rcx_10 = *rax_12
                int32_t r8_1 = rax_12[2].d
                int64_t* rdx_2 = rax_12[1]
                int64_t* rbx_3 = *(rcx_10 + 0x40)
                int64_t* arg_18 = rbx_3
                int32_t* r15_2 = &rbx_3[9]
                
                if (rbx_3 != 0)
                    *r15_2 += 1
                    rbx_3 = arg_18
                
                sub_1405e4b20(rcx_10, rdx_2, r8_1, 1)
                
                if (rbx_3 != 0)
                    int32_t rax_13 = *r15_2
                    *r15_2 -= 1
                    
                    if (rax_13 == 1)
                        sub_140a2f6e0(arg_18)
            else
                void* var_90 = arg1
                int64_t var_88_1 = r15_1
                int128_t var_78_1 = zmm0
                sub_14232cbc0(&var_90)
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t rax_10 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (rax_10 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
        else
            sub_14232cbc0(&var_b8)
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t rax_5 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
        
        int64_t var_c8
        result = &var_c8
        int64_t* var_c0 = nullptr
        
        if (arg1 + 8 != &var_c8)
            *(arg1 + 8) = 0
            var_c8 = 0
            result = sub_1405aeff0(arg1 + 0x10, &var_c0)
            int64_t* rcx_13 = var_c0
            
            if (rcx_13 != 0)
                result = rcx_13[1].d
                rcx_13[1].d -= 1
                
                if (result == 1)
                    int64_t* rbx_4 = var_c0
                    (**rbx_4)(rbx_4)
                    result = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (result == 1)
                        int64_t* rcx_15 = var_c0
                        result = (*(*rcx_15 + 8))(rcx_15, 1)
        
        if (rsi_1 != 0)
            result = rsi_1[1].d
            rsi_1[1].d -= 1
            
            if (result == 1)
                result = (**rsi_1)(rsi_1)
                int32_t rdi_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    return (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_1))

return result
