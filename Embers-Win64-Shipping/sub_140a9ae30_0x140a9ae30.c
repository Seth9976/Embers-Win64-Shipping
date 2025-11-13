// 函数: sub_140a9ae30
// 地址: 0x140a9ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char var_68 = 0
char var_a8 = 1
char* var_90 = &var_a8
int64_t var_88 = *arg1
char** var_98 = &var_90
int64_t (* var_a0)(int64_t* arg1, int16_t* arg2) = sub_140aa3a40
int128_t var_58
int128_t* rax_3 = sub_140b24d50(&arg3[2], &var_58, &var_a0, nullptr)
int128_t var_80
char rax_4

if (rax_3 == &var_80)
    rax_4 = var_68
label_140a9aeca:
    
    if (rax_4 != 0)
        goto label_140a9aece
else
    rax_4 = 0
    char var_68_1 = 0
    
    if (*(rax_3 + 0x18) == 0)
        goto label_140a9aeca
    
    var_80 = *rax_3
    int64_t var_70_1 = rax_3[1].q
    char var_68_2 = 1
label_140a9aece:
    int64_t (* rax_5)(int64_t* arg1, int16_t* arg2) = var_80.q
    void* rdx_2 = var_80:8.q - rax_5
    var_a0 = rax_5
    var_98.d = (rdx_2 s>> 1).d
    sub_140ab2540()
    void** const var_48_1 = &data_142e66798
    var_58 = data_143db9f20.o
    int128_t var_40_1 = var_a0.o
    sub_140b0e240(arg3, &var_80, &var_58)
    sub_140b0bbf0(&var_58)
*(arg2 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
