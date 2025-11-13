// 函数: sub_141a6aba0
// 地址: 0x141a6aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
uint64_t var_28 = *arg3
int32_t var_20 = rax

if (var_28.b != 2)
    int32_t rax_1 = *(arg3 + 0x14)
    var_28 = *(arg3 + 0xc)
    var_20 = rax_1
    
    if (var_28.b != 2)
        int32_t r10 = arg1[1]
        int32_t r11 = *arg1
        int32_t r9_1 = r10 - r11
        int64_t rdx = *(arg3 + 4)
        int64_t rcx = arg3[2]
        int32_t arg_18
        arg_18.q = rcx
        float zmm2 = arg4 f- rdx:4.d
        int32_t rax_3 = int.d(zmm2 + zmm2 - 0.5f) s>> 1
        int32_t rdx_1 = rcx.d - rdx.d + rax_3
        zmm2 = zmm2 f- _mm_cvtepi32_ps(zx.o(rax_3)).d
        
        if (zmm2 >= 0f)
            arg4 = __minss_xmmss_memss(zmm2, 0x3f7fffff)
        else
            arg4 = 0f
        
        int64_t arg_20
        arg_20.d = r9_1
        arg_20:4.d = 0
        arg_18.q = rdx_1.q
        
        if (rdx_1 s> r9_1 || (rdx_1 == r9_1 && arg4.d f>= arg_20:4.d))
            arg4 = 0f
            var_28 = r11.q
            var_28.b = 1
            *arg2 = var_28
            arg4 = 0f
            *(arg2 + 8) = var_20
            *(arg2 + 0xc) = 0.q
            *(arg2 + 0x14) = r10.q:4.d
            return arg2
        
        sub_141a6b240(arg1, &var_28, arg3)
        int32_t rdx_3 = arg1[1]
        int64_t var_18
        arg_18.q = var_18
        int32_t rcx_3
        
        if (var_18.d s> rdx_3 || (var_18.d == rdx_3 && 0f f> rdx_3.q:4.d))
            rcx_3 = *arg1
        else
            rcx_3 = *arg1
            uint64_t rax_9 = var_28
            arg_18.q = rax_9
            
            if (rax_9.d s>= rcx_3 && (rax_9.d != rcx_3 || not(0f f< rcx_3.q:4.d)))
                *arg2 = var_28.o
                arg2[1].q = var_18
                return arg2
        
        arg4 = 0f
        *arg2 = 1.q
        arg4 = 0f
        var_28 = rdx_3.q
        *(arg2 + 8) = rcx_3.q:4.d
        var_28.b = 0
        *(arg2 + 0xc) = var_28
        *(arg2 + 0x14) = var_20
        return arg2

arg4 = 0f
var_28 = (*arg1).q
int32_t rax_23 = arg1[1]
var_28.b = 1
*arg2 = var_28
arg4 = 0f
*(arg2 + 8) = var_20
*(arg2 + 0xc) = 0.q
*(arg2 + 0x14) = rax_23.q:4.d
return arg2
