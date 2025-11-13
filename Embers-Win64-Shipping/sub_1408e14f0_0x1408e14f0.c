// 函数: sub_1408e14f0
// 地址: 0x1408e14f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x7100)
void var_7108
int64_t rax_1 = __security_cookie ^ &var_7108
int32_t var_70e8 = 0
void*** rax_2
int512_t zmm1
rax_2, zmm1 = sub_1408e4100()
void** result = (*rax_2)[0x1b](rax_2, *(*arg2 + 0x18), zx.q(arg2[2].d), &var_70e8, var_70e8)

if (result != 0)
    uint64_t rbx_1 = zx.q(var_70e8)
    void** const var_70d8
    sub_140b4c2a0(&var_70d8)
    var_70d8 = &data_142d84578
    int64_t var_7040_1 = 0
    uint64_t var_7038_1 = rbx_1
    char var_7030_1 = 0
    sub_140b55290(&var_70d8, 1)
    var_70d8[0x1b](&var_70d8, 1)
    int64_t* r8_1 = arg2[3]
    var_70d8 = &data_142d847a8
    void** const var_7028 = &data_142e0f3a8
    sub_1408e0250(&var_7028, &var_70d8, r8_1, zmm1)
    void*** rax_4 = sub_1408e4100()
    void** r9_1 = *rax_4
    r9_1[0x1c](rax_4, *(*arg2 + 0x18), zx.q(arg2[2].d), r9_1)
    var_70d8 = &data_142d84578
    
    if (var_7030_1 != 0)
        sub_140a74f90(result)
        int64_t var_7048_2 = 0
    
    sub_140b4cb40(&var_70d8)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_7108)
return result
