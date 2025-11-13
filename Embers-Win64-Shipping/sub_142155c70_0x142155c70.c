// 函数: sub_142155c70
// 地址: 0x142155c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t* i = *(arg1 + 0x20)
int128_t zmm1 = arg3[1]
int32_t var_48 = arg2
int128_t var_40 = zmm0
int32_t var_44 = 0
int64_t r9
int64_t var_10 = r9
int128_t var_30 = zmm1
int128_t var_20 = arg3[2]
int64_t result

for (void* rdi = &i[sx.q(*(arg1 + 0x28))]; i != rdi; i = &i[1])
    if (sub_1419d8600(*i, &var_48).b == 0)
        result.b = 0
        return result

result.b = 1
return result
