// 函数: sub_140b73bf0
// 地址: 0x140b73bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e18e00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e18e00)
    
    if (data_143e18e00 == 0xffffffff)
        atexit(sub_142cc0d40)
        _Init_thread_footer(&data_143e18e00)

int32_t rcx_15 = data_143e18df8

if (rcx_15 == 0 || rcx_15 == 1)
    PWSTR arg_8
    
    if (SHGetKnownFolderPath(&data_1434cb1c0, 0, nullptr, &arg_8) s>= 0)
        PWSTR rdi_1 = arg_8
        int64_t var_38 = 0
        int32_t rdx_1 = 0
        int32_t var_30_1 = 0
        int32_t rcx_2 = 0
        int32_t var_2c_1 = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rbx_1.d + 1)
                rcx_2 = var_2c_1
                rdx_1 = var_30_1
            
            int32_t rax_4 = rbx_1.d + 1 + rdx_1
            int32_t var_30_2 = rax_4
            
            if (rax_4 s> rcx_2)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, rdi_1, (rbx_1.d + 1) * 2)
        
        int64_t var_28
        int64_t* rax_5 = sub_140a300d0(&var_38, &var_28, &(*U"{}[\nt")[3], &data_142d5a024, 1)
        int64_t rcx_7 = *rax_5
        int32_t rdx_5 = rax_5[1].d
        int32_t rdx_6 = neg.d(rdx_5)
        *rax_5 = 0
        int32_t r9_2 = rax_5[1].d
        int64_t var_48 = rcx_7
        int32_t rcx_8 = *(rax_5 + 0xc)
        int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rdx_5 != 0) + 2 + r9_2
        rax_5[1] = 0
        
        if (rdx_9 s> rcx_8)
            sub_1405947f0(&var_48, rdx_9)
        
        sub_140a20ba0(&var_48, &data_142d5a024, 1)
        int64_t rcx_11 = data_143e18df0
        int64_t rbx_3 = var_48
        var_48 = 0
        int32_t var_40_1
        var_40_1.q = 0
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = var_28
        data_143e18df0 = rbx_3
        data_143e18df8 = r9_2
        data_143e18dfc = rcx_8
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_38
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        CoTaskMemFree(arg_8)
    
    rcx_15 = data_143e18df8

if (rcx_15 != 0)
    return data_143e18df0

return &data_142d40450
