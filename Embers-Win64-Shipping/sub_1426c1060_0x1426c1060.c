// 函数: sub_1426c1060
// 地址: 0x1426c1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result

if (arg1[0x18] != 0)
    void* rax_1 = arg1[7]
    
    if (rax_1 == 0)
    label_1426c1276:
        result = sub_140d3c6e0(arg1[0x18] + 0x9c)
        
        if (result != 0)
            int64_t var_88 = arg1[0x18]
            void* rcx_17 = arg1[0x19]
            void* var_80_1 = rcx_17
            
            if (rcx_17 != 0)
                *(rcx_17 + 8) += 1
            
            result = sub_142666c80(result, &var_88, 1)
    else
        void* rdi_1 = *(rax_1 + 0xb0)
        
        if (rdi_1 == 0)
            goto label_1426c1276
        
        void* rdi_2 = *(rdi_1 + 0x258)
        
        if (rdi_2 == 0)
            goto label_1426c1276
        
        void* rax_2 = sub_1427249f0()
        void* rdx_1 = *(rdi_2 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            goto label_1426c1276
        
        if ((*(*(rdi_2 + 0x220) + 0x40))(rdi_2 + 0x220, rdx_1) == 0)
            goto label_1426c1276
        
        result = (*(*arg1 + 0x150))(arg1)
        
        if (result != 0)
            void* rax_9 = (*(*arg1 + 0x150))(arg1)
            void* rcx_4 = *(rax_9 + 0x188)
            void* rsi_1
            
            if (rcx_4 == 0)
                rsi_1 = *(rax_9 + 0x300)
            else
                rsi_1 = *(rcx_4 + 0xc0)
            
            void*** rax_10 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_10 != 0)
                *rax_10 = &data_142d57800
                sub_140d3a3a0(&rax_10[1], arg1)
                rax_10[2] = sub_1426c1060
                rax_10[4] = sub_140a387b0()
                *rax_10 = &data_142d57858
            
            int64_t var_78 = 0
            int32_t var_70_1 = 0
            
            if (rax_10 != 0)
                (*rax_10)[8](rax_10, &var_78)
            
            void var_68
            sub_140d3a3a0(&var_68, nullptr)
            int64_t var_60_1 = 0
            int64_t var_58_1 = 0
            void* var_48_1 = nullptr
            sub_1423e6200(rsi_1, &arg1[0x1c], &var_78, 0x3e800000, 0, 0xbf800000)
            
            if (var_58_1 != 0)
                void var_38
                void* rcx_9 = &var_38
                
                if (var_48_1 != 0)
                    rcx_9 = var_48_1
                
                (*(*rcx_9 + 0x10))(rcx_9)
            
            result = sub_140745b20(&var_78)
            
            if (rax_10 != 0)
                (*rax_10)[7](rax_10, 0)
                result = sub_140a84c80(rax_10, 0, 0)
                
                if (result != 0)
                    result = sub_140a74f90(result)

__security_check_cookie(result_1 ^ &var_b8)
return result
