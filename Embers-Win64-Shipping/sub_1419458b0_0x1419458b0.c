// 函数: sub_1419458b0
// 地址: 0x1419458b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xf0)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    int32_t r9 = 0xde1
    int64_t var_20_1 = arg9
    
    if (arg7 u> 1)
        r9 = 0x9100
    
    int64_t var_28_1 = 0
    rbx = sub_141928d30(rax, arg1, arg10, r9, 0, arg4, arg5, 0, arg6, arg7, arg8, 1, arg3, 0, 0, 
        arg11)

rbx[0x13].d |= 0x80000000
sub_141941370(rbx, arg11)
*arg2 = rbx
rbx[1].d += 1
return arg2
