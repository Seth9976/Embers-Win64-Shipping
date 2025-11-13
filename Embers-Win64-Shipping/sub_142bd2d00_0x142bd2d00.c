// 函数: sub_142bd2d00
// 地址: 0x142bd2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3[2].d
int32_t arg_8 = 0
int32_t arg_1c = *(arg3 + 0x14)
sub_142bd2950(arg1, arg3)

if (arg1[1].d == 0)
    *(arg1 + 0x134) = 0
    char rsi_1 = *(arg1 + 0x101)
    arg1[0x1a].d = 0
    sub_142b92d20(*(arg1[0x1d] + 0x18))
    int32_t* var_30_1 = &arg_8
    int32_t var_38_1 = 0
    sub_142bd4cb0(arg1, arg2, &arg1[0x16], &arg_18, arg5, 0, nullptr)
    
    if (arg1[1].d == 0)
        while (true)
            if (rsi_1 == 0 || arg1[0x1a].d s>= 0)
                void* rbx_1 = arg1[0x1d]
                sub_142bcef10(rbx_1)
                sub_142b924a0(*(rbx_1 + 0x18))
                break
            
            *(arg1 + 0x134) = 1
            rsi_1 = 0
            arg1[0x1a].d = 0
            sub_142b92d20(*(arg1[0x1d] + 0x18))
            int32_t* var_30_2 = &arg_8
            int32_t var_38_2 = 0
            sub_142bd4cb0(arg1, arg2, &arg1[0x16], &arg_18, arg5, 0, nullptr)
            
            if (arg1[1].d != 0)
                break
            
            continue

*arg4 = arg_8

if (arg1 == -8 || arg1[1].d != 0)
    return zx.q(arg1[1].d)

arg1[1].d = 0
return 0
