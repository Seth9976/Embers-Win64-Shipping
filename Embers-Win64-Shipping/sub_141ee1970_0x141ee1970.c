// 函数: sub_141ee1970
// 地址: 0x141ee1970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x389) & 2) == 0)
    return sub_141ecd380(sub_1405be820(arg1), arg2, arg3, arg4, &data_14399f720, arg5, arg6, arg7, 
        arg8)

int128_t zmm0 = arg6[2]
float zmm1 = arg6[1] f* 0.707000017f
int32_t var_38 = 1
int32_t var_2c = zmm0.d
float var_34 = zmm1
float var_30 = zmm1
int128_t var_28 = data_143264910
char result =
    sub_141ecd380(sub_1405be820(arg1), arg2, arg3, arg4, &var_28, arg5, &var_38, arg7, arg8)

if (result != 0)
    return result

memset(arg2, 0, 0x88)
*(arg2 + 8) = 0x3f800000
return sub_141ecd380(sub_1405be820(arg1), arg2, arg3, arg4, &data_14399f720, arg5, &var_38, arg7, 
    arg8)
