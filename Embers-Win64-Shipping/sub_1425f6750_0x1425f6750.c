// 函数: sub_1425f6750
// 地址: 0x1425f6750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg3

if (data_143f70c60 != 0)
    if (arg1[1].d s> 2)
        return sub_140b1f850(result, 2, 
            0-2 parameters expected: Save [filename="test.mp4"] [max_duration_secs= ring buffer "
        "duration]", arg4) __tailcall
    
    int16_t* var_68 = nullptr
    int64_t var_60_1 = 0
    sub_1405947f0(&var_68, 9)
    int32_t rdi_1 = var_60_1:4.d
    int32_t rax_1 = var_60_1.d + 9
    var_60_1.d = rax_1
    
    if (rax_1 s> rdi_1)
        sub_140594770(&var_68)
        rdi_1 = var_60_1:4.d
    
    int16_t* rsi_1 = var_68
    sub_1405a7220(rsi_1, 9, "test.mp4", 9, 0x3f)
    int32_t rdx_2 = arg1[1].d
    int32_t rax_2 = rdx_2
    
    if (rdx_2 s>= 1)
        int64_t* rcx_5 = *arg1
        
        if (&var_68 != rcx_5)
            int32_t rbp_1 = rcx_5[1].d
            int64_t r14_1 = *rcx_5
            var_60_1.d = rbp_1
            
            if (rbp_1 != 0 || rdi_1 != 0)
                sub_1405a4c70(&var_68, rbp_1, rdi_1)
                rsi_1 = var_68
                memcpy(rsi_1, r14_1, rbp_1 * 2)
                rax_2 = arg1[1].d
    
    int16_t* rdi_2 = &data_142d40450
    
    if (rax_2 == 2)
        void* rax_3 = *arg1
        wchar16* _String
        
        if (*(rax_3 + 0x18) == 0)
            _String = &data_142d40450
        else
            _String = *(rax_3 + 0x10)
        
        wcstod(_String, nullptr)
    
    void* rcx_8 = data_143f70c60
    
    if (var_60_1.d != 0)
        rdi_2 = rsi_1
    
    void** const var_38_1 = &data_1432977b8
    int64_t var_48_1 = 0
    int64_t var_58[0x2]
    var_58[0] = sub_140594850
    result = sub_1425f6920(rcx_8, rdi_2, &var_58, 0x40ac200000000000)
    
    if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)

return result
