// 函数: sub_140b6b610
// 地址: 0x140b6b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143e189a8

if (result == 0 || data_143e189b0 == 0)
    int64_t* rdi_1 = nullptr
    
    if (data_143de5788 s> 1)
        void* rcx_1 = data_143ddb400
        uint64_t var_48 = 0
        int32_t var_40_1 = 0
        sub_140af5b90(rcx_1, u"StreamingInstall", u"DefaultProviderName", &var_48, &data_143de5780)
        int16_t* const rsi_1 = &data_142d40450
        int16_t* const rdx_1 = &data_142d40450
        int64_t var_38 = 0
        
        if (var_40_1 != 0)
            rdx_1 = var_48
        
        int64_t var_30
        __builtin_memset(&var_30, 0, 0x1a)
        void arg_8
        int64_t* rax = sub_140b58260(&arg_8, rdx_1, 1)
        j_sub_140b3db50()
        
        if (sub_140b43980(&data_143de7d78, *rax, &var_38) != 0)
            if (var_40_1 != 0)
                rsi_1 = var_48
            
            int64_t rbx_2 = *sub_140b58260(&arg_8, rsi_1, 1)
            j_sub_140b3db50()
            int64_t* rax_3 = sub_140b407e0(&data_143de7d78, rbx_2)
            rdi_1 = rax_3
            
            if (rax_3 != 0)
                int64_t rdx_5 = *rax_3
                data_143e189a8 = (*(rdx_5 + 0x40))(rax_3, rdx_5)
        
        data_143e189b0 = 1
        int64_t var_28
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        int64_t rcx_6 = var_38
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        uint64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if (rdi_1 != 0)
            return data_143e189a8
    
    result = sub_140a48640()
    data_143e189a8 = &data_14399e9e8

return result
