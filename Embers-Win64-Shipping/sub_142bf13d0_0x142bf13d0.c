// 函数: sub_142bf13d0
// 地址: 0x142bf13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = arg3
arg1[2] = *(arg2 + 0x30)
arg1[0x410] = arg1 + 0x2074
arg1[0x40f] = arg1 + 0x2074
*(arg1 + 0x2074) = 0
int32_t result = sub_142bf1040(arg3, arg7, arg6, arg3.b, arg4, arg5)

if (result == 0)
    arg1[0xe].d = sub_1408e52d0(arg3)
    arg1[9] = sub_142bf1020
    arg1[0xa] = j_sub_142b99980
    arg1[0xb] = arg3[6]
    arg1[4].d = result
    arg1[3] = arg1 + 0x1074
    
    if (sub_140371b70(&arg1[3], result - 0xf, "1.2.8", result + 0x58) != 0 || arg1[3] == 0)
        return 3

return result
