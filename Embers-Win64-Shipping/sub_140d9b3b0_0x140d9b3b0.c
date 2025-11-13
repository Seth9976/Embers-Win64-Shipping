// 函数: sub_140d9b3b0
// 地址: 0x140d9b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 8))
        break
    
    void** rsi_3 = (sx.q(i) << 4) + *arg1
    int32_t arg_18
    sub_140e15940(*rsi_3, &arg_18)
    int32_t arg_8
    sub_140e173b0(*rsi_3, &arg_8)
    
    if (not(arg_8 f< *arg2) && not(arg_18 f> arg2[2]) && not(arg3 f< arg2[1]) && arg4 f<= arg2[3])
        return 1
    
    if (sub_140d9b3b0(sub_140e12730(*rsi_3), arg2) != 0)
        return 1

return 0
