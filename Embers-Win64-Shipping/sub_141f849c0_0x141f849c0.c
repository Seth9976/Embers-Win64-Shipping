// 函数: sub_141f849c0
// 地址: 0x141f849c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_1
int64_t var_28

if (*(arg1 + 0x70) != 0)
    int64_t var_18
    int64_t* rax_1 = sub_141f84ac0(arg1, &var_18)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* const rbp_1
    
    if (rax_1[1].d == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *rax_1
    
    void* rcx_2 = *(arg1 + 0x70)
    uint32_t rsi_1 = zx.d(*(rcx_2 + 0x5f))
    *(rcx_2 + 0xf0)
    int16_t** rax_2 = sub_140d21830(rcx_2, &var_28, 0, 0)
    
    if (rax_2[1].d != 0)
        rdi_1 = *rax_2
    
    int16_t* const var_30_1 = rbp_1
    uint32_t var_38_1 = rsi_1
    sub_140a2e390(arg2, u"[UActorChannel] Actor: %s, Role: %i, RemoteRole: %i %s", rdi_1)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rcx_1 = var_18
else
    int64_t* rax = sub_141f84ac0(arg1, &var_28)
    int16_t* const rdi
    
    if (rax[1].d == 0)
        rdi = &data_142d40450
    else
        rdi = *rax
    
    sub_140a2e390(arg2, u"Actor: None %s", rdi)
    rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return arg2
