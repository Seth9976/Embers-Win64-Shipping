// 函数: sub_140bdc910
// 地址: 0x140bdc910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* rax_1

if (*(arg1 + 0x50) != 0)
    rax_1 = wcsstr(arg3, u"::")

if (*(arg1 + 0x50) == 0 || rax_1 != 0)
    int32_t rcx_5 = 0
    *arg2 = 0
    arg2[1] = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg3[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(arg2, rdi_1.d + 1)
            rcx_5 = arg2[1].d
        
        int32_t rax_4 = rcx_5 + rdi_1.d + 1
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, arg3, (rdi_1.d + 1) * 2)
else
    int64_t arg_8 = *(arg1 + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_8, &var_18)
    int16_t* const r8 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8 = var_18
    
    sub_140a2e390(arg2, u"%s::%s", r8)
    int16_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
