// 函数: sub_1422ba910
// 地址: 0x1422ba910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg4
uint64_t result = sub_1422cb580(arg2)

if (result.b != 0)
    result = arg1 + 0x38
    char rdi_1 = arg6
    bool cond:0_1
    
    do
        int64_t rbp_1 = sx.q(arg2[6].d)
        int64_t* rdx_2 = (rbp_1 << 5) + *result
        int64_t* rax_2 = sx.q(*(rdx_2 + 0xc)) + arg3 + sx.q(arg2[7].d)
        
        if (((*(*(arg1 + 0x28) + zx.q(*(rdx_2 + 0x16)) * 0x30 + 0x2c) u>> 3).b & 1) == 0)
            char var_90
            
            if (*(rdx_2 + 0x1c) == 0)
                int64_t r8_2 = *rax_2
                void* r9_2 = *arg2
                int64_t r10_1 = sx.q(*(r9_2 + 8))
                *(r9_2 + 8) = (r10_1 + 1).d
                int64_t* r11_1 = *arg2
                int32_t rdi_2 = r11_1[1].d
                uint32_t rsi_1 = zx.d(*(**r11_1 + (r10_1 << 1)))
                void* rcx_7 = *(*arg2[2] + zx.q(*(rdx_2 + 0x14)) * 0x10 - 8)
                void* var_68_1 = rcx_7
                void* var_70_1 = arg1 + 0x38
                int64_t* var_78 = r11_1
                int32_t var_60_1 = *(rcx_7 + 8)
                uint32_t var_5c_1 = zx.d(*(rdx_2 + 0xa))
                int32_t var_54_1 = (rbp_1 + 1).d
                int32_t var_58_1 = rax_2[1].d
                int32_t var_50_1 = zx.d(rdx_2[1].w) - 1
                int64_t var_38_1 = arg2[8]
                int32_t var_30_1 = 0xffffffff
                sub_1422ba910(arg1, &var_78, r8_2, zx.q(arg4), arg6, arg7 + 1, arg8, var_90)
                rdi_1 = arg6
                rsi = arg4
                *(*arg2 + 8) = rsi_1 + rdi_2
                void* rax_10 = *arg2
                *(rax_10 + 8) += 1
            else if ((*(rdx_2 + 0x1d) & 1) != 0)
                var_90 = rdi_1
                int64_t* var_98
                var_98.b = rsi
                int32_t var_a0
                var_a0.q = rax_2
                int32_t var_7c_1 = rax_2.d
                int32_t var_84_1 = *(arg2 + 0x34)
                char var_a8
                var_a8.w = *(arg2 + 0x2c)
                int32_t var_88 = rbp_1.d
                int32_t var_80_1 = arg7
                arg5 = sub_1422d3d80(arg8, rdx_2, &var_88, rbp_1.d, arg5, var_a8, var_a0)
        
        cond:0_1 = sub_1422cb580(arg2) != 0
        result = arg1 + 0x38
    while (cond:0_1)

return result
