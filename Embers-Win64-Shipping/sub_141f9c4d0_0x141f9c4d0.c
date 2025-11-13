// 函数: sub_141f9c4d0
// 地址: 0x141f9c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* result = sub_141f87c30(arg1, arg2)

if (result != 0)
    int32_t rcx_2 = *result
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        void* rax_4 = sub_141f87c30(arg1, arg2)
        int64_t rsi_1 = arg1[0xd]
        int32_t arg_8 = arg2
        int64_t rcx_6 = sx.q(*rax_4) * 3
        uint128_t zmm7 = zx.o(*(rsi_1 + (rcx_6 << 2)))
        int32_t rbp_1 = *(rsi_1 + (rcx_6 << 2) + 8)
        uint64_t var_48 = zmm7.q
        int32_t var_40_1 = rbp_1
        void* rax_6 = sub_141f87c30(arg1, arg2)
        int32_t rcx_8 = arg1[0xe].d
        int64_t r9_1 = sx.q(*rax_6)
        int32_t rax_8 = rcx_8 - r9_1.d
        
        if (rax_8 != 1)
            memmove(rsi_1 + r9_1 * 0xc, rsi_1 + sx.q((r9_1 + 1).d) * 0xc, (rax_8 - 1) * 0xc)
            rcx_8 = arg1[0xe].d
        
        arg1[0xe].d = rcx_8 - 1
        sub_140775970(&arg1[0xd])
        sub_141f96860(&arg1[1], &arg_8)
        int32_t var_58_1 = arg2
        sub_141f7f5e0(arg1, &arg_8, arg3.d, &var_48:4)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int64_t rcx_18 = sx.q(*sub_141f87c30(arg1, arg2))
        result = arg1[0xd]
        int64_t rdx_10 = rcx_18 * 3
        *(result + (rdx_10 << 2)) = zmm7.q
        *(result + (rdx_10 << 2) + 8) = rbp_1
        *(result + (rdx_10 << 2)) = arg3.d

return result
