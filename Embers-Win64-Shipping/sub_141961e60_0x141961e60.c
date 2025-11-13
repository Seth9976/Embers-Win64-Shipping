// 函数: sub_141961e60
// 地址: 0x141961e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
__builtin_memset(arg1, 0, 0x180)
void var_68
sub_140b58260(&var_68, &data_1430008d0, 1)
int32_t var_60 = 0x20
void* rbx = &var_68

do
    int64_t* rsi_1 = arg1 + zx.q(*(rbx + 8) - 0x20) * 0x18
    *rsi_1 = *rbx
    int64_t var_38
    int64_t* rax_4 = sub_140b63b70(rbx, &var_38)
    int16_t* const r8_1
    
    if (rax_4[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_4
    
    int16_t* var_58
    sub_140a2e390(&var_58, u"SP_%s", r8_1)
    int16_t* const rdx_2 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        rdx_2 = var_58
    
    void arg_8
    rsi_1[1] = *sub_140b58260(&arg_8, rdx_2, 1)
    int16_t* rcx_6 = var_58
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t var_28
    int64_t* rax_6 = sub_140b63b70(rbx, &var_28)
    int16_t* const r8_2
    
    if (rax_6[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *rax_6
    
    int16_t* var_48
    sub_140a2e390(&var_48, u"SF_%s", r8_2)
    int16_t* const rdx_4 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        rdx_4 = var_48
    
    void arg_10
    rsi_1[2] = *sub_140b58260(&arg_10, rdx_4, 1)
    int16_t* rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    i += 1
    rbx += 0xc
while (i u< 1)

return arg1
