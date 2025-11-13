// 函数: sub_141be96b0
// 地址: 0x141be96b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t result = sub_141beee70(arg1)
int64_t* rcx = arg1[0x39]

if (rcx != 0)
    int128_t zmm0_1 = *(arg1 + 0x120)
    char var_30 = 1
    int128_t var_40 = zmm0_1
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140f60400(rcx, &var_40)
    sub_140745b20(&var_28)
    sub_140f5e570(arg1[0x39], zx.d(arg1[0x26].b))
    sub_140f61770(arg1[0x39], zx.d(*(arg1 + 0x131)))
    sub_140f5d1a0(arg1[0x39], *(arg1 + 0x132))
    int32_t var_48
    char var_44_1
    
    if (arg1[0x27].b == 0)
        var_44_1 = 0
    else
        var_48 = *(arg1 + 0x13c)
        var_44_1 = 1
    
    var_40:4.b = 0
    
    if (var_44_1 != 0)
        var_40.d = var_48
        var_40:4.b = 1
    
    var_40:8.b = 1
    var_30.q = 0
    var_28.d = 0
    sub_140f5d1d0(arg1[0x39], &var_40)
    sub_140745b20(&var_30)
    var_40.d = *(arg1 + 0x134)
    var_40:4.b = 1
    var_40:8.q = 0
    var_30.d = 0
    sub_140f5d2f0(arg1[0x39], &var_40)
    sub_140745b20(&var_40:8)
    result = sub_140f5fd10(arg1[0x39], &arg1[0x28])

__security_check_cookie(rax_1 ^ &var_68)
return result
