// 函数: sub_142022d00
// 地址: 0x142022d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result

if (arg1 == 0)
label_142022dbb:
    *arg3 = data_143dbb1f8.q
    arg3[1].d = data_143dbb200
    *arg4 = data_143dbb1f8.q
    arg4[1].d = data_143dbb200
    result.b = 0
else
    int64_t* rax_1 = sub_14226dd50(arg1)
    
    if (rax_1 == 0)
        goto label_142022dbb
    
    void* rdx = rax_1[0xe]
    
    if (rdx == 0)
        goto label_142022dbb
    
    int64_t r10_1 = *rax_1
    int128_t var_68
    __builtin_memset(&var_68, 0, 0x20)
    void var_f8
    
    if ((*(r10_1 + 0x2b8))(rax_1, *(rdx + 0xb8), 0, &var_f8) == 0)
        goto label_142022dbb
    
    float var_138[0x4][0x4]
    float var_48[0x4][0x4]
    sub_1408041d0(sub_141b99680(&var_f8, &var_48), &var_138)
    int128_t var_58
    sub_1422e1680(arg2, &var_58, &var_138, arg3, arg4)
    result.b = 1

return result
