// 函数: sub_140b66930
// 地址: 0x140b66930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e19420 == 0)
    if (GetModuleFileNameW(data_143e18638, &data_143e19420, 0x200) == 0)
        memset(&data_143e19420, 0, 0x400)
        memset(&data_143e19820, 0, 0x400)
    else
        int16_t rax_2 = data_143e19420
        int64_t var_38 = 0
        int32_t rdx_1 = 0
        int32_t var_30_1 = 0
        int32_t rcx_1 = 0
        int32_t var_2c_1 = 0
        int64_t rbx_1 = -1
        
        if (rax_2 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while ((&data_143e19420)[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rdi_1.d + 1)
                rcx_1 = var_2c_1
                rdx_1 = var_30_1
            
            int32_t rax_3 = rdi_1.d + 1 + rdx_1
            int32_t var_30_2 = rax_3
            
            if (rax_3 s> rcx_1)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, &data_143e19420, (rdi_1.d + 1) * 2)
            rax_2 = data_143e19420
        
        int64_t var_48 = 0
        int32_t rdx_3 = 0
        int32_t var_40_1 = 0
        int32_t rcx_5 = 0
        int32_t var_3c_1 = 0
        
        if (rax_2 != 0)
            do
                rbx_1 += 1
            while ((&data_143e19420)[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rcx_5 = var_3c_1
                rdx_3 = var_40_1
            
            int32_t rax_4 = rbx_1.d + 1 + rdx_3
            int32_t var_40_2 = rax_4
            
            if (rax_4 s> rcx_5)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, &data_143e19420, (rbx_1.d + 1) * 2)
        
        int64_t var_28
        int64_t* rax_5 = sub_140b18720(&var_28, &var_38, 1)
        int16_t* const _Source_1 = &data_142d40450
        wchar16* _Source
        
        if (rax_5[1].d == 0)
            _Source = &data_142d40450
        else
            _Source = *rax_5
        
        wcsncpy(&data_143e19420, _Source, 0x1ff)
        int64_t rcx_10 = var_28
        data_143e1981e = 0
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int16_t** rax_6 = sub_140b18970(&var_28, &var_48)
        
        if (rax_6[1].d != 0)
            _Source_1 = *rax_6
        
        wcsncpy(&data_143e19820, _Source_1, 0x1ff)
        int64_t rcx_12 = var_28
        data_143e19c1e = 0
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)

if (arg1 != 0)
    return &data_143e19420

return &data_143e19820
