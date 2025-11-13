// 函数: png_set_sCAL
// 地址: 0x1403cd320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char const* const rdi_1

if (0.0 f>= arg4[0].q)
    rdi_1 = "Invalid sCAL width ignored"
else
    if (not(0.0 f>= arg6))
        char var_58[0x18]
        uint64_t zmm0_1[0x2]
        uint128_t zmm2
        int16_t zmm6_1[0x8]
        zmm0_1, zmm2, zmm6_1 = sub_1403bf690(arg1, &var_58, 0x12, arg4, zx.o(0), arg5, 5)
        void var_78
        sub_1403bf690(arg1, &var_78, 0x12, zmm6_1, zmm0_1, zmm2, 5)
        int32_t var_88_1
        var_88_1.q = &var_78
        int64_t result = png_set_sCAL_s(arg1, arg2, arg3, &var_58, var_88_1)
        __security_check_cookie(rax_1 ^ &var_a8)
        return result
    
    rdi_1 = "Invalid sCAL height ignored"

__security_check_cookie(rax_1 ^ &var_a8)
return png_warning(arg1, rdi_1) __tailcall
