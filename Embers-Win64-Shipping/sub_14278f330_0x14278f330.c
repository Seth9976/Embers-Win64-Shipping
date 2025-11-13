// 函数: sub_14278f330
// 地址: 0x14278f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
void* result = __security_cookie ^ &var_f8
void* result_1 = result

if (*(arg1 + 0x700) != 0)
    j_sub_140b3db50()
    void var_d8
    int64_t* rax_3 = sub_140963350(sub_140b3dbe0(*sub_140b58170(&var_d8, "ChaosSolvers", 1)))
    int64_t rcx_3 = *(arg1 + 0x700)
    void var_80
    sub_141d2d5a0(&var_80, arg2)
    void*** rax_4 = sub_140a82f30(0x70, 8)
    *rax_4 = &data_1434aed18
    rax_4[1] = rcx_3
    sub_141d2d5a0(&rax_4[2], &var_80)
    *rax_4 = &data_1434aed38
    int64_t (* var_c8)(int64_t* arg1)
    int64_t (* rax_5)(int64_t* arg1) = var_c8
    
    if (rax_4 != -8)
        rax_5 = sub_14278ea50
    
    void*** var_b8_1 = rax_4
    var_c8 = rax_5
    (*(*rax_3 + 0x18))(rax_3, &var_c8)
    int32_t var_28_1 = 0
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)
    
    void var_70
    result = sub_1409aaf90(&var_70)
    int64_t* var_78
    
    if (var_78 != 0)
        result = (**var_78)(var_78, 1)

__security_check_cookie(result_1 ^ &var_f8)
return result
