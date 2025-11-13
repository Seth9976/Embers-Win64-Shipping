// 函数: sub_141dc3420
// 地址: 0x141dc3420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_c = 0x64
*arg1 = arg3
int32_t rsi = 0
arg1[1] = 0
int32_t var_38 = 0

if (sub_140d2f0c0(sub_140d41340(), arg2, arg3.q, 0, 0, 0) == 0)
    int32_t var_38_2 = 0
    
    if (sub_140d2f0c0(sub_140d41340(), arg2, *arg1, 0, 0, 0) != 0)
        int64_t i
        
        do
            rsi += 1
            arg_c = rsi
            uint64_t rbx_3 = arg3.q
            *arg1 = rbx_3
            int32_t var_38_3 = 0
            i = sub_140d2f0c0(sub_140d41340(), arg2, rbx_3, 0, 0, 0)
        while (i != 0)
else
    int32_t rbp_1 = 0x7fffffff
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbp_1 - rsi)
        int32_t rbx_1 = rsi + ((temp1_1 - temp0_1) s>> 1)
        arg_c = rbx_1
        int32_t var_38_1 = 0
        
        if (sub_140d2f0c0(sub_140d41340(), arg2, arg3.q, 0, 0, 0) == 0)
            rbp_1 = rbx_1
        else
            rsi = rbx_1 + 1
    while (rbp_1 != rsi)
    
    arg_c = rsi
    *arg1 = arg3.q

return arg1
