// 函数: sub_1408a21c0
// 地址: 0x1408a21c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x404)
int64_t rax = sx.q(*(arg1 + 0x40c))
arg2.d = arg2.d f* zmm0.d
arg3.d = arg3.d f* zmm0.d

if (rax.d u<= 9)
    switch (rax)
        case 0
            return sub_1408a89c0(arg1, 0, arg2, arg3) __tailcall
        case 1
            int32_t rcx_2 = *(arg1 + 0x41c)
            
            if (rcx_2 == 0)
                return sub_1408a9710(arg1, arg2, arg3) __tailcall
            
            if (rcx_2 == 1)
                return sub_1408a8ef0(arg1, arg2, arg3) __tailcall
            
            if (rcx_2 == 2)
                return sub_1408a9f00(arg1, arg2, arg3) __tailcall
            
            return sub_1408a5b40(arg1, 0, arg2, arg3) __tailcall
        case 2
            return sub_1408a5b40(arg1, 0, arg2, arg3) __tailcall
        case 3
            int32_t rcx_12 = *(arg1 + 0x41c)
            
            if (rcx_12 == 0)
                return sub_1408a68b0(arg1, arg2, arg3) __tailcall
            
            if (rcx_12 == 1)
                return sub_1408a6330(arg1, arg2, arg3) __tailcall
            
            if (rcx_12 == 2)
                return sub_1408a6db0(arg1, arg2, arg3) __tailcall
            
            return sub_1408a7300(arg1, 0, arg2, arg3) __tailcall
        case 4
            return sub_1408a7300(arg1, 0, arg2, arg3) __tailcall
        case 5
            int32_t rcx_22 = *(arg1 + 0x41c)
            
            if (rcx_22 == 0)
                return sub_1408a7fe0(arg1, arg2, arg3) __tailcall
            
            if (rcx_22 == 1)
                return sub_1408a7a90(arg1, arg2, arg3) __tailcall
            
            if (rcx_22 == 2)
                return sub_1408a84a0(arg1, arg2, arg3) __tailcall
            
            goto label_1408a22ad
        case 6
        label_1408a22ad:
            int32_t rcx_30 = *(arg1 + 0x428)
            
            if (rcx_30 != 0 && rcx_30 != 1 && rcx_30 != 2)
                return sub_1408a2910(arg1, arg2, arg3) __tailcall
            
            return sub_1408a3600(arg1, arg2, arg3) __tailcall
        case 7
            int32_t arg_10 = arg2.d
            int32_t arg_18 = arg3.d
            int32_t rdx_19 = ((arg_10 s>> 0x10 ^ arg_10) * 0x653)
                ^ ((arg_18 s>> 0x10 ^ arg_18) * 0x7a69) ^ *(arg1 + 0x400)
            int32_t rax_19 = rdx_19 * rdx_19 * rdx_19 * 0xec4d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_19)).d f* 4.65661287e-10f
            return rax_19
        case 8
            return sub_1408a4110(arg1, 0, arg2, arg3) __tailcall
        case 9
            int32_t rcx_44 = *(arg1 + 0x41c)
            
            if (rcx_44 == 0)
                return sub_1408a5690(arg1, arg2, arg3) __tailcall
            
            if (rcx_44 == 1)
                return sub_1408a53b0(arg1, arg2, arg3) __tailcall
            
            if (rcx_44 == 2)
                return sub_1408a58b0(arg1, arg2, arg3) __tailcall

return rax
