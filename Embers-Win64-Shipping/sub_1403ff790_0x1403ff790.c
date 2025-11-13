// 函数: sub_1403ff790
// 地址: 0x1403ff790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t arg_10 = arg2
int64_t result_2 = arg1
int64_t r13 = sx.q((arg4 * 2).d)
int64_t result = sx.q((arg4 * 3).d)
int64_t result_1 = result

if (arg5 s> 0)
    uint64_t i_1 = zx.q(arg5)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int64_t r15_2 = sx.q(arg6) << 3
    int64_t var_a8_1 = r15_2
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint64_t i
    
    do
        void* rcx_1 = *(arg3 + 0x38)
        result = result_2
        void* rbx_1 = rcx_1
        void* rdi_1 = rcx_1
        
        if (arg4.d s> 0)
            int64_t rbp_1 = sx.q(arg4.d)
            uint64_t j_1 = zx.q(arg4.d)
            uint64_t j
            
            do
                int128_t zmm2 = *(rcx_1 + 4)
                int128_t zmm3 = *(result + (rbp_1 << 3))
                zmm10 = *rcx_1
                rcx_1 += arg2 << 3
                zmm11 = zmm3
                zmm3.d = zmm3.d f* zmm2.d
                int128_t zmm0
                zmm0.d = zmm2.d f* *(result + (rbp_1 << 3) + 4)
                zmm11.d = zmm11.d f* zmm10.d
                zmm10.d = zmm10.d f* *(result + (rbp_1 << 3) + 4)
                zmm2 = *(rbx_1 + 4)
                zmm6 = *rdi_1
                zmm8 = *rbx_1
                rbx_1 += arg2 << 4
                int128_t zmm4 = *result
                zmm11.d = zmm11.d f+ zmm0.d
                zmm10.d = zmm10.d f- zmm3.d
                zmm0.d = zmm2.d f* *(result + (r13 << 3) + 4)
                zmm9 = zmm4
                zmm3 = *(result + (r13 << 3))
                result += 8
                zmm7 = zmm3
                zmm3.d = zmm3.d f* zmm2.d
                zmm2 = *(rdi_1 + 4)
                zmm7.d = zmm7.d f* zmm8.d
                zmm8.d = zmm8.d f* *(result + (r13 << 3) - 4)
                rdi_1 += arg2 * 0x18
                zmm7.d = zmm7.d f+ zmm0.d
                zmm8.d = zmm8.d f- zmm3.d
                zmm3 = *(result + (result_1 << 3) - 8)
                zmm4.d = zmm4.d f+ zmm7.d
                zmm0.d = zmm2.d f* *(result + (result_1 << 3) - 4)
                float zmm5 = zmm3.d
                zmm3.d = zmm3.d f* zmm2.d
                zmm5 = zmm5 f* zmm6.d
                zmm6.d = zmm6.d f* *(result + (result_1 << 3) - 4)
                *(result - 8) = zmm4.d
                zmm5 = zmm5 f+ zmm0.d
                zmm0 = *(result - 4)
                float zmm1 = zmm5 f+ zmm11.d
                zmm6.d = zmm6.d f- zmm3.d
                zmm9.d = zmm9.d f- zmm7.d
                zmm3 = zmm0
                zmm0.d = zmm0.d f+ zmm8.d
                zmm4.d = zmm4.d f- zmm1
                zmm2.d = zmm6.d f+ zmm10.d
                *(result - 4) = zmm0.d
                *(result + (r13 << 3) - 8) = zmm4.d
                zmm0.d = (*(result - 4)).d f- zmm2.d
                zmm11.d = zmm11.d f- zmm5
                zmm3.d = zmm3.d f- zmm8.d
                *(result + (r13 << 3) - 4) = zmm0.d
                zmm2.d = zmm2.d f+ *(result - 4)
                *(result - 8) = zmm1 f+ *(result - 8)
                *(result - 4) = zmm2.d
                zmm10.d = zmm10.d f- zmm6.d
                zmm1 = zmm11.d f+ zmm3.d
                zmm0.d = zmm9.d f- zmm10.d
                zmm3.d = zmm3.d f- zmm11.d
                *(result + (rbp_1 << 3) - 4) = zmm1
                *(result + (rbp_1 << 3) - 8) = zmm0.d
                zmm10.d = zmm10.d f+ zmm9.d
                *(result + (result_1 << 3) - 8) = zmm10.d
                *(result + (result_1 << 3) - 4) = zmm3.d
                j = j_1
                j_1 -= 1
            while (j != 1)
            arg2 = arg_10
            r15_2 = var_a8_1
            arg3 = arg_18
        
        result_2 += r15_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
