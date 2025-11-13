// 函数: sub_140dc1190
// 地址: 0x140dc1190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[5].b & 2) == 0)
label_140dc1255:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    if ((*(*arg1 + 0x198))() == 0)
        goto label_140dc1255
    
    int64_t* rcx = data_143e20d08
    char rax_4 = (*(*rcx + 0x98))(rcx, arg4)
    
    if (rax_4 == 7)
        goto label_140dc1255
    
    int32_t var_14
    int32_t var_14_1 = var_14 & 0xffffff00
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    char var_18_1 = 2
    char var_17_1 = rax_4
    int16_t var_16_1 = 1
    sub_140596b00(arg2, &var_c8)
    sub_140597700(&var_c8)

return arg2
