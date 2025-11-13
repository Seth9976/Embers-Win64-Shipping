// 函数: sub_141fbd550
// 地址: 0x141fbd550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (zx.o(0)).d

if (not(arg2.d f== 0f))
    int64_t* rcx = arg1[0x4b]
    
    if (rcx != 0)
        void var_78
        (*(*rcx + 0x660))(rcx, &var_78)
        float var_58[0x10]
        float* rax_2
        int64_t zmm6_1
        rax_2, zmm6_1 = sub_14077e760(&var_58, &var_78)
        result = rax_2[6]
        float temp0_1[0x4] = _mm_unpacklo_ps(rax_2[4], rax_2[5])
        int64_t rax_4 = *arg1
        int64_t var_88 = temp0_1.q
        (*(rax_4 + 0x728))(arg1, &var_88, zmm6_1, 0, var_88, result)

return result
