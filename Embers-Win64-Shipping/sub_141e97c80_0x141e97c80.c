// 函数: sub_141e97c80
// 地址: 0x141e97c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x66].d
int32_t result

if ((rax.b & 4) == 0)
    result = rax & 0xfffffbff
    arg1[0x67].d = 0
    arg1[0x66].d = result
else
    arg2 = arg2 f+ *(arg1 + 0x334)
    int64_t rax_1 = *arg1
    *(arg1 + 0x334) = arg2
    result = (*(rax_1 + 0x848))(arg3, arg2)
    
    if (not(arg3 f> *(arg1 + 0x334)))
        arg1[0x66].d &= 0xfffffffb

return result
