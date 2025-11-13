// 函数: sub_141b29960
// 地址: 0x141b29960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg1 + 0x108)
uint128_t var_38 = *(arg1 + 0xf8)
uint64_t var_18 = *(arg1 + 0x118)
int128_t var_28 = zmm1
void arg_8
int128_t zmm1_1

if (*sub_140910250(arg2, &arg_8, &var_38:8) != 0xffffffff)
    zmm1_1 = *(arg1 + 0x108)
    var_38 = *(arg1 + 0xf8)
    uint64_t var_18_1 = *(arg1 + 0x118)
    var_28 = zmm1_1
    sub_140910250(arg2, &arg_8, &var_38:8)

__FrameHandler3::TryBlockMap::TryBlockMap(&var_38, arg1 + 0xe8, arg1 + 0x130)
var_28.q = arg1 + 0x120
uint128_t* i = *(arg1 + 0x120)
int32_t* result = sx.q(*(arg1 + 0x128))

for (void* rsi = i + result * 0x28; i != rsi; i += 0x28)
    zmm1_1 = i[1]
    var_38 = *i
    uint64_t var_18_2 = i[2].q
    int128_t var_28_1 = zmm1_1
    result = sub_140910250(arg2, &arg_8, &var_38:8)
    void arg_10
    
    if (*result != 0xffffffff)
        result = sub_140910250(arg2, &arg_10, &var_38:8)

return result
