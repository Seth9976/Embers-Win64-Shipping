// 函数: sub_141cfe050
// 地址: 0x141cfe050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = nullptr

if (sub_141d02260(arg1, arg3, &arg_20, nullptr) == 0)
    int64_t* rcx_3 = *(arg1 + 8)
    (*(*rcx_3 + 0x198))(rcx_3, arg2, arg3)
else
    void* rdi_1 = arg_20
    int64_t var_18
    int64_t* rax_1 = sub_141cfe120(arg1, &var_18, arg3, rdi_1)
    int16_t* const r8_2 = &data_142d40450
    
    if (rax_1[1].d != 0)
        *rax_1
    
    if (*(rdi_1 + 0x10) != 0)
        r8_2 = *(rdi_1 + 8)
    
    sub_140a2e390(arg2, u"Pak: %s/%s", r8_2)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg2
