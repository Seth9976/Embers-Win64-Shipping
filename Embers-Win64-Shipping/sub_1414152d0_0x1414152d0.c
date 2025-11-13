// 函数: sub_1414152d0
// 地址: 0x1414152d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[1]
int128_t zmm0 = data_142d3f5b0
int64_t* r14 = *arg1
int32_t var_48 = arg1[4].d
void* rsi = rbp + 0x48
int128_t var_58 = zmm0

if (rbp == 0)
    rsi = nullptr

zmm0 = data_142d3f800
int128_t var_44
__builtin_memset(&var_44, 0xff, 0x20)
int64_t var_24 = 0
int512_t zmm1
zmm1.o = zmm0
int32_t var_1c = 0
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_142134440()
int32_t rbx
rbx.b = *(r14[1] + 8) s>= 3

if (rbx == 0)
    char var_68_1 = 0
    sub_1412e7c40(arg2, r14, rsi, rbp, zmm2, zmm3, &arg1[2], &var_48, nullptr, &var_58)
else if (rbx == 1)
    int128_t* var_70_1 = &var_58
    sub_1414318f0(arg2, r14, rsi, rbp, &arg1[2], &var_48, nullptr)

return sub_1410e0370(arg2)
