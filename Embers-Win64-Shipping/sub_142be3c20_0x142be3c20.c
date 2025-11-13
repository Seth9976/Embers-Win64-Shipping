// 函数: sub_142be3c20
// 地址: 0x142be3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int32_t* rsi
int32_t* r14

if (arg3 == 0)
    rdx = 0x686d7478
    rsi = 0x4c0
    r14 = 0x42c
else
    rdx = 0x766d7478
    rsi = 0x4c4
    r14 = 0x430

int32_t arg_18
int32_t result = (*(arg1 + 0x2a0))(arg1, rdx, arg2, &arg_18)

if (result != 0)
    return result

*(r14 + arg1) = arg_18
*(rsi + arg1) = sub_1408e52d0(arg2)
return result
