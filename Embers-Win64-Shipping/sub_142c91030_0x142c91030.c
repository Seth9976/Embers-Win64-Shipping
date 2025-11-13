// 函数: sub_142c91030
// 地址: 0x142c91030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg2
int32_t rdx = 0x2b
int64_t i = arg3

if (arg3 != 0)
    do
        int64_t rbx_1 = 4
        
        if (i u< 4)
            rbx_1 = i
        
        uint32_t arg_18
        int32_t rax_1
        int512_t zmm2_1
        rax_1, zmm2_1 = j_sub_142c71d50(arg1, &arg_18, 4)
        rdx = rax_1
        uint32_t rax_2
        
        if (rax_1 == 4)
            int32_t rcx_4
            
            if (data_14401b0e4 != 0)
                rcx_4 = data_14401b0e8
            else
                uint64_t var_18[0x2]
                uint64_t* rax_3
                int64_t r8
                rax_3, r8 = sub_142c59600(&var_18)
                uint128_t zmm0_1 = *rax_3
                sub_142c64850(arg1, "WARNING: Using weak random seed\n", r8, zmm2_1)
                int32_t rdx_2 = data_14401b0e8
                data_14401b0e4 = 1
                rcx_4 = 0xa70427df - (rdx_2 + zmm0_1.d + _mm_bsrli_si128(zmm0_1, 8).d) * 0x7f82434b
            
            data_14401b0e8 = rcx_4 * 0x41c64e6d + 0x3039
            rax_2 = rol.d(rcx_4 * 0x41c64e6d + 0x3039, 0x10)
            arg_18 = rax_2
            rdx = 0
        else
            if (rax_1 != 0)
                return rax_1
            
            rax_2 = arg_18
        
        if (rbx_1 != 0)
            i -= rbx_1
            int64_t j
            
            do
                *rdi = rax_2.b
                rdi = &rdi[1]
                rax_2 u>>= 8
                j = rbx_1
                rbx_1 -= 1
            while (j != 1)
            arg_18 = rax_2
    while (i != 0)

return rdx
