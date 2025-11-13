// 函数: sub_141b6aaf0
// 地址: 0x141b6aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
*(arg1 + 0x10) = result

if (result != 0)
    void* rbx_1 = *(arg1 + 8)
    void* var_68_1 = rbx_1
    int64_t rdi_1 = *arg2
    *arg2 = 0
    int32_t rsi_1 = arg2[1].d
    int32_t rbp_1 = *(arg2 + 0xc)
    int64_t var_60 = rdi_1
    int32_t var_58_1 = rsi_1
    int32_t var_54_1 = rbp_1
    arg2[1] = 0
    
    if (sub_140a80f40() == 0)
        uint32_t rax_1
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
            void var_38
            void** rax_2 = sub_141b537f0(&var_38, nullptr, 0xff)
            void* rcx_5 = *rax_2
            *(rcx_5 + 0x10) = rbx_1
            *(rcx_5 + 0x18) = rdi_1
            *(rcx_5 + 0x20) = rsi_1
            *(rcx_5 + 0x24) = rbp_1
            void* rcx_6 = *rax_2
            int32_t r8_3 = rax_2[2].d
            int64_t* rdx = rax_2[1]
            int64_t* rbx_2 = *(rcx_6 + 0x30)
            int64_t* arg_10 = rbx_2
            int32_t* rdi_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_2 += 1
                rbx_2 = arg_10
            
            result = sub_140778000(rcx_6, rdx, r8_3, 1)
            
            if (rbx_2 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    return sub_140a2f6e0(arg_10)
        else
            void* var_50_1 = rbx_1
            int64_t var_48 = rdi_1
            int32_t var_40_1 = rsi_1
            int32_t var_3c_1 = rbp_1
            result = sub_141b6a870(rbx_1, &data_143f02b98, &var_48)
            int64_t rcx_3 = var_48
            
            if (rcx_3 != 0)
                return sub_140a74f90(rcx_3)
    else
        result = sub_141b6a870(rbx_1, &data_143f02b98, &var_60)
        int64_t rcx_1 = var_60
        
        if (rcx_1 != 0)
            return sub_140a74f90(rcx_1)

return result
