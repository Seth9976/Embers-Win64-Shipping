// 函数: sub_141b26a00
// 地址: 0x141b26a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* result = sub_141aefbb0(arg4, arg5)

if (result != 0)
    int64_t* result_1 = result
    int64_t var_128_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = 0
    int64_t rsi_1 = sx.q(*(arg1 + 0x18)) << 3
    void* var_130_1 = arg1
    int64_t var_120_1 = 0
    int32_t var_f4
    __builtin_memset(&var_f4, 0, 0x28)
    uint64_t rsi_2 = rsi_1 u>> 3
    int32_t var_a8_1 = 0
    char var_7c_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rsi_2 = 0
    
    void var_118
    
    if (rsi_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_4 = rbx_1
            int64_t* var_148_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x4c)
            
            if ((rdx_1[6].b & 2) == 0)
                rax_4 = rdx_1
            
            int64_t* rcx_1 = *rax_4
            (*(*rcx_1 + 8))(rcx_1, &var_118, &result_1, zmm2, zx.q(rdx_1[0xa].b))
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != rsi_2)
    
    void var_78
    float zmm7[0x4]
    float zmm8[0x4]
    sub_141af4cb0(&var_118, &var_78, &result_1, zmm7, zmm8)
    result = (*(*result + 0x18))(result, arg3, &var_78, arg1, arg6)

__security_check_cookie(rax_1 ^ &var_168)
return result
