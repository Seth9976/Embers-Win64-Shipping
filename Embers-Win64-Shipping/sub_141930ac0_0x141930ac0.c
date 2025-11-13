// 函数: sub_141930ac0
// 地址: 0x141930ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
    sub_141935620(arg2, arg1, arg4, arg5, arg6, arg7)
    int32_t var_b0_1
    var_b0_1.q = arg8
    int32_t var_b8_1
    var_b8_1.q = arg4
    sub_14193ac00(arg1, *arg2, arg6, arg7, var_b8_1, var_b0_1)
else
    void*** var_a8
    sub_141935620(&var_a8, arg1, arg4, arg5, arg6, arg7)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void*** rbx = var_a8
    void*** rcx_1 = rbx
    void*** var_a0_1 = rbx
    void*** rsi_3 = (*(arg3 + 0x30) + 0xf) & 0xfffffffffffffff0
    void* rax_1 = &rsi_3[0xa]
    
    if (rax_1 u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x60)
        rcx_1 = rbx
        rsi_3 = (*(arg3 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_1 = &rsi_3[0xa]
    
    *(arg3 + 0x30) = rax_1
    int64_t* rax_2 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    void* var_98_1 = arg1
    *rax_2 = rsi_3
    *(arg3 + 8) = &rsi_3[1]
    
    if (rbx != 0)
        rbx[1].d += 1
        rbx = var_a8
    
    void*** var_70_1 = rcx_1
    int32_t var_88_1 = arg6
    int32_t var_84_1 = arg7
    void* var_80_1 = arg4
    int64_t var_78_1 = arg8
    void*** rax_4 = sub_140a82f30(0x38, 8)
    rax_4[1] = arg1
    rax_4[2] = rbx
    int64_t var_90 = 0
    rax_4[6] = var_a0_1
    rax_4[3].d = arg6
    *(rax_4 + 0x1c) = arg7
    rax_4[4] = arg4
    rax_4[5] = arg8
    *rax_4 = &data_142ff8728
    int64_t* var_58_1 = rax_4
    int32_t* (* var_68)(int64_t* arg1)
    int32_t* (* rax_5)(int64_t* arg1) = var_68
    
    if (rax_4 != -8)
        rax_5 = sub_141932640
    
    *rsi_3 = &data_142ff4958
    rsi_3[1] = 0
    rsi_3[2] = rax_5
    rsi_3[4] = 0
    void var_48
    
    if (rsi_3[2] != 0)
        int64_t* rcx_4 = &var_48
        
        if (var_58_1 != 0)
            rcx_4 = var_58_1
        
        (**rcx_4)(rcx_4)
    
    if (rax_5 != 0)
        int64_t* rcx_5 = &var_48
        
        if (var_58_1 != 0)
            rcx_5 = var_58_1
        
        (*(*rcx_5 + 0x10))(rcx_5)
    
    sub_1405d1550(&var_90)
    *arg2 = rbx
    var_a8 = nullptr
    sub_1405d1550(&var_a8)

return arg2
