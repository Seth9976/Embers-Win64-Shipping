// 函数: sub_141cf0e10
// 地址: 0x141cf0e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = (data_143a21130:4).d
int32_t rbx = (data_143a21130).d
int64_t r14 = sx.q(arg3)

if (r11 - rbx + data_143a21140 s< arg5 - arg4 + 1)
    int32_t rdx = rbx + arg5 - arg4 + 1
    
    if (rdx s> r11)
        sub_14083ad30(&data_143a21128, rdx)

int64_t* rax_7 = (sx.q(not.d(*(arg2 + 0x24))) & r14) * 0x30 + *arg2
int64_t r9_1 = *rax_7 & 0xffffffffffff
return sub_141cf10c0(arg1, arg2, r14.d, r9_1, rax_7[1] - 1 + r9_1, arg4, arg5)
