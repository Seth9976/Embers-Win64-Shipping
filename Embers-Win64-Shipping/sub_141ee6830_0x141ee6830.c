// 函数: sub_141ee6830
// 地址: 0x141ee6830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x150) & 4) == 0 || (*(arg1 + 0x35) s>= 0 && (*(arg1 + 0x36) & 1) == 0))
    int32_t rsi_1 = 0
    
    if (sub_1422a6b20(arg1, arg3) != 0 && (*(arg1 + 0x150) & 1) != 0)
        rsi_1 = 1
    
    int32_t var_d_1 = 0
    char var_9_1 = 0
    char var_16_1 = 1
    int32_t rcx_6 =
        ((zx.d(sub_1422a69b0(arg1, arg3)) * 2) | rsi_1) << 2 | (0:5.d & 0xfffffff3) | 0x82
    int64_t var_15_1
    var_15_1:5.d = rcx_6
    
    if ((*(arg1 + 0x150) & 8) != 0)
        rcx_6 |= 0x400
        var_15_1:5.d = rcx_6
    
    if (*(arg3 + 0xd70) == 0)
        var_15_1:5.d = rcx_6 | 0x100
    
    *arg2 = 0.o
else
    int32_t var_d = 0
    int64_t var_15
    var_15:5.d = 0:5.d | 0x86
    char var_9 = 0
    char var_16 = 1
    *arg2 = 0.o

return arg2
