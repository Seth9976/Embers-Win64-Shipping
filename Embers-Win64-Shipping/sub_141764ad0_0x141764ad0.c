// 函数: sub_141764ad0
// 地址: 0x141764ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
int64_t rdi = sx.q(arg2[1].d)
void arg_8
int32_t* result = sub_1408296b0(arg1 + 0x18, &arg_8, *(*(rsi + 0xc8) + (rdi << 3)))

if (*result == 0xffffffff)
    int64_t rcx_1 = rdi * 3
    float zmm2 = *(*(rsi + 0x2c0) + (rdi << 2))
    result = *(rsi + 0x230)
    float zmm1 = *(arg1 + 0xc) * zmm2 f+ result[rcx_1 + 1]
    float zmm3 = *(arg1 + 0x10) * zmm2 f+ result[rcx_1 + 2]
    result[rcx_1] = zmm2 f* *(arg1 + 8) f+ result[rcx_1]
    result[rcx_1 + 1] = zmm1
    result[rcx_1 + 2] = zmm3

return result
