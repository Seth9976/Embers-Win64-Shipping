// 函数: sub_140f02410
// 地址: 0x140f02410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2

if (((*(arg1 + 0x44c) u>> 2).b & 1) == 0)
    *arg2 = data_14399f5c0
    return result

void* rcx = arg1 + 0x3f0
void* rax_2 = *(rcx + 0x30)

if (rax_2 != 0)
    rcx = rax_2

float _X = sub_140da8440(rcx + (sx.q(arg3) << 4), arg4) * 6.28318548f
*result = 0x3f800000
result[1] = 0x3f800000
result[2] = 0x3f800000
result[3] = sinf(_X)
return result
