// 函数: sub_142360710
// 地址: 0x142360710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if (data_143a2ff20 == 0xffffffff)
    data_143a2ff20 = 0xffffffff
    data_143a2ff20 = *(sub_1423dd380(data_143f5b298) + 0xa8)

void*** var_48 = nullptr
char* var_68 = &arg_10
int64_t (* var_58)(int64_t* arg1, int64_t* arg2)
int64_t* var_60 = &var_58
int128_t zmm0 = var_68.o
void** const var_38 = &data_142d42ed8
var_58 = sub_14235b280
var_68 = *(arg1 + 0x168)
int128_t var_30 = zmm0
int64_t result = var_58(sub_14059bf50(&var_38), &var_68)

if (var_58 != 0)
    void** const* rcx_4 = &var_38
    
    if (var_48 != 0)
        rcx_4 = var_48
    
    result = (*rcx_4)[2](rcx_4)

__security_check_cookie(rax_1 ^ &var_88)
return result
