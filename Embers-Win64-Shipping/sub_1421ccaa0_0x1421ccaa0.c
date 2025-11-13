// 函数: sub_1421ccaa0
// 地址: 0x1421ccaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x118)
int64_t rbp = *(arg2 + 0xf0)
int32_t result = rax - 1
int32_t r14 = *(arg2 + 0x114)
int64_t r15 = *(arg2 + 0xf8)
int64_t result_1 = sx.q(result)

if (rax - 1 s>= 0)
    int128_t var_28_1 = arg3
    int64_t result_2
    
    do
        void* rbx_3 = zx.q(zx.d(*(r15 + (result_1 << 1))) * r14) + rbp
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            int128_t zmm0_1
            float zmm7
            zmm0_1, result, zmm7 = sub_141fe5610(arg1 + 0x40, *(rbx_3 + 0xc), *(arg2 + 0x18), 
                nullptr, arg5, arg4, var_28_1)
            float zmm2_1 = *(rbx_3 + 0x30)
            int128_t zmm3_1 = zmm0_1 ^ 0x80000000
            int128_t zmm5_1
            zmm5_1.d = (*(rbx_3 + 0x34)).d f* zmm3_1.d
            arg3.d = (*(rbx_3 + 0x38)).d f* zmm3_1.d
            zmm5_1.d = zmm5_1.d f* zmm7
            float zmm4_1 = zmm2_1 f* zmm3_1.d * zmm7
            arg3.d = arg3.d f* zmm7
            zmm0_1.d = zmm5_1.d f+ *(rbx_3 + 0x34)
            *(rbx_3 + 0x34) = zmm0_1.d
            zmm0_1.d = arg3.d f+ *(rbx_3 + 0x38)
            *(rbx_3 + 0x30) = zmm4_1 + zmm2_1
            *(rbx_3 + 0x38) = zmm0_1.d
            zmm5_1.d = zmm5_1.d f+ *(rbx_3 + 0x24)
            arg3.d = arg3.d f+ *(rbx_3 + 0x28)
            *(rbx_3 + 0x20) = zmm4_1 f+ *(rbx_3 + 0x20)
            *(rbx_3 + 0x24) = zmm5_1.d
            *(rbx_3 + 0x28) = arg3.d
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
