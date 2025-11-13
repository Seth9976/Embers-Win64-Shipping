// 函数: sub_141f9c650
// 地址: 0x141f9c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* result = sub_141f87c30(arg1, arg2)

if (result != 0)
    int32_t rcx_2 = *result
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int128_t* rcx_6 = sx.q(*sub_141f87c30(arg1, arg2)) * 0x1c
        int64_t rax_6 = arg1[0xe]
        float zmm7[0x4] = *(rcx_6 + rax_6)
        int32_t rdi_1 = *(rcx_6 + rax_6 + 0x18)
        uint128_t zmm6 = zx.o(*(rcx_6 + rax_6 + 0x10))
        char r9_1 = sub_141f848c0(arg1, arg2)
        int32_t var_40_1 = arg2
        _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        char var_48_1 = 0
        void arg_8
        sub_141f7f6d0(arg1, &arg_8, arg3.d, r9_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        result = sx.q(*sub_141f87c30(arg1, arg2)) * 0x1c + arg1[0xe]
        *result = zmm7
        *(result + 0x10) = zmm6.q
        *(result + 0x18) = rdi_1
        *(result + 4) = arg3.d

return result
