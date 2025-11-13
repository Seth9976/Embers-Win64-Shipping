// 函数: sub_141bb4530
// 地址: 0x141bb4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x224), 0) == 0

if ((*(arg1 + 0x228) != 0 | rcx.b) == 0)
label_141bb45eb:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    void* rax_3 = sub_140d3c6e0(arg1 + 0x21c)
    
    if (rax_3 == 0)
        goto label_141bb45eb
    
    if (sub_140d1fd20(rax_3, *(arg1 + 0x224)) == 0)
        goto label_141bb45eb
    
    uint128_t zmm1_1 = arg3[1]
    int128_t var_138 = *arg3
    uint128_t var_128_1 = zmm1_1
    int128_t var_118_1 = arg3[2]
    uint64_t var_108_1 = arg3[3].q
    void var_f8
    sub_141ba7c70(&var_f8, arg1 + 0x21c, &var_138, arg4)
    sub_140e51550(arg2, &var_f8)
    sub_140597700(&var_f8)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
