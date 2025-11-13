// 函数: sub_141e92e30
// 地址: 0x141e92e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t r9 = *arg1
int128_t zmm0 = *(arg1 + 0x10)
int64_t* rcx = arg1[1]
int64_t var_98
int64_t* var_78 = &var_98
void* const var_80 = &data_140d19280
int32_t var_20 = arg1[4].d
int64_t var_40
int64_t* var_68 = &var_40
int64_t (* var_70)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = sub_140d19220
int64_t var_90
int64_t* var_58 = &var_90
int64_t (* var_60)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
int64_t var_88
int64_t* var_48 = &var_88
int64_t (* var_50)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
void* const* var_a8 = &var_80
int64_t* var_b0 = &var_70
var_98 = r9
var_40 = r9
var_90 = r9
var_88 = r9
int64_t var_38 = arg2
int128_t var_30 = zmm0
int64_t result = sub_140d16fd0(rcx, arg2, &arg1[2], &var_50, &var_60, var_b0)
__security_check_cookie(rax_1 ^ &var_d8)
return result
