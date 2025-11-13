// 函数: sub_141f89a10
// 地址: 0x141f89a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* rax_2 = sub_141f87c30(arg1, arg2)

if (rax_2 != 0)
    int32_t rcx_2 = *rax_2
    
    if (rcx_2 s>= 0 && rcx_2 s< rax_1)
        sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
        int64_t rcx_6 = sx.q(*sub_141f87c30(arg1, arg2))
        int64_t rax_6 = arg1[0xf]
        int64_t rdx_4 = rcx_6 * 3
        int32_t zmm0_1 = *(rax_6 + (rdx_4 << 3))
        int64_t var_20
        sub_140596d10(&var_20, rax_6 + ((rdx_4 + 1) << 3))
        int64_t rcx_8 = var_20
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int512_t zmm0_2
        zmm0_2.o = zmm0_1
        return zmm0_2

int512_t zmm0
zmm0.o = zx.o(0)
return zmm0
