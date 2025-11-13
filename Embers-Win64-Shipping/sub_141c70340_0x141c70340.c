// 函数: sub_141c70340
// 地址: 0x141c70340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141c5d7c0(arg1)

if (result == 0)
    return result

uint64_t rcx = zx.q(arg3)
char var_18 = 2
int32_t var_16_1 = 0x10200

if (rcx.d u<= 5)
    switch (rcx)
        case 1
            var_16_1.w = 0x40
        case 2
            var_16_1.w = 0x100
        case 4
            var_16_1.w = 0x400
        case 5
            var_16_1.w = 0x1000

uint32_t rcx_1 = zx.d(arg4)

if (arg4 == 0)
    var_16_1:2.w = 0
else if (rcx_1 != 1 && rcx_1 == 2)
    var_16_1:2.w = (rcx_1 - 1).w + 1

uint32_t rcx_3 = zx.d(arg5)

if (rcx_3 == 0)
    var_18 = 0
else if (rcx_3 == 1)
    var_18 = 1
else if (rcx_3 != 2 && rcx_3 == 3)
    var_18 = 3

int32_t var_10_1 = arg6
return (*(*result + 0x130))(result, arg2, &var_18)
