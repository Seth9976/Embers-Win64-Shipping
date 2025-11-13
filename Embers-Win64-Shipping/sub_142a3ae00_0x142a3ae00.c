// 函数: sub_142a3ae00
// 地址: 0x142a3ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

float rax_1[0x2]
float arg_8[0x2]

if (*arg5 != 0)
label_142a3ae62:
    int32_t* rbx_1 = *arg5
    
    if (arg4 == 0)
        rbx_1 = &rbx_1[1]
    
    arg_8 = (zx.o(0)).q
    rax_1 = sub_142a3e770(arg1, arg2, arg3, &arg_8)
    uint128_t zmm1
    
    if (rax_1[0] s>= 0)
        zmm1 = zx.o(arg_8)
    
    if (rax_1[0] s< 0 || 0.0 f> zmm1.q || zmm1.q f> 1.0
            || (not(zmm1.q f<= 0.0) && 0x3810000000000000 f> zmm1.q))
        rax_1[0].b = 0
    else
        int64_t temp0_1 = _mm_cvtpd_ps(zmm1)
        rax_1[0].b = 1
        *rbx_1 = temp0_1.d
else
    rax_1 = j_sub_140a82f30(8)
    arg_8 = rax_1
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    *arg5 = rax_1
    
    if (rax_1 != 0)
        goto label_142a3ae62
return rax_1
