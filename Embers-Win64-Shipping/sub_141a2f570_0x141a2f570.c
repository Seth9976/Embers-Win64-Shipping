// 函数: sub_141a2f570
// 地址: 0x141a2f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint128_t zmm0

if (arg2.d != arg3.d || arg2:4.d.d f!= arg3:4.d)
    int32_t rax_3
    char var_2c
    char var_20
    
    if (arg2.d s< arg3.d || (arg2.d == arg3.d && arg2:4.d.d f< arg3:4.d))
        if (arg5 == 0)
            var_20 = 0
            int64_t var_1c_2 = arg3
        else
            var_2c = 1
            int64_t var_28_2 = arg3
        
        *arg1 = 1.q
        *(arg1 + 8) = arg2:4.d
        int64_t* rax_5 = &var_20
        
        if (arg5 != 0)
            rax_5 = &var_2c
        
        zmm0 = zx.o(*rax_5)
        rax_3 = rax_5[1].d
    else
        if (arg5 == 0)
            var_2c = 0
            int64_t var_28_1 = arg3
        else
            var_20 = 1
            int64_t var_1c_1 = arg3
        
        int64_t* rax_1 = &var_2c
        
        if (arg5 != 0)
            rax_1 = &var_20
        
        int32_t rax_2 = rax_1[1].d
        *arg1 = *rax_1
        zmm0 = zx.o(1.q)
        *(arg1 + 8) = rax_2
        rax_3 = arg2:4.d
    *(arg1 + 0xc) = zmm0.q
    *(arg1 + 0x14) = rax_3
else
    *arg1 = 1
    *(arg1 + 4) = arg2
    arg1[0xc] = 1
    *(arg1 + 0x10) = arg2

float zmm3 = arg2:4.d f- arg3:4.d
*(arg1 + 0x18) = arg4
int32_t rax_7 = int.d(zmm3 + zmm3 - 0.5f) s>> 1
int32_t r8 = arg2.d - arg3.d + rax_7
int64_t arg_8
arg_8.d = r8
zmm3 = zmm3 f- _mm_cvtepi32_ps(zx.o(rax_7)).d

if (zmm3 >= 0f)
    arg_8:4.d = __minss_xmmss_memss(zmm3, 0x3f7fffff)
else
    arg_8:4.d = 0

if (r8 s<= 0)
    if (r8 == 0)
        zmm0 = arg_8:4.d
    
    if (r8 != 0 || not(zmm0.d f>= 0f))
        r10 = 1

*(arg1 + 0x20) = r10
*(arg1 + 0x24) = 0x80000000
return arg1
