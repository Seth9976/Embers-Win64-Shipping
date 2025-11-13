// 函数: sub_140a3f800
// 地址: 0x140a3f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp_1 = arg1[3].d & 0xff000000
int32_t r15_1 = arg2 & 0xff000000
int64_t rbx
rbx.b = r15_1 u>= rbp_1

if (r15_1 u< rbp_1)
    void* rcx = data_143db18d0
    
    if (rcx == 0)
        sub_140a53c40()
        rcx = data_143db18d0
    
    wchar16* var_48
    sub_140a43cf0(rcx, &var_48, arg1)
    int16_t* const r12_1 = &data_142d40450
    int32_t var_40
    wchar16 const* const rsi_1
    
    if (var_40 s> 1)
        rsi_1 = &data_142d40450
        
        if (var_40 != 0)
            rsi_1 = var_48
    else
        rsi_1 = u"unknown?"
    
    int64_t var_38
    int16_t** rax_3 = (*(*arg1 + 0xa0))(arg1, &var_38)
    
    if (rax_3[1].d != 0)
        r12_1 = *rax_3
    
    int16_t* const var_50_1 = r12_1
    int64_t var_58_1 = sub_140a48b50(rbp_1)
    int64_t var_28
    sub_140a2e390(&var_28, 
        Setting the console variable '%s' with 'SetBy%s' was ignored as it is lower priority than the "
    "previous 'SetBy%s'. Value remains '%s'", rsi_1)
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

return zx.q(rbx.b)
