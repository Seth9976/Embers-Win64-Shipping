// 函数: sub_14131f0f0
// 地址: 0x14131f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
void* r13 = arg3[0x2b5]
int64_t* result

if (arg3[0x2a4].d != 2)
    result = sub_14139d480(&data_143ec4c60)
    int64_t* rbx_2 = *arg4
    int64_t* rcx_10 = *result
    *arg4 = rcx_10
    
    if (rcx_10 != 0)
        result = (*(*rcx_10 + 0x30))()
    
    if (rbx_2 != 0)
        result = (*(*rbx_2 + 0x38))(rbx_2)
else
    void var_2b8
    sub_1419928d0(&var_2b8, arg2)
    int64_t var_300
    __builtin_memset(&var_300, 0, 0x48)
    void var_308
    sub_14142a030(&var_2b8, &var_308)
    int128_t zmm0_1 = *(arg3 + 0x1598)
    int128_t var_2f8
    var_2f8.q = 0
    int32_t var_348 = 0
    int128_t var_33c_1 = zmm0_1
    int16_t var_344_1 = 0
    int128_t var_32c_1 = zmm0_1
    char var_342_1 = 0
    int32_t var_340_1 = 0
    int128_t var_318_1 = zx.o(0)
    int32_t var_31c_1 = 1
    var_318_1.q = sub_1410fccd0(&var_2b8, sub_14139d480(&data_143ec4c60), u"SceneColor", 0)
    void*** var_368
    void**** rax_5 =
        sub_14134cc40(&var_368, &var_2b8, &var_308, arg3, &var_348, &arg3[0x9b2], r13 + 0x8d0)
    int32_t var_150
    int64_t rbx_1 = sx.q(var_150)
    int32_t rax_6 = (rbx_1 + 1).d
    uint64_t var_358_1 = rax_5[2]
    var_368 = (*rax_5).q
    int64_t* var_360_1 = arg4
    var_358_1.b = 1
    int32_t var_150_1 = rax_6
    int64_t var_158
    int32_t var_14c
    
    if (rax_6 s> var_14c)
        sub_14119a720(&var_158, rbx_1.d)
    
    int64_t rax_7 = var_158
    int64_t rcx_7 = rbx_1 * 3
    *(rax_7 + (rcx_7 << 3)) = var_368.o
    *(rax_7 + (rcx_7 << 3) + 0x10) = var_358_1
    sub_14199ef00(&var_2b8)
    result = sub_1410eb9e0(&var_2b8)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
