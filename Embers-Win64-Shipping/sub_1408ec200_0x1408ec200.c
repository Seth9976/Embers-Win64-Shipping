// 函数: sub_1408ec200
// 地址: 0x1408ec200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0
__builtin_memset(arg1, 0, 0x14)
__builtin_memset(arg1 + 0x28, 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x3c) s<= 0xffffffff)
    sub_1405947f0(arg1 + 0x30, 0)

int16_t* rax = *(arg1 + 0x30)

if (rax != 0)
    *rax = 0

*(arg1 + 0x1c) = data_143986160
int32_t zmm1 = data_143986160
*(arg1 + 0x18) &= 0xfffffffe
*(arg1 + 0x20) = zmm1
*(arg1 + 0x14) = 0x3f800000
return arg1
