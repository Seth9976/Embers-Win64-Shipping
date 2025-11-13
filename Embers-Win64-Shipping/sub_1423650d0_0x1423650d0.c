// 函数: sub_1423650d0
// 地址: 0x1423650d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0xffffffff
int32_t rax = -1
int64_t r8 = sx.q(*(arg1 + 0x198))

if (r8.d s> 0 && not(arg2 < 0f))
    if (arg5 == 0)
        float* rax_2 = *(arg1 + 0x190)
        int64_t rdx_1 = sx.q(*(arg1 + 0x198))
        
        if (not(arg2 < rax_2[rdx_1 * 2 - 1]))
            *arg4 = rax_2[rdx_1 * 2 - 2]
            *arg3 = *(arg1 + 0x198) - 1
            int32_t rax_5
            rax_5.b = 1
            return rax_5
        
        if (arg2 >= rax_2[1])
            int64_t rax_7
            rax_7.b = false
            return 0xffffff00
        
        *arg4 = *rax_2
        float rax_6
        rax_6.b = 1
        *arg3 = 0
        return rax_6
    
    int32_t* rdx_2 = *(arg1 + 0x190)
    float zmm4 = rdx_2[1]
    
    if (not(arg2 >= zmm4))
        int32_t zmm0 = *(arg1 + 0xf8) f- rdx_2[r8 * 2 - 1]
        int64_t rax_8
        rax_8.b = 1
        *arg4 = (zmm0 + arg2) / (zmm4 f+ zmm0) f* (*rdx_2 f- rdx_2[r8 * 2 - 2]) f+ rdx_2[r8 * 2 - 2]
        *arg3 = 0
        return rax_8
    
    char var_18_1 = arg5
    rax = sub_142365200(arg1, arg2, 0, arg4)
    *arg3 = rax
    
    if (rax == 0xffffffff)
        rax = -1

rax.b = rax != 0xffffffff
return rax
