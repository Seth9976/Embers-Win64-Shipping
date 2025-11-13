// 函数: sub_14105d5b0
// 地址: 0x14105d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
int128_t zmm1 = arg3[1]
int128_t var_78 = *arg3
int128_t var_68 = zmm1
int128_t var_58 = arg3[2]
int128_t var_48 = arg3[3]
int128_t var_38 = arg3[4]
int128_t var_28 = arg3[5]
int64_t var_18 = *(*arg1 + 0x1e8)
int64_t* rcx_1 = arg2[2]
arg2[2] = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* result = sub_14105ef00(&arg2[2], rsi, &var_78)
arg2[5].b = 1
return result
