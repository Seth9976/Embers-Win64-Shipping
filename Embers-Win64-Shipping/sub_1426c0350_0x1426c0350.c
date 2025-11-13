// 函数: sub_1426c0350
// 地址: 0x1426c0350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = *arg3
int64_t result

switch (arg4)
    case 0
        if (not(zmm1 f!= arg5))
            result.b = 1
            return result
    case 1
        if (not(zmm1 f== arg5))
            result.b = 1
            return result
    case 2
        result.b = arg5 f> zmm1
        return result
    case 3
        result.b = arg5 f>= zmm1
        return result
    case 4
        result.b = zmm1 f> arg5
        return result
    case 5
        result.b = zmm1 f>= arg5
        return result

result.b = 0
return result
