// 函数: sub_14296e760
// 地址: 0x14296e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = nullptr
char* r10 = arg2
int64_t i_1 = 0xe
int64_t i

do
    result[arg1] = *r10
    int32_t r9_1 = *r10
    r10 = &r10[4]
    *(zx.q((&result[1]).d) + arg1) = (r9_1 u>> 8).b
    *(zx.q((&result[2]).d) + arg1) = r10[-2]
    result = zx.q((&result[4]).d)
    *(zx.q((&result[3]).d) + arg1) = r10[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
