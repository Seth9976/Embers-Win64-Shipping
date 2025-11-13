// 函数: sub_140b69730
// 地址: 0x140b69730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t rbx = -1

if (data_143e19c20 == 0)
    HMODULE phModule
    BOOL rax_1 = GetModuleHandleExW(6, sub_140b69730, &phModule)
    HMODULE hModule = phModule
    
    if (rax_1 == 0)
        hModule = data_143e18638
    
    phModule = hModule
    GetModuleFileNameW(hModule, &data_143e19c20, 0x104)
    int32_t rdx_1 = 0
    int32_t rcx = 0
    *wcsrchr(&data_143e19c20, 0x5c) = 0
    bool cond:2_1 = data_143e19c20 == 0
    int16_t* var_28 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    
    if (not(cond:2_1))
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while ((&data_143e19c20)[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_28, rdi_1.d + 1)
            rcx = var_1c_1
            rdx_1 = var_20_1
        
        int32_t rax_3 = rdi_1.d + 1 + rdx_1
        var_20_1 = rax_3
        
        if (rax_3 s> rcx)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, &data_143e19c20, (rdi_1.d + 1) * 2)
    
    sub_140b20c40(&var_28)
    int16_t* const rdx_3 = &data_142d40450
    int16_t* rcx_5 = var_28
    
    if (var_20_1 != 0)
        rdx_3 = rcx_5
    
    int16_t* r8_4 = &data_143e19c20 - rdx_3
    int16_t i
    
    do
        i = *rdx_3
        *(r8_4 + rdx_3) = i
        rdx_3 = &rdx_3[1]
    while (i != 0)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

*arg1 = 0
arg1[1] = 0

if (data_143e19c20 != 0)
    do
        rbx += 1
    while ((&data_143e19c20)[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(arg1, rbx.d + 1)
        rbp = arg1[1].d
    
    int32_t rax_4 = rbx.d + 1 + rbp
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, &data_143e19c20, (rbx.d + 1) * 2)

return arg1
