// 函数: sub_1408a2390
// 地址: 0x1408a2390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x404)
int64_t rax = sx.q(*(arg1 + 0x40c))
arg2.d = arg2.d f* zmm0.d
arg3.d = arg3.d f* zmm0.d
arg4.d = arg4.d f* zmm0.d

if (rax.d u<= 9)
    switch (rax)
        case 0
            return sub_1408a8bb0(arg1, 0, arg2, arg3, arg4.d)
        case 1
            int32_t rcx_1 = *(arg1 + 0x41c)
            
            if (rcx_1 == 0)
                return sub_1408a9a30(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_1 == 1)
                return sub_1408a9230(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_1 == 2)
                return sub_1408aa230(arg1, arg2, arg3, arg4) __tailcall
        case 2
            return sub_1408a5dd0(arg1, 0, arg2, arg3, arg4.d)
        case 3
            int32_t rcx_10 = *(arg1 + 0x41c)
            
            if (rcx_10 == 0)
                return sub_1408a6c90(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_10 == 1)
                return sub_1408a6730(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_10 == 2)
                return sub_1408a71a0(arg1, arg2, arg3, arg4) __tailcall
        case 4
            return sub_1408a7580(arg1, 0, arg2, arg3, arg4.d)
        case 5
            int32_t rcx_19 = *(arg1 + 0x41c)
            
            if (rcx_19 == 0)
                return sub_1408a8380(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_19 == 1)
                return sub_1408a7e60(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_19 == 2)
                return sub_1408a8860(arg1, arg2, arg3, arg4) __tailcall
        case 6
            int32_t rcx_27 = *(arg1 + 0x428)
            
            if (rcx_27 != 0 && rcx_27 != 1 && rcx_27 != 2)
                return sub_1408a2e80(arg1, arg2, arg3, arg4) __tailcall
            
            return sub_1408a3a40(arg1, arg2, arg3, arg4) __tailcall
        case 7
            int32_t arg_10 = arg4.d
            int32_t arg_18 = arg2.d
            int32_t arg_20 = arg3.d
            int32_t rdx_17 = ((arg_10 s>> 0x10 ^ arg_10) * 0x1b3b)
                ^ ((arg_18 s>> 0x10 ^ arg_18) * 0x653) ^ ((arg_20 s>> 0x10 ^ arg_20) * 0x7a69)
                ^ *(arg1 + 0x400)
            int32_t rax_20 = rdx_17 * rdx_17 * rdx_17 * 0xec4d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f* 4.65661287e-10f
            return rax_20
        case 8
            return sub_1408a44f0(arg1, 0, arg2, arg3, arg4.d)
        case 9
            int32_t rcx_43 = *(arg1 + 0x41c)
            
            if (rcx_43 == 0)
                return sub_1408a5790(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_43 == 1)
                return sub_1408a5510(arg1, arg2, arg3, arg4) __tailcall
            
            if (rcx_43 == 2)
                return sub_1408a59e0(arg1, arg2, arg3, arg4) __tailcall

return rax
