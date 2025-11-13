// 函数: sub_14121dfa0
// 地址: 0x14121dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t result = __security_cookie ^ &var_398
int64_t result_1 = result

if (arg2[0x2a4].d != 2 || arg4 == 0 || data_1439b6360 == 0)
    int64_t* rcx_9 = *arg5
    int64_t* rbx_2 = *arg6
    *arg6 = rcx_9
    
    if (rcx_9 != 0)
        result = (*(*rcx_9 + 0x30))()
    
    if (rbx_2 != 0)
        result = (*(*rbx_2 + 0x38))(rbx_2)
else
    void var_2a8
    sub_1419928d0(&var_2a8, arg1)
    void*** rax_1 = sub_1410fccd0(&var_2a8, arg5, u"LightShaftsSource", 0)
    int64_t var_2f0
    __builtin_memset(&var_2f0, 0, 0x48)
    void var_2f8
    sub_14142a030(&var_2a8, &var_2f8)
    int32_t rax_2 = *(arg2 + 0x15a4)
    int32_t r8 = arg2[0x2b3].d
    int32_t rdx_3 = *(arg2 + 0x159c)
    int32_t rcx_3 = arg2[0x2b4].d
    int32_t var_320_1 = rax_2
    int32_t var_310_1 = rax_2
    int32_t var_32c_1 = r8
    int32_t var_328_1 = rdx_3
    int32_t var_324_1 = rcx_3
    int32_t var_31c_1 = r8
    int32_t var_318_1 = rdx_3
    int32_t var_314_1 = rcx_3
    int64_t* var_370_1 = arg4
    int32_t var_338
    int32_t* var_378_1 = &var_338
    int16_t var_334_1 = 0
    char var_332_1 = 0
    int32_t var_330_1 = 0
    int64_t var_300_1 = 0
    var_338 = 4
    int32_t var_30c_1 = 2
    void*** var_308_1 = rax_1
    void*** var_358
    void**** rax_3 = sub_14134cc40(&var_358, &var_2a8, &var_2f8, arg2, var_378_1, var_370_1, arg4)
    int32_t var_140
    int64_t rbx_1 = sx.q(var_140)
    int32_t rax_4 = (rbx_1 + 1).d
    uint64_t var_348_1 = rax_3[2]
    var_358 = (*rax_3).q
    int64_t* var_350_1 = arg6
    var_348_1.b = 1
    int32_t var_140_1 = rax_4
    int64_t var_148
    int32_t var_13c
    
    if (rax_4 s> var_13c)
        sub_14119a720(&var_148, rbx_1.d)
    
    int64_t rax_5 = var_148
    int64_t rcx_6 = rbx_1 * 3
    *(rax_5 + (rcx_6 << 3)) = var_358.o
    *(rax_5 + (rcx_6 << 3) + 0x10) = var_348_1
    sub_14199ef00(&var_2a8)
    result = sub_1410eb9e0(&var_2a8)

__security_check_cookie(result_1 ^ &var_398)
return result
