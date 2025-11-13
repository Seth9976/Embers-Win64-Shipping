// 函数: sub_1426e2bc0
// 地址: 0x1426e2bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409786b0(arg1, arg2)
float zmm0_1 = cosf(*(arg1 + 0x68) * 0.0174532924f)
int32_t rdx = *(arg1 + 0xc0)
*(arg1 + 0xc4) = zmm0_1

if ((rdx.b & 1) != 0)
    rdx &= 0xfffffffe
    *(arg1 + 0x80) = data_143f721c0
    *(arg1 + 0xc0) = rdx

if ((rdx.b & 2) != 0)
    *(arg1 + 0xa8) = data_143f721c0
    *(arg1 + 0xc0) = rdx & 0xfffffffd

void* result = sub_1426b0ab0(arg1)

if (result == 0)
    return result

sub_1426bdb00(arg1 + 0x70, result)
return sub_1426bdb00(arg1 + 0x98, result)
