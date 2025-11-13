// 函数: sub_141bbc1b0
// 地址: 0x141bbc1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = arg1[0x74]

if (rax_2 == 0)
label_141bbc2c3:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bbc2c3
    
    char var_118 = 0
    char* var_108_1 = &var_118
    void*** (* var_110)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_110, &data_14397f5f0) + 0x20) != 0)
        goto label_141bbc2c3
    
    int64_t* rcx_5 = arg1[0x74]
    char var_f8
    (*(*rcx_5 + 0x3b0))(rcx_5, &var_f8, arg3, arg4)
    
    if (var_f8 != 0)
        sub_140e51550(arg2, &var_f8)
        sub_140597700(&var_f8)
    else
        sub_140dc1190(arg1, arg2, arg3, arg4)
        sub_140597700(&var_f8)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
