// 函数: sub_140f59dd0
// 地址: 0x140f59dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg3 + 0x28)
float zmm5 = *(arg3 + 0x24)
int128_t __saved_zmm6 = arg5
int128_t __saved_zmm7 = arg6
int32_t rsi = 0
arg6 = *(arg3 + 0x1c)
int128_t __saved_zmm8 = arg7
arg7 = *(arg3 + 0x20)
int128_t __saved_zmm9 = arg8
arg8 = *(arg4 + 0x18)
int128_t __saved_zmm10 = arg9
arg9 = *(arg4 + 0x1c)
float zmm0 = arg9.d
arg9.d = arg9.d f- *(arg3 + 0x30)
arg5.d = 1f / (arg6.d * zmm3 - arg7.d * zmm5)
float zmm1 = arg8.d
arg8.d = arg8.d f- *(arg3 + 0x2c)
arg6.d = arg6.d f* arg5.d
arg7.d = arg7.d f* arg5.d
arg9.d = arg9.d f* arg6.d
arg8.d = arg8.d f* arg7.d
arg9.d = arg9.d f- arg8.d
int32_t arg_c = arg9.d
float arg_8 = (zmm1 f- *(arg3 + 0x2c)) * zmm3 f* arg5.d - (zmm0 f- *(arg3 + 0x30)) * zmm5 f* arg5.d

if (arg1[0x56].d s<= 0)
label_140f59f21:
    *arg2 = 0
else
    int64_t rdi_1 = 0
    
    while (true)
        int64_t rcx = arg1[0x55]
        
        if (*(rdi_1 + rcx + 0xb8) == *(arg4 + 0x50))
            if (*(rdi_1 + rcx + 0xca) != 0)
                goto label_140f59f21
            
            if ((*(*arg1 + 0x248))(arg1, zx.q(rsi), &arg_8, arg3, __saved_zmm10, __saved_zmm9, 
                    __saved_zmm8, __saved_zmm7, __saved_zmm6) != 0)
                *arg2 = 1
                break
        
        rsi += 1
        rdi_1 += 0xd0
        
        if (rsi s>= arg1[0x56].d)
            goto label_140f59f21

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
