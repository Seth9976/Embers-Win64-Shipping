// 函数: sub_142103a10
// 地址: 0x142103a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
float zmm6_1
result, zmm6_1 = sub_141ddacb0(arg1, arg2)

if ((*(arg1 + 0x2a1) & 8) != 0)
    int64_t rdi_1 = data_143f486d8
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    float zmm0_1 = *(rdi_1 + (rcx << 2))
    
    if (not(zmm0_1 f>= *(arg1 + 0x2a4)))
        sub_142102360(arg1, sub_1420fa340(arg1), 1)
        *(arg1 + 0x2a1) &= 0xf7
        *(arg1 + 0x2a4) = 0
        return sub_1423c9cb0(&arg1[5], 0) __tailcall
    
    float zmm0_4
    zmm0_4, result = sub_141dc5480(arg1, zmm0_1)
    *(arg1 + 0x2a4) = zmm6_1 / __maxss_xmmss_memss(zmm0_4, 0x322bcc77) f+ *(arg1 + 0x2a4)

return result
